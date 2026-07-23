/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0
 * Callers:
 *     CmpMarkIndexDirtyInStorageType @ 0x1408C3EF4 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpRemoveSubKeyFromList @ 0x1408C41C0 (CmpRemoveSubKeyFromList.c)
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  int v6; // eax
  unsigned __int16 *v7; // r13
  unsigned __int16 *v8; // r14
  __int16 *v9; // r12
  ULONG_PTR v10; // r11
  __int64 v11; // rbx
  _DWORD *v12; // rdi
  __int16 v13; // cx
  __int16 *v14; // r15
  unsigned int v15; // edi
  unsigned int n; // eax
  unsigned int v17; // eax
  unsigned int v18; // r10d
  unsigned __int16 v19; // r8
  unsigned int v20; // r9d
  int v21; // r11d
  unsigned int v22; // eax
  int v23; // r11d
  unsigned __int16 v24; // r8
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v26; // r8
  unsigned int v27; // r9d
  int v28; // edx
  unsigned int v29; // r10d
  unsigned int v30; // edx
  bool v31; // zf
  unsigned int v32; // edx
  __int64 CellFlat; // rax
  const WCHAR *v34; // r13
  WCHAR *v35; // r12
  unsigned __int16 v36; // r15
  unsigned __int16 k; // r14
  int v38; // edi
  WCHAR v39; // si
  unsigned int v40; // edi
  unsigned int v41; // edx
  __int64 CellPaged; // rax
  const WCHAR *v43; // r13
  unsigned __int16 v44; // di
  WCHAR *v45; // r12
  unsigned __int16 v46; // r14
  unsigned __int16 i; // di
  int v48; // esi
  __int16 v49; // cx
  __int16 *v50; // r13
  unsigned int v51; // r14d
  unsigned int ii; // ecx
  WCHAR v53; // r15
  unsigned int v54; // esi
  unsigned __int16 *v55; // rbx
  unsigned __int16 *v56; // rcx
  unsigned int v57; // eax
  unsigned int v58; // edi
  __int64 v59; // r15
  WCHAR v60; // cx
  int v61; // esi
  int v62; // ebx
  int v63; // eax
  int v64; // ebx
  unsigned __int16 *v65; // r15
  unsigned int v66; // r8d
  int v67; // edx
  _DWORD *v68; // r14
  __int16 v69; // cx
  unsigned int v70; // r8d
  __int16 *v71; // r13
  unsigned int i1; // ecx
  unsigned __int16 *v73; // rdi
  unsigned int v74; // eax
  unsigned int v75; // ebx
  WCHAR v76; // cx
  int v77; // edi
  int v78; // esi
  int v79; // eax
  int v80; // esi
  unsigned int v81; // edi
  int v82; // ecx
  ULONG_PTR v84; // rbx
  unsigned int v85; // edx
  __int64 v86; // rax
  WCHAR *v87; // r12
  unsigned __int16 v88; // bx
  WCHAR *v89; // r15
  unsigned __int16 v90; // r14
  unsigned __int16 mm; // bx
  int v92; // edi
  bool v93; // sf
  ULONG_PTR v94; // rdi
  unsigned int v95; // edx
  __int64 v96; // rax
  WCHAR *v97; // r12
  unsigned __int16 v98; // r14
  WCHAR *v99; // r15
  unsigned __int16 jj; // di
  int v101; // ebx
  WCHAR v102; // si
  unsigned int v103; // ebx
  int v104; // eax
  ULONG_PTR v105; // rsi
  __int64 v106; // rax
  WCHAR *v107; // r12
  unsigned __int16 v108; // r14
  WCHAR *v109; // r15
  unsigned __int16 i2; // di
  int v111; // ebx
  WCHAR v112; // si
  unsigned int v113; // ebx
  WCHAR v114; // si
  unsigned int v115; // edi
  LONG v116; // eax
  LONG v117; // eax
  LONG v118; // eax
  LONG v119; // eax
  LONG v120; // eax
  unsigned __int8 *v121; // r12
  unsigned __int16 v122; // r15
  unsigned __int16 m; // si
  int v124; // edi
  WCHAR v125; // r14
  unsigned int v126; // edi
  unsigned __int8 *v127; // r12
  unsigned __int16 v128; // r15
  unsigned __int16 j; // di
  int v130; // esi
  WCHAR v131; // r14
  unsigned int v132; // esi
  unsigned __int8 *v133; // r15
  unsigned __int16 v134; // r14
  unsigned __int16 kk; // si
  int v136; // ebx
  unsigned __int8 *v137; // r15
  unsigned __int16 v138; // r14
  unsigned __int16 i3; // si
  int v140; // ebx
  WCHAR v141; // di
  unsigned int v142; // ebx
  unsigned __int8 *v143; // r15
  unsigned __int16 v144; // r14
  unsigned __int16 nn; // si
  int v146; // edi
  WCHAR v147; // di
  unsigned int v148; // ebx
  WCHAR v149; // di
  unsigned int v150; // ebx
  unsigned int v151; // [rsp+30h] [rbp-40h]
  unsigned int v152; // [rsp+34h] [rbp-3Ch]
  unsigned int v153[2]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v154; // [rsp+40h] [rbp-30h] BYREF
  int v155; // [rsp+44h] [rbp-2Ch]
  __int16 *v156; // [rsp+48h] [rbp-28h]
  __int64 v158; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int16 *v159; // [rsp+B0h] [rbp+40h]
  unsigned __int16 *v160; // [rsp+B8h] [rbp+48h]

  v160 = a4;
  v159 = a3;
  v158 = (__int64)a2;
  v6 = (unsigned __int16)a2[1];
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v151 = 0;
  v10 = BugCheckParameter3;
  v152 = v6 - 1;
  v11 = (unsigned int)(v6 - 1) >> 1;
  if ( !(_WORD)v6 )
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v12 = a5;
    v13 = *v9;
    *a5 = -1;
    if ( v13 != 26220 && v13 != 26732 )
    {
      v31 = (*(_BYTE *)(v10 + 140) & 1) == 0;
      v41 = *(_DWORD *)&v9[2 * v11 + 2];
      v153[0] = -1;
      v153[1] = 0;
      if ( v31 )
        CellPaged = HvpGetCellPaged(v10);
      else
        CellPaged = HvpGetCellFlat(v10, v41, v153);
      if ( !CellPaged )
        goto LABEL_198;
      v43 = (const WCHAR *)(CellPaged + 76);
      if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
      {
        if ( !v160 )
        {
          v44 = *v8;
          v45 = (WCHAR *)*((_QWORD *)v8 + 1);
          v46 = *(_WORD *)(CellPaged + 72);
          for ( i = v44 >> 1; i && v46; --i )
          {
            v53 = *v45++;
            v54 = *(unsigned __int8 *)v43;
            v43 = (const WCHAR *)((char *)v43 + 1);
            if ( v53 != (_WORD)v54 )
            {
              if ( v53 >= 0x61u )
              {
                if ( v53 > 0x7Au )
                  v53 = RtlUpcaseUnicodeChar(v53);
                else
                  v53 -= 32;
              }
              if ( v54 >= 0x61 )
              {
                if ( v54 > 0x7A )
                  LOWORD(v54) = RtlUpcaseUnicodeChar(v54);
                else
                  LOWORD(v54) = v54 - 32;
              }
              v48 = v53 - (unsigned __int16)v54;
              if ( v48 )
                goto LABEL_77;
            }
            --v46;
          }
          v48 = i - v46;
LABEL_77:
          v9 = (__int16 *)v158;
          v12 = a5;
          goto LABEL_78;
        }
        v117 = CmpCompareTwoCompressedNames(*((_QWORD *)v160 + 1), *v160, v43, *(unsigned __int16 *)(CellPaged + 72));
      }
      else
      {
        if ( v160 )
        {
          v127 = (unsigned __int8 *)*((_QWORD *)v160 + 1);
          v128 = *v160;
          for ( j = *(_WORD *)(CellPaged + 72) >> 1; j && v128; --j )
          {
            v131 = *v43++;
            v132 = *v127++;
            if ( v131 != (_WORD)v132 )
            {
              if ( v131 >= 0x61u )
              {
                if ( v131 > 0x7Au )
                  v131 = RtlUpcaseUnicodeChar(v131);
                else
                  v131 -= 32;
              }
              if ( v132 >= 0x61 )
              {
                if ( v132 > 0x7A )
                  LOWORD(v132) = RtlUpcaseUnicodeChar(v132);
                else
                  LOWORD(v132) = v132 - 32;
              }
              v130 = v131 - (unsigned __int16)v132;
              if ( v130 )
                goto LABEL_310;
            }
            --v128;
          }
          v130 = j - v128;
LABEL_310:
          v9 = (__int16 *)v158;
          v48 = -v130;
          v12 = a5;
LABEL_78:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v153);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v153);
          if ( !v48 )
          {
            v28 = 0;
            *v12 = *(_DWORD *)&v9[2 * v11 + 2];
            goto LABEL_36;
          }
          if ( v48 < 0 )
            goto LABEL_82;
          goto LABEL_57;
        }
        v117 = RtlCompareUnicodeStrings(
                 *((PCWCH *)v8 + 1),
                 (unsigned __int64)*v8 >> 1,
                 v43,
                 (unsigned __int64)*(unsigned __int16 *)(CellPaged + 72) >> 1,
                 1u);
        v12 = a5;
      }
      v48 = v117;
      goto LABEL_78;
    }
    v14 = &v9[4 * v11 + 2];
    v156 = v14;
    if ( v13 != 26220 )
    {
LABEL_44:
      v31 = (*(_BYTE *)(v10 + 140) & 1) == 0;
      v32 = *(_DWORD *)&v9[4 * v11 + 2];
      v154 = -1;
      v155 = 0;
      if ( v31 )
        CellFlat = HvpGetCellPaged(v10);
      else
        CellFlat = HvpGetCellFlat(v10, v32, &v154);
      if ( !CellFlat )
        goto LABEL_198;
      v34 = (const WCHAR *)(CellFlat + 76);
      if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
      {
        if ( !v160 )
        {
          v35 = (WCHAR *)*((_QWORD *)v8 + 1);
          v36 = *(_WORD *)(CellFlat + 72);
          for ( k = *v8 >> 1; k && v36; --k )
          {
            v39 = *v35++;
            v40 = *(unsigned __int8 *)v34;
            v34 = (const WCHAR *)((char *)v34 + 1);
            if ( v39 != (_WORD)v40 )
            {
              if ( v39 >= 0x61u )
              {
                if ( v39 > 0x7Au )
                  v39 = RtlUpcaseUnicodeChar(v39);
                else
                  v39 -= 32;
              }
              if ( v40 >= 0x61 )
              {
                if ( v40 > 0x7A )
                  LOWORD(v40) = RtlUpcaseUnicodeChar(v40);
                else
                  LOWORD(v40) = v40 - 32;
              }
              v38 = v39 - (unsigned __int16)v40;
              if ( v38 )
                goto LABEL_52;
            }
            --v36;
          }
          v38 = k - v36;
LABEL_52:
          v9 = (__int16 *)v158;
          v14 = v156;
          goto LABEL_53;
        }
        v116 = CmpCompareTwoCompressedNames(*((_QWORD *)v160 + 1), *v160, v34, *(unsigned __int16 *)(CellFlat + 72));
      }
      else
      {
        if ( v160 )
        {
          v121 = (unsigned __int8 *)*((_QWORD *)v160 + 1);
          v122 = *v160;
          for ( m = *(_WORD *)(CellFlat + 72) >> 1; m && v122; --m )
          {
            v125 = *v34++;
            v126 = *v121++;
            if ( v125 != (_WORD)v126 )
            {
              if ( v125 >= 0x61u )
              {
                if ( v125 > 0x7Au )
                  v125 = RtlUpcaseUnicodeChar(v125);
                else
                  v125 -= 32;
              }
              if ( v126 >= 0x61 )
              {
                if ( v126 > 0x7A )
                  LOWORD(v126) = RtlUpcaseUnicodeChar(v126);
                else
                  LOWORD(v126) = v126 - 32;
              }
              v124 = v125 - (unsigned __int16)v126;
              if ( v124 )
                goto LABEL_296;
            }
            --v122;
          }
          v124 = m - v122;
LABEL_296:
          v9 = (__int16 *)v158;
          v38 = -v124;
          v14 = v156;
          goto LABEL_53;
        }
        v116 = RtlCompareUnicodeStrings(
                 *((PCWCH *)v8 + 1),
                 (unsigned __int64)*v8 >> 1,
                 v34,
                 (unsigned __int64)*(unsigned __int16 *)(CellFlat + 72) >> 1,
                 1u);
      }
      v38 = v116;
LABEL_53:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v154);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v154);
      if ( !v38 )
      {
        v28 = 0;
        *a5 = *(_DWORD *)v14;
LABEL_36:
        v8 = v159;
        v7 = v160;
        goto LABEL_37;
      }
      if ( v38 < 0 )
      {
LABEL_82:
        v28 = -1;
        goto LABEL_36;
      }
