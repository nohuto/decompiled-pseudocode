/*
 * XREFs of SymCryptModSetRandom @ 0x14055C89C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140563630 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefModSetRandomGeneric @ 0x140570150 (SymCryptFdefModSetRandomGeneric.c)
 */

void __fastcall __noreturn SymCryptModSetRandom(int a1, int a2, int a3, int a4, __int64 a5)
{
  SymCryptFdefModSetRandomGeneric(a1, a2, a3, a4, a5);
}
