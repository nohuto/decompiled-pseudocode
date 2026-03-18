/*
 * XREFs of CmpSortedValueEnumStackCleanup @ 0x140A46D44
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140492AB0 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A46EF0 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryCleanup @ 0x140A47208 (CmpSortedValueEnumStackEntryCleanup.c)
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