LABEL_57:
      v28 = 1;
      goto LABEL_36;
    }
    v15 = 4;
    for ( n = 0; n < 4; ++n )
    {
      if ( !*((_BYTE *)v14 + n + 4) )
      {
        v15 = n;
        break;
      }
    }
    if ( v7 )
      v17 = *v7;
    else
      v17 = *v8 >> 1;
    v18 = 0;
    if ( v17 < v15 )
      v15 = v17;
    while ( 1 )
    {
      if ( v18 >= v15 )
      {
        v10 = BugCheckParameter3;
        goto LABEL_44;
      }
      v19 = v7 ? *(unsigned __int8 *)(*((_QWORD *)v7 + 1) + v18) : *(_WORD *)(*((_QWORD *)v8 + 1) + 2LL * v18);
      v20 = *((unsigned __int8 *)&v9[4 * v11 + 4] + v18);
      if ( v19 >= 0x61u )
      {
        if ( v19 <= 0x7Au )
        {
          v21 = v19 - 32;
        }
        else
        {
          Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( Flink && v24 >= 0xC0u )
            v24 += *((_WORD *)&Flink->Flink
                   + (v24 & 0xF)
                   + (unsigned int)*((unsigned __int16 *)&Flink->Flink
                                   + ((v24 >> 4) & 0xF)
                                   + (unsigned int)*((unsigned __int16 *)&Flink->Flink + ((unsigned __int64)v24 >> 8))));
          v21 = v24;
        }
      }
      else
      {
        v21 = v19;
      }
      if ( v20 >= 0x61 )
      {
        if ( v20 <= 0x7A )
        {
          v22 = v20 - 32;
        }
        else
        {
          v26 = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( v26 && (unsigned __int16)v27 >= 0xC0u )
            LOWORD(v27) = *((_WORD *)&v26->Flink
                          + (v27 & 0xF)
                          + *((unsigned __int16 *)&v26->Flink + LOWORD(v26->Flink) + (v27 >> 4)))
                        + v27;
          v22 = (unsigned __int16)v27;
        }
      }
      else
      {
        v22 = v20;
      }
      v23 = v21 - v22;
      if ( v23 )
        break;
      ++v18;
    }
    v28 = 1;
    if ( v23 <= 0 )
      v28 = -1;
