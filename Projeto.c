#include <stdio.h> 
int main (){
	char nome[40];
	printf("Digite seu nome:");
	scanf(" %[^\n]", &nome);
	
	long int telefone;
	printf("Digite seu Telefone:\n");
	scanf("%d", &telefone);

	
	char endereco[40];
	printf("Digite seu endereco: \n");
	scanf(" %[^\n]", &endereco);
	printf("Seu nome e: %s \n Seu telefone e: %d \n Seu endereco e: %s \n", nome, telefone, endereco);
	return 0;
}

