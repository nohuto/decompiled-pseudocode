/*
 * XREFs of SymCryptFdefIntNeg @ 0x1405688EC
 * Callers:
 *     SymCryptIntNeg @ 0x14055C39C (SymCryptIntNeg.c)
 * Callees:
 *     SymCryptFdefRawNeg @ 0x140568FEC (SymCryptFdefRawNeg.c)
 */

__int64 __fastcall SymCryptFdefIntNeg(__int64 a1, __int64 a2)
{
  return SymCryptFdefRawNeg(a1 + 32, 0LL, a2 + 32, *(unsigned int *)(a2 + 4));
}
