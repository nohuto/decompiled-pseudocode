/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140B479D4
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404D4110 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140A3CEBC (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
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
