/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x140982470
 * Callers:
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14086071C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1408609F8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140981988 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpKeyEnumStackCleanup @ 0x140982190 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140984E0C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409859F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE4934 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE49F4 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AF9D60 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x1409824E8 (CmpKeyNodeStackEntryCleanup.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rcx
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(a1 + 72) + 32LL * (__int16)(i - 2);
    else
      v3 = a1 + 32LL * i + 8;
    CmpKeyNodeStackEntryCleanup(v3);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    CmSiFreeMemory(v4);
}
