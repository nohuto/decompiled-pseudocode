/*
 * XREFs of SymCryptRsakeyWipe @ 0x14051FAF8
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
}
