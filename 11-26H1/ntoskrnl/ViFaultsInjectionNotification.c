/*
 * XREFs of ViFaultsInjectionNotification @ 0x140C3AEA4
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 *     ViFaultsTracesLog @ 0x140C3B000 (ViFaultsTracesLog.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall ViFaultsInjectionNotification(int a1)
{
  __int64 v2; // r8
  unsigned int v3; // edx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  ++dword_140F08A4C;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v8 = 0LL;
    v9 = 0LL;
    if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(v2) )
    {
      VfAvlInitializeLockContext((__int64)&v8, 1);
      v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v8, v4, v3);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 64);
        if ( v6 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 180));
      }
      VfAvlCleanupLockContext((__int64)&v8);
    }
  }
  return ViFaultsTracesLog(a1 + 1);
}
