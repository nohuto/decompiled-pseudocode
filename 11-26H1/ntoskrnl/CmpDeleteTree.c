/*
 * XREFs of CmpDeleteTree @ 0x140987238
 * Callers:
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140B50C8C (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x1408DEDA0 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpDeleteTree(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  unsigned int v4; // esi
  _DWORD *CellFlat; // rax
  unsigned int v6; // edi
  int SubKeyByNumber; // edi
  __int64 v8; // rax
  int v9; // r14d
  unsigned int v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+54h] [rbp+34h]
  unsigned int v13; // [rsp+58h] [rbp+38h] BYREF

  v11 = -1;
  v13 = 0;
  v12 = 0;
  v4 = a2;
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, v4, &v11);
    else
      CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, v4);
    if ( !CellFlat )
      return 0;
    v6 = CellFlat[4];
    if ( !(CellFlat[5] + CellFlat[6]) )
      break;
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, CellFlat, 0, (int *)&v13);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v11);
    if ( SubKeyByNumber < 0 )
      return 0;
    v6 = v13;
    if ( v13 == -1 )
      return 0;
    v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, v13, &v11)
       : HvpGetCellPaged(BugCheckParameter3, v13);
    if ( !v8 )
      return 0;
    v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v11);
    if ( v9 )
    {
LABEL_20:
      v4 = v6;
    }
    else if ( (int)CmpFreeKeyByCell(BugCheckParameter3, v6, 1) < 0 )
    {
      return 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v11);
  if ( v4 != a2 )
    goto LABEL_20;
  return 1;
}
