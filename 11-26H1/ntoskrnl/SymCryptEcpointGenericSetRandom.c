/*
 * XREFs of SymCryptEcpointGenericSetRandom @ 0x140565A20
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x14055EC1C (SymCryptModElementToInt.c)
 *     SymCryptModSetRandom @ 0x14055ED84 (SymCryptModSetRandom.c)
 *     SymCryptEcpointScalarMul @ 0x1405672A4 (SymCryptEcpointScalarMul.c)
 */

void __fastcall __noreturn SymCryptEcpointGenericSetRandom(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v7; // eax

  v7 = SymCryptModElementCreate();
  SymCryptModSetRandom(*(_QWORD *)(a1 + 624), v7, 6, *(_DWORD *)(a1 + 36) + a4, a5 - *(unsigned int *)(a1 + 36));
}
