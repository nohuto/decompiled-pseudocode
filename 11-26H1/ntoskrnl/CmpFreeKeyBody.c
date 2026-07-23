/*
 * XREFs of CmpFreeKeyBody @ 0x1408C4524
 * Callers:
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

char __fastcall CmpFreeKeyBody(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  bool v2; // zf
  unsigned int v3; // esi
  __int64 CellPaged; // rax
  __int64 v6; // rdi
  ULONG_PTR v7; // rdx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v3 = BugCheckParameter3;
  v10 = 0;
  if ( v2 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v9);
  v6 = CellPaged;
  if ( CellPaged )
  {
    if ( (*(_BYTE *)(CellPaged + 2) & 2) == 0 )
    {
      v7 = *(unsigned int *)(CellPaged + 44);
      if ( (_DWORD)v7 != -1 )
        HvFreeCell(BugCheckParameter2, v7);
      if ( *(_WORD *)(v6 + 74) )
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v6 + 48));
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v9);
    HvFreeCell(BugCheckParameter2, v3);
    LOBYTE(CellPaged) = 1;
  }
  return CellPaged;
}
