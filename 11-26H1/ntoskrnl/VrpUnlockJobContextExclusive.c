/*
 * XREFs of VrpUnlockJobContextExclusive @ 0x14093A7B4
 * Callers:
 *     VrpHandleIoctlModifyFlags @ 0x1408ABBC4 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14093AE58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140B01274 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     VrpPreUnloadKey @ 0x140B29C84 (VrpPreUnloadKey.c)
 *     VrpPostUnloadKey @ 0x140B63F7C (VrpPostUnloadKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
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
