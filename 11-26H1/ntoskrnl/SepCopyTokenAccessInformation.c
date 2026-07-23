/*
 * XREFs of SepCopyTokenAccessInformation @ 0x140A4E3E8
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140406710 (RtlSidHashInitialize.c)
 *     SeQueryMandatoryPolicyToken @ 0x140456C70 (SeQueryMandatoryPolicyToken.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140475CC0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopySidAndAttributesArray @ 0x140A4EE60 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140A4F210 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        char a14,
        unsigned __int8 *Src)
{
  __int64 v18; // rax
  char *v19; // rsi
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 *Hash; // rcx
  __int64 v24; // r13
  _OWORD *v25; // rax
  __int64 v26; // rdx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r15
  ULONG v37; // ecx
  unsigned __int64 *v38; // rcx
  __int64 v39; // rdx
  _OWORD *v40; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rbx
  __int64 v49; // r15
  ULONG v50; // ecx
  unsigned __int64 *v51; // rcx
  _OWORD *v52; // rax
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int64 v60; // rax
  char *v61; // rbx
  char *v62; // r15
  __int64 v63; // r15
  char *v64; // rbx
  char *v65; // rbx
  int v66; // eax
  char *v67; // rdx
  PSID RemainingSidArea; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v70; // [rsp+48h] [rbp-B8h]
  unsigned int v71; // [rsp+4Ch] [rbp-B4h]
  unsigned int v72; // [rsp+50h] [rbp-B0h]
  unsigned int v73; // [rsp+54h] [rbp-ACh]
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  unsigned int v75; // [rsp+5Ch] [rbp-A4h]
  unsigned int v76; // [rsp+60h] [rbp-A0h]
  int v77; // [rsp+64h] [rbp-9Ch]
  unsigned int v78; // [rsp+68h] [rbp-98h]
  int v79; // [rsp+6Ch] [rbp-94h]
  _SID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(RemainingSidArea) = a6;
  v70 = a7;
  v74 = a8;
  v72 = a9;
  v71 = a10;
  v75 = a11;
  v76 = a12;
  v78 = a13;
  v77 = a3;
  *(&SidAttrHash.SidCount + 1) = 0;
  v79 = a4;
  v73 = a5;
  memset_0(&SidAttrHash, 0, 0x10CuLL);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v18 = *(_QWORD *)(a1 + 1080);
  v19 = 0LL;
  if ( v18 )
    v20 = *(_DWORD *)(v18 + 40);
  else
    v20 = 0;
  *(_DWORD *)(a2 + 48) = v20;
  v21 = a2 + 360;
  v22 = (unsigned int)RemainingSidArea;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    a5 - v22,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    (PSID)(a2 + 360 + v22),
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 152), *(_DWORD *)(a1 + 124), &SidAttrHash);
  Hash = SidAttrHash.Hash;
  v24 = 2LL;
  *(_DWORD *)(a2 + 88) = SidAttrHash.SidCount;
  v25 = (_OWORD *)(a2 + 104);
  v26 = 2LL;
  do
  {
    v27 = *((_OWORD *)Hash + 1);
    *v25 = *(_OWORD *)Hash;
    v28 = *((_OWORD *)Hash + 2);
    v25[1] = v27;
    v29 = *((_OWORD *)Hash + 3);
    v25[2] = v28;
    v30 = *((_OWORD *)Hash + 4);
    v25[3] = v29;
    v31 = *((_OWORD *)Hash + 5);
    v25[4] = v30;
    v32 = *((_OWORD *)Hash + 6);
    v25[5] = v31;
    v33 = *((_OWORD *)Hash + 7);
    Hash += 16;
    v25[6] = v32;
    v25 += 8;
    *(v25 - 1) = v33;
    --v26;
  }
  while ( v26 );
  v34 = v73;
  *(_QWORD *)(a2 + 96) = v21;
  v35 = v34 + v21;
  *(_DWORD *)v35 = *(_DWORD *)(a1 + 128);
  v36 = v35 + 272;
  *(_QWORD *)(v35 + 8) = v35 + 272;
  *(_QWORD *)(a2 + 8) = v35;
  v37 = *(_DWORD *)(a1 + 128);
  if ( v37 )
  {
    RtlCopySidAndAttributesArray(
      v37,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      v70 - v74,
      (PSID_AND_ATTRIBUTES)(v35 + 272),
      (PSID)(v36 + v74),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 160), *(_DWORD *)(a1 + 128), &SidAttrHash);
    v38 = SidAttrHash.Hash;
    *(_DWORD *)v35 = SidAttrHash.SidCount;
    v39 = 2LL;
    v40 = (_OWORD *)(v35 + 16);
    do
    {
      v41 = *((_OWORD *)v38 + 1);
      *v40 = *(_OWORD *)v38;
      v42 = *((_OWORD *)v38 + 2);
      v40[1] = v41;
      v43 = *((_OWORD *)v38 + 3);
      v40[2] = v42;
      v44 = *((_OWORD *)v38 + 4);
      v40[3] = v43;
      v45 = *((_OWORD *)v38 + 5);
      v40[4] = v44;
      v46 = *((_OWORD *)v38 + 6);
      v40[5] = v45;
      v47 = *((_OWORD *)v38 + 7);
      v38 += 16;
      v40[6] = v46;
      v40 += 8;
      *(v40 - 1) = v47;
      --v39;
    }
    while ( v39 );
    *(_QWORD *)(v35 + 8) = v36;
  }
  v48 = v36 + v70;
  *(_DWORD *)v48 = *(_DWORD *)(a1 + 800);
  v49 = v48 + 272;
  *(_QWORD *)(v48 + 8) = v48 + 272;
  *(_QWORD *)(a2 + 64) = v48;
  v50 = *(_DWORD *)(a1 + 800);
  if ( v50 )
  {
    RtlCopySidAndAttributesArray(
      v50,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      v71 - v75,
      (PSID_AND_ATTRIBUTES)(v48 + 272),
      (PSID)(v49 + v75),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 792), *(_DWORD *)(a1 + 800), &SidAttrHash);
    v51 = SidAttrHash.Hash;
    *(_DWORD *)v48 = SidAttrHash.SidCount;
    v52 = (_OWORD *)(v48 + 16);
    do
    {
      v53 = *((_OWORD *)v51 + 1);
      *v52 = *(_OWORD *)v51;
      v54 = *((_OWORD *)v51 + 2);
      v52[1] = v53;
      v55 = *((_OWORD *)v51 + 3);
      v52[2] = v54;
      v56 = *((_OWORD *)v51 + 4);
      v52[3] = v55;
      v57 = *((_OWORD *)v51 + 5);
      v52[4] = v56;
      v58 = *((_OWORD *)v51 + 6);
      v52[5] = v57;
      v59 = *((_OWORD *)v51 + 7);
      v51 += 16;
      v52[6] = v58;
      v52 += 8;
      *(v52 - 1) = v59;
      --v24;
    }
    while ( v24 );
    *(_QWORD *)(v48 + 8) = v49;
  }
  v60 = v72;
  v61 = (char *)(v49 + v71);
  v62 = 0LL;
  if ( v72 )
  {
    v62 = v61;
    memmove(v61, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v60 = v72;
  }
  *(_QWORD *)(a2 + 56) = v62;
  if ( !a14 )
    Src = *(unsigned __int8 **)(a1 + 1104);
  v63 = v76;
  v64 = &v61[v60];
  if ( v76 )
  {
    v19 = v64;
    memmove(v64, Src, 4LL * Src[1] + 8);
  }
  v65 = &v64[v63];
  *(_QWORD *)(a2 + 72) = v19;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v65,
    (unsigned int)(v77 + a2 - (_DWORD)v65),
    &RemainingSidArea);
  v66 = v79;
  v67 = &v65[v78];
  *(_QWORD *)(a2 + 80) = v65;
  *(_DWORD *)v67 = v66;
  *(_QWORD *)(a2 + 16) = v67;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v67 + 4));
}
