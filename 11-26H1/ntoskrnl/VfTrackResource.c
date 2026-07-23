/*
 * XREFs of VfTrackResource @ 0x140C467E0
 * Callers:
 *     VfMiscExInitializeResourceLite_Exit @ 0x140C42A50 (VfMiscExInitializeResourceLite_Exit.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x1403C1610 (VfAvlFreeNodeNoLock.c)
 *     VfAvlDeleteTreeNode @ 0x1403C1964 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403C25F4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1403C2690 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

char __fastcall VfTrackResource(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 *v5; // rbp
  void *v6; // rsi
  __int128 v7; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]

  v7 = 0LL;
  v8 = 0LL;
  if ( !ViResourceInitialized )
    return 0;
  v5 = VfAvlReserveNode(&ViResourceAvl, BugCheckParameter2, 0LL);
  if ( !v5 )
  {
    _InterlockedExchange(&ViResourceNotTracked, 1);
    return 0;
  }
  v6 = 0LL;
  VfAvlInitializeLockContext((__int64)&v7, 0);
  if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v7, BugCheckParameter2, 0LL) )
  {
    if ( !ViResourcesAlreadyLoadedDrivers )
      CarReportRuleViolationFromNt(196, 208LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
    _InterlockedAdd(&ViResourceStaleNodes, 1u);
    v6 = (void *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v7, BugCheckParameter2, 0LL);
  }
  VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)&v7, v5);
  VfAvlCleanupLockContext((__int64)&v7);
  if ( v6 )
    VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v6);
  return 1;
}
