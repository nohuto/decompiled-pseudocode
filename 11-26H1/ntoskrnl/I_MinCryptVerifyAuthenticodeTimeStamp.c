/*
 * XREFs of I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C
 * Callers:
 *     I_MinCryptGetSigningTime @ 0x1408A87B4 (I_MinCryptGetSigningTime.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1407215D0 (MinCryptHashMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x1408A67C0 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408A8668 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x1408A8DE8 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408A949C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1DecodeTime @ 0x1408AA920 (MinAsn1DecodeTime.c)
 *     MinAsn1ExtractValues @ 0x1408AAC48 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall I_MinCryptVerifyAuthenticodeTimeStamp(
        int *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        unsigned int *a9)
{
  int v9; // edx
  __int64 v10; // rcx
  int Values; // eax
  __int64 SignerCertificateByIssuerAndSerialNumber; // rax
  __int64 v14; // r14
  unsigned int v15; // esi
  int v16; // ebx
  __int64 v17; // r8
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  _DWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v23; // [rsp+48h] [rbp-B8h]
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h]
  unsigned int v27[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v28[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[16]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v30[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v31[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v32[64]; // [rsp+100h] [rbp+0h] BYREF

  v9 = *a1;
  v10 = *((_QWORD *)a1 + 1);
  v21 = a3;
  v24 = 0LL;
  v22[1] = 0;
  v19 = 0;
  v20 = 11;
  Values = MinAsn1ExtractValues(v10, v9, (unsigned int)&v20, (unsigned int)&qword_1400103D0, 9, (__int64)v25);
  if ( Values > 0 )
    Values = v26;
  if ( Values < 0 )
  {
    *a7 |= 0x50000u;
    return (unsigned int)-1073740760;
  }
  SignerCertificateByIssuerAndSerialNumber = I_MinCryptFindSignerCertificateByIssuerAndSerialNumber(v27, v28, a4, a5);
  v14 = SignerCertificateByIssuerAndSerialNumber;
  if ( !SignerCertificateByIssuerAndSerialNumber
    || (int)MinCryptVerifyCertificateWithPolicy2(
              SignerCertificateByIssuerAndSerialNumber,
              a4,
              a5,
              (__int64)qword_140BE22B0,
              a6,
              0LL) < 0 )
  {
    *a7 |= 0x60000u;
    return (unsigned int)-1073740760;
  }
  v15 = MinCryptDecodeHashAlgorithmIdentifier((__int64)v29);
  if ( (v15 & 0xFFFF7FFF) == 0 )
  {
    *a7 |= 0x40000u;
    return (unsigned int)-1073740760;
  }
  v16 = MinCryptHashMemory(v15);
  if ( v16 < 0
    || v30[0] && (v16 = I_MinCryptVerifySignerAuthenticatedAttributes(v15, v32, &v19, v30, &v19), v16 < 0)
    || (v16 = MinCryptVerifySignedHash2(v15, (int)v32, v19, v31, v14 + 176, (__int64)qword_140BE22B0), v16 < 0) )
  {
    *a7 |= 0x40000u;
  }
  else
  {
    v22[0] = 9;
    v23 = qword_140BE0328;
    if ( !(unsigned __int8)I_MinAsn1ParseSingleAttribute(v22, v30, v17, &v24) )
      return (unsigned int)-1073740760;
    if ( !(unsigned __int8)MinAsn1DecodeTime(&v24, a8) )
      *a8 = 0LL;
    *a9 = v15;
  }
  return (unsigned int)v16;
}
