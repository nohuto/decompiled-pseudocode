/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140C39400
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140C393E0 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  ++dword_140F08A28;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v5) )
    {
      VfAvlInitializeLockContext((__int64)&v11, 1);
      v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, v7, v6);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 64);
        if ( v9 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 164));
      }
      VfAvlCleanupLockContext((__int64)&v11);
    }
  }
  return guard_dispatch_icall_no_overrides(a1, a3);
}
