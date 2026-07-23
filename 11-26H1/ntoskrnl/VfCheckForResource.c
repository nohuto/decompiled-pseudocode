/*
 * XREFs of VfCheckForResource @ 0x140C4C1CC
 * Callers:
 *     ExpCheckForResource @ 0x140346BC8 (ExpCheckForResource.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x1403C1610 (VfAvlFreeNodeNoLock.c)
 *     VfAvlDeleteTreeNode @ 0x1403C1964 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x1404C9664 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfCheckForResource(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  ULONG_PTR *v6; // rbx
  void *v7; // rbx
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  ULONG_PTR v10; // [rsp+80h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  if ( ViResourceInitialized )
  {
    if ( (unsigned int)VfPoolIsInternalFree() || !qword_140FF1058 )
      return 1LL;
    v10 = 0LL;
    VfAvlInitializeLockContext((__int64)&v8, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v8, BugCheckParameter3, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
        CarReportRuleViolationFromNt(196, 210LL, *v5, BugCheckParameter3, a2, 0xBu, 0LL);
      v10 = *v6;
    }
    VfAvlCleanupLockContext((__int64)&v8);
    if ( !v10 )
      return 1LL;
    _InterlockedIncrement(&ViResourceStaleNodes);
    VfAvlInitializeLockContext((__int64)&v8, 0);
    v7 = (void *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v8, (__int64)&v10, 0LL);
    VfAvlCleanupLockContext((__int64)&v8);
    if ( v7 )
      VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v7);
  }
  return 0LL;
}
