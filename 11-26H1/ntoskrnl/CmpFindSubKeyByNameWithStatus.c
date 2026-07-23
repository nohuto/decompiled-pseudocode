/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x1408DDA50
 * Callers:
 *     CmpMarkCurrentValueDirty @ 0x1408524A8 (CmpMarkCurrentValueDirty.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpFindControlSet @ 0x14086542C (CmpFindControlSet.c)
 *     CmpWalkUnicodeStringPath @ 0x1408665A8 (CmpWalkUnicodeStringPath.c)
 *     CmpFindPathByNameEx @ 0x1408B7F30 (CmpFindPathByNameEx.c)
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 *     CmpFindSubKeyByName @ 0x140AC518C (CmpFindSubKeyByName.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140B531EC (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        _DWORD *a4)
{
  unsigned __int16 *v4; // r14
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int16 *CellFlat; // rax
  __int16 *v11; // rdi
  WCHAR *v12; // r15
  int v13; // r12d
  unsigned __int16 v14; // ax
  unsigned __int16 i; // bx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rax
  const WCHAR *v19; // r8
  WCHAR *v20; // rdx
  unsigned __int16 v21; // ax
  unsigned __int16 j; // si
  LONG v23; // r14d
  WCHAR v24; // r15
  unsigned int v25; // r14d
  __int64 v26; // rax
  int v28; // eax
  __int64 v29; // rbx
  __int16 v30; // cx
  __int16 *v31; // r12
  unsigned int v32; // edx
  unsigned int k; // ecx
  unsigned int v34; // r10d
  unsigned int v35; // esi
  unsigned int v36; // r8d
  unsigned int v37; // r9d
  unsigned int v38; // r11d
  unsigned int v39; // eax
  int v40; // r11d
  unsigned __int64 v41; // r8
  struct _LIST_ENTRY *v42; // r11
  struct _LIST_ENTRY *v43; // r8
  unsigned int v44; // r9d
  int v45; // ecx
  int v46; // r9d
  unsigned int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  const WCHAR *v51; // r8
  WCHAR *v52; // rax
  unsigned __int16 v53; // r12
  unsigned __int16 m; // r14
  LONG v55; // esi
  WCHAR v56; // r15
  unsigned int v57; // esi
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  const WCHAR *v61; // r8
  WCHAR *v62; // rax
  unsigned __int16 v63; // r12
  unsigned __int16 n; // si
  LONG v65; // r14d
  __int16 v66; // cx
  WCHAR *v67; // r14
  unsigned int v68; // edx
  unsigned int kk; // ecx
  WCHAR v70; // r15
  unsigned int v71; // r14d
  unsigned __int16 *v72; // rsi
  unsigned int v73; // ebx
  unsigned int v74; // r15d
  __int64 v75; // r12
  unsigned int v76; // edx
  int v77; // esi
  unsigned int v78; // r14d
  int v79; // eax
  int v80; // r14d
  int v81; // ecx
  __int16 v82; // cx
  int v83; // r8d
  WCHAR *v84; // rbx
  unsigned int v85; // edx
  unsigned int mm; // ecx
  unsigned __int16 *v87; // rsi
  unsigned int v88; // r14d
  unsigned int v89; // r15d
  unsigned int v90; // edx
  int v91; // ebx
  unsigned int v92; // esi
  int v93; // eax
  int v94; // esi
  __int64 CellPaged; // rax
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rax
  const WCHAR *v99; // r8
  unsigned __int16 v100; // r15
  WCHAR *v101; // r12
  unsigned __int16 ii; // bx
  LONG v103; // esi
  __int64 v104; // rdx
  __int64 v105; // rax
  const WCHAR *v106; // r8
  WCHAR *v107; // r12
  unsigned __int16 v108; // r15
  unsigned __int16 jj; // bx
  LONG v110; // esi
  WCHAR v111; // r14
  unsigned int v112; // esi
  __int64 v113; // rdx
  __int64 v114; // rax
  const WCHAR *v115; // r8
  WCHAR *v116; // r12
  unsigned __int16 v117; // r15
  unsigned __int16 nn; // bx
  LONG v119; // esi
  WCHAR v120; // r14
  unsigned int v121; // esi
  WCHAR v122; // r14
  unsigned int v123; // esi
  unsigned __int16 *v124; // r9
  unsigned __int64 v125; // r10
  unsigned __int64 v126; // rdx
  struct _LIST_ENTRY *Flink; // r11
  __int64 v128; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v129[2]; // [rsp+38h] [rbp-61h] BYREF
  WCHAR *v130; // [rsp+40h] [rbp-59h]
  const WCHAR *v131; // [rsp+48h] [rbp-51h]
  unsigned int v132[2]; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v133[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v134[2]; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v135[2]; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v136[2]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v137[2]; // [rsp+78h] [rbp-21h] BYREF
  int v138; // [rsp+80h] [rbp-19h]
  WCHAR *v139; // [rsp+88h] [rbp-11h]
  WCHAR *v140; // [rsp+90h] [rbp-9h]
  __m128i v141; // [rsp+98h] [rbp-1h]
  unsigned __int16 v142; // [rsp+100h] [rbp+67h]
  int v143; // [rsp+100h] [rbp+67h]
  const WCHAR *v144; // [rsp+100h] [rbp+67h]
  __int64 v145; // [rsp+108h] [rbp+6Fh]

  v145 = a2;
  v129[0] = -1;
  v129[1] = 0;
  v4 = a3;
  LODWORD(v128) = 0;
  v6 = 0LL;
  v7 = -1073741772;
  *a4 = -1;
  while ( 1 )
  {
    v138 = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(BugCheckParameter3 + 216) )
      return v7;
    if ( *(_DWORD *)(a2 + 4 * v6 + 20) )
      break;
LABEL_21:
    v6 = (unsigned int)(v138 + 1);
  }
  v8 = *(unsigned int *)(a2 + 4 * v6 + 28);
  v9 = (_BYTE *)(BugCheckParameter3 + 140);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (__int16 *)HvpGetCellFlat(BugCheckParameter3, v8, v129);
  else
    CellFlat = (__int16 *)HvpGetCellPaged(BugCheckParameter3, v8);
  v11 = CellFlat;
  if ( !CellFlat )
    return 3221225626LL;
  v12 = (WCHAR *)(BugCheckParameter3 + 140);
  v130 = (WCHAR *)(BugCheckParameter3 + 140);
  if ( *CellFlat != 26994 )
    goto LABEL_8;
  if ( (int)CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)CellFlat, v4, 0LL, (int *)&v128) < 0 )
  {
    v7 = -1073741670;
    goto LABEL_53;
  }
  if ( (*v9 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v129);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v129);
  if ( (_DWORD)v128 == -1 )
  {
LABEL_20:
    a2 = v145;
    goto LABEL_21;
  }
  if ( (*v9 & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v128, v129);
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3, (unsigned int)v128);
  v11 = (__int16 *)CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  v12 = (WCHAR *)(BugCheckParameter3 + 140);
  v130 = (WCHAR *)(BugCheckParameter3 + 140);
LABEL_8:
  if ( *v11 == 26732 )
  {
    v13 = 0;
    v14 = _mm_cvtsi128_si32(*(__m128i *)v4);
    v141 = *(__m128i *)v4;
    if ( v14 >= 2u )
    {
      v124 = (unsigned __int16 *)v141.m128i_i64[1];
      v125 = (unsigned __int64)v14 >> 1;
      do
      {
        LODWORD(v126) = *v124;
        if ( (unsigned int)v126 >= 0x61 )
        {
          if ( (unsigned int)v126 > 0x7A )
          {
            Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( Flink && (unsigned __int16)v126 >= 0xC0u )
              LOWORD(v126) = *((_WORD *)&Flink->Flink
                             + (v126 & 0xF)
                             + *((unsigned __int16 *)&Flink->Flink
                               + ((unsigned __int8)v126 >> 4)
                               + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v126 >> 8))))
                           + v126;
          }
          else
          {
            LOWORD(v126) = v126 - 32;
          }
        }
        ++v124;
        v13 = (unsigned __int16)v126 + 37 * v13;
        --v125;
      }
      while ( v125 );
    }
    LODWORD(v128) = -1;
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int16)v11[1] )
      {
        v7 = -1073741772;
        goto LABEL_15;
      }
      if ( v13 == *(_DWORD *)&v11[4 * i + 4] )
      {
        v16 = (*v9 & 1) == 0;
        v17 = *(unsigned int *)&v11[4 * i + 2];
        v132[0] = -1;
        v132[1] = 0;
        if ( v16 )
          v18 = HvpGetCellPaged(BugCheckParameter3, v17);
        else
          v18 = HvpGetCellFlat(BugCheckParameter3, v17, v132);
        if ( !v18 )
          goto LABEL_205;
        v19 = (const WCHAR *)(v18 + 76);
        if ( (*(_BYTE *)(v18 + 2) & 0x20) != 0 )
        {
          v20 = (WCHAR *)*((_QWORD *)v4 + 1);
          v21 = *(_WORD *)(v18 + 72);
          for ( j = *v4 >> 1; ; --j )
          {
            v142 = v21;
            if ( !j || !v21 )
              break;
            v24 = *v20++;
            v25 = *(unsigned __int8 *)v19;
            v19 = (const WCHAR *)((char *)v19 + 1);
            v130 = v20;
            v131 = v19;
            if ( v24 != (_WORD)v25 )
            {
              if ( v24 >= 0x61u )
              {
                if ( v24 > 0x7Au )
                  v24 = RtlUpcaseUnicodeChar(v24);
                else
                  v24 -= 32;
              }
              if ( v25 >= 0x61 )
              {
                if ( v25 > 0x7A )
                  LOWORD(v25) = RtlUpcaseUnicodeChar(v25);
                else
                  LOWORD(v25) = v25 - 32;
              }
              v23 = v24 - (unsigned __int16)v25;
              if ( v23 )
                goto LABEL_29;
              v21 = v142;
              v20 = v130;
              v19 = v131;
            }
            --v21;
          }
          v23 = j - v21;
LABEL_29:
          v9 = (_BYTE *)(BugCheckParameter3 + 140);
        }
        else
        {
          v23 = RtlCompareUnicodeStrings(
                  *((PCWCH *)v4 + 1),
                  (unsigned __int64)*v4 >> 1,
                  v19,
                  (unsigned __int64)*(unsigned __int16 *)(v18 + 72) >> 1,
                  1u);
        }
        if ( (*v9 & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v132);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v132);
        if ( !v23 )
        {
          v26 = i;
          v7 = 0;
          LODWORD(v128) = *(_DWORD *)&v11[4 * v26 + 2];
          goto LABEL_15;
        }
        v4 = a3;
      }
    }
  }
  v28 = (unsigned __int16)v11[1];
  LODWORD(v131) = 0;
  v143 = v28 - 1;
  v29 = (unsigned int)(v28 - 1) >> 1;
  if ( !(_WORD)v28 )
  {
    v7 = -1073741772;
    LODWORD(v128) = -1;
    goto LABEL_15;
  }
  while ( 2 )
  {
    v30 = *v11;
    LODWORD(v128) = -1;
    if ( v30 == 26220 || v30 == 26732 )
    {
      v31 = &v11[4 * v29 + 2];
      v141.m128i_i64[0] = (__int64)v31;
      if ( v30 == 26220 )
      {
        v32 = 4;
        for ( k = 0; k < 4; ++k )
        {
          if ( !*((_BYTE *)v31 + k + 4) )
          {
            v32 = k;
            break;
          }
        }
        v34 = 0;
        v35 = *v4 >> 1;
        if ( v35 >= v32 )
          v35 = v32;
        while ( 1 )
        {
          if ( v34 >= v35 )
          {
            v4 = a3;
            goto LABEL_92;
          }
          v36 = *(unsigned __int16 *)(*((_QWORD *)a3 + 1) + 2LL * v34);
          v37 = *((unsigned __int8 *)&v11[4 * v29 + 4] + v34);
          if ( v36 >= 0x61 )
          {
            if ( v36 <= 0x7A )
            {
              v38 = v36 - 32;
            }
            else
            {
              v42 = PsGetCurrentServerSiloGlobals()[75].Flink;
              if ( v42 && (unsigned __int16)v41 >= 0xC0u )
                LOWORD(v41) = *((_WORD *)&v42->Flink
                              + (v41 & 0xF)
                              + *((unsigned __int16 *)&v42->Flink
                                + ((unsigned __int8)v41 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&v42->Flink + (v41 >> 8))))
                            + v41;
              v38 = (unsigned __int16)v41;
            }
          }
          else
          {
            v38 = *(unsigned __int16 *)(*((_QWORD *)a3 + 1) + 2LL * v34);
          }
          if ( v37 >= 0x61 )
          {
            if ( v37 <= 0x7A )
            {
              v39 = v37 - 32;
            }
            else
            {
              v43 = PsGetCurrentServerSiloGlobals()[75].Flink;
              if ( v43 && (unsigned __int16)v44 >= 0xC0u )
                LOWORD(v44) = *((_WORD *)&v43->Flink
                              + (v44 & 0xF)
                              + *((unsigned __int16 *)&v43->Flink + LOWORD(v43->Flink) + (v44 >> 4)))
                            + v44;
              v39 = (unsigned __int16)v44;
            }
          }
          else
          {
            v39 = v37;
          }
          v40 = v38 - v39;
          if ( v40 )
            break;
          ++v34;
        }
        v45 = 1;
        if ( v40 <= 0 )
          v45 = -1;
      }
      else
      {
LABEL_92:
        v16 = (*(_BYTE *)v12 & 1) == 0;
        v48 = *(unsigned int *)&v11[4 * v29 + 2];
        v134[0] = -1;
        v134[1] = 0;
        if ( v16 )
          v49 = HvpGetCellPaged(BugCheckParameter3, v48);
        else
          v49 = HvpGetCellFlat(BugCheckParameter3, v48, v134);
        v50 = v49;
        if ( !v49 )
          goto LABEL_204;
        v51 = (const WCHAR *)(v49 + 76);
        if ( (*(_BYTE *)(v49 + 2) & 0x20) != 0 )
        {
          v52 = (WCHAR *)*((_QWORD *)v4 + 1);
          v53 = *(_WORD *)(v50 + 72);
          for ( m = *v4 >> 1; m && v53; --m )
          {
            v56 = *v52++;
            v57 = *(unsigned __int8 *)v51;
            v51 = (const WCHAR *)((char *)v51 + 1);
            v140 = v52;
            v139 = (WCHAR *)v51;
            if ( v56 != (_WORD)v57 )
            {
              if ( v56 >= 0x61u )
              {
                if ( v56 > 0x7Au )
                  v56 = RtlUpcaseUnicodeChar(v56);
                else
                  v56 -= 32;
              }
              if ( v57 >= 0x61 )
              {
                if ( v57 > 0x7A )
                  LOWORD(v57) = RtlUpcaseUnicodeChar(v57);
                else
                  LOWORD(v57) = v57 - 32;
              }
              v55 = v56 - (unsigned __int16)v57;
              if ( v55 )
                goto LABEL_99;
              v52 = v140;
              v51 = v139;
            }
            --v53;
          }
          v55 = m - v53;
LABEL_99:
          v12 = v130;
          v31 = (__int16 *)v141.m128i_i64[0];
        }
        else
        {
          v55 = RtlCompareUnicodeStrings(
                  *((PCWCH *)v4 + 1),
                  (unsigned __int64)*v4 >> 1,
                  v51,
                  (unsigned __int64)*(unsigned __int16 *)(v49 + 72) >> 1,
                  1u);
        }
        if ( (*(_BYTE *)v12 & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v134);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v134);
        if ( v55 )
        {
          if ( v55 < 0 )
            goto LABEL_130;
          goto LABEL_104;
        }
        v45 = 0;
        LODWORD(v128) = *(_DWORD *)v31;
      }
    }
    else
    {
      v16 = (*(_BYTE *)v12 & 1) == 0;
      v58 = *(unsigned int *)&v11[2 * v29 + 2];
      v133[0] = -1;
      v133[1] = 0;
      if ( v16 )
        v59 = HvpGetCellPaged(BugCheckParameter3, v58);
      else
        v59 = HvpGetCellFlat(BugCheckParameter3, v58, v133);
      v60 = v59;
      if ( !v59 )
        goto LABEL_204;
      v61 = (const WCHAR *)(v59 + 76);
      if ( (*(_BYTE *)(v59 + 2) & 0x20) != 0 )
      {
        v62 = (WCHAR *)*((_QWORD *)v4 + 1);
        v63 = *(_WORD *)(v60 + 72);
        for ( n = *v4 >> 1; n && v63; --n )
        {
          v70 = *v62++;
          v71 = *(unsigned __int8 *)v61;
          v61 = (const WCHAR *)((char *)v61 + 1);
          v139 = v62;
          v140 = (WCHAR *)v61;
          if ( v70 != (_WORD)v71 )
          {
            if ( v70 >= 0x61u )
            {
              if ( v70 > 0x7Au )
                v70 = RtlUpcaseUnicodeChar(v70);
              else
                v70 -= 32;
            }
            if ( v71 >= 0x61 )
            {
              if ( v71 > 0x7A )
                LOWORD(v71) = RtlUpcaseUnicodeChar(v71);
              else
                LOWORD(v71) = v71 - 32;
            }
            v65 = v70 - (unsigned __int16)v71;
            if ( v65 )
              goto LABEL_125;
            v62 = v139;
            v61 = v140;
          }
          --v63;
        }
        v65 = n - v63;
LABEL_125:
        v12 = v130;
      }
      else
      {
        v65 = RtlCompareUnicodeStrings(
                *((PCWCH *)v4 + 1),
                (unsigned __int64)*v4 >> 1,
                v61,
                (unsigned __int64)*(unsigned __int16 *)(v59 + 72) >> 1,
                1u);
      }
      if ( (*(_BYTE *)v12 & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v133);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v133);
      if ( v65 )
      {
        if ( v65 < 0 )
        {
LABEL_130:
          v45 = -1;
          goto LABEL_85;
        }
LABEL_104:
        v45 = 1;
        goto LABEL_85;
      }
      v45 = 0;
      LODWORD(v128) = *(_DWORD *)&v11[2 * v29 + 2];
    }
LABEL_85:
    if ( !v45 )
      goto LABEL_277;
    if ( v45 < 0 )
    {
      v47 = (unsigned int)v131;
      v46 = v29;
      v143 = v29;
    }
    else
    {
      v46 = v143;
      v47 = v29;
      LODWORD(v131) = v29;
    }
    if ( v46 - v47 > 1 )
    {
      v4 = a3;
      v29 = v47 + ((v46 - v47) >> 1);
      continue;
    }
    break;
  }
  v66 = *v11;
  LODWORD(v128) = -1;
  if ( v66 != 26220 && v66 != 26732 )
  {
    v16 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v135[0] = -1;
    v135[1] = 0;
    v97 = *(unsigned int *)&v11[2 * v47 + 2];
    if ( v16 )
      v98 = HvpGetCellPaged(BugCheckParameter3, v97);
    else
      v98 = HvpGetCellFlat(BugCheckParameter3, v97, v135);
    if ( !v98 )
      goto LABEL_204;
    v99 = (const WCHAR *)(v98 + 76);
    if ( (*(_BYTE *)(v98 + 2) & 0x20) != 0 )
    {
      v100 = *(_WORD *)(v98 + 72);
      v101 = (WCHAR *)*((_QWORD *)a3 + 1);
      for ( ii = *a3 >> 1; ii && v100; --ii )
      {
        v122 = *v101++;
        v123 = *(unsigned __int8 *)v99;
        v99 = (const WCHAR *)((char *)v99 + 1);
        v141.m128i_i64[0] = (__int64)v99;
        if ( v122 != (_WORD)v123 )
        {
          if ( v122 >= 0x61u )
          {
            if ( v122 > 0x7Au )
              v122 = RtlUpcaseUnicodeChar(v122);
            else
              v122 -= 32;
          }
          if ( v123 >= 0x61 )
          {
            if ( v123 > 0x7A )
              LOWORD(v123) = RtlUpcaseUnicodeChar(v123);
            else
              LOWORD(v123) = v123 - 32;
          }
          v103 = v122 - (unsigned __int16)v123;
          if ( v103 )
            goto LABEL_216;
          v99 = (const WCHAR *)v141.m128i_i64[0];
        }
        --v100;
      }
      v103 = ii - v100;
    }
    else
    {
      v103 = RtlCompareUnicodeStrings(
               *((PCWCH *)a3 + 1),
               (unsigned __int64)*a3 >> 1,
               v99,
               (unsigned __int64)*(unsigned __int16 *)(v98 + 72) >> 1,
               1u);
    }
LABEL_216:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v135);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v135);
    if ( !v103 )
    {
      v81 = 0;
      LODWORD(v128) = *(_DWORD *)&v11[2 * (unsigned int)v131 + 2];
      goto LABEL_167;
    }
    if ( v103 < 0 )
      goto LABEL_220;
    goto LABEL_234;
  }
  v67 = (WCHAR *)&v11[4 * v47 + 2];
  v130 = v67;
  if ( v66 != 26220 )
  {
    v72 = a3;
LABEL_222:
    v16 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v136[0] = -1;
    v136[1] = 0;
    v104 = *(unsigned int *)&v11[4 * v47 + 2];
    if ( v16 )
      v105 = HvpGetCellPaged(BugCheckParameter3, v104);
    else
      v105 = HvpGetCellFlat(BugCheckParameter3, v104, v136);
    if ( !v105 )
      goto LABEL_204;
    v106 = (const WCHAR *)(v105 + 76);
    if ( (*(_BYTE *)(v105 + 2) & 0x20) != 0 )
    {
      v107 = (WCHAR *)*((_QWORD *)v72 + 1);
      v108 = *(_WORD *)(v105 + 72);
      for ( jj = *v72 >> 1; jj && v108; --jj )
      {
        v111 = *v107++;
        v112 = *(unsigned __int8 *)v106;
        v106 = (const WCHAR *)((char *)v106 + 1);
        v141.m128i_i64[0] = (__int64)v106;
        if ( v111 != (_WORD)v112 )
        {
          if ( v111 >= 0x61u )
          {
            if ( v111 > 0x7Au )
              v111 = RtlUpcaseUnicodeChar(v111);
            else
              v111 -= 32;
          }
          if ( v112 >= 0x61 )
          {
            if ( v112 > 0x7A )
              LOWORD(v112) = RtlUpcaseUnicodeChar(v112);
            else
              LOWORD(v112) = v112 - 32;
          }
          v110 = v111 - (unsigned __int16)v112;
          if ( v110 )
            goto LABEL_229;
          v106 = (const WCHAR *)v141.m128i_i64[0];
        }
        --v108;
      }
      v110 = jj - v108;
LABEL_229:
      v67 = v130;
    }
    else
    {
      v110 = RtlCompareUnicodeStrings(
               *((PCWCH *)v72 + 1),
               (unsigned __int64)*v72 >> 1,
               v106,
               (unsigned __int64)*(unsigned __int16 *)(v105 + 72) >> 1,
               1u);
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v136);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v136);
    if ( !v110 )
    {
      v81 = 0;
      LODWORD(v128) = *(_DWORD *)v67;
      goto LABEL_167;
    }
    if ( v110 < 0 )
    {
LABEL_220:
      v81 = -1;
      goto LABEL_167;
    }
