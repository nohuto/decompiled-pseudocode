/*
 * XREFs of SymCryptRsakeyFree @ 0x14055C898
 * Callers:
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsakeyFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
  return SymCryptCallbackFree(a1);
}
