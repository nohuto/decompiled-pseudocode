/*
 * XREFs of MinAsn1ExtractValues @ 0x1408AAC48
 * Callers:
 *     MincryptValidateBasicConstraints @ 0x1408A8404 (MincryptValidateBasicConstraints.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A8BD4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408A949C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x1408A961C (MinAsn1ParseAlgorithmIdentifier.c)
 *     MinAsn1ParseAndDecodeRDNComponent @ 0x1408A9664 (MinAsn1ParseAndDecodeRDNComponent.c)
 *     MinAsn1ParseCTL @ 0x1408A9788 (MinAsn1ParseCTL.c)
 *     MinAsn1ParseCertificate @ 0x1408A97D0 (MinAsn1ParseCertificate.c)
 *     MinAsn1ParseOIDSequence @ 0x1408A9848 (MinAsn1ParseOIDSequence.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x1408A992C (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x1408A9974 (MinAsn1ParseRSAPublicKey.c)
 *     MinAsn1ParseSignedData @ 0x1408A99BC (MinAsn1ParseSignedData.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x1408A9AF0 (MinAsn1ParseSingleExtensionValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MinAsn1ExtractContent @ 0x1408AAADC (MinAsn1ExtractContent.c)
 */

__int64 __fastcall MinAsn1ExtractValues(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // r10
  unsigned int *v7; // rax
  unsigned int v9; // ecx
  int v10; // r12d
  _BYTE *v11; // rbx
  char v12; // r8
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  _BYTE *v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  char v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // r8d
  _BYTE *v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // edi
  int v28; // edi
  __int64 v29; // rcx
  _BYTE *v30; // rax
  unsigned int v31; // esi
  char v33; // [rsp+20h] [rbp-C9h]
  unsigned int v34; // [rsp+24h] [rbp-C5h]
  unsigned int v35; // [rsp+28h] [rbp-C1h] BYREF
  __int64 v36; // [rsp+30h] [rbp-B9h]
  int v37; // [rsp+38h] [rbp-B1h]
  unsigned int v38; // [rsp+3Ch] [rbp-ADh]
  unsigned int *v39; // [rsp+40h] [rbp-A9h]
  _BYTE *v40; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+50h] [rbp-99h]
  _QWORD v42[16]; // [rsp+60h] [rbp-89h]

  v6 = a6;
  v41 = a4;
  v7 = a3;
  v39 = a3;
  v9 = *a3;
  v10 = a2;
  v36 = a6;
  v11 = a1;
  v38 = v9;
  v12 = 0;
  v33 = 0;
  v13 = 0;
  v14 = 0;
  if ( a2 < 0x7FFFFFFF )
  {
    while ( 1 )
    {
      if ( v14 >= v9 )
      {
        v7 = v39;
        v31 = (_DWORD)v11 - (_DWORD)a1;
        goto LABEL_45;
      }
      v15 = *(_BYTE **)(a4 + 16LL * v14 + 8);
      v16 = *(unsigned int *)(a4 + 16LL * v14 + 4);
      v34 = *(_DWORD *)(a4 + 16LL * v14 + 4);
      v37 = *(_DWORD *)(a4 + 16LL * v14);
      v17 = (unsigned __int8)v37;
      if ( (v37 & 0xC0000000) == 0 || !v6 || (v18 = 1, (unsigned int)v16 >= a5) )
        v18 = 0;
      v35 = 0;
      v40 = 0LL;
      if ( (unsigned __int8)v37 == 5 )
      {
        if ( !v13 )
          goto LABEL_42;
        v11 = (_BYTE *)v42[2 * --v13];
        v10 = v42[2 * v13 + 1];
        v12 = BYTE4(v42[2 * v13 + 1]);
LABEL_19:
        v33 = v12;
        goto LABEL_20;
      }
      if ( !v12 )
      {
        if ( v10 )
        {
          if ( !v15 )
          {
LABEL_27:
            v21 = MinAsn1ExtractContent(v11, v10, &v35, &v40);
            if ( v21 <= 0 )
              goto LABEL_42;
            v22 = v35;
            v23 = v40;
            v6 = v36;
            v24 = v35 + v21;
            if ( v18 )
            {
              if ( (v37 & 0x40000000) != 0 )
              {
                v25 = 2LL * v34;
                *(_QWORD *)(v36 + 8 * v25 + 8) = v40;
                *(_DWORD *)(v6 + 8 * v25) = v22;
                if ( *v11 == 3 && v22 )
                {
                  *(_QWORD *)(v6 + 16LL * v34 + 8) = v23 + 1;
                  *(_DWORD *)(v6 + 16LL * v34) = v22 - 1;
                }
              }
              else if ( v37 < 0 )
              {
                v26 = 2LL * v34;
                *(_QWORD *)(v36 + 8 * v26 + 8) = v11;
                *(_DWORD *)(v6 + 8 * v26) = v24;
              }
            }
            v27 = v17 - 1;
            if ( v27 && (v28 = v27 - 1) != 0 )
            {
              if ( (unsigned int)(v28 - 1) > 1 || v13 >= 8 )
              {
LABEL_42:
                v7 = v39;
                break;
              }
              v29 = 2LL * v13;
              v30 = &v11[v24];
              v11 = v23;
              ++v13;
              LODWORD(v42[v29 + 1]) = v10 - v24;
              v10 = v22;
              v42[v29] = v30;
              BYTE4(v42[v29 + 1]) = 0;
            }
            else
            {
              v11 += v24;
              v10 -= v24;
            }
            v12 = v33;
            a4 = v41;
            goto LABEL_20;
          }
          while ( *v15 )
          {
            if ( *v15 == *v11 )
              goto LABEL_27;
            ++v15;
          }
        }
        if ( (((unsigned __int8)v37 - 2) & 0xFFFFFFFD) != 0 )
          goto LABEL_42;
        v16 = v34;
      }
      if ( v18 )
      {
        v19 = 2 * v16;
        *(_QWORD *)(v6 + 8 * v19 + 8) = 0LL;
        *(_DWORD *)(v6 + 8 * v19) = 0;
      }
      if ( (unsigned int)(v17 - 3) <= 1 )
      {
        if ( v13 >= 8 )
          goto LABEL_42;
        v20 = 2LL * v13++;
        BYTE4(v42[v20 + 1]) = v12;
        v12 = 1;
        v42[v20] = v11;
        LODWORD(v42[v20 + 1]) = v10;
        goto LABEL_19;
      }
LABEL_20:
      v9 = v38;
      ++v14;
    }
  }
  v31 = (_DWORD)a1 - (_DWORD)v11 - 1;
LABEL_45:
  *v7 = v14;
  return v31;
}
