/*
 * XREFs of VfLookasideDelete @ 0x140C44D88
 * Callers:
 *     VfMiscExDeleteLookasideListEx_Entry @ 0x140C428A0 (VfMiscExDeleteLookasideListEx_Entry.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x1403C1610 (VfAvlFreeNodeNoLock.c)
 *     VfAvlDeleteTreeNode @ 0x1403C1964 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfLookasideDelete(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void *v4; // rbx
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  if ( ViLookasideInitialized )
  {
    v4 = 0LL;
    VfAvlInitializeLockContext((__int64)&v5, 0);
    if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v5, BugCheckParameter2, 0LL) )
    {
      v4 = (void *)VfAvlDeleteTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v5, BugCheckParameter2, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (VfRuleClasses & 0x800) != 0 )
    {
      CarReportRuleViolationFromNt(196, 203LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
    }
    VfAvlCleanupLockContext((__int64)&v5);
    if ( v4 )
      VfAvlFreeNodeNoLock((__int64)&ViLookasideAvl, v4);
  }
}
