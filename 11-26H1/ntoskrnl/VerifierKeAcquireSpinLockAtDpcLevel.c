/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x140C396B0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned int v4; // edx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  ++dword_140F08A28;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
    if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v3) )
    {
      VfAvlInitializeLockContext((__int64)&v9, 1);
      v6 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v9, v5, v4);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 64);
        if ( v7 )
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 164));
      }
      VfAvlCleanupLockContext((__int64)&v9);
    }
  }
  return guard_dispatch_icall_no_overrides(a1, a2);
}
