/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x140C36AC0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403C25F4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1403C2690 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C36DA8 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140C36E48 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  __int64 v8; // rsi
  int v9; // r14d
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rsi
  void *v12; // rcx
  __int64 result; // rax
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  if ( !ViRemLockInitialized )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    if ( (VfRuleClasses & 0x10) != 0 )
      CarReportRuleViolationFromNt(196, 215LL, Surrogate + 16, BugCheckParameter3, 0LL, 4u, retaddr);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    v8 = a5;
    ViRemLockDeleteFirstTreeNode(BugCheckParameter3, a5);
  }
  else
  {
    v8 = a5;
  }
  v9 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  v10 = VfAvlReserveNode(&ViRemLockAvl, BugCheckParameter3, v8);
  v11 = v10;
  if ( !v10 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  }
  v12 = v10 + 2;
  if ( a5 == 120 )
  {
    memset_0(v12, 0, 0x78uLL);
  }
  else
  {
    guard_dispatch_icall_no_overrides((__int64)v12, a2);
    v9 = 1;
  }
  VfAvlInitializeLockContext((__int64)&v14, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)&v14, v11);
  result = VfAvlCleanupLockContext((__int64)&v14);
  if ( !v9 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  return result;
}
