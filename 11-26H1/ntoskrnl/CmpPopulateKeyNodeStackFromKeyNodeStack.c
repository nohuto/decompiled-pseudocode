/*
 * XREFs of CmpPopulateKeyNodeStackFromKeyNodeStack @ 0x140949088
 * Callers:
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140947434 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpPopulateKeyNodeStackFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rdi
  __int16 v6; // dx
  __int64 v7; // rax
  __int64 v8; // rdx
  ULONG_PTR v9; // rcx
  __int64 CellFlat; // rax

  for ( i = *a2; i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    v7 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v6);
    v8 = *(unsigned int *)(v7 + 8);
    if ( (_DWORD)v8 != -1 )
    {
      v9 = *(_QWORD *)v7;
      *(_QWORD *)EntryAtLayerHeight = *(_QWORD *)v7;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v8;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v9, v8, (unsigned int *)(EntryAtLayerHeight + 24));
      else
        CellFlat = HvpGetCellPaged(v9, v8);
      *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
    }
  }
}
