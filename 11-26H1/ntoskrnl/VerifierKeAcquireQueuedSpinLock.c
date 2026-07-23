/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x140C342A0
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

__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v3 = a1;
  if ( (MmVerifierData & 1) != 0 )
  {
    ++dword_140F08A28;
    v4 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v4) )
      {
        VfAvlInitializeLockContext((__int64)&v10, 1);
        v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v10, v6, v5);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 64);
          if ( v8 )
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 164));
        }
        VfAvlCleanupLockContext((__int64)&v10);
      }
    }
    LOBYTE(a1) = 2;
    v2 = ViKeIrqlLogAndTrimMemory(a1, a2, v4);
  }
  result = guard_dispatch_icall_no_overrides(v3, a2);
  if ( (MmVerifierData & 1) != 0 )
  {
    if ( v2 )
      *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
