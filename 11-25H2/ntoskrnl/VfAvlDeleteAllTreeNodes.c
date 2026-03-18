/*
 * XREFs of VfAvlDeleteAllTreeNodes @ 0x140B73BCC
 * Callers:
 *     VfDeleteLookasideTree @ 0x140B8FE38 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140B919A4 (VfDeleteResourceTree.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403E0EB0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403EB720 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403EB784 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403EB950 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 */

__int64 __fastcall VfAvlDeleteAllTreeNodes(PRTL_AVL_TABLE Table)
{
  PVOID v2; // rax
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  VfAvlInitializeLockContext((__int64)&v5, 0);
  ViAvlRaiseIrqlSafe((__int64)&v5);
  ViAvlAcquireTableLockAtDpcLevelSafe((__int64)Table, (__int64)&v5);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTableAvl(Table, v2);
  }
  ViAvlReleaseTableLockFromDpcLevel((__int64)Table, (__int64)&v5);
  return VfAvlCleanupLockContext((__int64)&v5, v3);
}