LABEL_234:
    v81 = 1;
    goto LABEL_167;
  }
  v68 = 4;
  for ( kk = 0; kk < 4; ++kk )
  {
    if ( !*((_BYTE *)v67 + kk + 4) )
    {
      v68 = kk;
      break;
    }
  }
  v72 = a3;
  v73 = 0;
  v74 = *a3 >> 1;
  v75 = 8LL * v47;
  if ( v74 >= v68 )
    v74 = v68;
  while ( 2 )
  {
    if ( v73 >= v74 )
    {
      v67 = v130;
      v47 = (unsigned int)v131;
      goto LABEL_222;
    }
    v76 = *(unsigned __int16 *)(*((_QWORD *)v72 + 1) + 2LL * v73);
    v77 = *((unsigned __int8 *)v11 + v73 + v75 + 8);
    if ( v76 >= 0x61 )
    {
      if ( v76 <= 0x7A )
        v78 = v76 - 32;
      else
        v78 = RtlUpcaseUnicodeChar(v76);
    }
    else
    {
      v78 = v76;
    }
    if ( (unsigned __int8)v77 >= 0x61u )
    {
      if ( (unsigned __int8)v77 <= 0x7Au )
        v79 = v77 - 32;
      else
        v79 = RtlUpcaseUnicodeChar(v77);
    }
    else
    {
      v79 = v77;
    }
    v80 = v78 - v79;
    if ( !v80 )
    {
      v72 = a3;
      ++v73;
      continue;
    }
    break;
  }
  v81 = 1;
  if ( v80 <= 0 )
    v81 = -1;
