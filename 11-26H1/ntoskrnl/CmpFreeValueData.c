/*
 * XREFs of CmpFreeValueData @ 0x1408D1074
 * Callers:
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x1408BD1FC (CmpSetValueKeyExisting.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     CmpCopyValue @ 0x1408DCE6C (CmpCopyValue.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter3, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v6; // di
  bool v7; // zf
  __int64 CellPaged; // rax
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 CellFlat; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rdx
  unsigned int v14[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+48h] BYREF
  int v16; // [rsp+7Ch] [rbp+4Ch]

  if ( a3 >= 0x80000000 || a2 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_5:
    HvFreeCell(BugCheckParameter3, a2);
    return 1;
  }
  v6 = 0;
  v15 = -1;
  v7 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v16 = 0;
  v14[0] = -1;
  v14[1] = 0;
  if ( v7 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v15);
  v9 = CellPaged;
  if ( CellPaged )
  {
    v10 = *(_DWORD *)(CellPaged + 4);
    if ( v10 != -1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, v14);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v12 = CellFlat;
      if ( !CellFlat )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v15);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v15);
        return 0;
      }
      while ( v6 < *(_WORD *)(v9 + 2) )
      {
        v13 = *(unsigned int *)(v12 + 4LL * v6);
        if ( (_DWORD)v13 != -1 )
          HvFreeCell(BugCheckParameter3, v13);
        ++v6;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v14);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v14);
      HvFreeCell(BugCheckParameter3, *(unsigned int *)(v9 + 4));
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v15);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v15);
    goto LABEL_5;
  }
  return 0;
}
