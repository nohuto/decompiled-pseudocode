/*
 * XREFs of VrpUnlockJobContextExclusive @ 0x14094AB0C
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408195FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140819B1C (VrpHandleIoctlModifyFlags.c)
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14094A72C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14094ACCC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14094BD98 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall VrpUnlockJobContextExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
