/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x140A1D604
 * Callers:
 *     CmpCheckRegistry2 @ 0x140A1DAC0 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFindCellInIndex @ 0x140866298 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x1408663BC (CmpRemoveCellFromIndex.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter3, unsigned int a2, int a3)
{
  unsigned __int16 *v6; // r13
  __int64 CellFlat; // rax
  __int64 v8; // r14
  int v9; // edi
  unsigned int v10; // r15d
  unsigned __int16 *CellPaged; // rax
  unsigned __int16 *v12; // rsi
  unsigned int v13; // eax
  unsigned int i; // edi
  unsigned int v15; // r12d
  unsigned __int16 *v16; // rax
  unsigned __int16 v17; // di
  unsigned __int16 v18; // r12
  unsigned int v21; // [rsp+20h] [rbp-20h]
  unsigned int v22[2]; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v23[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v24[2]; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int16 v25; // [rsp+80h] [rbp+40h]
  unsigned __int16 CellInIndex; // [rsp+98h] [rbp+58h]

  v24[0] = -1;
  v24[1] = 0;
  v23[0] = -1;
  v6 = 0LL;
  v23[1] = 0;
  v22[0] = -1;
  v22[1] = 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, v24);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
  v8 = CellFlat;
  v9 = HvpMarkCellDirty(BugCheckParameter3, a2, 0);
  if ( v9 < 0 )
    goto LABEL_51;
  v10 = *(_DWORD *)(v8 + 28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (unsigned __int16 *)HvpGetCellFlat(BugCheckParameter3, v10, v23);
  else
    CellPaged = (unsigned __int16 *)HvpGetCellPaged(BugCheckParameter3, v10);
  v12 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    v13 = CellPaged[1];
    v21 = v12[1];
    for ( i = 0; ; ++i )
    {
      if ( i >= v13 )
        goto LABEL_40;
      if ( i )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v22);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v22);
      }
      v15 = *(_DWORD *)&v12[2 * i + 2];
      v16 = (unsigned __int16 *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                               ? HvpGetCellFlat(BugCheckParameter3, v15, v22)
                               : HvpGetCellPaged(BugCheckParameter3, v15));
      v6 = v16;
      CellInIndex = CmpFindCellInIndex(v16, a3);
      v25 = v6[1];
      if ( CellInIndex < v25 )
        break;
      v13 = v21;
    }
    v9 = HvpMarkCellDirty(BugCheckParameter3, v15, 0);
    if ( v9 < 0 )
      goto LABEL_43;
    if ( v25 == 1 )
    {
      v9 = HvpMarkCellDirty(BugCheckParameter3, v10, 0);
      if ( v9 < 0 )
        goto LABEL_43;
      v17 = CmpFindCellInIndex(v12, v15);
      if ( v17 >= v12[1] )
      {
        v9 = -1073741492;
        goto LABEL_43;
      }
    }
    else
    {
      v17 = v21;
    }
    CmpRemoveCellFromIndex(v6, CellInIndex);
    if ( v25 != 1 )
    {
LABEL_40:
      v9 = 0;
      goto LABEL_41;
    }
    CmpRemoveCellFromIndex(v12, v17);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v22);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v22);
    v9 = 0;
    v6 = 0LL;
    HvFreeCell(BugCheckParameter3, v15);
    goto LABEL_31;
  }
  v18 = CmpFindCellInIndex(CellPaged, a3);
  if ( v18 < v12[1] )
  {
    v9 = HvpMarkCellDirty(BugCheckParameter3, v10, 0);
    if ( v9 >= 0 )
    {
      CmpRemoveCellFromIndex(v12, v18);
      v9 = 0;
LABEL_31:
      if ( !v12[1] )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v23);
        v12 = 0LL;
        HvFreeCell(BugCheckParameter3, v10);
      }
LABEL_41:
      if ( (*(_DWORD *)(v8 + 20))-- == 1 )
      {
        *(_DWORD *)(v8 + 28) = -1;
        *(_WORD *)(v8 + 52) = 0;
        *(_DWORD *)(v8 + 56) = 0;
      }
LABEL_43:
      if ( v6 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v22);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v22);
      }
    }
  }
  else
  {
    v9 = -1073741492;
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v23);
  }
LABEL_51:
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v24);
  }
  return (unsigned int)v9;
}
