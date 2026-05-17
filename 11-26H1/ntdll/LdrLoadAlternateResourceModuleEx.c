/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180030230
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E4F90 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     LdrpQuerySxSMUIFile @ 0x180032478 (LdrpQuerySxSMUIFile.c)
 *     GetOverlayFilePathUsingChecksum @ 0x1800327F0 (GetOverlayFilePathUsingChecksum.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x180070918 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A6EEC (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     LdrpGetLoadAsEntry @ 0x1800C603C (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x1800C6110 (LdrFindEntryForAddress.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800DF71C (LdrpGetFileDriverStoreRoot.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801143AC (LdrpCnvrtShortToLongFileName.c)
 *     __report_rangecheckfailure @ 0x180126B60 (__report_rangecheckfailure.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     wcsrchr @ 0x18012DF70 (wcsrchr.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, unsigned __int16 a2, size_t *a3, __int64 *a4, int a5)
{
  int v7; // edi
  const wchar_t *v9; // r15
  __int64 v10; // r12
  _DWORD *v11; // rax
  int v13; // eax
  __int64 Heap_0; // r15
  int v15; // r15d
  __int64 v16; // rax
  size_t v17; // r8
  wchar_t *v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  wchar_t *v22; // rax
  wchar_t *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // eax
  int v26; // ecx
  unsigned __int64 v27; // rcx
  unsigned int v28; // eax
  __int16 v29; // ax
  size_t v30; // rax
  unsigned __int16 v31; // cx
  const wchar_t *v32; // rdx
  _WORD *v33; // r15
  size_t v34; // rax
  unsigned __int16 v35; // dx
  unsigned __int64 v36; // r15
  size_t v37; // r8
  const wchar_t *v38; // rdx
  int v39; // r15d
  char v40; // dl
  unsigned __int16 v41; // r15
  unsigned __int16 v42; // r12
  size_t v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int16 v45; // ax
  size_t v46; // rax
  unsigned __int16 v47; // dx
  unsigned __int64 v48; // r12
  void *v49; // r15
  __int64 v50; // rdx
  _DWORD *RcConfig; // rax
  int OverlayFilePathUsingChecksum; // r15d
  wchar_t *v53; // r12
  size_t v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  size_t v57; // rax
  __int64 v58; // rax
  wchar_t *i; // rcx
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  unsigned __int16 v65; // dx
  __int64 v66; // r15
  size_t v67; // rdx
  __int64 v68; // rax
  __int16 v69; // r15
  __int64 v70; // rax
  size_t v71; // rax
  unsigned __int16 v72; // r15
  void *v73; // rax
  wchar_t *v74; // rax
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned __int8 v80; // [rsp+40h] [rbp-AE8h]
  unsigned int v81; // [rsp+48h] [rbp-AE0h]
  unsigned int v82; // [rsp+48h] [rbp-AE0h]
  __int64 v83; // [rsp+48h] [rbp-AE0h]
  unsigned int v84; // [rsp+50h] [rbp-AD8h]
  unsigned __int16 v85; // [rsp+50h] [rbp-AD8h]
  size_t v86; // [rsp+58h] [rbp-AD0h] BYREF
  size_t Size; // [rsp+60h] [rbp-AC8h]
  __int128 v88; // [rsp+68h] [rbp-AC0h] BYREF
  __int64 v89; // [rsp+78h] [rbp-AB0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-AA8h] BYREF
  __int64 v91; // [rsp+88h] [rbp-AA0h] BYREF
  __int64 v92; // [rsp+90h] [rbp-A98h] BYREF
  wchar_t *String; // [rsp+98h] [rbp-A90h]
  void *v94[2]; // [rsp+A0h] [rbp-A88h] BYREF
  size_t v95; // [rsp+B0h] [rbp-A78h]
  __int64 v96; // [rsp+B8h] [rbp-A70h] BYREF
  void *Src; // [rsp+C0h] [rbp-A68h]
  int v98; // [rsp+C8h] [rbp-A60h]
  int v99; // [rsp+CCh] [rbp-A5Ch]
  HANDLE v100; // [rsp+D0h] [rbp-A58h] BYREF
  int v101; // [rsp+D8h] [rbp-A50h]
  _QWORD v102[2]; // [rsp+E0h] [rbp-A48h] BYREF
  const wchar_t *v103; // [rsp+F0h] [rbp-A38h]
  const wchar_t *v104; // [rsp+F8h] [rbp-A30h] BYREF
  __int64 v105; // [rsp+100h] [rbp-A28h] BYREF
  void *v106; // [rsp+108h] [rbp-A20h]
  __int128 v107; // [rsp+110h] [rbp-A18h] BYREF
  wchar_t *v108[2]; // [rsp+120h] [rbp-A08h] BYREF
  __int128 v109; // [rsp+130h] [rbp-9F8h]
  __int128 v110; // [rsp+140h] [rbp-9E8h]
  _QWORD v111[2]; // [rsp+150h] [rbp-9D8h] BYREF
  __int128 v112; // [rsp+160h] [rbp-9C8h]
  __int128 v113; // [rsp+170h] [rbp-9B8h]
  __int128 v114; // [rsp+180h] [rbp-9A8h]
  __int64 v115; // [rsp+190h] [rbp-998h]
  __int128 v116; // [rsp+1A0h] [rbp-988h] BYREF
  wchar_t Str[352]; // [rsp+1B0h] [rbp-978h] BYREF
  char v118; // [rsp+470h] [rbp-6B8h] BYREF
  _WORD v119[352]; // [rsp+4B0h] [rbp-678h] BYREF
  char v120; // [rsp+770h] [rbp-3B8h] BYREF
  _BYTE v121[704]; // [rsp+820h] [rbp-308h] BYREF

  v7 = a2;
  v100 = 0LL;
  v88 = 0LL;
  v81 = 0;
  v9 = 0LL;
  v84 = 0;
  v106 = 0LL;
  v89 = 0LL;
  v107 = 0LL;
  v116 = 0LL;
  v105 = 0LL;
  v111[0] = 72LL;
  v111[1] = 1LL;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v80 = 0;
  v104 = 0LL;
  v103 = 0LL;
  v10 = 0LL;
  v102[0] = 0LL;
  String = (wchar_t *)v121;
  LODWORD(Handle) = 702;
  v98 = 1;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, a2, &v89, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v13 = a5 & 0x400000;
    v101 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *a3 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *a3 = (size_t)v11;
      if ( a4 )
        *a4 = v89;
      v99 = 0;
      return 0LL;
    }
    v13 = a5 & 0x400000;
    v101 = a5 & 0x400000;
  }
  v95 = 0LL;
  if ( v13 )
    goto LABEL_14;
  v92 = 0LL;
  *(_OWORD *)v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  if ( (a1 & 3) == 0 )
  {
    LODWORD(v86) = LdrFindEntryForAddress(a1, &v92);
    if ( (v86 & 0x80000000) == 0LL )
    {
      v25 = *(unsigned __int16 *)(v92 + 72) - *(unsigned __int16 *)(v92 + 88);
      v81 = v25;
      if ( v25 > *(unsigned __int16 *)(v92 + 72) || v25 >= 0x2BE )
        goto LABEL_30;
      v76 = v92;
      memmove(Str, *(const void **)(v92 + 80), v25);
      v9 = *(const wchar_t **)(v76 + 96);
      v84 = *(unsigned __int16 *)(v76 + 88);
      v10 = *(_QWORD *)(v76 + 136);
      v102[0] = v10;
    }
    goto LABEL_209;
  }
  LODWORD(v86) = LdrpGetLoadAsEntry(a1, v108);
  if ( (v86 & 0x80000000) != 0LL )
  {
LABEL_209:
    v26 = v86;
    goto LABEL_33;
  }
  v23 = wcsrchr(v108[1], 0x5Cu);
  if ( v23 )
  {
    v9 = v23 + 1;
    v24 = -1LL;
    do
      ++v24;
    while ( v9[v24] );
    v84 = 2 * v24;
    v25 = 2 * (v9 - v108[1]);
    v81 = v25;
    if ( v25 >= 0x2BE )
    {
LABEL_30:
      v26 = -2147483643;
      goto LABEL_34;
    }
    memmove(Str, v108[1], v25);
    v26 = v86;
    if ( *((_QWORD *)&v110 + 1) != -1LL )
    {
      v10 = *((_QWORD *)&v110 + 1);
      v102[0] = *((_QWORD *)&v110 + 1);
    }
  }
  else
  {
    v26 = -1073741767;
  }
LABEL_33:
  v25 = v81;
LABEL_34:
  if ( v26 >= 0 )
    goto LABEL_35;
LABEL_14:
  v86 = 0LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 702LL);
  v91 = Heap_0;
  if ( !Heap_0 )
  {
LABEL_23:
    v15 = -1073741801;
    goto LABEL_198;
  }
  v15 = ZwQueryVirtualMemory(-1LL, a1, 2LL, Heap_0, 702LL, &v86);
  if ( v15 >= 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*(_QWORD *)(v91 + 8) + 2 * v16) );
    v17 = 2 * v16 + 2;
    v86 = v17;
    if ( v17 >= 0x2BE )
    {
      v15 = -2147483643;
      goto LABEL_198;
    }
    memmove(Str, *(const void **)(v91 + 8), v17);
    v18 = wcsrchr(Str, 0x5Cu);
    if ( !v18 )
    {
      v15 = -1073741767;
      goto LABEL_198;
    }
    v19 = v18 + 1;
    v94[0] = v18 + 1;
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = (unsigned int)(2 * v20);
    LODWORD(v92) = v21;
    Size = v21 + 2;
    v22 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v21 + 2);
    v103 = v22;
    if ( v22 )
    {
      memmove(v22, v94[0], Size);
      v84 = v92;
      v81 = 2 * (((char *)v94[0] - (char *)Str) >> 1);
      v80 = 1;
      goto LABEL_198;
    }
    goto LABEL_23;
  }
LABEL_198:
  if ( v91 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v91);
  if ( v15 < 0 )
    goto LABEL_182;
  v9 = v103;
  v25 = v81;
LABEL_35:
  v27 = v25 & 0xFFFFFFFE;
  if ( v27 >= 0x2BE )
    _report_rangecheckfailure();
  *(wchar_t *)((char *)Str + v27) = 0;
  if ( wcsrchr(v9, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Str, v9, &v104) >= 0 )
  {
    v9 = v104;
    v75 = -1LL;
    do
      ++v75;
    while ( v104[v75] );
    v28 = 2 * v75;
    LOWORD(v84) = v28;
  }
  else
  {
    v28 = v84;
  }
  *(_OWORD *)v94 = 0LL;
  v96 = 0LL;
  Src = 0LL;
  *((_QWORD *)&v107 + 1) = v119;
  LODWORD(v107) = 46006272;
  if ( (unsigned __int64)v28 + 12 > 0x3C )
  {
    v73 = (void *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 2LL * v28 + 10);
    v106 = v73;
    if ( !v73 )
    {
      v15 = -1073741801;
      goto LABEL_182;
    }
    v94[1] = v73;
    v29 = 2 * (v84 + 5);
  }
  else
  {
    v94[1] = &v118;
    v29 = 60;
  }
  WORD1(v94[0]) = v29;
  v85 = v29;
  LOWORD(v94[0]) = 0;
  if ( !v9 )
    goto LABEL_48;
  v30 = wcslen(v9);
  if ( v30 > 0x7FFE )
    v31 = 0;
  else
    v31 = 2 * v30;
  LOWORD(v86) = v31;
  if ( v30 > 0x7FFE )
  {
    v15 = -1073741789;
  }
  else
  {
    LODWORD(v92) = v31;
    if ( v31 <= (unsigned int)v85 )
    {
      Size = v31;
      v32 = v9;
      v33 = v94[1];
      memmove(v94[1], v32, v31);
      LOWORD(v94[0]) = v86;
      if ( (int)v92 + 1 < (unsigned int)v85 )
        v33[Size >> 1] = 0;
LABEL_48:
      v15 = 0;
      goto LABEL_49;
    }
    v15 = -1073741789;
  }
LABEL_49:
  if ( v15 < 0 )
  {
LABEL_182:
    v56 = v89;
    v83 = v89;
    v53 = String;
    goto LABEL_111;
  }
  LODWORD(v92) = a5 & 0x1000000;
  if ( (a5 & 0x1000000) != 0 )
  {
    v64 = wcslen(L".mun");
    if ( v64 > 0x7FFE )
      v65 = 0;
    else
      v65 = 2 * v64;
    LOWORD(v86) = v65;
    if ( v64 > 0x7FFE )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v36 = LOWORD(v94[0]);
    if ( LOWORD(v94[0]) + (unsigned int)v65 > v85 )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v37 = v65;
    v38 = L".mun";
  }
  else
  {
    v34 = wcslen(L".mui");
    if ( v34 > 0x7FFE )
      v35 = 0;
    else
      v35 = 2 * v34;
    LOWORD(v86) = v35;
    if ( v34 > 0x7FFE )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v36 = LOWORD(v94[0]);
    if ( LOWORD(v94[0]) + (unsigned int)v35 > v85 )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v37 = v35;
    v38 = L".mui";
  }
  Size = (size_t)v94[1] + 2 * (v36 >> 1);
  memmove((void *)Size, v38, v37);
  LOWORD(v94[0]) = v86 + v36;
  if ( (unsigned int)(unsigned __int16)(v86 + v36) + 1 < v85 )
    *(_WORD *)(Size + 2 * ((unsigned __int64)(unsigned __int16)v86 >> 1)) = 0;
  v15 = 0;
LABEL_59:
  if ( v15 < 0 )
    goto LABEL_182;
  if ( v10 )
    RtlActivateActivationContextUnsafeFast(v111, v10);
  v39 = LdrpQuerySxSMUIFile(v94, (unsigned __int16)v7, &v107, &v116, &v105);
  if ( v10 )
    RtlDeactivateActivationContextUnsafeFast(v111);
  if ( v39 < 0 )
  {
    v40 = 0;
  }
  else
  {
    v40 = 1;
    *((_QWORD *)&v88 + 1) = *(_QWORD *)(v105 + 8);
    LODWORD(v88) = *(_DWORD *)v105;
  }
  if ( v40 )
  {
    v98 = 0;
    goto LABEL_146;
  }
  *((_QWORD *)&v88 + 1) = v119;
  v41 = 0;
  LODWORD(v88) = 46006272;
  v42 = 702;
  if ( !(_DWORD)v92 )
  {
    v43 = wcslen(Str);
    v44 = v43;
    if ( v43 > 0x7FFE )
      v45 = 0;
    else
      v45 = 2 * v43;
    LOWORD(v86) = v45;
    if ( v44 <= 0x7FFE && v45 <= 0x2BEu )
    {
      Size = v45;
      memmove(v119, Str, v45);
      v41 = v86;
      LOWORD(v88) = v86;
      if ( (unsigned int)(unsigned __int16)v86 + 1 < 0x2BE )
        v119[Size >> 1] = 0;
    }
    goto LABEL_74;
  }
  v58 = -1LL;
  do
    ++v58;
  while ( Str[v58] );
  for ( i = &Str[(unsigned int)v58 - 2]; i > Str; --i )
  {
    if ( *i == 92 )
      break;
  }
  if ( i > Str )
  {
    i[1] = 0;
    v71 = wcslen(Str);
    if ( v71 > 0x7FFE )
      v72 = 0;
    else
      v72 = 2 * v71;
    if ( v71 <= 0x7FFE && v72 <= 0x2BEu )
    {
      memmove(v119, Str, v72);
      LOWORD(v88) = v72;
      if ( (unsigned int)v72 + 1 < 0x2BE )
        v119[(unsigned __int64)v72 >> 1] = 0;
    }
    RtlAppendUnicodeToString(&v88, L"SystemResources\\");
    v42 = WORD1(v88);
    v41 = v88;
LABEL_74:
    if ( !(_DWORD)v92 )
    {
      Src = &v120;
      WORD1(v96) = 170;
      if ( (int)RtlLcidToLocaleName(v7, (__int64)&v96, 2, 0) < 0 )
      {
        v15 = -1073741811;
        v56 = v89;
        v83 = v89;
        v53 = String;
        goto LABEL_111;
      }
      if ( (_WORD)v96 )
      {
        if ( (unsigned __int16)v96 + (unsigned int)v41 <= v42 )
        {
          Size = *((_QWORD *)&v88 + 1) + 2 * ((unsigned __int64)v41 >> 1);
          memmove((void *)Size, Src, (unsigned __int16)v96);
          v41 += v96;
          LOWORD(v88) = v41;
          if ( (unsigned int)v41 + 1 < v42 )
            *(_WORD *)(Size + 2 * ((unsigned __int64)(unsigned __int16)v96 >> 1)) = 0;
        }
      }
      v46 = wcslen(L"\\");
      if ( v46 > 0x7FFE )
        v47 = 0;
      else
        v47 = 2 * v46;
      LOWORD(v86) = v47;
      if ( v46 <= 0x7FFE )
      {
        v82 = v42;
        if ( v41 + (unsigned int)v47 <= v42 )
        {
          Size = *((_QWORD *)&v88 + 1) + 2 * ((unsigned __int64)v41 >> 1);
          v48 = v47;
          memmove((void *)Size, L"\\", v47);
          LOWORD(v88) = v86 + v41;
          if ( (unsigned int)(unsigned __int16)(v86 + v41) + 1 < v82 )
            *(_WORD *)(Size + 2 * (v48 >> 1)) = 0;
        }
      }
    }
    v49 = v94[1];
    RtlAppendUnicodeToString(&v88, v94[1]);
    if ( !(_DWORD)v92 )
    {
      RcConfig = LdrpGetRcConfig(a1, v50, 0, 1);
      if ( RcConfig )
      {
        Size = (size_t)(RcConfig + 7);
        OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(
                                         Src,
                                         *((_QWORD *)&v88 + 1),
                                         v49,
                                         RcConfig + 7,
                                         &Handle,
                                         v121);
        if ( OverlayFilePathUsingChecksum == -1073741789 )
        {
          v74 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, (unsigned int)Handle);
          v53 = v74;
          String = v74;
          if ( v74 )
            OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(
                                             Src,
                                             *((_QWORD *)&v88 + 1),
                                             v94[1],
                                             Size,
                                             &Handle,
                                             v74);
        }
        else
        {
          v53 = String;
        }
        if ( OverlayFilePathUsingChecksum < 0 )
          goto LABEL_147;
        v102[0] = 0LL;
        v102[1] = v53;
        if ( v53 )
        {
          v54 = wcslen(v53);
          if ( v54 > 0x7FFE )
            goto LABEL_147;
          LOWORD(v102[0]) = 2 * v54;
          WORD1(v102[0]) = 2 * v54 + 2;
        }
        Handle = 0LL;
        v89 = 0LL;
        v91 = 0LL;
        v83 = 0LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v55 = (__int64)NtCurrentPeb()->SharedData + 555;
        else
          v55 = 2147353477LL;
        if ( (*(_BYTE *)v55 & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v78 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v78 = 2147353476LL;
          LdrpTraceLoadMUIDll(v102, *(unsigned __int8 *)v78);
        }
        v15 = LdrpMapResourceFile(a1, (unsigned int)v102, v80, (unsigned int)&Handle, (__int64)&v89, (__int64)&v91);
        if ( v15 >= 0 )
        {
          Size = v89 | 1;
          if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, v89 | 1, v102, Src, a5, 2) )
          {
            v100 = Handle;
            v56 = v91;
            v83 = v91;
            v95 = Size;
LABEL_100:
            if ( v15 >= 0 )
            {
              *(_QWORD *)&v88 = 0LL;
              *((_QWORD *)&v88 + 1) = v53;
              if ( v53 )
              {
                v57 = wcslen(v53);
                v56 = v83;
                if ( v57 <= 0x7FFE )
                {
                  LOWORD(v88) = 2 * v57;
                  WORD1(v88) = 2 * v57 + 2;
                }
              }
              goto LABEL_111;
            }
            if ( v15 != -1073741772 && v15 != -1073741766 )
              LdrpLogMapAndVerifyResourceFileFailure(v15, (unsigned int)v102, v80, a5, (__int64)&v96);
LABEL_147:
            v66 = 2147353477LL;
            Handle = 0LL;
            v89 = 0LL;
            v91 = 0LL;
            v100 = 0LL;
            v83 = 0LL;
            v95 = 0LL;
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v66 = (__int64)NtCurrentPeb()->SharedData + 555;
            if ( (*(_BYTE *)v66 & 1) != 0 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v77 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v77 = 2147353476LL;
              LdrpTraceLoadMUIDll(&v88, *(unsigned __int8 *)v77);
            }
            v15 = LdrpMapResourceFile(a1, (unsigned int)&v88, v80, (unsigned int)&Handle, (__int64)&v89, (__int64)&v91);
            if ( v15 >= 0 )
            {
              Size = v89 | 1;
              if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, v89 | 1, &v88, Src, a5, v98) )
              {
                v100 = Handle;
                v56 = v91;
                v83 = v91;
                v67 = Size;
                v95 = Size;
LABEL_153:
                if ( (_DWORD)v92 || v15 != -1073741772 && v15 != -1073741766 )
                  goto LABEL_111;
                if ( (unsigned __int8)LdrpGetFileDriverStoreRoot(Str, v67, v119) )
                {
                  *((_QWORD *)&v88 + 1) = v119;
                  v68 = -1LL;
                  do
                    ++v68;
                  while ( v119[v68] );
                  LOWORD(v88) = 2 * v68;
                  WORD1(v88) = 702;
                  RtlAppendUnicodeToString(&v88, L"\\");
                  if ( (_WORD)v96 )
                  {
                    v69 = v88;
                    if ( (unsigned __int16)v88 + (unsigned int)(unsigned __int16)v96 <= WORD1(v88) )
                    {
                      Size = *((_QWORD *)&v88 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v88 >> 1);
                      memmove((void *)Size, Src, (unsigned __int16)v96);
                      LOWORD(v88) = v96 + v69;
                      if ( (unsigned int)(unsigned __int16)(v96 + v69) + 1 < WORD1(v88) )
                        *(_WORD *)(Size + 2 * ((unsigned __int64)(unsigned __int16)v96 >> 1)) = 0;
                    }
                  }
                  RtlAppendUnicodeToString(&v88, L"\\");
                  RtlAppendUnicodeToString(&v88, v94[1]);
                  Handle = 0LL;
                  v89 = 0LL;
                  v91 = 0LL;
                  v100 = 0LL;
                  v83 = 0LL;
                  v95 = 0LL;
                  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                    v70 = (__int64)NtCurrentPeb()->SharedData + 555;
                  else
                    v70 = 2147353477LL;
                  if ( (*(_BYTE *)v70 & 1) != 0 )
                  {
                    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                      v79 = (__int64)NtCurrentPeb()->SharedData + 554;
                    else
                      v79 = 2147353476LL;
                    LdrpTraceLoadMUIDll(&v88, *(unsigned __int8 *)v79);
                  }
                  v15 = LdrpMapResourceFile(
                          a1,
                          (unsigned int)&v88,
                          v80,
                          (unsigned int)&Handle,
                          (__int64)&v89,
                          (__int64)&v91);
                  if ( v15 >= 0 )
                  {
                    Size = v89 | 1;
                    if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, v89 | 1, &v88, Src, a5, v98) )
                    {
                      v100 = Handle;
                      v56 = v91;
                      v83 = v91;
                      v95 = Size;
                      goto LABEL_111;
                    }
                    NtUnmapViewOfSection(-1LL, v89);
                    NtClose(Handle);
                    v15 = -1073020926;
                  }
                }
                v56 = v83;
                goto LABEL_111;
              }
              NtUnmapViewOfSection(-1LL, v89);
              NtClose(Handle);
              v15 = -1073020926;
            }
            v56 = 0LL;
            goto LABEL_153;
          }
          NtUnmapViewOfSection(-1LL, v89);
          NtClose(Handle);
          v15 = -1073020926;
        }
        v56 = 0LL;
        goto LABEL_100;
      }
    }
LABEL_146:
    v53 = String;
    goto LABEL_147;
  }
  v15 = -1073741686;
  v56 = v89;
  v83 = v89;
  v53 = String;
LABEL_111:
  v60 = v95;
  if ( !v95 )
    v60 = -1LL;
  v95 = v60;
  v91 = v60;
  if ( v15 != -1073741659 && v15 != -1073741801 && v15 != -1073741523 )
  {
    v61 = 33;
    if ( !v101 )
      v61 = 1;
    LdrpSetAlternateResourceModuleHandle(a1, &v91, &v100, 0LL, v7, v61, v15, v56);
    v60 = v91;
    v95 = v91;
  }
  if ( v60 == -1 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v62 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v62 = 2147353477LL;
    if ( (*(_BYTE *)v62 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v63 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v63 = 2147353476LL;
      LdrpTraceLoadMUIDll(&v88, *(unsigned __int8 *)v63);
    }
    *a3 = v95;
    if ( a4 )
      *a4 = v83;
    v15 = 0;
    v99 = 0;
  }
  if ( v103 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v103);
  if ( v104 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v104);
  if ( v106 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v106);
  if ( v53 && v121 != (_BYTE *)v53 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v53);
  return (unsigned int)v15;
}
