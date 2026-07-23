/*
 * XREFs of SymCryptRsakeyWipe @ 0x14055D0E0
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
}
