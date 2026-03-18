/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x14055ABB8
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x14055EA90 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Sign @ 0x14055EB54 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x14055ECB0 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3;
}
