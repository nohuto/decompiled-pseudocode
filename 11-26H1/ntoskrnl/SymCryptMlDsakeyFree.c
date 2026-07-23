/*
 * XREFs of SymCryptMlDsakeyFree @ 0x140560798
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     HashpVerifyMldsaSignature @ 0x1408B2230 (HashpVerifyMldsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptMlDsakeyFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 16));
  return SymCryptCallbackFree(a1);
}
