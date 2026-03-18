/*
 * XREFs of VrpUnlockJobContextExclusive @ 0x1409787A4
 * Callers:
 *     VrpHandleIoctlModifyFlags @ 0x1408A5754 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14097854C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140978E48 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140979150 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140AFF5E4 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     VrpPreUnloadKey @ 0x140B27FF4 (VrpPreUnloadKey.c)
 *     VrpPostUnloadKey @ 0x140B60EDC (VrpPostUnloadKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall VrpUnlockJobContextExclusive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
