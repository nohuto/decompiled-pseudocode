/*
 * XREFs of PnpLockDeviceActionQueue @ 0x1404D1004
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1404D0F4C (IoControlPnpDeviceActionQueue.c)
 *     IoBuildPoDeviceNotifyList @ 0x140C0B000 (IoBuildPoDeviceNotifyList.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D0B300 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 */

void PnpLockDeviceActionQueue()
{
  KIRQL v0; // al
  KIRQL v1; // bl

  while ( 1 )
  {
    PpDevNodeLockTree(1LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v1 = v0;
    if ( !PnpEnumerationInProgress )
      break;
    KeReleaseSpinLock(&PnpSpinLock, v0);
    PpDevNodeUnlockTree(1LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  }
  PnpEnumerationInProgress = 1;
  KeResetEvent(&PnpEnumerationLock);
  KeReleaseSpinLock(&PnpSpinLock, v1);
}
