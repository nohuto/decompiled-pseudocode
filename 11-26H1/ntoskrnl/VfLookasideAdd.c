/*
 * XREFs of VfLookasideAdd @ 0x140C44C64
 * Callers:
 *     VfMiscExInitializePagedLookasideList_Exit @ 0x140C42990 (VfMiscExInitializePagedLookasideList_Exit.c)
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

void __fastcall VfLookasideAdd(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 *v4; // rsi
  void *v5; // rdi
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( ViLookasideInitialized )
  {
    v4 = VfAvlReserveNode((__int64 *)&ViLookasideAvl, BugCheckParameter2, 0LL);
    if ( v4 )
    {
      v5 = 0LL;
      VfAvlInitializeLockContext((__int64)&v6, 0);
      if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v6, BugCheckParameter2, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
          CarReportRuleViolationFromNt(196, 202LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
        v5 = (void *)VfAvlDeleteTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v6, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)&ViLookasideAvl, (__int64)&v6, v4);
      VfAvlCleanupLockContext((__int64)&v6);
      if ( v5 )
        VfAvlFreeNodeNoLock((__int64)&ViLookasideAvl, v5);
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
