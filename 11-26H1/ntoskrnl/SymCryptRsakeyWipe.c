/*
 * XREFs of SymCryptRsakeyWipe @ 0x14055ABCC
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
}
