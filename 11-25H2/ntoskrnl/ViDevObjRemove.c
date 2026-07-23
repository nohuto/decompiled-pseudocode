/*
 * XREFs of ViDevObjRemove @ 0x140B824BC
 * Callers:
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403EA604 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x140604708 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

void __fastcall ViDevObjRemove(ULONG_PTR BugCheckParameter2)
{
  _SLIST_ENTRY *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    if ( BugCheckParameter2 && (v3 = *(_QWORD *)(BugCheckParameter2 + 8)) != 0 )
      v4 = *(_QWORD *)(v3 + 24);
    else
      v4 = 0LL;
    VfAvlInitializeLockContext((__int64)&v7, 0);
    v5 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v7, BugCheckParameter2, 0LL);
    if ( v5 )
    {
      if ( (v5[4] & 1) != 0 )
        CarReportRuleViolationFromNt(196, 219LL, BugCheckParameter2, 0LL, 0LL, 4u, v4);
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(ViDevObjAvl, (__int64)&v7, BugCheckParameter2, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v7, v6);
    if ( v2 )
      VfAvlFreeNodeNoLock((__int64)ViDevObjAvl, v2);
  }
}
