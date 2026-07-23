/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140B49768
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404CD980 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1409F88DC (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  }
  else
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegion();
  }
}
