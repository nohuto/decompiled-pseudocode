/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x140982190
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1408607FC (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140981988 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14098235C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1409823B8 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpCleanupKeyNodeStack @ 0x140982470 (CmpCleanupKeyNodeStack.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  CmpCleanupKeyNodeStack(a1 + 8);
  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, i);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v4 )
    CmSiFreeMemory(v4);
}
