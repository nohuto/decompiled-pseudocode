/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x140B859D0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B7BC34 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140B97EEC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140B97F88 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03A8C;
    v3 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v3, a2, v3, v4) )
      {
        VfAvlInitializeLockContext((__int64)&v11, 1);
        v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, v6, v5);
        if ( v7 )
        {
          v9 = v7[8];
          if ( v9 )
            _InterlockedIncrement((volatile signed __int32 *)(v9 + 168));
        }
        VfAvlCleanupLockContext((__int64)&v11, v8);
      }
    }
    LOBYTE(a1) = *(_BYTE *)(v2 + 93);
    ViKeIrqlLogAndTrimMemory(a1, a2, v3);
  }
  return guard_dispatch_icall_no_overrides(v2);
}
