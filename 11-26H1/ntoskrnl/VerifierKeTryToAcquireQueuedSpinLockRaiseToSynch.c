/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140C39E80
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void *v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v4 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F08A28;
    v5 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v5) )
      {
        VfAvlInitializeLockContext((__int64)&v10, 1);
        v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v10, v6, 1LL);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 64);
          if ( v8 )
            _InterlockedAdd((volatile signed __int32 *)(v8 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v10);
      }
    }
    LOBYTE(a1) = 12;
    v2 = ViKeIrqlLogAndTrimMemory(a1, a2, v5);
  }
  result = guard_dispatch_icall_no_overrides(v4, a2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v2 )
      *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
