/*
 * XREFs of CmpSubtreeEnumeratorCleanup @ 0x140981988
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140984A10 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140985174 (CmpPromoteSubtree.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackCleanup @ 0x140982190 (CmpKeyEnumStackCleanup.c)
 *     CmpCleanupKeyNodeStack @ 0x140982470 (CmpCleanupKeyNodeStack.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorCleanup(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v3 = 512LL;
    do
    {
      v4 = *(_QWORD *)(a1 + 96);
      CmpCleanupKcbStack(v1 + v4 + 24);
      CmpKeyEnumStackCleanup(v1 + v4 + 56);
      v1 += 408LL;
      --v3;
    }
    while ( v3 );
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 96));
  }
  return CmpCleanupKeyNodeStack(a1 + 16);
}
