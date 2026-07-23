/*
 * XREFs of CmpMarkAllChildrenDirty @ 0x1408662F0
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpMarkAllChildrenDirty(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edx
  __int64 CellFlat; // rax
  unsigned int v4; // ebp
  unsigned int i; // esi
  int SubKeyByNumber; // edi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HvpGetCellContextInitialize(&v8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v2, (unsigned int *)&v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v4 = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
  for ( i = 0; i < v4; ++i )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
    if ( SubKeyByNumber < 0 )
      goto LABEL_10;
    SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, 0LL);
    if ( SubKeyByNumber < 0 )
      goto LABEL_10;
  }
  SubKeyByNumber = 0;
LABEL_10:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v8);
  return (unsigned int)SubKeyByNumber;
}
