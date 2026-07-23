/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C26330
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140C4E0E0 (VerifierKeAcquireInStackQueuedSpinLock.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 */

int __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  int result; // eax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v5 = a2;
  v6 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F08A28;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a2) )
      {
        if ( !(unsigned int)VfDriverIsKernelImageAddress(v5) )
        {
          VfAvlInitializeLockContext((__int64)&v11, 1);
          v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, v7, 1LL);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 64);
            if ( v9 )
              _InterlockedAdd((volatile signed __int32 *)(v9 + 164), 1u);
          }
          VfAvlCleanupLockContext((__int64)&v11);
        }
      }
    }
    LOBYTE(a1) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(a1, a2, v5);
  }
  result = guard_dispatch_icall_no_overrides(v6, a3);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v3 )
    {
      result = KeGetPcr()->Prcb.Number;
      *(_WORD *)(v3 + 10) = result;
    }
  }
  return result;
}
