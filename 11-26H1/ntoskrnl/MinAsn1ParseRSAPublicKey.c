/*
 * XREFs of MinAsn1ParseRSAPublicKey @ 0x1408A9974
 * Callers:
 *     SecureDump_ConvertToRsaBlob @ 0x1405D89E4 (SecureDump_ConvertToRsaBlob.c)
 *     MinCryptIsKeyPresent @ 0x140721A5C (MinCryptIsKeyPresent.c)
 *     MinAsn1ParseECCSignature @ 0x140721B34 (MinAsn1ParseECCSignature.c)
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x1408AAC48 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseRSAPublicKey(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 3;
  result = MinAsn1ExtractValues(
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)a1,
             (unsigned int)&v4,
             (unsigned int)&qword_1400102C0,
             4,
             a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
