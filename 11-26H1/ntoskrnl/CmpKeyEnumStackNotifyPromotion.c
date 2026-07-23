/*
 * XREFs of CmpKeyEnumStackNotifyPromotion @ 0x140947320
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpKeyNodeStackEntryReset @ 0x140944114 (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14094436C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x140946CB0 (CmpKeyEnumStackEntryNotifyPromotion.c)
 */

__int64 __fastcall CmpKeyEnumStackNotifyPromotion(__int16 *a1)
{
  unsigned __int64 EntryAtLayerHeight; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  ULONG_PTR v5; // rcx
  __int64 v6; // rdx

  EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight((__int64)a1, *a1);
  CmpKeyEnumStackEntryNotifyPromotion(EntryAtLayerHeight);
  result = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), *a1);
  v4 = result;
  if ( *(_DWORD *)(result + 8) == -1 )
  {
    CmpKeyNodeStackEntryReset(result);
    v5 = *(_QWORD *)EntryAtLayerHeight;
    v6 = *(unsigned int *)(EntryAtLayerHeight + 112);
    *(_QWORD *)v4 = *(_QWORD *)EntryAtLayerHeight;
    *(_DWORD *)(v4 + 8) = v6;
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      result = HvpGetCellFlat(v5, v6, (unsigned int *)(v4 + 24));
    else
      result = HvpGetCellPaged(v5, v6);
    *(_QWORD *)(v4 + 16) = result;
  }
  return result;
}
