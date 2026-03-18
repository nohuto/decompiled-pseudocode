/*
 * XREFs of CmpFreeKeyValueList @ 0x140779BDC
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409812B8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpFreeKeyValueList(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  __int64 result; // rax
  _DWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 CellFlat; // rax
  __int64 v8; // rsi
  __int64 i; // r14
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  result = HvpGetCellContextInitialize(&v10);
  if ( *v5 )
  {
    v6 = (unsigned int)v5[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v6, &v10);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v8 = 0LL;
    for ( i = CellFlat; (unsigned int)v8 < *a2; v8 = (unsigned int)(v8 + 1) )
      CmpFreeValue(BugCheckParameter3, *(unsigned int *)(i + 4 * v8));
    result = HvFreeCell(BugCheckParameter3, (unsigned int)a2[1]);
    if ( i )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(BugCheckParameter3, &v10);
      else
        return HvpReleaseCellPaged(BugCheckParameter3, &v10);
    }
  }
  return result;
}
