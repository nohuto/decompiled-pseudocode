/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x140B82640
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlInsertReservedTreeNode @ 0x1403EA7E8 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlReserveNode @ 0x1403EBAE0 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B82924 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140B829C4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  __int64 v7; // rsi
  int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  if ( !ViRemLockInitialized )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3);
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    if ( (VfRuleClasses & 0x10) != 0 )
      CarReportRuleViolationFromNt(196, 215LL, Surrogate + 16, BugCheckParameter3, 0LL, 4u, retaddr);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    v7 = a5;
    ViRemLockDeleteFirstTreeNode(BugCheckParameter3, a5);
  }
  else
  {
    v7 = a5;
  }
  v8 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3);
  v9 = VfAvlReserveNode(&ViRemLockAvl, BugCheckParameter3, v7);
  v10 = v9;
  if ( !v9 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    return guard_dispatch_icall_no_overrides(BugCheckParameter3);
  }
  v11 = v9 + 2;
  if ( a5 == 120 )
  {
    memset_0(v11, 0, 0x78uLL);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v11);
    v8 = 1;
  }
  VfAvlInitializeLockContext((__int64)&v14, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)&v14, v10);
  result = VfAvlCleanupLockContext((__int64)&v14, v12);
  if ( !v8 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3);
  return result;
}
