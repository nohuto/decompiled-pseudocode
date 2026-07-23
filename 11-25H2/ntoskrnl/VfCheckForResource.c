/*
 * XREFs of VfCheckForResource @ 0x140B971F8
 * Callers:
 *     ExpCheckForResource @ 0x140492604 (ExpCheckForResource.c)
 * Callees:
 *     VfAvlDeleteTreeNode @ 0x1403EA604 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x14048D140 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     VfAvlFreeNodeNoLock @ 0x140604708 (VfAvlFreeNodeNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfCheckForResource(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  __int64 v6; // rdx
  ULONG_PTR *v7; // rbx
  _SLIST_ENTRY *v8; // rbx
  __int64 v9; // rdx
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  ULONG_PTR v12; // [rsp+80h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( ViResourceInitialized )
  {
    if ( (unsigned int)VfPoolIsInternalFree() || !qword_140FFCBC8 )
      return 1LL;
    v12 = 0LL;
    VfAvlInitializeLockContext((__int64)&v10, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v10, BugCheckParameter3, a2);
    v7 = v5;
    if ( v5 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
        CarReportRuleViolationFromNt(196, 210LL, *v5, BugCheckParameter3, a2, 0xBu, 0LL);
      v12 = *v7;
    }
    VfAvlCleanupLockContext((__int64)&v10, v6);
    if ( !v12 )
      return 1LL;
    _InterlockedIncrement(&ViResourceStaleNodes);
    VfAvlInitializeLockContext((__int64)&v10, 0);
    v8 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v10, (__int64)&v12, 0LL);
    VfAvlCleanupLockContext((__int64)&v10, v9);
    if ( v8 )
      VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v8);
  }
  return 0LL;
}
