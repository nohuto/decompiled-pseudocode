/*
 * XREFs of MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1408A7D80 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1407215D0 (MinCryptHashMemory.c)
 *     I_MinCryptIsCertificateHashRevokedV2 @ 0x1407215F0 (I_MinCryptIsCertificateHashRevokedV2.c)
 *     MinCryptCheckCertsAndKeys @ 0x1407218C8 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x1407219EC (MinCryptIsCertPresent.c)
 *     MinCryptIsKeyPresent @ 0x140721A5C (MinCryptIsKeyPresent.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x1408A67C0 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 *     I_MinCryptCheckEKU @ 0x1408A6B18 (I_MinCryptCheckEKU.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x1408A6B84 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x1408A6C74 (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x1408A6CF4 (I_MinCryptFindRootByName.c)
 *     I_MinCryptGetCertificateEKUs @ 0x1408A6DDC (I_MinCryptGetCertificateEKUs.c)
 *     I_MinCryptGetCommonName @ 0x1408A6E68 (I_MinCryptGetCommonName.c)
 *     MincryptValidateBasicConstraints @ 0x1408A8404 (MincryptValidateBasicConstraints.c)
 *     I_MinCryptCheckEKURequirements @ 0x1408A9CB0 (I_MinCryptCheckEKURequirements.c)
 *     I_MincryptAddChainInfo @ 0x1408A9DB0 (I_MincryptAddChainInfo.c)
 *     MinAsn1DecodeTime @ 0x1408AA920 (MinAsn1DecodeTime.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MinCryptVerifyCertificateWithPolicy2(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  int v7; // esi
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 Pool2; // rax
  _DWORD *v11; // r13
  int CertificateEKUs; // edi
  unsigned int i; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // eax
  __m128i *v20; // r13
  char v21; // r15
  char v22; // cl
  __int64 v23; // r12
  unsigned int v24; // eax
  unsigned int v25; // r10d
  int v26; // r11d
  char *Src; // r9
  unsigned int v28; // eax
  unsigned int v29; // ecx
  int v30; // r12d
  int v31; // eax
  int v32; // r15d
  int v33; // ecx
  unsigned int v34; // r13d
  __int64 v35; // rdi
  char *v36; // rdx
  char CommonName; // al
  unsigned int v38; // eax
  unsigned int v39; // ecx
  char v40; // al
  unsigned int v41; // eax
  unsigned int v42; // ecx
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // r15
  unsigned int v46; // eax
  int v47; // eax
  int v48; // ecx
  const void **v49; // r15
  __int64 *RootByKey; // rax
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // r10
  int v54; // r8d
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // ecx
  int v58; // r12d
  unsigned int v59; // eax
  unsigned int v60; // ecx
  int v61; // eax
  unsigned int v62; // ecx
  __int64 *RootByName; // rax
  int v64; // edx
  unsigned int v65; // ecx
  int v66; // eax
  unsigned int v67; // ecx
  __int64 IssuerCertificateByName; // rax
  __int64 v69; // rdi
  bool v70; // zf
  int v71; // esi
  int v73; // [rsp+30h] [rbp-138h]
  unsigned int v74; // [rsp+54h] [rbp-114h]
  unsigned int v75; // [rsp+58h] [rbp-110h]
  int v76; // [rsp+5Ch] [rbp-10Ch]
  int v77; // [rsp+60h] [rbp-108h] BYREF
  int v78; // [rsp+64h] [rbp-104h]
  void *v79; // [rsp+68h] [rbp-100h]
  PVOID P; // [rsp+70h] [rbp-F8h]
  __int64 v81; // [rsp+78h] [rbp-F0h]
  char v82; // [rsp+80h] [rbp-E8h]
  int v83; // [rsp+84h] [rbp-E4h] BYREF
  int v84; // [rsp+88h] [rbp-E0h]
  __int32 v85; // [rsp+8Ch] [rbp-DCh]
  int v86; // [rsp+90h] [rbp-D8h]
  int v87; // [rsp+94h] [rbp-D4h]
  char v88; // [rsp+98h] [rbp-D0h]
  unsigned int v89; // [rsp+9Ch] [rbp-CCh]
  int v90; // [rsp+A0h] [rbp-C8h]
  unsigned int v91; // [rsp+A4h] [rbp-C4h]
  unsigned int v92; // [rsp+A8h] [rbp-C0h]
  __int64 v93; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-B0h] BYREF
  unsigned int v95; // [rsp+C0h] [rbp-A8h] BYREF
  unsigned int v96; // [rsp+C4h] [rbp-A4h]
  unsigned int v97; // [rsp+C8h] [rbp-A0h]
  int v98; // [rsp+CCh] [rbp-9Ch]
  __int64 v99; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v100; // [rsp+D8h] [rbp-90h]
  char *v101; // [rsp+E0h] [rbp-88h]
  __int64 v102; // [rsp+E8h] [rbp-80h]
  __int64 v103; // [rsp+F0h] [rbp-78h]
  char *v104; // [rsp+F8h] [rbp-70h]
  __int64 v105; // [rsp+100h] [rbp-68h]
  __m128i v106; // [rsp+108h] [rbp-60h]
  unsigned int v107; // [rsp+118h] [rbp-50h]
  __int64 v108; // [rsp+120h] [rbp-48h]
  __int64 v109; // [rsp+128h] [rbp-40h]
  __int64 v110; // [rsp+170h] [rbp+8h]

  v110 = a1;
  v92 = 0;
  v83 = 50;
  v84 = 0;
  v85 = 0;
  v7 = 0;
  v77 = 0;
  v75 = 0;
  v8 = 0;
  v78 = 0;
  v74 = 0;
  v102 = 0LL;
  v87 = 0;
  v99 = 0LL;
  v76 = 0;
  v79 = 0LL;
  v81 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  LOBYTE(v86) = 0;
  v9 = 0x7FFFFFFFFFFFFFFFLL;
  v105 = 0x7FFFFFFFFFFFFFFFLL;
  v109 = a1;
  Pool2 = ExAllocatePool2(0x102uLL);
  v11 = (_DWORD *)Pool2;
  P = (PVOID)Pool2;
  if ( !Pool2 )
  {
    CertificateEKUs = -1073741801;
    goto LABEL_170;
  }
  v81 = Pool2 + 800;
  v100 = Pool2 + 976;
  v79 = (void *)(Pool2 + 1776);
  CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(a1 + 224), &v83, Pool2);
  if ( CertificateEKUs < 0 )
    goto LABEL_170;
  for ( i = 0; ; ++i )
  {
    v97 = i;
    if ( i >= v83 )
      break;
    v14 = v11[4 * i];
    v15 = (v14 + 3) & 0xFFFFFFFC;
    if ( v15 < v14 )
      goto LABEL_8;
    v16 = v8 + v15;
    if ( v16 < v8 )
    {
      v8 = -1;
      v78 = -1;
      CertificateEKUs = -1073741675;
      v16 = -1;
      v17 = -1;
    }
    else
    {
      v8 = v16;
      v78 = v16;
      CertificateEKUs = 0;
      v17 = v16;
    }
    if ( CertificateEKUs < 0 )
      goto LABEL_170;
    v8 = v16 + 16;
    if ( v16 + 16 < v17 )
    {
      v8 = -1;
      v78 = -1;
      CertificateEKUs = -1073741675;
    }
    else
    {
      v78 = v16 + 16;
      CertificateEKUs = 0;
    }
    if ( CertificateEKUs < 0 )
      goto LABEL_170;
  }
  if ( a6 )
  {
    v18 = (*a6 + 3) & 0xFFFFFFFC;
    if ( v18 < *a6 )
    {
LABEL_8:
      CertificateEKUs = -1073741675;
LABEL_170:
      Src = (char *)v79;
LABEL_171:
      v52 = a5;
LABEL_172:
      v54 = v75;
      v53 = v81;
      goto LABEL_173;
    }
    v19 = v18 + v8;
    if ( v18 + v8 < v8 )
    {
      v8 = -1;
      v78 = -1;
      CertificateEKUs = -1073741675;
    }
    else
    {
      v8 += v18;
      v78 = v19;
      CertificateEKUs = 0;
    }
    if ( CertificateEKUs < 0 )
      goto LABEL_170;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 1) == 0 )
    {
      v11 = P;
      if ( !(unsigned __int8)I_MinCryptCheckEKURequirements((unsigned int)v83, P, a4) )
      {
        v7 = 0x80000;
        v77 = 0x80000;
        CertificateEKUs = -1073740760;
        goto LABEL_170;
      }
    }
  }
  v20 = (__m128i *)v110;
  if ( !(unsigned __int8)MinAsn1DecodeTime(v110 + 128, &v93) || !(unsigned __int8)MinAsn1DecodeTime(v110 + 144, &v94) )
  {
    v93 = 0LL;
    v94 = 0LL;
  }
  v21 = I_MinCryptCheckEKU((const void **)&qword_140BE0978, v83, (__int64)P);
  if ( v21
    && (__int64)ExpPlatformBinaryLock.WaitBlock[2].Object > 0
    && v93 < (__int64)ExpPlatformBinaryLock.WaitBlock[2].Object )
  {
    v7 = 6291456;
    goto LABEL_35;
  }
  if ( !g_IgnoreLifetimeSigningEKU && I_MinCryptCheckEKU((const void **)&qword_140BE0988, v83, (__int64)P) )
  {
    v22 = 0;
    v82 = 0;
    if ( !v21 && MEMORY[0xFFFFF78000000014] < v93 || MEMORY[0xFFFFF78000000014] > v94 )
    {
      v82 = 1;
      v22 = 1;
    }
    if ( v22 )
    {
      v7 = 0x400000;
LABEL_35:
      v77 = v7;
      CertificateEKUs = -1073740283;
LABEL_169:
      v11 = P;
      goto LABEL_170;
    }
  }
  while ( 1 )
  {
    if ( v84 )
      goto LABEL_169;
    v23 = 120LL * v74;
    v103 = v23;
    v104 = (char *)v79 + v23 + 8;
    v24 = MinCryptDecodeHashAlgorithmIdentifier((__int64)v20[3].m128i_i64);
    v91 = v24;
    if ( v24 == 0x8000 )
      v24 = 32782;
    v89 = v24;
    CertificateEKUs = MinCryptHashMemory(v24);
    if ( CertificateEKUs < 0 )
    {
LABEL_48:
      v7 |= 0x40000u;
      v77 = v7;
      goto LABEL_169;
    }
    if ( v91 == 0x8000 )
    {
      v106 = v20[2];
      v101 = (char *)_mm_srli_si128(v106, 8).m128i_u64[0];
      v90 = _mm_cvtsi128_si32(v106);
      v25 = v85;
    }
    else
    {
      v101 = v104;
      v106.m128i_i64[1] = (__int64)v104;
      v25 = v85;
      v90 = v85;
      v106.m128i_i32[0] = v85;
    }
    v26 = v89;
    Src = (char *)v79;
    *(_DWORD *)((char *)v79 + v23) = v89;
    *(_DWORD *)&Src[v23 + 4] = v25;
    v106.m128i_i64[0] = (__int64)v20[1].m128i_i64;
    *(__m128i *)&Src[v23 + 104] = v20[1];
    v28 = v20[1].m128i_u32[0];
    v29 = (v28 + 3) & 0xFFFFFFFC;
    if ( v29 < v28 )
    {
      CertificateEKUs = -1073741675;
LABEL_54:
      v11 = P;
      goto LABEL_171;
    }
    v30 = v29 + v8;
    if ( v29 + v8 < v8 )
    {
      v8 = -1;
      v78 = -1;
      CertificateEKUs = -1073741675;
      v30 = -1;
      v96 = -1;
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
    }
    else
    {
      v8 += v29;
      v78 = v30;
      CertificateEKUs = 0;
      v96 = v30;
      v31 = v30;
      v32 = v30;
      v33 = v30;
      v34 = v30;
    }
    if ( CertificateEKUs < 0 )
      goto LABEL_54;
    v35 = v103;
    v36 = &Src[v103 + 72];
    *(_OWORD *)v36 = 0LL;
    *(_OWORD *)&Src[v35 + 88] = 0LL;
    if ( a5 )
    {
      v32 = v31;
      v34 = v33;
      CommonName = I_MinCryptGetCommonName(v110 + 160, (__int64)v36);
      Src = (char *)v79;
      if ( CommonName )
      {
        v38 = *(unsigned __int16 *)((char *)v79 + v35 + 80);
        v39 = (v38 + 3) & 0xFFFFFFFC;
        if ( v39 < v38 )
          goto LABEL_62;
        v8 = v30 + v39;
        v32 = v30 + v39;
        if ( v30 + v39 < v96 )
        {
          v8 = -1;
          v78 = -1;
          CertificateEKUs = -1073741675;
          v32 = -1;
          v34 = -1;
        }
        else
        {
          v78 = v30 + v39;
          CertificateEKUs = 0;
          v34 = v30 + v39;
        }
        if ( CertificateEKUs < 0 )
          goto LABEL_63;
        v35 = v103;
      }
      v40 = I_MinCryptGetCommonName(v110 + 112, (__int64)v79 + v35 + 88);
      Src = (char *)v79;
      if ( v40 )
      {
        v41 = *(unsigned __int16 *)((char *)v79 + v35 + 96);
        v42 = (v41 + 3) & 0xFFFFFFFC;
        if ( v42 < v41 )
        {
LABEL_62:
          CertificateEKUs = -1073741675;
LABEL_63:
          v11 = P;
          goto LABEL_171;
        }
        v32 = v42 + v8;
        if ( v42 + v8 < v8 )
        {
          v8 = -1;
          v78 = -1;
          CertificateEKUs = -1073741675;
          v32 = -1;
          v34 = -1;
        }
        else
        {
          v8 += v42;
          v78 = v32;
          CertificateEKUs = 0;
          v34 = v32;
        }
        if ( CertificateEKUs < 0 )
          goto LABEL_63;
      }
      v26 = v89;
      v25 = v85;
    }
    v43 = ++v74;
    v8 = v32 + 120;
    if ( v32 + 120 < v34 )
    {
      v8 = -1;
      CertificateEKUs = -1073741675;
    }
    else
    {
      CertificateEKUs = 0;
    }
    v78 = v8;
    if ( CertificateEKUs < 0 )
    {
      v52 = a5;
      v64 = v76;
      v11 = P;
      v54 = v75;
      v53 = v81;
      goto LABEL_175;
    }
    if ( I_MinCryptIsCertificateHashRevokedV2(v26, v104, v25, &v99, 0LL, 0LL) )
    {
      v87 = 1;
      v7 |= 0x200000u;
      v77 = v7;
      if ( v99 < v9 )
        v9 = v99;
      v105 = v9;
    }
    if ( a4 && (*(_DWORD *)(a4 + 4) & 1) != 0 )
    {
      v95 = 50;
      v45 = v110;
      CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(v110 + 224), &v95, v100);
      if ( CertificateEKUs < 0 )
        goto LABEL_169;
      if ( !(unsigned __int8)I_MinCryptCheckEKURequirements(v95, v100, a4) )
      {
        v7 |= 0x80000u;
        v77 = v7;
        CertificateEKUs = -1073740760;
        goto LABEL_169;
      }
    }
    else
    {
      v45 = v110;
    }
    v46 = *(_DWORD *)(v45 + 112);
    if ( v46 == *(_DWORD *)(v45 + 160) )
    {
      v47 = memcmp(*(const void **)(v45 + 120), *(const void **)(v45 + 168), v46);
      v48 = (unsigned __int8)v86;
      if ( !v47 )
        v48 = 1;
      v86 = v48;
      v88 = v48;
    }
    LOBYTE(v44) = v86;
    CertificateEKUs = MincryptValidateBasicConstraints(v45 + 224, v92, v44, &v77);
    if ( CertificateEKUs < 0 )
      break;
    if ( (_BYTE)v86 )
    {
      v49 = (const void **)(v45 + 176);
      RootByKey = I_MinCryptFindRootByKey(v49);
      v51 = a5;
      if ( RootByKey )
      {
        v49 = (const void **)(RootByKey + 2);
        v7 = *((_DWORD *)RootByKey + 8) | 1 | v77;
        v77 = v7;
        v76 = *((_DWORD *)RootByKey + 9);
      }
      else
      {
        if ( !a5 )
        {
          CertificateEKUs = -1073740760;
          v7 = v77;
LABEL_99:
          v52 = v51;
          v11 = P;
          Src = (char *)v79;
          goto LABEL_172;
        }
        v7 = v77 | 1;
        v77 |= 1u;
        v76 = 2;
        if ( a4
          && (*(_DWORD *)(a4 + 4) & 0x20) != 0
          && ((unsigned int)MinCryptIsCertPresent(v106.m128i_i64[0], *(_QWORD *)(a4 + 120), *(_DWORD *)(a4 + 112))
           || (unsigned int)MinCryptIsKeyPresent((__int64)v49, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 96))) )
        {
          v7 |= 0x4000u;
          v77 = v7;
        }
      }
      if ( a5 )
      {
        v53 = v81;
        *(_OWORD *)(v81 + 16LL * v75) = *(_OWORD *)v49;
        v54 = ++v75;
        v55 = (*(_DWORD *)v49 + 3) & 0xFFFFFFFC;
        if ( v55 < *(_DWORD *)v49 )
        {
          CertificateEKUs = -1073741675;
LABEL_108:
          v52 = a5;
          goto LABEL_109;
        }
        v56 = v55 + v8;
        if ( v55 + v8 < v8 )
        {
          v8 = -1;
          v78 = -1;
          CertificateEKUs = -1073741675;
          v56 = -1;
          v57 = -1;
        }
        else
        {
          v8 += v55;
          v78 = v56;
          CertificateEKUs = 0;
          v57 = v56;
        }
        if ( CertificateEKUs < 0 )
          goto LABEL_108;
        v8 = v56 + 16;
        if ( v56 + 16 < v57 )
        {
          v8 = -1;
          v78 = -1;
          CertificateEKUs = -1073741675;
        }
        else
        {
          v78 = v56 + 16;
          CertificateEKUs = 0;
        }
        if ( CertificateEKUs < 0 )
          goto LABEL_108;
      }
      v58 = 1;
      v84 = 1;
      v98 = 1;
    }
    else
    {
      v51 = a5;
      if ( a5 )
      {
        v53 = v81;
        *(_OWORD *)(v81 + 16LL * v75) = *(_OWORD *)(v45 + 176);
        v54 = ++v75;
        v59 = *(_DWORD *)(v45 + 176);
        v60 = (v59 + 3) & 0xFFFFFFFC;
        if ( v60 < v59 )
        {
          CertificateEKUs = -1073741675;
          v7 = v77;
          v52 = a5;
          goto LABEL_109;
        }
        v61 = v60 + v8;
        if ( v60 + v8 < v8 )
        {
          v8 = -1;
          v78 = -1;
          CertificateEKUs = -1073741675;
          v61 = -1;
          v62 = -1;
        }
        else
        {
          v8 += v60;
          v78 = v61;
          CertificateEKUs = 0;
          v62 = v61;
        }
        if ( CertificateEKUs < 0 )
          goto LABEL_167;
        v8 = v61 + 16;
        if ( v61 + 16 < v62 )
        {
          v8 = -1;
          v78 = -1;
          CertificateEKUs = -1073741675;
        }
        else
        {
          v78 = v61 + 16;
          CertificateEKUs = 0;
        }
        if ( CertificateEKUs < 0 )
          goto LABEL_167;
      }
      RootByName = I_MinCryptFindRootByName((const void **)(v45 + 112), a4);
      if ( RootByName )
      {
        v49 = (const void **)(RootByName + 2);
        v7 = *((_DWORD *)RootByName + 8) | v77;
        v77 = v7;
        v64 = *((_DWORD *)RootByName + 9);
        v76 = v64;
        v84 = 1;
        v98 = 1;
        if ( a5 )
        {
          v53 = v81;
          *(_OWORD *)(v81 + 16LL * v75) = *(_OWORD *)v49;
          v54 = ++v75;
          v65 = (*(_DWORD *)v49 + 3) & 0xFFFFFFFC;
          if ( v65 < *(_DWORD *)v49 )
          {
            CertificateEKUs = -1073741675;
LABEL_135:
            v52 = a5;
            v11 = P;
            Src = (char *)v79;
            goto LABEL_174;
          }
          v66 = v65 + v8;
          if ( v65 + v8 < v8 )
          {
            v8 = -1;
            v78 = -1;
            CertificateEKUs = -1073741675;
            v66 = -1;
            v67 = -1;
          }
          else
          {
            v8 += v65;
            v78 = v66;
            CertificateEKUs = 0;
            v67 = v66;
          }
          if ( CertificateEKUs < 0 )
            goto LABEL_135;
          v8 = v66 + 16;
          if ( v66 + 16 < v67 )
          {
            v8 = -1;
            v78 = -1;
            CertificateEKUs = -1073741675;
          }
          else
          {
            v78 = v66 + 16;
            CertificateEKUs = 0;
          }
          if ( CertificateEKUs < 0 )
            goto LABEL_135;
        }
      }
      else
      {
        IssuerCertificateByName = I_MinCryptFindIssuerCertificateByName((unsigned int *)(v45 + 112), a2, a3, a4, v100);
        v69 = IssuerCertificateByName;
        v102 = IssuerCertificateByName;
        v108 = IssuerCertificateByName;
        if ( IssuerCertificateByName )
        {
          v69 = IssuerCertificateByName & -(__int64)((unsigned int)MinCryptDecodeHashAlgorithmIdentifier(IssuerCertificateByName + 48) != 0);
          v102 = v69;
          v108 = v69;
        }
        if ( !v69 )
        {
          if ( a4 )
          {
            if ( (*(_DWORD *)(a4 + 4) & 0x20) != 0 )
            {
              CertificateEKUs = MinCryptCheckCertsAndKeys(
                                  v91,
                                  (int)v101,
                                  v90,
                                  v45,
                                  *(_QWORD *)(a4 + 120),
                                  *(_DWORD *)(a4 + 112),
                                  v73,
                                  *(_DWORD *)(a4 + 96));
              if ( CertificateEKUs >= 0 )
              {
                v7 = v77 | 0x4000;
                v77 |= 0x4000u;
                goto LABEL_99;
              }
            }
          }
          v64 = 1;
          v7 = v77;
          v52 = a5;
          v70 = a5 == 0;
LABEL_153:
          if ( v70 )
          {
            v7 |= 0x20000u;
            v77 = v7;
            CertificateEKUs = -1073740760;
          }
          else
          {
            v7 |= 0x10u;
            v77 = v7;
            CertificateEKUs = 0;
          }
          v11 = P;
          v54 = v75;
          Src = (char *)v79;
          v53 = v81;
          goto LABEL_174;
        }
        v49 = (const void **)(v69 + 176);
        v7 = v77;
      }
      v58 = v84;
    }
    CertificateEKUs = MinCryptVerifySignedHash2(v91, (int)v101, v90, (unsigned int *)(v110 + 64), (__int64)v49, a4);
    if ( CertificateEKUs < 0 )
      goto LABEL_48;
    if ( v58 )
    {
      v20 = (__m128i *)v110;
    }
    else
    {
      v107 = ++v92;
      if ( v92 >= 0xA )
      {
        v64 = 1;
        v52 = a5;
        v70 = a5 == 0;
        goto LABEL_153;
      }
      v20 = (__m128i *)v102;
      v110 = v102;
      v109 = v102;
    }
  }
  v54 = v75;
  v53 = v81;
LABEL_167:
  v7 = v77;
  v52 = a5;
LABEL_109:
  v11 = P;
  Src = (char *)v79;
LABEL_173:
  v64 = v76;
LABEL_174:
  v43 = v74;
LABEL_175:
  if ( v52 )
  {
    *(_DWORD *)v52 = 48;
    *(_DWORD *)(v52 + 4) = CertificateEKUs;
    *(_DWORD *)(v52 + 8) = v7;
    *(_QWORD *)(v52 + 16) = 0LL;
    *(_QWORD *)(v52 + 32) = v93;
    *(_QWORD *)(v52 + 40) = v94;
    v71 = v87;
    if ( v87 )
      *(_QWORD *)(v52 + 24) = v9;
    if ( CertificateEKUs >= 0 )
      CertificateEKUs = I_MincryptAddChainInfo(v52, v8, v83, v54, v43, v64, (__int64)v11, v53, Src, (__int64)a6);
  }
  else
  {
    v71 = v87;
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72634943u);
  if ( CertificateEKUs >= 0 && v71 )
    return (unsigned int)-1073740285;
  return (unsigned int)CertificateEKUs;
}
