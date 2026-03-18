/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x1404D77A4
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1404D7784 (IoControlPnpDeviceActionQueue.c)
 *     IoFreePoDeviceNotifyList @ 0x140C0A0AC (IoFreePoDeviceNotifyList.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D05030 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PpDevNodeUnlockTree @ 0x140A921A4 (PpDevNodeUnlockTree.c)
 */

__int64 PnpUnlockDeviceActionQueue()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( (__int64 *)PnpEnumerationRequestList == &PnpEnumerationRequestList )
  {
    PnpEnumerationInProgress = 0;
    KeSetEvent(&PnpEnumerationLock, 0, 0);
  }
  else
  {
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  KeReleaseSpinLock(&PnpSpinLock, v0);
  return PpDevNodeUnlockTree(1LL);
}