LABEL_37:
    if ( !v28 )
    {
      *a6 = v11;
      return 0LL;
    }
    if ( v28 < 0 )
    {
      v30 = v151;
      v29 = v11;
      v152 = v11;
    }
    else
    {
      v29 = v152;
      v30 = v11;
      v151 = v11;
    }
    if ( v29 - v30 <= 1 )
      break;
    v10 = BugCheckParameter3;
    v11 = v30 + ((v29 - v30) >> 1);
  }
  v49 = *v9;
  *a5 = -1;
  if ( v49 == 26220 || v49 == 26732 )
  {
    v50 = &v9[4 * v30];
    if ( v49 == 26220 )
    {
      v51 = 4;
      for ( ii = 0; ii < 4; ++ii )
      {
        if ( !*((_BYTE *)v50 + ii + 8) )
        {
          v51 = ii;
          break;
        }
      }
      v55 = v160;
      v56 = v159;
      if ( v160 )
        v57 = *v160;
      else
        v57 = *v159 >> 1;
      v58 = 0;
      if ( v57 < v51 )
        v51 = v57;
      v59 = 8LL * v30;
      while ( 1 )
      {
        if ( v58 >= v51 )
        {
          v30 = v151;
          goto LABEL_171;
        }
        v60 = v55 ? *(unsigned __int8 *)(*((_QWORD *)v55 + 1) + v58) : *(_WORD *)(*((_QWORD *)v56 + 1) + 2LL * v58);
        v61 = *((unsigned __int8 *)v9 + v58 + v59 + 8);
        if ( v60 >= 0x61u )
          v62 = v60 <= 0x7Au ? v60 - 32 : RtlUpcaseUnicodeChar(v60);
        else
          v62 = v60;
        if ( (unsigned __int8)v61 >= 0x61u )
          v63 = (unsigned __int8)v61 <= 0x7Au ? v61 - 32 : RtlUpcaseUnicodeChar(v61);
        else
          v63 = v61;
        v64 = v62 - v63;
        if ( v64 )
          break;
        v56 = v159;
        ++v58;
        v55 = v160;
      }
      v65 = v159;
      v66 = v151;
      v67 = 1;
      if ( v64 <= 0 )
        v67 = -1;
      goto LABEL_122;
    }
    v55 = v160;
LABEL_171:
    v94 = BugCheckParameter3;
    v154 = -1;
    v155 = 0;
    v95 = *(_DWORD *)&v9[4 * v30 + 2];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v96 = HvpGetCellFlat(BugCheckParameter3, v95, &v154);
    else
      v96 = HvpGetCellPaged(BugCheckParameter3);
    if ( !v96 )
      goto LABEL_198;
    v97 = (WCHAR *)(v96 + 76);
    if ( (*(_BYTE *)(v96 + 2) & 0x20) != 0 )
    {
      if ( !v55 )
      {
        v98 = *(_WORD *)(v96 + 72);
        v99 = (WCHAR *)*((_QWORD *)v159 + 1);
        for ( jj = *v159 >> 1; jj && v98; --jj )
        {
          v102 = *v99++;
          v103 = *(unsigned __int8 *)v97;
          v97 = (WCHAR *)((char *)v97 + 1);
          if ( v102 != (_WORD)v103 )
          {
            if ( v102 >= 0x61u )
            {
              if ( v102 > 0x7Au )
                v102 = RtlUpcaseUnicodeChar(v102);
              else
                v102 -= 32;
            }
            if ( v103 >= 0x61 )
            {
              if ( v103 > 0x7A )
                LOWORD(v103) = RtlUpcaseUnicodeChar(v103);
              else
                LOWORD(v103) = v103 - 32;
            }
            v101 = v102 - (unsigned __int16)v103;
            if ( v101 )
              goto LABEL_179;
          }
          --v98;
        }
        v101 = jj - v98;
LABEL_179:
        v65 = v159;
        v94 = BugCheckParameter3;
        goto LABEL_180;
      }
      v118 = CmpCompareTwoCompressedNames(*((_QWORD *)v55 + 1), *v55, v96 + 76, *(unsigned __int16 *)(v96 + 72));
      v65 = v159;
    }
    else
    {
      if ( v55 )
      {
        v133 = (unsigned __int8 *)*((_QWORD *)v55 + 1);
        v134 = *v55;
        for ( kk = *(_WORD *)(v96 + 72) >> 1; kk && v134; --kk )
        {
          v141 = *v97++;
          v142 = *v133++;
          if ( v141 != (_WORD)v142 )
          {
            if ( v141 >= 0x61u )
            {
              if ( v141 > 0x7Au )
                v141 = RtlUpcaseUnicodeChar(v141);
              else
                v141 -= 32;
            }
            if ( v142 >= 0x61 )
            {
              if ( v142 > 0x7A )
                LOWORD(v142) = RtlUpcaseUnicodeChar(v142);
              else
                LOWORD(v142) = v142 - 32;
            }
            v136 = v141 - (unsigned __int16)v142;
            if ( v136 )
              goto LABEL_324;
          }
          --v134;
        }
        v136 = kk - v134;
LABEL_324:
        v65 = v159;
        v101 = -v136;
        v94 = BugCheckParameter3;
LABEL_180:
        if ( (*(_BYTE *)(v94 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v94, &v154);
        else
          HvpReleaseCellPaged(v94, &v154);
        v9 = (__int16 *)v158;
        v66 = v151;
        v93 = v101 < 0;
        if ( v101 )
        {
LABEL_183:
          if ( v93 )
            v67 = -1;
          else
            v67 = 1;
        }
        else
        {
          v67 = 0;
          *a5 = *((_DWORD *)v50 + 1);
        }
        goto LABEL_122;
      }
      v65 = v159;
      v118 = RtlCompareUnicodeStrings(
               *((PCWCH *)v159 + 1),
               (unsigned __int64)*v159 >> 1,
               (PCWCH)(v96 + 76),
               (unsigned __int64)*(unsigned __int16 *)(v96 + 72) >> 1,
               1u);
    }
    v101 = v118;
    goto LABEL_180;
  }
  v84 = BugCheckParameter3;
  v154 = -1;
  v155 = 0;
  v85 = *(_DWORD *)&v9[2 * v30 + 2];
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v86 = HvpGetCellFlat(BugCheckParameter3, v85, &v154);
  else
    v86 = HvpGetCellPaged(BugCheckParameter3);
  if ( !v86 )
    goto LABEL_198;
  v87 = (WCHAR *)(v86 + 76);
  if ( (*(_BYTE *)(v86 + 2) & 0x20) != 0 )
  {
    if ( !v7 )
    {
      v88 = *v8;
      v89 = (WCHAR *)*((_QWORD *)v8 + 1);
      v90 = *(_WORD *)(v86 + 72);
      for ( mm = v88 >> 1; mm && v90; --mm )
      {
        v114 = *v89++;
        v115 = *(unsigned __int8 *)v87;
        v87 = (WCHAR *)((char *)v87 + 1);
        if ( v114 != (_WORD)v115 )
        {
          if ( v114 >= 0x61u )
          {
            if ( v114 > 0x7Au )
              v114 = RtlUpcaseUnicodeChar(v114);
            else
              v114 -= 32;
          }
          if ( v115 >= 0x61 )
          {
            if ( v115 > 0x7A )
              LOWORD(v115) = RtlUpcaseUnicodeChar(v115);
            else
              LOWORD(v115) = v115 - 32;
          }
          v92 = v114 - (unsigned __int16)v115;
          if ( v92 )
            goto LABEL_165;
        }
        --v90;
      }
      v92 = mm - v90;
LABEL_165:
      v84 = BugCheckParameter3;
      goto LABEL_166;
    }
    v120 = CmpCompareTwoCompressedNames(*((_QWORD *)v7 + 1), *v7, v86 + 76, *(unsigned __int16 *)(v86 + 72));
LABEL_292:
    v92 = v120;
    goto LABEL_166;
  }
  if ( !v7 )
  {
    v120 = RtlCompareUnicodeStrings(
             *((PCWCH *)v8 + 1),
             (unsigned __int64)*v8 >> 1,
             (PCWCH)(v86 + 76),
             (unsigned __int64)*(unsigned __int16 *)(v86 + 72) >> 1,
             1u);
    goto LABEL_292;
  }
  v143 = (unsigned __int8 *)*((_QWORD *)v7 + 1);
  v144 = *v7;
  for ( nn = *(_WORD *)(v86 + 72) >> 1; nn && v144; --nn )
  {
    v149 = *v87++;
    v150 = *v143++;
    if ( v149 != (_WORD)v150 )
    {
      if ( v149 >= 0x61u )
      {
        if ( v149 > 0x7Au )
          v149 = RtlUpcaseUnicodeChar(v149);
        else
          v149 -= 32;
      }
      if ( v150 >= 0x61 )
      {
        if ( v150 > 0x7A )
          LOWORD(v150) = RtlUpcaseUnicodeChar(v150);
        else
          LOWORD(v150) = v150 - 32;
      }
      v146 = v149 - (unsigned __int16)v150;
      if ( v146 )
        goto LABEL_342;
    }
    --v144;
  }
  v146 = nn - v144;
LABEL_342:
  v84 = BugCheckParameter3;
  v92 = -v146;
LABEL_166:
  if ( (*(_BYTE *)(v84 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v84, &v154);
  else
    HvpReleaseCellPaged(v84, &v154);
  v9 = (__int16 *)v158;
  v93 = v92 < 0;
  if ( v92 )
  {
    v65 = v159;
    v66 = v151;
    goto LABEL_183;
  }
  v66 = v151;
  v67 = 0;
  v65 = v159;
  *a5 = *(_DWORD *)(v158 + 4LL * v151 + 4);
LABEL_122:
  if ( v67 )
  {
    if ( v67 < 0 )
    {
      *a6 = v66;
      return 3221225524LL;
    }
    else
    {
      v68 = a5;
      v69 = *v9;
      *a5 = -1;
      if ( v69 != 26220 && v69 != 26732 )
      {
        v81 = v152;
        v104 = CmpDoCompareKeyName(BugCheckParameter3, v65, v160);
        if ( v104 == 2 )
          goto LABEL_198;
        if ( !v104 )
        {
          *v68 = *(_DWORD *)&v9[2 * v152 + 2];
          v82 = 0;
          goto LABEL_151;
        }
LABEL_229:
        v82 = v104;
LABEL_151:
        *a6 = v81;
        return v82 != 0 ? 0xC0000034 : 0;
      }
      v70 = v152;
      v71 = &v9[4 * v152];
      if ( v69 == 26220 )
      {
        for ( i1 = 0; i1 < 4; ++i1 )
        {
          if ( !*((_BYTE *)v71 + i1 + 8) )
            goto LABEL_131;
        }
        i1 = 4;
LABEL_131:
        v73 = v160;
        if ( v160 )
          v74 = *v160;
        else
          v74 = *v65 >> 1;
        v75 = 0;
        if ( v74 < i1 )
          i1 = v74;
        LODWORD(v158) = i1;
        while ( 1 )
        {
          if ( v75 >= i1 )
          {
            v70 = v152;
            goto LABEL_201;
          }
          v76 = v73 ? *(unsigned __int8 *)(*((_QWORD *)v73 + 1) + v75) : *(_WORD *)(*((_QWORD *)v65 + 1) + 2LL * v75);
          v77 = *((unsigned __int8 *)&v9[4 * v152 + 4] + v75);
          if ( v76 >= 0x61u )
            v78 = v76 <= 0x7Au ? v76 - 32 : RtlUpcaseUnicodeChar(v76);
          else
            v78 = v76;
          if ( (unsigned __int8)v77 >= 0x61u )
            v79 = (unsigned __int8)v77 <= 0x7Au ? v77 - 32 : RtlUpcaseUnicodeChar(v77);
          else
            v79 = v77;
          v80 = v78 - v79;
          if ( v80 )
            break;
          v73 = v160;
          ++v75;
          i1 = v158;
        }
        v81 = v152;
        v82 = 1;
        if ( v80 <= 0 )
          v82 = -1;
        goto LABEL_151;
      }
      v73 = v160;
LABEL_201:
      v105 = BugCheckParameter3;
      v158 = 0xFFFFFFFFLL;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v106 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)&v9[4 * v70 + 2], (unsigned int *)&v158);
      else
        v106 = HvpGetCellPaged(BugCheckParameter3);
      if ( v106 )
      {
        v107 = (WCHAR *)(v106 + 76);
        if ( (*(_BYTE *)(v106 + 2) & 0x20) != 0 )
        {
          if ( !v73 )
          {
            v108 = *(_WORD *)(v106 + 72);
            v109 = (WCHAR *)*((_QWORD *)v159 + 1);
            for ( i2 = *v159 >> 1; i2 && v108; --i2 )
            {
              v112 = *v109++;
              v113 = *(unsigned __int8 *)v107;
              v107 = (WCHAR *)((char *)v107 + 1);
              if ( v112 != (_WORD)v113 )
              {
                if ( v112 >= 0x61u )
                {
                  if ( v112 > 0x7Au )
                    v112 = RtlUpcaseUnicodeChar(v112);
                  else
                    v112 -= 32;
                }
                if ( v113 >= 0x61 )
                {
                  if ( v113 > 0x7A )
                    LOWORD(v113) = RtlUpcaseUnicodeChar(v113);
                  else
                    LOWORD(v113) = v113 - 32;
                }
                v111 = v112 - (unsigned __int16)v113;
                if ( v111 )
                  goto LABEL_209;
              }
              --v108;
            }
            v111 = i2 - v108;
LABEL_209:
            v105 = BugCheckParameter3;
            goto LABEL_210;
          }
          v119 = CmpCompareTwoCompressedNames(*((_QWORD *)v73 + 1), *v73, v106 + 76, *(unsigned __int16 *)(v106 + 72));
        }
        else
        {
          if ( v73 )
          {
            v137 = (unsigned __int8 *)*((_QWORD *)v73 + 1);
            v138 = *v73;
            for ( i3 = *(_WORD *)(v106 + 72) >> 1; i3 && v138; --i3 )
            {
              v147 = *v107++;
              v148 = *v137++;
              if ( v147 != (_WORD)v148 )
              {
                if ( v147 >= 0x61u )
                {
                  if ( v147 > 0x7Au )
                    v147 = RtlUpcaseUnicodeChar(v147);
                  else
                    v147 -= 32;
                }
                if ( v148 >= 0x61 )
                {
                  if ( v148 > 0x7A )
                    LOWORD(v148) = RtlUpcaseUnicodeChar(v148);
                  else
                    LOWORD(v148) = v148 - 32;
                }
                v140 = v147 - (unsigned __int16)v148;
                if ( v140 )
                  goto LABEL_328;
              }
              --v138;
            }
            v140 = i3 - v138;
LABEL_328:
            v105 = BugCheckParameter3;
            v111 = -v140;
            goto LABEL_210;
          }
          v119 = RtlCompareUnicodeStrings(
                   *((PCWCH *)v65 + 1),
                   (unsigned __int64)*v65 >> 1,
                   (PCWCH)(v106 + 76),
                   (unsigned __int64)*(unsigned __int16 *)(v106 + 72) >> 1,
                   1u);
          v105 = BugCheckParameter3;
        }
        v111 = v119;
LABEL_210:
        if ( (*(_BYTE *)(v105 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v105, &v158);
        else
          HvpReleaseCellPaged(v105, &v158);
        if ( v111 )
        {
          if ( v111 < 0 )
            v104 = -1;
          else
            v104 = 1;
        }
        else
        {
          *a5 = *((_DWORD *)v71 + 1);
          v104 = 0;
        }
        v81 = v152;
        goto LABEL_229;
      }
LABEL_198:
      *a5 = -1;
      *a6 = 0x80000000;
      return 3221225626LL;
    }
  }
  else
  {
    *a6 = v66;
    return 0LL;
  }
}
