/*
 * XREFs of CmpCheckKey @ 0x140A1E430
 * Callers:
 *     CmpCheckRegistry2 @ 0x140A1DAC0 (CmpCheckRegistry2.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404BDE08 (CmpKeySecurityIncrementReferenceCount.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408DF710 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvpMapEntryIsDiscardable @ 0x1408DF910 (HvpMapEntryIsDiscardable.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     CmpGetIndexElementSize @ 0x140A207E8 (CmpGetIndexElementSize.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  unsigned int v8; // edi
  unsigned __int64 v11; // rdx
  __int64 CellMap; // rax
  __int64 v13; // rbx
  __int64 CellFlat; // rax
  int *v15; // r9
  __int64 v16; // rcx
  bool v17; // zf
  int *v18; // rax
  __int64 BinAddress; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  __int64 v22; // r10
  bool v23; // bl
  __int64 CellPaged; // rax
  __int64 v25; // rbx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int i; // eax
  int v29; // r14d
  __int64 v30; // rax
  unsigned int v31; // r13d
  unsigned int v32; // edi
  unsigned int v33; // r12d
  int v34; // r14d
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // r14
  int v39; // eax
  unsigned __int16 v40; // cx
  __int64 v41; // r14
  int v42; // edx
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // edi
  _RTL_BITMAP *v46; // r13
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  int *v51; // r9
  __int64 v52; // rcx
  int *v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // r8d
  unsigned int v56; // edx
  __int64 v57; // r10
  bool v58; // di
  __int64 v59; // rax
  __int64 v60; // r14
  int v61; // r12d
  unsigned __int64 v62; // rax
  int v63; // edi
  int v64; // r15d
  int v65; // r14d
  __int64 v66; // rax
  _DWORD *v67; // rbx
  bool v68; // cl
  bool v69; // al
  _DWORD *v70; // r14
  unsigned int *v71; // rdx
  int v73; // r9d
  int v74; // edx
  __int64 v75; // rcx
  char v76; // al
  int v77; // eax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // r11
  int IndexElementSize; // eax
  int v83; // r10d
  __int16 *v84; // r11
  unsigned int v85; // r9d
  __int16 v86; // cx
  int v87; // eax
  __int16 v88; // ax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  unsigned int v92; // ecx
  unsigned int v93; // edx
  int v94; // eax
  int v95; // eax
  int v96; // eax
  char v97; // al
  int v98; // eax
  int v99; // eax
  __int64 v100; // r13
  int v101; // eax
  __int64 v102; // rax
  __int64 v103; // r14
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // eax
  __int16 v110; // cx
  int v111; // eax
  int v112; // eax
  __int64 v113; // rax
  char v114; // cl
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // r15
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // r12d
  unsigned int v123; // r15d
  __int16 *v124; // rdi
  __int64 v125; // rdx
  __int64 v126; // rax
  _WORD *v127; // r14
  int v128; // eax
  int v129; // r10d
  unsigned int v130; // r9d
  int v131; // eax
  __int64 v132; // rcx
  ULONG_PTR v133; // [rsp+20h] [rbp-91h]
  int v134; // [rsp+20h] [rbp-91h]
  int v135; // [rsp+20h] [rbp-91h]
  __int64 v136; // [rsp+50h] [rbp-61h] BYREF
  int v137; // [rsp+58h] [rbp-59h]
  unsigned int v138[2]; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v139[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v140; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v141; // [rsp+78h] [rbp-39h] BYREF
  __int16 *v142; // [rsp+80h] [rbp-31h]
  unsigned int v143[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v144; // [rsp+90h] [rbp-21h] BYREF
  unsigned int v145[2]; // [rsp+98h] [rbp-19h] BYREF
  unsigned int v146; // [rsp+A0h] [rbp-11h]
  char v147; // [rsp+100h] [rbp+4Fh]

  v143[0] = -1;
  v145[0] = -1;
  v143[1] = 0;
  v8 = a4;
  v144 = 0LL;
  v145[1] = 0;
  v139[0] = -1;
  v139[1] = 0;
  v138[0] = -1;
  v138[1] = 0;
  v136 = 0xFFFFFFFFLL;
  v147 = 0;
  v142 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  v140 = 0LL;
  LOWORD(v141) = 0;
  HvpGetCellContextInitialize(&v140);
  HvpGetBinContextInitialize(&v141);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
  {
    if ( (a3 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (a3 >> 31) + BugCheckParameter3 + 280) || (a3 & 7) != 0 )
      goto LABEL_498;
    if ( BitMapHeader && (a3 & 0x80000000) == 0 )
    {
      v11 = a3 >> 3;
      if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, v11) )
        goto LABEL_498;
      RtlClearBits(BitMapHeader, v11, 1u);
    }
    CellMap = HvpGetCellMap(BugCheckParameter3, a3);
    v13 = CellMap;
    if ( CellMap && !HvpMapEntryIsDiscardable(CellMap) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, (unsigned int *)&v140);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, a3);
      v15 = 0LL;
      v16 = CellFlat;
      v17 = CellFlat == 0;
      v18 = (int *)(CellFlat - 4);
      if ( !v17 )
        v15 = v18;
      if ( v15 )
      {
        BinAddress = HvpMapEntryGetBinAddress(v16, v13, &v141, v15);
        v20 = (_DWORD)v15 - BinAddress;
        v21 = -*v15;
        v23 = 0;
        if ( *v15 < 0 && v21 - 8 <= 0xFFFF8 )
        {
          v22 = *(unsigned int *)(BinAddress + 8);
          if ( v21 <= (unsigned __int64)(v22 - 32) && v20 - *v15 <= (unsigned int)v22 && v20 >= 0x20 )
            v23 = 1;
        }
      }
      else
      {
        v23 = 1;
      }
      if ( v15 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v140);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v140);
      }
      if ( v23 )
        goto LABEL_27;
    }
LABEL_498:
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
LABEL_27:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a3, v145);
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a3);
  v25 = CellPaged;
  if ( !CellPaged )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = CellPaged;
  v26 = -4 - *(_DWORD *)(CellPaged - 4);
  if ( v26 - 76 > 0x410 )
  {
    v134 = 32;
LABEL_187:
    v63 = -1073741492;
    v73 = -1073741492;
LABEL_188:
    v74 = 0;
    v75 = a7;
    goto LABEL_144;
  }
  v27 = *(unsigned __int16 *)(CellPaged + 72);
  if ( !(_WORD)v27 || v27 + 76 > v26 )
  {
    v63 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, 48);
    goto LABEL_140;
  }
  if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v27 > 0x100u )
    {
      v134 = 53;
    }
    else if ( *(_BYTE *)(CellPaged + 76) )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= v27 )
          goto LABEL_42;
        if ( *(_BYTE *)(i + v25 + 76) == 92 )
          break;
      }
      v134 = 1280;
    }
    else
    {
      v134 = 64;
    }
    goto LABEL_187;
  }
  if ( (unsigned __int16)v27 > 0x200u )
  {
    v134 = 69;
    goto LABEL_187;
  }
  if ( (v27 & 1) != 0 )
  {
    v134 = 80;
    goto LABEL_187;
  }
  if ( !*(_WORD *)(CellPaged + 76) )
  {
    v134 = 96;
    goto LABEL_187;
  }
  v92 = 0;
  v93 = v27 >> 1;
  while ( v92 < v93 )
  {
    if ( *(_WORD *)(CellPaged + 2LL * v92 + 76) == 92 )
    {
      v63 = -1073741492;
      SetFailureLocation(a7, 0, 14, -1073741492, 1296);
      goto LABEL_140;
    }
    ++v92;
  }
LABEL_42:
  v29 = a2 & 0x20000;
  v137 = v29;
  if ( *(_WORD *)v25 != 27502 )
  {
    v147 = 1;
    v63 = -1073741492;
    if ( v29 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 144);
      goto LABEL_140;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    v96 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v63 = v96;
    if ( v96 < 0 )
    {
      v134 = 128;
      v73 = v96;
      goto LABEL_188;
    }
    v8 = a4;
    *(_WORD *)v25 = 27502;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v25 + 13) & 3) != 0 )
  {
    v147 = 1;
    v63 = -1073741492;
    if ( v29 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 148);
      goto LABEL_140;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 146);
    v95 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v63 = v95;
    if ( v95 < 0 )
    {
      v134 = 150;
      v73 = v95;
      goto LABEL_188;
    }
    *(_BYTE *)(v25 + 13) &= 0xFCu;
    v8 = a4;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( v8 == -1 )
  {
    v76 = *(_BYTE *)(v25 + 13) & 3;
    if ( v76 && v76 != 2 )
    {
      v147 = 1;
      v63 = -1073741492;
      if ( v29 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 492);
        goto LABEL_140;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 484);
      v77 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v63 = v77;
      if ( v77 < 0 )
      {
        v134 = 488;
        v73 = v77;
        goto LABEL_188;
      }
      *(_BYTE *)(v25 + 13) = *(_BYTE *)(v25 + 13) & 0xFC | 2;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v30 = HvpGetCellFlat(BugCheckParameter3, v8, v139);
    else
      v30 = HvpGetCellPaged(BugCheckParameter3, v8);
    if ( (*(_BYTE *)(v30 + 13) & 3) != 3 || (v97 = *(_BYTE *)(v25 + 13) & 3, v97 == 3) || v97 == 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v139);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v139);
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v139);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v139);
      v147 = 1;
      v63 = -1073741492;
      if ( v29 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 156);
        goto LABEL_140;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 152);
      v98 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v63 = v98;
      if ( v98 < 0 )
      {
        v134 = 154;
        v73 = v98;
        goto LABEL_188;
      }
      *(_BYTE *)(v25 + 13) |= 3u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
  }
  v31 = *(unsigned __int16 *)(v25 + 74);
  v32 = *(_DWORD *)(v25 + 48);
  v33 = *(_DWORD *)(v25 + 40);
  v34 = *(_DWORD *)(v25 + 44);
  v146 = *(_DWORD *)(v25 + 36);
  if ( !v31 )
  {
    if ( v32 == -1 )
      goto LABEL_53;
    v63 = -1073741492;
    v147 = 1;
    if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 228);
      goto LABEL_140;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 232);
    v112 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v63 = v112;
    if ( v112 < 0 )
    {
      SetFailureLocation(a7, 1, 14, v112, 236);
      goto LABEL_140;
    }
    goto LABEL_284;
  }
  if ( v32 != -1 )
  {
    if ( (*(_BYTE *)(v25 + 13) & 3) == 1 )
    {
      v135 = 158;
    }
    else
    {
      if ( !HvIsCellAllocated(BugCheckParameter3, v32) )
      {
        v100 = a7;
        v63 = -1073741492;
        v147 = 1;
LABEL_280:
        if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
        {
          SetFailureLocation(v100, 0, 14, -1073741492, 192);
          goto LABEL_140;
        }
        SetFailureLocation(v100, 1, 14, -1073741492, 160);
        v101 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
        v63 = v101;
        if ( v101 < 0 )
        {
          SetFailureLocation(v100, 0, 14, v101, 176);
          goto LABEL_140;
        }
        *(_WORD *)(v25 + 74) = 0;
        v31 = 0;
LABEL_284:
        *(_DWORD *)(v25 + 48) = -1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
        goto LABEL_53;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v113 = HvpGetCellFlat(BugCheckParameter3, v32, (unsigned int *)&v136);
      else
        v113 = HvpGetCellPaged(BugCheckParameter3, v32);
      if ( !v113 )
      {
        v63 = -1073741670;
        SetFailureLocation(a7, 0, 14, -1073741670, 208);
        goto LABEL_140;
      }
      v114 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
      if ( v31 <= -4 - *(_DWORD *)(v113 - 4) )
      {
        if ( v114 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v136);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v136);
        goto LABEL_53;
      }
      if ( v114 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v136);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v136);
      v135 = 224;
    }
    v100 = a7;
    v63 = -1073741492;
    v147 = 1;
    SetFailureLocation(a7, 1, 14, -1073741492, v135);
    goto LABEL_280;
  }
  v63 = -1073741492;
  v147 = 1;
  if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
  {
    SetFailureLocation(a7, 0, 14, -1073741492, 157);
    goto LABEL_140;
  }
  SetFailureLocation(a7, 0, 14, -1073741492, 155);
  v105 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
  v63 = v105;
  if ( v105 < 0 )
  {
    SetFailureLocation(a7, 0, 14, v105, 159);
    goto LABEL_140;
  }
  v31 = 0;
  *(_WORD *)(v25 + 74) = 0;
LABEL_53:
  if ( v34 == -1 )
  {
    v41 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 256);
    v36 = v137;
    v35 = a4;
    goto LABEL_218;
  }
  v35 = a4;
  v36 = v137;
  if ( a4 == -1 )
    goto LABEL_178;
  if ( !v137 && (BYTE2(NlsMbOemCodePageTag) || (CmpContextListLock.ApcStateFill[36] & 6) != 0) && a5 )
  {
    v41 = a7;
    goto LABEL_218;
  }
  if ( a4 == -1 )
  {
LABEL_178:
    v88 = *(_WORD *)(v25 + 2);
    if ( (v88 & 0x50) != 0 )
    {
      v63 = -1073741492;
      SetFailureLocation(a7, 0, 14, -1073741492, 432);
      goto LABEL_140;
    }
    if ( (v88 & 2) != 0 )
    {
      v147 = 1;
      v63 = -1073741492;
      if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 480);
        goto LABEL_140;
      }
      v41 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 448);
      v89 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v63 = v89;
      if ( v89 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v89, 464);
        goto LABEL_140;
      }
      *(_WORD *)(v25 + 2) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
      goto LABEL_71;
    }
    goto LABEL_70;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v25 + 16) != (_DWORD)v35 )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 352);
        goto LABEL_140;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 320);
      v108 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v63 = v108;
      if ( v108 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v108, 336);
        goto LABEL_140;
      }
      v35 = a4;
      *(_DWORD *)(v25 + 16) = a4;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v37 = HvpGetCellFlat(BugCheckParameter3, v35, v139);
    else
      v37 = HvpGetCellPaged(BugCheckParameter3, v35);
    v38 = v37;
    if ( !v37 )
    {
      v63 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 368);
      goto LABEL_140;
    }
    v39 = *(_DWORD *)(v37 + 52);
    v40 = 2 * *(_WORD *)(v25 + 72);
    if ( (*(_BYTE *)(v25 + 2) & 0x20) == 0 )
      v40 = *(_WORD *)(v25 + 72);
    if ( (unsigned __int16)v39 < (unsigned int)v40 )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 370);
        goto LABEL_387;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 372);
      v109 = HvpMarkCellDirty(BugCheckParameter3, a4, 0);
      v63 = v109;
      if ( v109 < 0 )
      {
        SetFailureLocation(a7, 1, 14, v109, 374);
        goto LABEL_387;
      }
      v110 = 2 * *(_WORD *)(v25 + 72);
      if ( (*(_BYTE *)(v25 + 2) & 0x20) == 0 )
        v110 = *(_WORD *)(v25 + 72);
      *(_WORD *)(v38 + 52) = v110;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( *(_DWORD *)(v38 + 56) >= v31 )
      goto LABEL_67;
    v63 = -1073741492;
    v147 = 1;
    if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 376);
LABEL_387:
      v71 = v139;
      goto LABEL_138;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 378);
    v107 = HvpMarkCellDirty(BugCheckParameter3, a4, 0);
    v63 = v107;
    if ( v107 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v107, 380);
      goto LABEL_387;
    }
    *(_DWORD *)(v38 + 56) = v31;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_67:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v139);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v139);
    if ( (*(_BYTE *)(v25 + 2) & 0xE) != 0 )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 416);
        goto LABEL_140;
      }
      v41 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 384);
      v94 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v63 = v94;
      if ( v94 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v94, 400);
        goto LABEL_140;
      }
      *(_WORD *)(v25 + 2) &= 0xFFF1u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    else
    {
LABEL_70:
      v41 = a7;
    }
LABEL_71:
    v42 = *(_DWORD *)(v25 + 44);
    v141 = 0;
    if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, v42, &v141) )
      break;
    SetFailureLocation(v41, 1, 14, -1073741492, 496);
    v36 = v137;
    v35 = a4;
LABEL_218:
    if ( v36 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
    {
      SetFailureLocation(v41, 0, 14, -1073741492, 304);
      v63 = -1073741492;
      goto LABEL_140;
    }
    v140 = 0xFFFFFFFFLL;
    v136 = 0xFFFFFFFFLL;
    if ( (_DWORD)v35 == -1 )
    {
      v63 = -1073741492;
      SetFailureLocation(v41, 0, 14, -1073741492, 272);
      goto LABEL_140;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v102 = HvpGetCellFlat(BugCheckParameter3, v35, (unsigned int *)&v140);
    else
      v102 = HvpGetCellPaged(BugCheckParameter3, v35);
    v103 = v102;
    if ( !v102 )
    {
      v63 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 276);
      goto LABEL_140;
    }
    v115 = *(unsigned int *)(v102 + 44);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v116 = HvpGetCellFlat(BugCheckParameter3, v115, (unsigned int *)&v136);
    else
      v116 = HvpGetCellPaged(BugCheckParameter3, v115);
    v117 = v116;
    if ( !v116 )
    {
      v63 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 280);
      v71 = (unsigned int *)&v140;
      goto LABEL_138;
    }
    v118 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v63 = v118;
    if ( v118 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v118, 284);
      v132 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_483;
      goto LABEL_473;
    }
    v119 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v103 + 44), 0);
    v63 = v119;
    if ( v119 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v119, 288);
      v132 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_483;
      goto LABEL_473;
    }
    v120 = CmpKeySecurityIncrementReferenceCount(v117, BugCheckParameter3, *(_DWORD *)(v103 + 44), 1);
    v63 = v120;
    if ( v120 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v120, 292);
      v132 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
LABEL_483:
        HvpReleaseCellFlat(v132, (__int64)&v136);
        v71 = (unsigned int *)&v140;
        goto LABEL_138;
      }
LABEL_473:
      HvpReleaseCellPaged(v132, (unsigned int *)&v136);
      v71 = (unsigned int *)&v140;
      goto LABEL_138;
    }
    *(_DWORD *)(v25 + 44) = *(_DWORD *)(v103 + 44);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v136);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v136);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v140);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v140);
    v35 = a4;
    v147 = 1;
  }
  v43 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1896) + 16LL * v141 + 8);
  v44 = *(_DWORD *)(v43 + 28);
  if ( v44 + 1 < v44 )
  {
    v63 = -1073741492;
    v134 = 500;
    v73 = -1073741492;
    v74 = 1;
    v75 = v41;
LABEL_144:
    SetFailureLocation(v75, v74, 14, v73, v134);
    goto LABEL_140;
  }
  *(_DWORD *)(v43 + 28) = v44 + 1;
  if ( (*(_BYTE *)(v25 + 2) & 0x40) != 0 )
  {
    v63 = -1073741492;
    v147 = 1;
    if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
    {
      SetFailureLocation(v41, 0, 14, -1073741492, 648);
      goto LABEL_140;
    }
    v64 = a3;
    v104 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v63 = v104;
    if ( v104 < 0 )
    {
      SetFailureLocation(v41, 0, 14, v104, 652);
      goto LABEL_140;
    }
    *(_WORD *)(v25 + 2) &= ~0x40u;
    v61 = -1;
    *(_DWORD *)(v25 + 36) = 0;
    *(_DWORD *)(v25 + 40) = -1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v45 = v146;
    if ( v146 )
    {
      if ( (*(_BYTE *)(v25 + 13) & 3) == 1 )
      {
        v78 = 504;
        v61 = -1;
        goto LABEL_268;
      }
      v136 = 0LL;
      LOWORD(v141) = 0;
      HvpGetCellContextInitialize(&v136);
      HvpGetBinContextInitialize(&v141);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
        v46 = BitMapHeader;
      }
      else
      {
        if ( (v33 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (v33 >> 31) + BugCheckParameter3 + 280) || (v33 & 7) != 0 )
          goto LABEL_276;
        v46 = BitMapHeader;
        if ( !BitMapHeader || (v33 & 0x80000000) != 0 )
          goto LABEL_83;
        v47 = v33 >> 3;
        if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, v47) )
          goto LABEL_276;
        RtlClearBits(BitMapHeader, v47, 1u);
LABEL_83:
        v48 = HvpGetCellMap(BugCheckParameter3, v33);
        v49 = v48;
        if ( !v48 || HvpMapEntryIsDiscardable(v48) )
          goto LABEL_276;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v50 = HvpGetCellFlat(BugCheckParameter3, v33, (unsigned int *)&v136);
        else
          v50 = HvpGetCellPaged(BugCheckParameter3, v33);
        v51 = 0LL;
        v52 = v50;
        v17 = v50 == 0;
        v53 = (int *)(v50 - 4);
        if ( !v17 )
          v51 = v53;
        if ( v51 )
        {
          v54 = HvpMapEntryGetBinAddress(v52, v49, &v141, v51);
          v55 = (_DWORD)v51 - v54;
          v56 = -*v51;
          v58 = 0;
          if ( *v51 < 0 && v56 - 8 <= 0xFFFF8 )
          {
            v57 = *(unsigned int *)(v54 + 8);
            if ( v56 <= (unsigned __int64)(v57 - 32) && v55 - *v51 <= (unsigned int)v57 && v55 >= 0x20 )
              v58 = 1;
          }
        }
        else
        {
          v58 = 1;
        }
        if ( v51 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v136);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v136);
        }
        if ( !v58 )
        {
LABEL_276:
          v78 = 512;
          v61 = -1;
          goto LABEL_268;
        }
        v45 = v146;
      }
      v136 = 0xFFFFFFFFLL;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v59 = HvpGetCellFlat(BugCheckParameter3, v33, (unsigned int *)&v136);
      else
        v59 = HvpGetCellPaged(BugCheckParameter3, v33);
      v60 = v59;
      if ( !v59 )
      {
        v63 = -1073741670;
        SetFailureLocation(a7, 0, 14, -1073741670, 528);
        goto LABEL_140;
      }
      v61 = -1;
      v62 = 4LL * v45;
      if ( v62 > 0xFFFFFFFF || (unsigned int)v62 > -4 - *(_DWORD *)(v60 - 4) )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v136);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v136);
        v78 = 544;
        goto LABEL_267;
      }
      LODWORD(v133) = a3;
      v63 = CmpCheckValueList(
              BugCheckParameter3,
              (*(_BYTE *)(v25 + 2) & 0x10) != 0,
              v60,
              v45,
              v133,
              a2,
              v46,
              a7,
              &v144,
              (unsigned int *)&v144 + 1);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v136);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v136);
      if ( v63 == -2147483606 )
      {
        v147 = 1;
      }
      else if ( v63 < 0 )
      {
        if ( v63 != -1073741492 )
          goto LABEL_140;
        if ( a7 )
          *(_QWORD *)(a7 + 248) = v60;
        v78 = 560;
        v41 = a7;
        goto LABEL_269;
      }
    }
    else
    {
      v61 = -1;
    }
    v64 = a3;
    while ( !*(_DWORD *)(v25 + 36) )
    {
      if ( *(_DWORD *)(v25 + 40) == -1 )
      {
        v144 = 0LL;
        break;
      }
      v78 = 608;
LABEL_267:
      v41 = a7;
LABEL_268:
      v63 = -1073741492;
LABEL_269:
      v147 = 1;
      SetFailureLocation(v41, 1, 14, -1073741492, v78);
      if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(v41, 0, 14, -1073741492, 592);
        goto LABEL_140;
      }
      v64 = a3;
      v99 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v63 = v99;
      if ( v99 < 0 )
      {
        SetFailureLocation(v41, 0, 14, v99, 576);
        goto LABEL_140;
      }
      *(_DWORD *)(v25 + 40) = -1;
      *(_DWORD *)(v25 + 36) = 0;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    v65 = v137;
    if ( *(_DWORD *)(v25 + 60) < (unsigned int)v144 )
    {
      v147 = 1;
      v63 = -1073741492;
      if ( v137 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 610);
        goto LABEL_140;
      }
      v121 = HvpMarkCellDirty(BugCheckParameter3, v64, 0);
      v63 = v121;
      if ( v121 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v121, 612);
        goto LABEL_140;
      }
      *(_DWORD *)(v25 + 60) = v144;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( *(_DWORD *)(v25 + 64) < HIDWORD(v144) )
    {
      v147 = 1;
      v63 = -1073741492;
      if ( v65 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 614);
        goto LABEL_140;
      }
      v106 = HvpMarkCellDirty(BugCheckParameter3, v64, 0);
      v63 = v106;
      if ( v106 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v106, 616);
        goto LABEL_140;
      }
      *(_DWORD *)(v25 + 64) = HIDWORD(v144);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_115:
      if ( *(_DWORD *)(v25 + 60) != (_DWORD)v144 && (int)HvpMarkCellDirty(BugCheckParameter3, v64, 0) >= 0 )
        *(_DWORD *)(v25 + 60) = v144;
      if ( *(_DWORD *)(v25 + 64) != HIDWORD(v144) && (int)HvpMarkCellDirty(BugCheckParameter3, v64, 0) >= 0 )
        *(_DWORD *)(v25 + 64) = HIDWORD(v144);
    }
    else if ( !v65 )
    {
      goto LABEL_115;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v145);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v145);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v66 = HvpGetCellFlat(BugCheckParameter3, v64, v145);
  else
    v66 = HvpGetCellPaged(BugCheckParameter3, (unsigned int)v64);
  v67 = (_DWORD *)v66;
  if ( !v66 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 688);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v66;
  if ( v64 < 0 )
  {
    if ( !*(_DWORD *)(v66 + 20) )
      goto LABEL_126;
    v63 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, 704);
    goto LABEL_140;
  }
  if ( !*(_DWORD *)(v66 + 20) )
  {
LABEL_126:
    v68 = v67[8] != -1 || v67[6];
    if ( (a2 & 0x40000) != 0 && v68 )
    {
      v63 = -1073741492;
      goto LABEL_236;
    }
    v69 = (a2 & 2) != 0;
    if ( (a2 & 0xD) != 0 && v68 )
      v69 = 1;
    v70 = (_DWORD *)(BugCheckParameter3 + 220);
    if ( (a2 & 8) != 0 && *v70 < 4u || v69 )
    {
      v111 = HvpMarkCellDirty(BugCheckParameter3, v64, 0);
      v63 = v111;
      if ( v111 < 0 )
      {
        SetFailureLocation(a7, 0, 14, v111, 1056);
        goto LABEL_136;
      }
      v67[6] = 0;
      if ( (a2 & 4) != 0 && *v70 >= 4u )
        v61 = -1163005939;
      v67[8] = v61;
    }
    v63 = v147 != 0 ? 0x8000002A : 0;
    goto LABEL_136;
  }
  if ( (*(_BYTE *)(v66 + 13) & 3) == 1 )
  {
    v63 = -1073741492;
    v147 = 1;
    v90 = 712;
    goto LABEL_208;
  }
  if ( !HvIsCellAllocated(BugCheckParameter3, *(_DWORD *)(v66 + 28)) )
  {
    v63 = -1073741492;
    v147 = 1;
    v90 = 720;
    goto LABEL_208;
  }
  v79 = (unsigned int)v67[7];
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v80 = HvpGetCellFlat(BugCheckParameter3, v79, v138);
  else
    v80 = HvpGetCellPaged(BugCheckParameter3, v79);
  v142 = (__int16 *)v80;
  if ( !v80 )
  {
    v63 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 736);
    goto LABEL_140;
  }
  if ( (unsigned int)(-4 - *(_DWORD *)(v80 - 4)) < 8
    || (CmpGetIndexElementSize(v80),
        IndexElementSize = CmpGetIndexElementSize(v81),
        (unsigned __int64)(unsigned int)(v83 * IndexElementSize) + 4 > v85) )
  {
    v63 = -1073741492;
    v147 = 1;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v138);
    v90 = 752;
    v142 = 0LL;
    goto LABEL_208;
  }
  if ( !(_WORD)v83 )
  {
    v63 = -1073741492;
    v147 = 1;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v138);
    v90 = 784;
    v142 = 0LL;
    goto LABEL_208;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 256) = v84;
  v86 = *v84;
  if ( *v84 == 26988 || ((v86 - 26220) & 0xFDFF) == 0 )
  {
    if ( (unsigned __int16)v84[1] != v67[5] )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v138);
      v90 = 816;
      v142 = 0LL;
      goto LABEL_208;
    }
    v87 = CmpCheckLeaf(BugCheckParameter3, a7);
    v63 = v87;
    if ( v87 == -2147483606 )
    {
      v147 = 1;
    }
    else if ( v87 < 0 )
    {
      if ( v87 == -1073741492 )
      {
        v147 = 1;
        v90 = 832;
        goto LABEL_208;
      }
      goto LABEL_137;
    }
LABEL_175:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v138);
    v142 = 0LL;
    goto LABEL_126;
  }
  if ( v86 != 26994 )
  {
    v63 = -1073741492;
    v147 = 1;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v138);
    v90 = 992;
    v142 = 0LL;
    goto LABEL_208;
  }
  v122 = 0;
  v123 = 0;
  while ( 2 )
  {
    if ( v123 >= (unsigned __int16)v84[1] )
    {
      if ( v67[5] == v122 )
      {
        v64 = a3;
        v61 = -1;
        goto LABEL_175;
      }
      v63 = -1073741492;
      v147 = 1;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v138);
      v64 = a3;
      v142 = 0LL;
      v90 = 960;
      v61 = -1;
      goto LABEL_208;
    }
    if ( a7 )
      *(_DWORD *)(a7 + 264) = v123;
    v124 = &v84[2 * v123];
    if ( !HvIsCellAllocated(BugCheckParameter3, *((_DWORD *)v124 + 1)) )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v138);
      v64 = a3;
      v142 = 0LL;
      v90 = 848;
      v61 = -1;
      goto LABEL_208;
    }
    v125 = *((unsigned int *)v124 + 1);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v126 = HvpGetCellFlat(BugCheckParameter3, v125, v143);
    else
      v126 = HvpGetCellPaged(BugCheckParameter3, v125);
    v127 = (_WORD *)v126;
    if ( !v126 )
    {
      v63 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 864);
      goto LABEL_137;
    }
    if ( (unsigned int)(-4 - *(_DWORD *)(v126 - 4)) < 8
      || (CmpGetIndexElementSize(v126),
          v128 = CmpGetIndexElementSize(v127),
          (unsigned __int64)(unsigned int)(v129 * v128) + 4 > v130) )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v143);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v143);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v138);
      v64 = a3;
      v142 = 0LL;
      v90 = 880;
      v61 = -1;
      goto LABEL_208;
    }
    if ( !(_WORD)v129 )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v143);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v143);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v138);
      v64 = a3;
      v142 = 0LL;
      v90 = 912;
      v61 = -1;
      goto LABEL_208;
    }
    if ( *v127 != 26988 && ((*v127 - 26220) & 0xFDFF) != 0 )
    {
      v63 = -1073741492;
      v147 = 1;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v143);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v143);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v138);
      v64 = a3;
      v142 = 0LL;
      v90 = 944;
      v61 = -1;
      goto LABEL_208;
    }
    v131 = CmpCheckLeaf(BugCheckParameter3, a7);
    v63 = v131;
    if ( v131 == -2147483606 )
    {
      v147 = 1;
      goto LABEL_440;
    }
    if ( v131 >= 0 )
    {
LABEL_440:
      v122 += (unsigned __int16)v127[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v143);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v143);
      v84 = v142;
      ++v123;
      continue;
    }
    break;
  }
  if ( v131 != -1073741492 )
    goto LABEL_137;
  v147 = 1;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v143);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v143);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v138);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v138);
  v64 = a3;
  v142 = 0LL;
  v90 = 952;
  v61 = -1;
LABEL_208:
  SetFailureLocation(a7, 1, 14, v63, v90);
  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
  {
LABEL_236:
    SetFailureLocation(a7, 0, 14, v63, 1040);
    goto LABEL_136;
  }
  SetFailureLocation(a7, 1, 14, v63, 1008);
  v91 = HvpMarkCellDirty(BugCheckParameter3, v64, 0);
  v63 = v91;
  if ( v91 >= 0 )
  {
    v67[5] = 0;
    v67[7] = -1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    goto LABEL_126;
  }
  SetFailureLocation(a7, 0, 14, v91, 1024);
LABEL_136:
  if ( v142 )
  {
LABEL_137:
    v71 = v138;
LABEL_138:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v71);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v71);
  }
LABEL_140:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v145);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v145);
  return (unsigned int)v63;
}
