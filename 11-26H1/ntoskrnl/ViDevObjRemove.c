/*
 * XREFs of ViDevObjRemove @ 0x140C3693C
 * Callers:
 *     VfIoDeleteDevice @ 0x140C366D0 (VfIoDeleteDevice.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x1403C1610 (VfAvlFreeNodeNoLock.c)
 *     VfAvlDeleteTreeNode @ 0x1403C1964 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

void __fastcall ViDevObjRemove(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    if ( BugCheckParameter2 && (v3 = *(_QWORD *)(BugCheckParameter2 + 8)) != 0 )
      v4 = *(_QWORD *)(v3 + 24);
    else
      v4 = 0LL;
    VfAvlInitializeLockContext((__int64)&v6, 0);
    v5 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v6, BugCheckParameter2, 0LL);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 16) & 1) != 0 )
        CarReportRuleViolationFromNt(196, 219LL, BugCheckParameter2, 0LL, 0LL, 4u, v4);
      v2 = (void *)VfAvlDeleteTreeNode(ViDevObjAvl, (__int64)&v6, BugCheckParameter2, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v6);
    if ( v2 )
      VfAvlFreeNodeNoLock((__int64)ViDevObjAvl, v2);
  }
}
