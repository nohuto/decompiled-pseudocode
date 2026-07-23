/*
 * XREFs of SymCryptIntFree @ 0x14055E734
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptIntFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
  return SymCryptCallbackFree(a1);
}
