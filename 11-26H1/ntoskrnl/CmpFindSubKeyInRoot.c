/*
 * XREFs of CmpFindSubKeyInRoot @ 0x1408D8100
 * Callers:
 *     CmpMarkIndexDirtyInStorageType @ 0x1408C3EF4 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpRemoveSubKeyFromList @ 0x1408C41C0 (CmpRemoveSubKeyFromList.c)
 *     CmpSelectLeaf @ 0x1408C629C (CmpSelectLeaf.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpCompareInIndex @ 0x1408D8DA0 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        int *a5)
{
  unsigned int v5; // edi
  unsigned __int16 *v6; // rbx
  unsigned __int16 *v7; // rsi
  unsigned int v9; // r12d
  bool v10; // zf
  unsigned int v11; // edx
  _WORD *CellPaged; // rax
  _WORD *v13; // r12
  __int16 v14; // cx
  __int64 v15; // rdi
  unsigned int v16; // r15d
  unsigned int k; // eax
  unsigned int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // r14
  WCHAR v21; // cx
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // edx
  int *v27; // rbx
  __int16 v28; // ax
  unsigned int v29; // r14d
  unsigned int ii; // ecx
  unsigned __int16 *v31; // rsi
  unsigned int v32; // eax
  unsigned int v33; // edi
  WCHAR v34; // cx
  int v35; // ebx
  int v36; // esi
  int v37; // eax
  int v38; // esi
  __int64 v39; // rax
  WCHAR *v40; // r12
  WCHAR *v41; // r15
  unsigned __int16 v42; // r14
  unsigned __int16 m; // si
  int v44; // ebx
  int v45; // edx
  int v46; // esi
  __int64 v47; // rax
  __int64 v48; // rbx
  int *v49; // rax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  WCHAR v54; // di
  unsigned int v55; // ebx
  unsigned int v56; // edx
  __int64 CellFlat; // rax
  WCHAR *v58; // r12
  WCHAR *v59; // r15
  unsigned __int16 v60; // r14
  unsigned __int16 i; // di
  int v62; // ebx
  bool v63; // sf
  WCHAR v64; // si
  unsigned int v65; // ebx
  unsigned int v66; // edx
  __int64 v67; // rax
  const WCHAR *v68; // r12
  __int64 v69; // rsi
  WCHAR *v70; // r15
  unsigned __int16 jj; // di
  int v72; // ebx
  WCHAR v73; // r14
  unsigned int v74; // ebx
  __int64 v75; // rax
  int v76; // eax
  LONG v77; // eax
  LONG v78; // eax
  LONG v79; // eax
  unsigned __int8 *v80; // r15
  unsigned __int16 v81; // r14
  unsigned __int16 n; // di
  int v83; // ebx
  WCHAR v84; // si
  unsigned int v85; // ebx
  unsigned __int8 *v86; // r15
  unsigned __int16 v87; // r14
  unsigned __int16 kk; // di
  int v89; // ebx
  unsigned __int8 *v90; // r15
  unsigned __int16 v91; // r14
  unsigned __int16 j; // di
  int v93; // ebx
  WCHAR v94; // si
  unsigned int v95; // ebx
  WCHAR v96; // si
  unsigned int v97; // ebx
  unsigned int v98[2]; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v99; // [rsp+38h] [rbp-39h]
  _WORD *v100; // [rsp+40h] [rbp-31h]
  unsigned int v101[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v102[2]; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v103[2]; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v104; // [rsp+60h] [rbp-11h]
  unsigned int v105; // [rsp+64h] [rbp-Dh]
  unsigned int v106; // [rsp+68h] [rbp-9h]
  int *v107; // [rsp+70h] [rbp-1h]
  int v108; // [rsp+D0h] [rbp+5Fh]
  __int64 v109; // [rsp+D8h] [rbp+67h]

  v109 = a2;
  v5 = *(unsigned __int16 *)(a2 + 2) - 1;
  v98[0] = -1;
  v105 = v5;
  v6 = a4;
  v7 = a3;
  v98[1] = 0;
  v104 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v99 = v9 + ((v5 - v9) >> 1);
    v11 = *(_DWORD *)(a2 + 4LL * v99 + 4);
    v106 = v11;
    if ( v10 )
      CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
    else
      CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v11, v98);
    v13 = CellPaged;
    v100 = CellPaged;
    *a5 = -1;
    if ( !CellPaged )
      return 0x80000000;
    v14 = *CellPaged;
    v15 = (unsigned int)(unsigned __int16)CellPaged[1] - 1;
    v108 = (unsigned __int16)CellPaged[1] - 1;
    if ( *CellPaged != 26220 && v14 != 26732 )
    {
      v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v56 = *(_DWORD *)&CellPaged[2 * v15 + 2];
      v101[0] = -1;
      v101[1] = 0;
      if ( v10 )
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      else
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v56, v101);
      if ( !CellFlat )
        goto LABEL_189;
      v58 = (WCHAR *)(CellFlat + 76);
      if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
      {
        if ( !v6 )
        {
          v59 = (WCHAR *)*((_QWORD *)v7 + 1);
          v60 = *(_WORD *)(CellFlat + 72);
          for ( i = *v7 >> 1; i && v60; --i )
          {
            v64 = *v59++;
            v65 = *(unsigned __int8 *)v58;
            v58 = (WCHAR *)((char *)v58 + 1);
            if ( v64 != (_WORD)v65 )
            {
              if ( v64 >= 0x61u )
              {
                if ( v64 > 0x7Au )
                  v64 = RtlUpcaseUnicodeChar(v64);
                else
                  v64 -= 32;
              }
              if ( v65 >= 0x61 )
              {
                if ( v65 > 0x7A )
                  LOWORD(v65) = RtlUpcaseUnicodeChar(v65);
                else
                  LOWORD(v65) = v65 - 32;
              }
              v62 = v64 - (unsigned __int16)v65;
              if ( v62 )
                goto LABEL_124;
            }
            --v60;
          }
          v62 = i - v60;
LABEL_124:
          LODWORD(v15) = v108;
          goto LABEL_125;
        }
        v79 = CmpCompareTwoCompressedNames(
                *((_QWORD *)v6 + 1),
                *v6,
                CellFlat + 76,
                *(unsigned __int16 *)(CellFlat + 72));
      }
      else
      {
        if ( v6 )
        {
          v90 = (unsigned __int8 *)*((_QWORD *)v6 + 1);
          v91 = *v6;
          for ( j = *(_WORD *)(CellFlat + 72) >> 1; j && v91; --j )
          {
            v96 = *v58++;
            v97 = *v90++;
            if ( v96 != (_WORD)v97 )
            {
              if ( v96 >= 0x61u )
              {
                if ( v96 > 0x7Au )
                  v96 = RtlUpcaseUnicodeChar(v96);
                else
                  v96 -= 32;
              }
              if ( v97 >= 0x61 )
              {
                if ( v97 > 0x7A )
                  LOWORD(v97) = RtlUpcaseUnicodeChar(v97);
                else
                  LOWORD(v97) = v97 - 32;
              }
              v93 = v96 - (unsigned __int16)v97;
              if ( v93 )
                goto LABEL_241;
            }
            --v91;
          }
          v93 = j - v91;
LABEL_241:
          LODWORD(v15) = v108;
          v62 = -v93;
          goto LABEL_125;
        }
        v79 = RtlCompareUnicodeStrings(
                *((PCWCH *)v7 + 1),
                (unsigned __int64)*v7 >> 1,
                (PCWCH)(CellFlat + 76),
                (unsigned __int64)*(unsigned __int16 *)(CellFlat + 72) >> 1,
                1u);
        LODWORD(v15) = v108;
      }
      v62 = v79;
LABEL_125:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v101);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v101);
      v13 = v100;
      v63 = v62 < 0;
      if ( v62 )
      {
        v27 = a5;
        if ( v63 )
          v26 = -1;
        else
          v26 = 1;
      }
      else
      {
        v26 = 0;
        v27 = a5;
        *a5 = *(_DWORD *)&v100[2 * (unsigned int)v15 + 2];
      }
      goto LABEL_32;
    }
    v107 = (int *)&CellPaged[4 * v15 + 2];
    if ( v14 == 26220 )
    {
      v16 = 4;
      for ( k = 0; k < 4; ++k )
      {
        if ( !*((_BYTE *)&v13[4 * v15 + 4] + k) )
        {
          v16 = k;
          break;
        }
      }
      if ( v6 )
        v18 = *v6;
      else
        v18 = *v7 >> 1;
      v19 = 0;
      v20 = 8 * v15;
      if ( v18 < v16 )
        v16 = v18;
      while ( 1 )
      {
        if ( v19 >= v16 )
        {
          LODWORD(v15) = v108;
          v7 = a3;
          goto LABEL_59;
        }
        v21 = v6 ? *(unsigned __int8 *)(*((_QWORD *)v6 + 1) + v19) : *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v19);
        v22 = *((unsigned __int8 *)v13 + v19 + v20 + 8);
        if ( v21 >= 0x61u )
          v23 = v21 <= 0x7Au ? v21 - 32 : RtlUpcaseUnicodeChar(v21);
        else
          v23 = v21;
        if ( (unsigned __int8)v22 >= 0x61u )
          v24 = (unsigned __int8)v22 <= 0x7Au ? v22 - 32 : RtlUpcaseUnicodeChar(v22);
        else
          v24 = v22;
        v25 = v23 - v24;
        if ( v25 )
          break;
        v6 = a4;
        ++v19;
      }
      v26 = 1;
      if ( v25 <= 0 )
        v26 = -1;
      goto LABEL_31;
    }
LABEL_59:
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v102[0] = -1;
    v102[1] = 0;
    if ( v10 )
      v39 = HvpGetCellPaged(BugCheckParameter3);
    else
      v39 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)&v13[4 * (unsigned int)v15 + 2], v102);
    if ( !v39 )
      goto LABEL_189;
    v40 = (WCHAR *)(v39 + 76);
    if ( (*(_BYTE *)(v39 + 2) & 0x20) != 0 )
    {
      if ( !v6 )
      {
        v41 = (WCHAR *)*((_QWORD *)v7 + 1);
        v42 = *(_WORD *)(v39 + 72);
        for ( m = *v7 >> 1; m && v42; --m )
        {
          v54 = *v41++;
          v55 = *(unsigned __int8 *)v40;
          v40 = (WCHAR *)((char *)v40 + 1);
          if ( v54 != (_WORD)v55 )
          {
            if ( v54 >= 0x61u )
            {
              if ( v54 > 0x7Au )
                v54 = RtlUpcaseUnicodeChar(v54);
              else
                v54 -= 32;
            }
            if ( v55 >= 0x61 )
            {
              if ( v55 > 0x7A )
                LOWORD(v55) = RtlUpcaseUnicodeChar(v55);
              else
                LOWORD(v55) = v55 - 32;
            }
            v44 = v54 - (unsigned __int16)v55;
            if ( v44 )
              goto LABEL_67;
          }
          --v42;
        }
        v44 = m - v42;
        goto LABEL_67;
      }
      v77 = CmpCompareTwoCompressedNames(*((_QWORD *)v6 + 1), *v6, v39 + 76, *(unsigned __int16 *)(v39 + 72));
    }
    else
    {
      if ( v6 )
      {
        v80 = (unsigned __int8 *)*((_QWORD *)v6 + 1);
        v81 = *v6;
        for ( n = *(_WORD *)(v39 + 72) >> 1; n && v81; --n )
        {
          v84 = *v40++;
          v85 = *v80++;
          if ( v84 != (_WORD)v85 )
          {
            if ( v84 >= 0x61u )
            {
              if ( v84 > 0x7Au )
                v84 = RtlUpcaseUnicodeChar(v84);
              else
                v84 -= 32;
            }
            if ( v85 >= 0x61 )
            {
              if ( v85 > 0x7A )
                LOWORD(v85) = RtlUpcaseUnicodeChar(v85);
              else
                LOWORD(v85) = v85 - 32;
            }
            v83 = v84 - (unsigned __int16)v85;
            if ( v83 )
              goto LABEL_222;
          }
          --v81;
        }
        v83 = n - v81;
LABEL_222:
        v44 = -v83;
        goto LABEL_67;
      }
      v77 = RtlCompareUnicodeStrings(
              *((PCWCH *)v7 + 1),
              (unsigned __int64)*v7 >> 1,
              (PCWCH)(v39 + 76),
              (unsigned __int64)*(unsigned __int16 *)(v39 + 72) >> 1,
              1u);
    }
    v44 = v77;
LABEL_67:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v102);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v102);
    v13 = v100;
    if ( v44 )
    {
      v26 = 1;
      if ( v44 < 0 )
        v26 = -1;
LABEL_31:
      v27 = a5;
      goto LABEL_32;
    }
    v26 = 0;
    v27 = a5;
    *a5 = *v107;
LABEL_32:
    if ( !v26 )
      break;
    if ( v26 >= 0 )
    {
      v9 = v99;
      v104 = v99;
      v5 = v105;
      goto LABEL_54;
    }
    v28 = *v13;
    *a5 = -1;
    if ( v28 == 26220 )
    {
      v29 = 4;
      for ( ii = 0; ii < 4; ++ii )
      {
        if ( !*((_BYTE *)v13 + ii + 8) )
        {
          v29 = ii;
          break;
        }
      }
      v31 = a4;
      if ( a4 )
        v32 = *a4;
      else
        v32 = *a3 >> 1;
      v33 = 0;
      if ( v32 < v29 )
        v29 = v32;
      while ( v33 < v29 )
      {
        if ( v31 )
          v34 = *(unsigned __int8 *)(*((_QWORD *)v31 + 1) + v33);
        else
          v34 = *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v33);
        v35 = *((unsigned __int8 *)v13 + v33 + 8);
        if ( v34 >= 0x61u )
        {
          if ( v34 <= 0x7Au )
            v36 = v34 - 32;
          else
            v36 = RtlUpcaseUnicodeChar(v34);
        }
        else
        {
          v36 = v34;
        }
        if ( (unsigned __int8)v35 >= 0x61u )
        {
          if ( (unsigned __int8)v35 <= 0x7Au )
            v37 = v35 - 32;
          else
            v37 = RtlUpcaseUnicodeChar(v35);
        }
        else
        {
          v37 = v35;
        }
        v38 = v36 - v37;
        if ( v38 )
        {
          v45 = 1;
          if ( v38 <= 0 )
            v45 = -1;
          goto LABEL_79;
        }
        v31 = a4;
        ++v33;
      }
    }
    else
    {
      if ( v28 != 26732 )
      {
        v52 = CmpDoCompareKeyName(BugCheckParameter3, a3, a4);
        v45 = v52;
        v27 = a5;
        if ( v52 == 2 )
          goto LABEL_99;
        if ( !v52 )
          *a5 = *((_DWORD *)v13 + 1);
        goto LABEL_80;
      }
      v31 = a4;
    }
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v66 = *((_DWORD *)v13 + 1);
    v103[0] = -1;
    v103[1] = 0;
    if ( v10 )
      v67 = HvpGetCellPaged(BugCheckParameter3);
    else
      v67 = HvpGetCellFlat(BugCheckParameter3, v66, v103);
    if ( !v67 )
      goto LABEL_189;
    v68 = (const WCHAR *)(v67 + 76);
    if ( (*(_BYTE *)(v67 + 2) & 0x20) != 0 )
    {
      if ( v31 )
      {
        v78 = CmpCompareTwoCompressedNames(*((_QWORD *)v31 + 1), *v31, v67 + 76, *(unsigned __int16 *)(v67 + 72));
        goto LABEL_214;
      }
      v69 = *(unsigned __int16 *)(v67 + 72);
      v70 = (WCHAR *)*((_QWORD *)a3 + 1);
      for ( jj = *a3 >> 1; jj && (_WORD)v69; --jj )
      {
        v73 = *v70++;
        v74 = *(unsigned __int8 *)v68;
        v68 = (const WCHAR *)((char *)v68 + 1);
        if ( v73 != (_WORD)v74 )
        {
          if ( v73 >= 0x61u )
          {
            if ( v73 > 0x7Au )
              v73 = RtlUpcaseUnicodeChar(v73);
            else
              v73 -= 32;
          }
          if ( v74 >= 0x61 )
          {
            if ( v74 > 0x7A )
              LOWORD(v74) = RtlUpcaseUnicodeChar(v74);
            else
              LOWORD(v74) = v74 - 32;
          }
          v72 = v73 - (unsigned __int16)v74;
          if ( v72 )
            goto LABEL_154;
        }
        LOWORD(v69) = v69 - 1;
      }
      v72 = jj - (unsigned __int16)v69;
    }
    else
    {
      if ( !v31 )
      {
        v78 = RtlCompareUnicodeStrings(
                *((PCWCH *)a3 + 1),
                (unsigned __int64)*a3 >> 1,
                v68,
                (unsigned __int64)*(unsigned __int16 *)(v67 + 72) >> 1,
                1u);
LABEL_214:
        v72 = v78;
        goto LABEL_154;
      }
      v86 = (unsigned __int8 *)*((_QWORD *)v31 + 1);
      v87 = *v31;
      for ( kk = *(_WORD *)(v67 + 72) >> 1; kk && v87; --kk )
      {
        v94 = *v68++;
        v95 = *v86++;
        if ( v94 != (_WORD)v95 )
        {
          if ( v94 >= 0x61u )
          {
            if ( v94 > 0x7Au )
              v94 = RtlUpcaseUnicodeChar(v94);
            else
              v94 -= 32;
          }
          if ( v95 >= 0x61 )
          {
            if ( v95 > 0x7A )
              LOWORD(v95) = RtlUpcaseUnicodeChar(v95);
            else
              LOWORD(v95) = v95 - 32;
          }
          v89 = v94 - (unsigned __int16)v95;
          if ( v89 )
            goto LABEL_237;
        }
        --v87;
      }
      v89 = kk - v87;
LABEL_237:
      v72 = -v89;
    }
LABEL_154:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v103);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v103);
    if ( v72 )
    {
      v45 = 1;
      if ( v72 < 0 )
        v45 = -1;
LABEL_79:
      v27 = a5;
    }
    else
    {
      v45 = 0;
      v27 = a5;
      *a5 = *((_DWORD *)v100 + 1);
    }
LABEL_80:
    if ( v45 == 2 )
      goto LABEL_99;
    v5 = v99;
    if ( v45 >= 0 )
      goto LABEL_132;
    v9 = v104;
    v105 = v99;
LABEL_54:
    if ( v5 - v9 <= 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v98);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v98);
      v46 = *(_DWORD *)(v109 + 4LL * v9 + 4);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v47 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v109 + 4LL * v9 + 4), v98);
      else
        v47 = HvpGetCellPaged(BugCheckParameter3);
      v48 = v47;
      v49 = a5;
      if ( v48 )
      {
        v50 = CmpCompareInIndex(BugCheckParameter3, v48, (__int64)a5);
        if ( v50 == 2 )
          goto LABEL_189;
        if ( !v50 )
        {
          v27 = a5;
          v5 = v9;
          goto LABEL_101;
        }
        if ( v50 < 0 )
        {
          v51 = CmpCompareInIndex(BugCheckParameter3, v48, (__int64)a5);
          if ( v51 != 2 )
          {
            v27 = a5;
            v5 = v9;
            if ( v51 >= 0 )
              goto LABEL_101;
LABEL_100:
            v46 = -1;
            goto LABEL_101;
          }
LABEL_189:
          v27 = a5;
LABEL_99:
          v5 = 0x80000000;
          goto LABEL_100;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v98);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v98);
        v46 = *(_DWORD *)(v109 + 4LL * v5 + 4);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v75 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v109 + 4LL * v5 + 4), v98);
        else
          v75 = HvpGetCellPaged(BugCheckParameter3);
        if ( v75 )
        {
          v27 = a5;
          v76 = CmpCompareInIndex(BugCheckParameter3, v75, (__int64)a5);
          if ( v76 != 2 )
          {
            if ( v76 <= 0 )
              goto LABEL_101;
            goto LABEL_100;
          }
          goto LABEL_99;
        }
        v49 = a5;
      }
      *v49 = -1;
      return 0x80000000;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v98);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v98);
    a2 = v109;
    v6 = a4;
    v7 = a3;
  }
  v5 = v99;
LABEL_132:
  v46 = v106;
LABEL_101:
  *v27 = v46;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v98);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v98);
  return v5;
}
