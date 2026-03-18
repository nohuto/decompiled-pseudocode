/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x14051FAE4
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x140522BF8 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Sign @ 0x140522CBC (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x140522E18 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3;
}
