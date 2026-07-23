/*
 * XREFs of CmpSortedValueEnumStackCleanup @ 0x140A50038
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14048C600 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A501E4 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryCleanup @ 0x140A504F8 (CmpSortedValueEnumStackEntryCleanup.c)
 */

void __fastcall CmpSortedValueEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 EntryAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 8); ++i )
  {
    EntryAtLayerHeight = CmpSortedValueEnumStackGetEntryAtLayerHeight(a1);
    CmpSortedValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v3 )
    CmSiFreeMemory(v3);
}
