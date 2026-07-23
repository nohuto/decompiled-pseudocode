/*
 * XREFs of MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4
 * Callers:
 *     MinCrypK_VerifySignedDataKMode @ 0x1408A8E80 (MinCrypK_VerifySignedDataKMode.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1407215D0 (MinCryptHashMemory.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x1408A67C0 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincryptIsTimestampBeforeRevocation @ 0x1408A82E4 (MincryptIsTimestampBeforeRevocation.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408A8668 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptGetPlatformManifestBinaryIDAttribute @ 0x1408A8720 (I_MinCryptGetPlatformManifestBinaryIDAttribute.c)
 *     I_MinCryptGetSigningTime @ 0x1408A87B4 (I_MinCryptGetSigningTime.c)
 *     I_MinCryptVerifyReturnSignerAuthenticatedAttributes @ 0x1408A8D68 (I_MinCryptVerifyReturnSignerAuthenticatedAttributes.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x1408A8DE8 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinAsn1ParseSignedData @ 0x1408A99BC (MinAsn1ParseSignedData.c)
 *     MinAsn1ParseSignedDataCertificatesEx @ 0x1408A9A00 (MinAsn1ParseSignedDataCertificatesEx.c)
 *     I_MinCryptBuildErrorPolicy @ 0x1408A9C74 (I_MinCryptBuildErrorPolicy.c)
 *     I_MincryptFreeChainInfo @ 0x1408AA068 (I_MincryptFreeChainInfo.c)
 *     MinAsn1ExtractContent @ 0x1408AAADC (MinAsn1ExtractContent.c)
 *     MinAsn1SignedDataGetContent @ 0x1408AAEC4 (MinAsn1SignedDataGetContent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MinCrypK_VerifySignedDataKModeEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char *a7)
{
  unsigned int v8; // edi
  char *Pool2; // rax
  PVOID v10; // r15
  int PlatformManifestBinaryIDAttribute; // ebx
  __int64 v12; // rsi
  _BYTE *v13; // r13
  int v14; // ecx
  __int64 v15; // rax
  __int64 SignerCertificateByIssuerAndSerialNumber; // rax
  int *v17; // r12
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int i; // eax
  unsigned int v22; // r15d
  int v23; // ebx
  int v24; // r12d
  int v25; // r15d
  int v26; // r12d
  __int64 v27; // rax
  bool v28; // zf
  int v29; // eax
  _BYTE *v30; // r12
  _BYTE *v32; // [rsp+38h] [rbp-D0h]
  unsigned int v34; // [rsp+40h] [rbp-C8h]
  int v35; // [rsp+44h] [rbp-C4h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h]
  int v37; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h] BYREF
  int v41; // [rsp+68h] [rbp-A0h]
  unsigned int v42; // [rsp+6Ch] [rbp-9Ch]
  __int128 v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+80h] [rbp-88h]
  _BYTE *v45; // [rsp+88h] [rbp-80h]
  __int128 v46; // [rsp+90h] [rbp-78h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-68h]
  __int128 v48; // [rsp+B0h] [rbp-58h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  __int64 v50; // [rsp+C8h] [rbp-40h]

  v35 = a4;
  v44 = a3;
  v40 = a5;
  v50 = a6;
  v37 = 0;
  v32 = 0LL;
  v8 = 0;
  v43 = 0LL;
  v41 = 0;
  LODWORD(v39) = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v38 = 10;
  memset_0(a7, 0, 0x50uLL);
  Pool2 = (char *)ExAllocatePool2(0x102uLL);
  v10 = Pool2;
  P = Pool2;
  if ( Pool2 )
  {
    v12 = (__int64)(Pool2 + 2400);
    v13 = Pool2 + 2704;
    if ( (int)MinAsn1ParseSignedData(a1, a2, Pool2 + 2400) < 0 )
    {
LABEL_4:
      v8 = 327680;
LABEL_5:
      PlatformManifestBinaryIDAttribute = -1073740760;
      goto LABEL_69;
    }
    if ( *(_DWORD *)(v12 + 32) == 9 && RtlCompareMemory(qword_140BE0308, *(const void **)(v12 + 40), 9uLL) == 9 )
    {
      v14 = v35;
      if ( v35 )
      {
        v15 = v44;
        if ( v44 )
        {
          if ( *(_DWORD *)(v12 + 80) )
            *(_OWORD *)a7 = *(_OWORD *)(v12 + 80);
          *((_QWORD *)a7 + 3) = v15;
          *((_DWORD *)a7 + 4) = v14;
LABEL_18:
          if ( !*(_DWORD *)(v12 + 160) )
            goto LABEL_4;
          if ( (int)MinAsn1ParseSignedDataCertificatesEx(v12 + 112, &v38, v10) < 0
            || !v38
            || (SignerCertificateByIssuerAndSerialNumber = I_MinCryptFindSignerCertificateByIssuerAndSerialNumber(
                                                             (unsigned int *)(v12 + 192),
                                                             (unsigned int *)(v12 + 208),
                                                             v38,
                                                             (__int64)v10),
                (v49 = SignerCertificateByIssuerAndSerialNumber) == 0) )
          {
            v8 = 393216;
            goto LABEL_5;
          }
          *((_OWORD *)a7 + 2) = *(_OWORD *)(SignerCertificateByIssuerAndSerialNumber + 16);
          v17 = (int *)(v12 + 240);
          *((_OWORD *)a7 + 3) = *(_OWORD *)(v12 + 240);
          *((_OWORD *)a7 + 4) = *(_OWORD *)(v12 + 288);
          v18 = MinCryptVerifyCertificateWithPolicy2(
                  SignerCertificateByIssuerAndSerialNumber,
                  v38,
                  (__int64)v10,
                  v40,
                  a6,
                  (unsigned int *)(v12 + 240));
          PlatformManifestBinaryIDAttribute = v18;
          if ( v18 < 0 )
          {
            if ( v18 != -1073740285 )
              goto LABEL_69;
            LODWORD(v39) = 1;
          }
          if ( *v17 )
          {
            PlatformManifestBinaryIDAttribute = I_MinCryptGetPlatformManifestBinaryIDAttribute(v12 + 240, a6, v19);
            if ( PlatformManifestBinaryIDAttribute < 0 )
              goto LABEL_69;
          }
          if ( !v40 || (*(_DWORD *)(v40 + 4) & 0x10) == 0 )
          {
            v20 = *(_QWORD *)(a6 + 16);
            if ( v20 )
            {
              for ( i = 0; ; ++i )
              {
                v42 = i;
                if ( i >= *(_DWORD *)(v20 + 48) )
                  break;
              }
            }
          }
          v22 = MinCryptDecodeHashAlgorithmIdentifier(v12 + 224);
          v34 = v22;
          if ( !v22 )
            goto LABEL_35;
          v23 = MinCryptDecodeHashAlgorithmIdentifier(v12 + 256);
          LODWORD(v40) = v23;
          if ( v41 )
          {
            if ( (int)MinAsn1ExtractContent(*(_QWORD *)(v12 + 104), *(unsigned int *)(v12 + 96), &v43, (char *)&v43 + 8) < 0 )
            {
LABEL_35:
              PlatformManifestBinaryIDAttribute = -1073740760;
LABEL_36:
              v8 = 0x40000;
LABEL_68:
              v10 = P;
              goto LABEL_69;
            }
          }
          else
          {
            LODWORD(v43) = v35;
            *((_QWORD *)&v43 + 1) = v44;
          }
          v24 = *v17;
          v35 = v24;
          if ( v23 != 0x8000 || v24 )
          {
            PlatformManifestBinaryIDAttribute = MinCryptHashMemory(v22);
            if ( PlatformManifestBinaryIDAttribute < 0 )
              goto LABEL_36;
            v45 = v13;
            v25 = v37;
            if ( v24 )
            {
              if ( (_DWORD)v40 == 0x8000 )
              {
                v30 = (_BYTE *)ExAllocatePool2(0x102uLL);
                v32 = v30;
                if ( !v30 )
                {
                  PlatformManifestBinaryIDAttribute = -1073741801;
                  v10 = P;
                  goto LABEL_70;
                }
                v29 = I_MinCryptVerifyReturnSignerAuthenticatedAttributes(v13, v37, v30, &v35, v12 + 240);
                LODWORD(v13) = (_DWORD)v30;
                v45 = v30;
                v25 = v35;
                v26 = v34;
              }
              else
              {
                v26 = v34;
                v29 = I_MinCryptVerifySignerAuthenticatedAttributes(v34, v13, &v37, v12 + 240);
                v25 = v37;
              }
              PlatformManifestBinaryIDAttribute = v29;
              if ( v29 < 0 )
                goto LABEL_36;
              goto LABEL_45;
            }
          }
          else
          {
            LODWORD(v13) = DWORD2(v43);
            v45 = (_BYTE *)*((_QWORD *)&v43 + 1);
            v25 = v43;
          }
          v26 = v34;
LABEL_45:
          PlatformManifestBinaryIDAttribute = MinCryptVerifySignedHash2(
                                                v26,
                                                (int)v13,
                                                v25,
                                                (unsigned int *)(v12 + 272),
                                                v49 + 176,
                                                0LL);
          if ( PlatformManifestBinaryIDAttribute < 0 )
            goto LABEL_36;
          if ( !(_DWORD)v39 )
            goto LABEL_68;
          LODWORD(v40) = 0;
          v39 = 0LL;
          v10 = P;
          if ( (int)I_MinCryptGetSigningTime(v12, v38, (__int64)P, (__int64)&v46, (__int64)&v39, (__int64)&v40) < 0 )
            goto LABEL_53;
          v27 = v39;
          v28 = v39 == 0;
          if ( v39 <= 0 )
          {
LABEL_55:
            if ( v28 )
              *(_DWORD *)(a6 + 8) |= 0x4000000u;
            PlatformManifestBinaryIDAttribute = MincryptIsTimestampBeforeRevocation(a6, &v39, (__int64)&v46);
            if ( PlatformManifestBinaryIDAttribute >= 0 )
            {
              *(_DWORD *)(a6 + 8) &= ~0x200000u;
              PlatformManifestBinaryIDAttribute = 0;
            }
            goto LABEL_69;
          }
          if ( v39 < (__int64)v48
            || v39 > *((__int64 *)&v48 + 1)
            || v39 < *(_QWORD *)(a6 + 32)
            || v39 > *(_QWORD *)(a6 + 40) )
          {
LABEL_53:
            v27 = 0LL;
            v39 = 0LL;
          }
          v28 = v27 == 0;
          goto LABEL_55;
        }
      }
      if ( !*(_DWORD *)(v12 + 80) || !*(_DWORD *)(v12 + 96) )
        goto LABEL_4;
      *(_OWORD *)a7 = *(_OWORD *)(v12 + 80);
      if ( (int)MinAsn1SignedDataGetContent(v12, a7 + 16) > 0 )
      {
        v41 = 1;
        goto LABEL_18;
      }
    }
    v8 = 0x40000;
    goto LABEL_5;
  }
  PlatformManifestBinaryIDAttribute = -1073741801;
LABEL_69:
  v30 = v32;
LABEL_70:
  if ( PlatformManifestBinaryIDAttribute < 0 )
    PlatformManifestBinaryIDAttribute = I_MinCryptBuildErrorPolicy(
                                          (unsigned int)PlatformManifestBinaryIDAttribute,
                                          a6,
                                          v8);
  if ( (_DWORD)v46 )
  {
    I_MincryptFreeChainInfo(v47);
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
  }
  if ( v30 )
    ExFreePoolWithTag(v30, 0x72634943u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72634943u);
  return (unsigned int)PlatformManifestBinaryIDAttribute;
}
