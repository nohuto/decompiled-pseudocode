/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x140A1D918
 * Callers:
 *     CmpCheckRegistry2 @ 0x140A1DAC0 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1404C21E4 (CmpRemoveSecurityCellList.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rsi
  unsigned int v3; // ebp
  _BYTE *v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // r13
  unsigned int v7; // r12d
  __int64 CellFlat; // rax
  int *v9; // rdx
  unsigned int v10; // ebp
  int v11; // r14d
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v2 = 0LL;
  HvpGetCellContextInitialize(&v13);
  v3 = 0;
  v4 = (_BYTE *)(BugCheckParameter3 + 140);
  while ( 1 )
  {
    v5 = v3;
    if ( v3 >= *(_DWORD *)(BugCheckParameter3 + 1880) )
      break;
    v6 = *(_QWORD *)(BugCheckParameter3 + 1896);
    v4 = (_BYTE *)(BugCheckParameter3 + 140);
    v7 = *(_DWORD *)(v6 + 16LL * v3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v7, (unsigned int *)&v13);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v7);
    v9 = (int *)CellFlat;
    v2 = (int *)CellFlat;
    if ( *(_DWORD *)(CellFlat + 12) != *(_DWORD *)(*(_QWORD *)(v6 + 16LL * v3 + 8) + 28LL) )
    {
      v11 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v6 + 16LL * v3), 0);
      if ( v11 < 0 )
        goto LABEL_14;
      v9 = v2;
      v5 = v3;
      v2[3] = *(_DWORD *)(*(_QWORD *)(v6 + 16LL * v3 + 8) + 28LL);
    }
    if ( *(_DWORD *)(*(_QWORD *)(v6 + 16LL * v3 + 8) + 28LL) )
    {
      v10 = v5;
      v2 = v9;
      if ( v9 )
      {
        if ( (*v4 & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
        v2 = 0LL;
      }
    }
    else
    {
      v11 = HvpMarkCellDirty(BugCheckParameter3, v7, 0);
      if ( v11 < 0 )
        goto LABEL_14;
      v11 = HvpMarkCellDirty(BugCheckParameter3, v2[1], 0);
      if ( v11 < 0 )
        goto LABEL_14;
      v11 = HvpMarkCellDirty(BugCheckParameter3, v2[2], 0);
      if ( v11 < 0 )
        goto LABEL_14;
      if ( (*v4 & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
      v2 = 0LL;
      CmpRemoveSecurityCellList(BugCheckParameter3, v7);
      HvFreeCell(BugCheckParameter3, v7);
      v10 = v3 - 1;
    }
    v3 = v10 + 1;
  }
  v11 = 0;
LABEL_14:
  if ( v2 )
  {
    if ( (*v4 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  }
  return (unsigned int)v11;
}
