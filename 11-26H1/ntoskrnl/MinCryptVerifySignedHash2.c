/*
 * XREFs of MinCryptVerifySignedHash2 @ 0x1408A68C0
 * Callers:
 *     MinCryptVerifySignedHash @ 0x1408A6898 (MinCryptVerifySignedHash.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     ?MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z @ 0x140721548 (-MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z.c)
 *     MinAsn1ParseECCSignature @ 0x140721B34 (MinAsn1ParseECCSignature.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MinCryptDecodeOid @ 0x1408A6814 (MinCryptDecodeOid.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x1408A961C (MinAsn1ParseAlgorithmIdentifier.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x1408A992C (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x1408A9974 (MinAsn1ParseRSAPublicKey.c)
 *     HashpVerifyEcdsaSignature @ 0x1408B20D8 (HashpVerifyEcdsaSignature.c)
 *     HashpVerifyMldsaSignature @ 0x1408B2230 (HashpVerifyMldsaSignature.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 */

__int64 __fastcall MinCryptVerifySignedHash2(int a1, int a2, int a3, unsigned int *a4, __int64 a5, __int64 a6)
{
  char v10; // bl
  int v11; // edi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v15; // ebx
  int v16; // r14d
  int v17; // eax
  _BYTE v18[32]; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *Src; // [rsp+78h] [rbp-88h]
  size_t v21; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v24[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v25; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v26; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v27[1056]; // [rsp+D0h] [rbp-30h] BYREF

  v10 = 0;
  if ( (int)MinAsn1ParsePublicKeyInfo(a5, v23) < 0 || (int)MinAsn1ParseAlgorithmIdentifier(v24, v18) < 0 )
    return (unsigned int)-1073740760;
  v11 = MinCryptDecodeOid((__int64)&qword_140BE38A0, 5u, (unsigned int *)&Size);
  if ( v11 == 11776 )
    v11 = MinCryptDecodeOid((__int64)&qword_140BE23B0, 3u, (unsigned int *)&v21);
  if ( !v11 )
    return (unsigned int)-1073740760;
  if ( v11 == 9216 )
  {
    if ( (int)MinAsn1ParseRSAPublicKey(&v25, v18) < 0 )
      return (unsigned int)-1073740760;
    if ( a6 && (*(_BYTE *)(a6 + 4) & 0x40) != 0 )
      v10 = 1;
    v17 = HashpVerifyPkcs1Signature(
            a1,
            a2,
            a3,
            (_DWORD)v22,
            (unsigned int)v21,
            (__int64)Src,
            (unsigned int)Size,
            *((_QWORD *)a4 + 1),
            *a4,
            v10);
    if ( v17 < 0 )
      return (unsigned int)-1073740760;
    return (unsigned int)v17;
  }
  else
  {
    if ( v11 == 11777 || v11 == 11778 || v11 == 11779 )
    {
      if ( v11 == 11777 )
      {
        v15 = 32;
      }
      else if ( v11 == 11778 )
      {
        v15 = 48;
      }
      else
      {
        v15 = 66;
      }
      if ( (int)MinAsn1ParseECCSignature((__int64)a4, (__int64)v18) < 0 )
        return (unsigned int)-1073740760;
      if ( v25 != 2 * v15 + 1 )
        return (unsigned int)-1073740760;
      v16 = (int)v26;
      if ( *v26 != 4
        || (int)MinCryptCopyAsn1IntToFixedBuffer(Src, (unsigned int)Size, v27, v15) < 0
        || (int)MinCryptCopyAsn1IntToFixedBuffer(v22, (unsigned int)v21, &v27[v15], v15) < 0 )
      {
        return (unsigned int)-1073740760;
      }
      v12 = HashpVerifyEcdsaSignature(v11, v16 + 1, 2 * v15, a2, a3, (__int64)v27, 2 * v15);
    }
    else
    {
      if ( v11 != 12801 && (unsigned int)(v11 - 12802) > 1 )
        return (unsigned int)-1073740760;
      v12 = HashpVerifyMldsaSignature(v11, (_DWORD)v26, v25, a2, a3, *((_QWORD *)a4 + 1), *a4);
    }
    v13 = v12;
    if ( v12 < 0 )
      return (unsigned int)-1073740760;
  }
  return v13;
}
