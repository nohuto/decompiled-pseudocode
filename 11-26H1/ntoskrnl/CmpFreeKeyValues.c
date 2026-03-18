/*
 * XREFs of CmpFreeKeyValues @ 0x140B1CFA8
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpMarkKeyValuesDirty @ 0x140B1D094 (CmpMarkKeyValuesDirty.c)
 */

__int64 __fastcall CmpFreeKeyValues(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 CellFlat; // rax
  __int64 v8; // r14
  unsigned int i; // esi
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF
  int v11; // [rsp+5Ch] [rbp+24h]

  v10 = -1;
  v11 = 0;
  result = CmpMarkKeyValuesDirty(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a3 + 2) & 2) == 0 )
    {
      if ( *(_DWORD *)(a3 + 36) )
      {
        v6 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter2, v6, &v10);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter2, v6);
        v8 = CellFlat;
        for ( i = 0; i < *(_DWORD *)(a3 + 36); ++i )
          CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v8 + 4LL * i));
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v10);
        else
          HvpReleaseCellPaged(BugCheckParameter2, &v10);
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 40));
      }
      *(_DWORD *)(a3 + 40) = -1;
      *(_DWORD *)(a3 + 36) = 0;
      if ( *(_WORD *)(a3 + 74) )
      {
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 48));
        *(_DWORD *)(a3 + 48) = -1;
        *(_WORD *)(a3 + 74) = 0;
      }
    }
    return 0LL;
  }
  return result;
}
