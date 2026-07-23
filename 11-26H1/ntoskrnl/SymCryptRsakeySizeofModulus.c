/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x14055D0CC
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x140560FB4 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Sign @ 0x140561078 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x1405611D4 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3;
}
