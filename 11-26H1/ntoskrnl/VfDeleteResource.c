/*
 * XREFs of VfDeleteResource @ 0x140C466BC
 * Callers:
 *     VfMiscExDeleteResourceLite_Entry @ 0x140C428C0 (VfMiscExDeleteResourceLite_Entry.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x1403C1610 (VfAvlFreeNodeNoLock.c)
 *     VfAvlDeleteTreeNode @ 0x1403C1964 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfDeleteResource(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void *v4; // rbx
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  if ( ViResourceInitialized && qword_140FF1058 )
  {
    v4 = 0LL;
    VfAvlInitializeLockContext((__int64)&v5, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v5, BugCheckParameter2, 0LL) )
    {
      v4 = (void *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v5, BugCheckParameter2, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      CarReportRuleViolationFromNt(196, 209LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
    }
    VfAvlCleanupLockContext((__int64)&v5);
    if ( v4 )
      VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v4);
  }
}
