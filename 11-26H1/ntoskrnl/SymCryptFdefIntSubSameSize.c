/*
 * XREFs of SymCryptFdefIntSubSameSize @ 0x140568A78
 * Callers:
 *     SymCryptIntSubSameSize @ 0x14055C42C (SymCryptIntSubSameSize.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140571560 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefIntSubSameSize(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefRawSubAsm(a1 + 32, a2 + 32, a3 + 32, *(unsigned int *)(a3 + 4));
}
