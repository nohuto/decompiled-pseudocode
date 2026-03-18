/*
 * XREFs of CmpRemoveSubKey @ 0x1408BDB40
 * Callers:
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpRemoveSubKeyFromList @ 0x1408BDBF0 (CmpRemoveSubKeyFromList.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter3, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  bool v4; // zf
  __int64 CellPaged; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  char v9; // di
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v3 = a3;
  v4 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v11 = -1;
  v12 = 0;
  if ( v4 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v11);
  v7 = CellPaged;
  if ( !CellPaged )
    return 0;
  v8 = v3 >> 31;
  v9 = CmpRemoveSubKeyFromList(BugCheckParameter3);
  if ( v9 )
  {
    --*(_DWORD *)(v7 + 4 * v8 + 20);
    v9 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v11);
  return v9;
}
