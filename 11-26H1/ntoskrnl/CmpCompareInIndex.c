/*
 * XREFs of CmpCompareInIndex @ 0x1408D8DA0
 * Callers:
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpCompareInIndex(
        ULONG_PTR BugCheckParameter3,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  _DWORD *v8; // r13
  __int64 v9; // r12
  ULONG_PTR v11; // rbp
  WCHAR v12; // ax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int i; // eax
  unsigned int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // r8d
  unsigned __int16 v20; // r10
  unsigned int v21; // r9d
  int v22; // r11d
  unsigned int v23; // eax
  int v24; // r11d
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // r10
  struct _LIST_ENTRY *Flink; // r11
  unsigned __int16 v28; // dx
  unsigned int v29; // r9d
  struct _LIST_ENTRY *v30; // r10
  __int64 result; // rax
  bool v32; // zf
  unsigned int v33; // edx
  __int64 CellPaged; // rax
  WCHAR *v35; // r12
  unsigned __int16 v36; // si
  WCHAR *v37; // r15
  unsigned __int16 v38; // r14
  unsigned __int16 j; // si
  int v40; // edi
  WCHAR v41; // bp
  unsigned int v42; // edi
  unsigned int v43; // edx
  __int64 CellFlat; // rax
  __int64 v45; // rcx
  const WCHAR *v46; // r8
  unsigned __int16 v47; // bp
  WCHAR *v48; // rax
  unsigned __int16 v49; // r14
  unsigned __int16 m; // bp
  int v51; // edi
  WCHAR v52; // r15
  unsigned int v53; // edi
  unsigned __int16 v54; // si
  LONG v55; // eax
  unsigned __int16 v56; // cx
  LONG v57; // eax
  unsigned __int8 *v58; // rax
  unsigned __int16 v59; // r15
  unsigned __int16 k; // si
  int v61; // edi
  WCHAR v62; // r14
  unsigned int v63; // edi
  unsigned __int8 *v64; // rax
  unsigned __int16 v65; // r15
  unsigned __int16 n; // cx
  int v67; // edi
  WCHAR v68; // r14
  unsigned int v69; // edi
  const WCHAR *v70; // [rsp+30h] [rbp-48h]
  const WCHAR *v71; // [rsp+30h] [rbp-48h]
  _DWORD *v72; // [rsp+38h] [rbp-40h]
  unsigned __int8 *v73; // [rsp+38h] [rbp-40h]
  __int64 v75; // [rsp+90h] [rbp+18h] BYREF

  v6 = a5;
  v8 = a6;
  v9 = a4;
  v11 = BugCheckParameter3;
  v12 = *(_WORD *)a5;
  *a6 = -1;
  if ( v12 == 26220 || v12 == 26732 )
  {
    v13 = 0;
    v14 = a4;
    v72 = (_DWORD *)(v6 + 4 + 8LL * a4);
    if ( v12 == 26220 )
    {
      v15 = 4;
      for ( i = 0; i < 4; ++i )
      {
        if ( !*(_BYTE *)(i + v6 + 4 + 8LL * a4 + 4) )
        {
          v15 = i;
          break;
        }
      }
      if ( a3 )
        v17 = *a3;
      else
        v17 = *a2 >> 1;
      v18 = 8LL * a4;
      v19 = 0;
      if ( v17 < v15 )
        v15 = v17;
      while ( 1 )
      {
        if ( v19 >= v15 )
        {
          v14 = v9;
          goto LABEL_35;
        }
        v20 = a3 ? *(unsigned __int8 *)(*((_QWORD *)a3 + 1) + v19) : *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v19);
        v21 = *(unsigned __int8 *)(v19 + v18 + v6 + 8);
        if ( v20 >= 0x61u )
        {
          if ( v20 <= 0x7Au )
          {
            v22 = v20 - 32;
          }
          else
          {
            Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( Flink && v26 >= v25 )
              v26 += *((_WORD *)&Flink->Flink
                     + (v26 & 0xF)
                     + (unsigned int)*((unsigned __int16 *)&Flink->Flink
                                     + ((v26 >> 4) & 0xF)
                                     + (unsigned int)*((unsigned __int16 *)&Flink->Flink + ((unsigned __int64)v26 >> 8))));
            v22 = v26;
          }
        }
        else
        {
          v22 = v20;
        }
        if ( v21 >= 0x61 )
        {
          if ( v21 <= 0x7A )
          {
            v23 = v21 - 32;
          }
          else
          {
            v30 = PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( v30 && (unsigned __int16)v29 >= v28 )
              LOWORD(v29) = *((_WORD *)&v30->Flink
                            + (v29 & 0xF)
                            + *((unsigned __int16 *)&v30->Flink + LOWORD(v30->Flink) + (v29 >> 4)))
                          + v29;
            v23 = (unsigned __int16)v29;
          }
        }
        else
        {
          v23 = v21;
        }
        v24 = v22 - v23;
        if ( v24 )
          break;
        ++v19;
      }
      result = 1LL;
      if ( v24 <= 0 )
        return 0xFFFFFFFFLL;
      return result;
    }
LABEL_35:
    v32 = (*(_BYTE *)(v11 + 140) & 1) == 0;
    v33 = *(_DWORD *)(v6 + 8 * v14 + 4);
    a5 = 0xFFFFFFFFLL;
    if ( v32 )
      CellPaged = HvpGetCellPaged(v11);
    else
      CellPaged = HvpGetCellFlat(v11, v33, (unsigned int *)&a5);
    if ( !CellPaged )
      return 2LL;
    v35 = (WCHAR *)(CellPaged + 76);
    if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
    {
      if ( !a3 )
      {
        v36 = *a2;
        v37 = (WCHAR *)*((_QWORD *)a2 + 1);
        v38 = *(_WORD *)(CellPaged + 72);
        for ( j = v36 >> 1; j && v38; --j )
        {
          v41 = *v37++;
          v42 = *(unsigned __int8 *)v35;
          v35 = (WCHAR *)((char *)v35 + 1);
          if ( v41 != (_WORD)v42 )
          {
            if ( v41 >= 0x61u )
            {
              if ( v41 > 0x7Au )
                v41 = RtlUpcaseUnicodeChar(v41);
              else
                v41 -= 32;
            }
            if ( v42 >= 0x61 )
            {
              if ( v42 > 0x7A )
                LOWORD(v42) = RtlUpcaseUnicodeChar(v42);
              else
                LOWORD(v42) = v42 - 32;
            }
            v40 = v41 - (unsigned __int16)v42;
            if ( v40 )
              goto LABEL_43;
          }
          --v38;
        }
        v40 = j - v38;
LABEL_43:
        v11 = BugCheckParameter3;
        goto LABEL_44;
      }
      v55 = CmpCompareTwoCompressedNames(
              *((_QWORD *)a3 + 1),
              *a3,
              CellPaged + 76,
              *(unsigned __int16 *)(CellPaged + 72));
    }
    else
    {
      v54 = *(_WORD *)(CellPaged + 72);
      if ( a3 )
      {
        v58 = (unsigned __int8 *)*((_QWORD *)a3 + 1);
        v59 = *a3;
        for ( k = v54 >> 1; k && v59; --k )
        {
          v62 = *v35++;
          v63 = *v58++;
          v75 = (__int64)v58;
          if ( v62 != (_WORD)v63 )
          {
            if ( v62 >= 0x61u )
            {
              if ( v62 > 0x7Au )
                v62 = RtlUpcaseUnicodeChar(v62);
              else
                v62 -= 32;
            }
            if ( v63 >= 0x61 )
            {
              if ( v63 > 0x7A )
                LOWORD(v63) = RtlUpcaseUnicodeChar(v63);
              else
                LOWORD(v63) = v63 - 32;
            }
            v61 = v62 - (unsigned __int16)v63;
            if ( v61 )
              goto LABEL_112;
            v58 = (unsigned __int8 *)v75;
          }
          --v59;
        }
        v61 = k - v59;
LABEL_112:
        v40 = -v61;
LABEL_44:
        if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v11, &a5);
        else
          HvpReleaseCellPaged(v11, &a5);
        if ( !v40 )
        {
          *a6 = *v72;
          return v13;
        }
        if ( v40 < 0 )
          return (unsigned int)-1;
        return 1;
      }
      v55 = RtlCompareUnicodeStrings(
              *((PCWCH *)a2 + 1),
              (unsigned __int64)*a2 >> 1,
              (PCWCH)(CellPaged + 76),
              (unsigned __int64)*(unsigned __int16 *)(CellPaged + 72) >> 1,
              1u);
    }
    v40 = v55;
    goto LABEL_44;
  }
  v43 = *(_DWORD *)(v6 + 4LL * a4 + 4);
  v75 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v43, (unsigned int *)&v75);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v45 = CellFlat;
  if ( !CellFlat )
    return 2LL;
  v46 = (const WCHAR *)(CellFlat + 76);
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
  {
    if ( !a3 )
    {
      v47 = *a2;
      v48 = (WCHAR *)*((_QWORD *)a2 + 1);
      v49 = *(_WORD *)(v45 + 72);
      for ( m = v47 >> 1; m && v49; --m )
      {
        v52 = *v48++;
        v53 = *(unsigned __int8 *)v46;
        v46 = (const WCHAR *)((char *)v46 + 1);
        a5 = (__int64)v48;
        v70 = v46;
        if ( v52 != (_WORD)v53 )
        {
          if ( v52 >= 0x61u )
          {
            if ( v52 > 0x7Au )
              v52 = RtlUpcaseUnicodeChar(v52);
            else
              v52 -= 32;
          }
          if ( v53 >= 0x61 )
          {
            if ( v53 > 0x7A )
              LOWORD(v53) = RtlUpcaseUnicodeChar(v53);
            else
              LOWORD(v53) = v53 - 32;
          }
          v51 = v52 - (unsigned __int16)v53;
          if ( v51 )
            goto LABEL_68;
          v48 = (WCHAR *)a5;
          v46 = v70;
        }
        --v49;
      }
      v51 = m - v49;
LABEL_68:
      v11 = BugCheckParameter3;
      v8 = a6;
      goto LABEL_69;
    }
    v57 = CmpCompareTwoCompressedNames(*((_QWORD *)a3 + 1), *a3, v46, *(unsigned __int16 *)(CellFlat + 72));
  }
  else
  {
    v56 = *(_WORD *)(CellFlat + 72);
    if ( a3 )
    {
      v64 = (unsigned __int8 *)*((_QWORD *)a3 + 1);
      v65 = *a3;
      for ( n = v56 >> 1; ; --n )
      {
        LOWORD(a5) = n;
        if ( !n || !v65 )
          break;
        v68 = *v46++;
        v69 = *v64++;
        v71 = v46;
        v73 = v64;
        if ( v68 != (_WORD)v69 )
        {
          if ( v68 >= 0x61u )
          {
            if ( v68 > 0x7Au )
              v68 = RtlUpcaseUnicodeChar(v68);
            else
              v68 -= 32;
          }
          if ( v69 >= 0x61 )
          {
            if ( v69 > 0x7A )
              LOWORD(v69) = RtlUpcaseUnicodeChar(v69);
            else
              LOWORD(v69) = v69 - 32;
          }
          v67 = v68 - (unsigned __int16)v69;
          if ( v67 )
            goto LABEL_127;
          v46 = v71;
          n = a5;
          v64 = v73;
        }
        --v65;
      }
      v67 = n - v65;
LABEL_127:
      v8 = a6;
      v51 = -v67;
      goto LABEL_69;
    }
    v57 = RtlCompareUnicodeStrings(
            *((PCWCH *)a2 + 1),
            (unsigned __int64)*a2 >> 1,
            v46,
            (unsigned __int64)*(unsigned __int16 *)(CellFlat + 72) >> 1,
            1u);
  }
  v51 = v57;
LABEL_69:
  if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v11, &v75);
  else
    HvpReleaseCellPaged(v11, &v75);
  if ( v51 )
  {
    if ( v51 < 0 )
      return (unsigned int)-1;
    return 1;
  }
  result = 0LL;
  *v8 = *(_DWORD *)(v6 + 4 * v9 + 4);
  return result;
}