LABEL_167:
  if ( !v81 )
  {
LABEL_277:
    v7 = 0;
    goto LABEL_15;
  }
  if ( v81 < 0 )
  {
    v7 = -1073741772;
    goto LABEL_15;
  }
  v82 = *v11;
  LODWORD(v128) = -1;
  if ( v82 != 26220 && v82 != 26732 )
  {
    v96 = CmpDoCompareKeyName(BugCheckParameter3, a3, 0LL, *(_DWORD *)&v11[2 * v143 + 2]);
    if ( v96 == 2 )
      goto LABEL_204;
    if ( !v96 )
      LODWORD(v128) = *(_DWORD *)&v11[2 * v143 + 2];
LABEL_199:
    v7 = v96 != 0 ? 0xC0000034 : 0;
    goto LABEL_15;
  }
  v83 = v143;
  v84 = (WCHAR *)&v11[4 * v143 + 2];
  v130 = v84;
  if ( v82 == 26220 )
  {
    v85 = 4;
    for ( mm = 0; mm < 4; ++mm )
    {
      if ( !*((_BYTE *)v84 + mm + 4) )
      {
        v85 = mm;
        break;
      }
    }
    v87 = a3;
    v88 = 0;
    v89 = *a3 >> 1;
    if ( v89 >= v85 )
      v89 = v85;
    while ( v88 < v89 )
    {
      v90 = *(unsigned __int16 *)(*((_QWORD *)v87 + 1) + 2LL * v88);
      v91 = *((unsigned __int8 *)&v11[4 * v143 + 4] + v88);
      if ( v90 >= 0x61 )
      {
        if ( v90 <= 0x7A )
          v92 = v90 - 32;
        else
          v92 = RtlUpcaseUnicodeChar(v90);
      }
      else
      {
        v92 = *(unsigned __int16 *)(*((_QWORD *)v87 + 1) + 2LL * v88);
      }
      if ( (unsigned __int8)v91 >= 0x61u )
      {
        if ( (unsigned __int8)v91 <= 0x7Au )
          v93 = v91 - 32;
        else
          v93 = RtlUpcaseUnicodeChar(v91);
      }
      else
      {
        v93 = v91;
      }
      v94 = v92 - v93;
      if ( v94 )
      {
        v96 = 1;
        if ( v94 <= 0 )
          v96 = -1;
        goto LABEL_199;
      }
      v87 = a3;
      ++v88;
    }
    v84 = v130;
    v83 = v143;
  }
  else
  {
    v87 = a3;
  }
  v16 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v137[0] = -1;
  v137[1] = 0;
  v113 = *(unsigned int *)&v11[4 * v83 + 2];
  if ( v16 )
    v114 = HvpGetCellPaged(BugCheckParameter3, v113);
  else
    v114 = HvpGetCellFlat(BugCheckParameter3, v113, v137);
  if ( v114 )
  {
    v115 = (const WCHAR *)(v114 + 76);
    if ( (*(_BYTE *)(v114 + 2) & 0x20) != 0 )
    {
      v116 = (WCHAR *)*((_QWORD *)v87 + 1);
      v117 = *(_WORD *)(v114 + 72);
      for ( nn = *v87 >> 1; nn && v117; --nn )
      {
        v120 = *v116++;
        v121 = *(unsigned __int8 *)v115;
        v115 = (const WCHAR *)((char *)v115 + 1);
        v144 = v115;
        if ( v120 != (_WORD)v121 )
        {
          if ( v120 >= 0x61u )
          {
            if ( v120 > 0x7Au )
              v120 = RtlUpcaseUnicodeChar(v120);
            else
              v120 -= 32;
          }
          if ( v121 >= 0x61 )
          {
            if ( v121 > 0x7A )
              LOWORD(v121) = RtlUpcaseUnicodeChar(v121);
            else
              LOWORD(v121) = v121 - 32;
          }
          v119 = v120 - (unsigned __int16)v121;
          if ( v119 )
            goto LABEL_256;
          v115 = v144;
        }
        --v117;
      }
      v119 = nn - v117;
LABEL_256:
      v84 = v130;
    }
    else
    {
      v119 = RtlCompareUnicodeStrings(
               *((PCWCH *)v87 + 1),
               (unsigned __int64)*v87 >> 1,
               v115,
               (unsigned __int64)*(unsigned __int16 *)(v114 + 72) >> 1,
               1u);
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v137);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v137);
    if ( v119 )
    {
      if ( v119 < 0 )
        v96 = -1;
      else
        v96 = 1;
    }
    else
    {
      v96 = 0;
      LODWORD(v128) = *(_DWORD *)v84;
    }
    goto LABEL_199;
  }
LABEL_204:
  LODWORD(v128) = -1;
LABEL_205:
  v7 = -1073741670;
LABEL_15:
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741772 )
  {
    if ( (_DWORD)v128 != -1 )
    {
      v7 = 0;
      *a4 = v128;
      goto LABEL_52;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v129);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v129);
    v4 = a3;
    goto LABEL_20;
  }
LABEL_52:
  if ( v11 )
  {
LABEL_53:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v129);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v129);
  }
  return v7;
}
