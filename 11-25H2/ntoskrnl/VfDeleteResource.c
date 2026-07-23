/*
 * XREFs of VfDeleteResource @ 0x140B918AC
 * Callers:
 *     VfMiscExDeleteResourceLite_Entry @ 0x140B8D870 (VfMiscExDeleteResourceLite_Entry.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403EA604 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x140604708 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfDeleteResource(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _SLIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( ViResourceInitialized && qword_140FFCBC8 )
  {
    v4 = 0LL;
    VfAvlInitializeLockContext((__int64)&v6, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v6, BugCheckParameter2, 0LL) )
    {
      v4 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v6, BugCheckParameter2, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      CarReportRuleViolationFromNt(196, 209LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a2);
    }
    VfAvlCleanupLockContext((__int64)&v6, v5);
    if ( v4 )
      VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v4);
  }
}
