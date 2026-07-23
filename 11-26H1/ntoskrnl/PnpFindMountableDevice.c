/*
 * XREFs of PnpFindMountableDevice @ 0x1404DEC20
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x1407B6F6C (PnpQueryStopDeviceNode.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE1AFC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall PnpFindMountableDevice(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}
