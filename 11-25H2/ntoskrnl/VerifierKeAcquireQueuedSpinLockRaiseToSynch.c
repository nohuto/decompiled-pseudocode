/*
 * XREFs of VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B852F0
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

__int64 __fastcall VerifierKeAcquireQueuedSpinLockRaiseToSynch(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v3 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03A88;
    v4 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v4, a2, v4, v5) )
      {
        VfAvlInitializeLockContext((__int64)&v11, 1);
        v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, v6, 1LL);
        if ( v7 )
        {
          v9 = v7[8];
          if ( v9 )
            _InterlockedAdd((volatile signed __int32 *)(v9 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v11, v8);
      }
    }
    LOBYTE(a1) = 12;
    v2 = ViKeIrqlLogAndTrimMemory(a1, a2, v4);
  }
  result = guard_dispatch_icall_no_overrides(v3);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v2 )
      *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
