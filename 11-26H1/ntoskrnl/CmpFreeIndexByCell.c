/*
 * XREFs of CmpFreeIndexByCell @ 0x140A2F4F0
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A2EC9C (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter2, __int64 BugCheckParameter3)
{
  __int64 v2; // rsi
  bool v3; // zf
  unsigned int v4; // ebp
  _WORD *CellPaged; // rax
  _WORD *v7; // rdi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v2 = 0LL;
  v9 = -1;
  v3 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v4 = BugCheckParameter3;
  v10 = 0;
  if ( v3 )
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter2, BugCheckParameter3);
  else
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v9);
  v7 = CellPaged;
  if ( *CellPaged == 26994 && CellPaged[1] )
  {
    do
    {
      HvFreeCell(BugCheckParameter2, *(unsigned int *)&v7[2 * v2 + 2]);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < (unsigned __int16)v7[1] );
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v9);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v9);
  return HvFreeCell(BugCheckParameter2, v4);
}
