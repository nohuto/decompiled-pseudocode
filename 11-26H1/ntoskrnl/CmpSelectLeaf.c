/*
 * XREFs of CmpSelectLeaf @ 0x1408C629C
 * Callers:
 *     CmpAddSubKeyToList @ 0x1408C7F40 (CmpAddSubKeyToList.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpSplitLeaf @ 0x1408C5D28 (CmpSplitLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  ULONG_PTR v8; // rdx
  int v9; // edi
  __int64 CellFlat; // rax
  __int64 v11; // r14
  int SubKeyInRoot; // eax
  __int64 v13; // r13
  unsigned int v14; // edi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 CellPaged; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v29[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v30[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+50h]
  unsigned int v33; // [rsp+A8h] [rbp+58h]

  v33 = a4;
  v32 = a3;
  LODWORD(v31) = 0;
  v30[0] = -1;
  v29[0] = -1;
  v8 = *a2;
  LODWORD(v28) = 0;
  v30[1] = 0;
  v29[1] = 0;
  v9 = HvpMarkCellDirty(BugCheckParameter3, v8);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, *a2, v30);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v11 = CellFlat;
  while ( 1 )
  {
    SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)&v31);
    v13 = (unsigned int)SubKeyInRoot;
    if ( SubKeyInRoot < 0 )
    {
      v9 = -1073741670;
      goto LABEL_33;
    }
    v14 = v31;
    if ( (_DWORD)v31 != -1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, v31, v29);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3);
      v17 = CellPaged;
      if ( *(_WORD *)(CellPaged + 2) < 0x3F5u )
      {
        v15 = v11 + 4 * v13;
LABEL_29:
        *a5 = v15 + 4;
        *a6 = v14;
        v9 = 0;
        goto LABEL_30;
      }
      goto LABEL_17;
    }
    _mm_lfence();
    v15 = v11 + 4LL * (unsigned int)SubKeyInRoot;
    v16 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v15 + 4), v29)
        : HvpGetCellPaged(BugCheckParameter3);
    LODWORD(v28) = *(_DWORD *)(v16 + 4);
    v17 = v16;
    v18 = CmpDoCompareKeyName(BugCheckParameter3, v32, 0LL);
    if ( v18 == 2 )
      break;
    if ( v18 < 0 )
    {
      if ( (_DWORD)v13 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v29);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v29);
        v26 = (unsigned int)(v13 - 1);
LABEL_66:
        v19 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
        v15 = v11 + 4 * v26;
        v14 = *(_DWORD *)(v15 + 4);
        LODWORD(v31) = v14;
        if ( v19 )
          v27 = HvpGetCellPaged(BugCheckParameter3);
        else
          v27 = HvpGetCellFlat(BugCheckParameter3, v14, v29);
        v17 = v27;
        if ( *(_WORD *)(v27 + 2) < 0x3F5u )
          goto LABEL_29;
        goto LABEL_17;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v29);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v29);
      v19 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v14 = *(_DWORD *)(v11 + 4);
      LODWORD(v31) = v14;
      if ( v19 )
        v25 = HvpGetCellPaged(BugCheckParameter3);
      else
        v25 = HvpGetCellFlat(BugCheckParameter3, v14, v29);
      v17 = v25;
      if ( *(_WORD *)(v25 + 2) < 0x3F5u )
      {
        v15 = v11;
        goto LABEL_29;
      }
    }
    else
    {
      _mm_lfence();
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v29);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v29);
      v19 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v14 = *(_DWORD *)(v15 + 4);
      LODWORD(v31) = v14;
      if ( v19 )
        v20 = HvpGetCellPaged(BugCheckParameter3);
      else
        v20 = HvpGetCellFlat(BugCheckParameter3, v14, v29);
      v17 = v20;
      if ( *(_WORD *)(v20 + 2) < 0x3F5u )
        goto LABEL_29;
      if ( (unsigned int)v13 < (unsigned int)*(unsigned __int16 *)(v11 + 2) - 1 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v29);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v29);
        v26 = (unsigned int)(v13 + 1);
        goto LABEL_66;
      }
    }
LABEL_17:
    v9 = CmpSplitLeaf(BugCheckParameter3, *a2, v13, v33, (unsigned int *)&v28);
    if ( v9 < 0 )
      goto LABEL_30;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v30);
    v21 = v28;
    *a2 = v28;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = HvpGetCellFlat(BugCheckParameter3, v21, v30);
    else
      v22 = HvpGetCellPaged(BugCheckParameter3);
    v11 = v22;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v29);
  }
  v9 = -1073741670;
LABEL_30:
  if ( v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v29);
  }
LABEL_33:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v30);
  }
  return (unsigned int)v9;
}
