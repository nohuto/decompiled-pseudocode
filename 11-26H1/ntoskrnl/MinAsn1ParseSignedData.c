/*
 * XREFs of MinAsn1ParseSignedData @ 0x1408A99BC
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 *     MinAsn1ExtractParsedCertificatesFromSignedData @ 0x1408AABCC (MinAsn1ExtractParsedCertificatesFromSignedData.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x1408AAC48 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseSignedData(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 24;
  result = MinAsn1ExtractValues(a1, a2, (unsigned int)&v5, (unsigned int)&qword_140010670, 19, a3);
  if ( (int)result > 0 )
    return *(unsigned int *)(a3 + 16);
  return result;
}
