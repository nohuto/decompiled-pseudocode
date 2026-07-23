/*
 * XREFs of CmpMarkIndexDirtyInStorageType @ 0x1408C3EF4
 * Callers:
 *     CmpMarkIndexDirty @ 0x1408C3D30 (CmpMarkIndexDirty.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvpGetCellContextMove @ 0x1408E20A4 (HvpGetCellContextMove.c)
 */

__int64 __fastcall CmpMarkIndexDirtyInStorageType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rdx
  unsigned int v7; // r12d
  _WORD *CellFlat; // rax
  _WORD *v9; // rsi
  unsigned int v10; // r15d
  _WORD *v11; // r14
  int SubKeyInLeafWithStatus; // ebx
  __int64 CellPaged; // rax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v17[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v18) = 0;
  *(_QWORD *)v17 = 0LL;
  LODWORD(v19) = 0;
  v16 = 0LL;
  LODWORD(v15) = 0;
  HvpGetCellContextInitialize(v17);
  HvpGetCellContextInitialize(&v16);
  if ( !*(_DWORD *)(v6 + 4LL * a5 + 20) )
    return (unsigned int)-1073741772;
  v7 = *(_DWORD *)(v6 + 4LL * a5 + 28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v7, v17);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  if ( *CellFlat == 26994 )
  {
    LODWORD(v18) = CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)&v19);
    if ( (_DWORD)v18 != 0x80000000 )
    {
      v10 = v19;
      if ( (_DWORD)v19 == -1 )
      {
        SubKeyInLeafWithStatus = -1073741772;
LABEL_15:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v17);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v17);
        return (unsigned int)SubKeyInLeafWithStatus;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, v19, (unsigned int *)&v16);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3);
      v11 = (_WORD *)CellPaged;
      if ( CellPaged )
        goto LABEL_7;
    }
    SubKeyInLeafWithStatus = -1073741670;
    goto LABEL_15;
  }
  v10 = v7;
  v7 = -1;
  v11 = CellFlat;
  v9 = 0LL;
  HvpGetCellContextMove(&v16, v17);
LABEL_7:
  SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(BugCheckParameter3, (__int64)&v15, (__int64)&v18);
  if ( SubKeyInLeafWithStatus < 0 )
    goto LABEL_12;
  if ( !v9 || (SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v7), SubKeyInLeafWithStatus >= 0) )
  {
    SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v10);
    if ( SubKeyInLeafWithStatus >= 0 )
      SubKeyInLeafWithStatus = 0;
  }
  if ( v11 )
  {
LABEL_12:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v16);
  }
  if ( v9 )
    goto LABEL_15;
  return (unsigned int)SubKeyInLeafWithStatus;
}
