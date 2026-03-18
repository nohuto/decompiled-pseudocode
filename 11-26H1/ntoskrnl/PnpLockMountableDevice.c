/*
 * XREFs of PnpLockMountableDevice @ 0x1404FEF2C
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x1407B3F0C (PnpQueryStopDeviceNode.c)
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE3FF4 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall PnpLockMountableDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( v1[7] )
        KeWaitForSingleObject(v1 + 35, Executive, 0, 0, 0LL);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = (_QWORD *)v1[3];
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
