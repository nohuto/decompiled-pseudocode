/*
 * XREFs of IopStartNextPacketByKey @ 0x140479198
 * Callers:
 *     IopStartNextPacketByKeyEx @ 0x140479004 (IopStartNextPacketByKeyEx.c)
 *     IoStartNextPacketByKey @ 0x1405CB430 (IoStartNextPacketByKey.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140479270 (KeRemoveByKeyDeviceQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopStartNextPacketByKey(__int64 a1, int a2, ULONG a3)
{
  KIRQL v3; // di
  PKDEVICE_QUEUE_ENTRY v7; // rax
  PKDEVICE_QUEUE_ENTRY v8; // rsi

  v3 = 0;
  if ( a2 )
    v3 = KeAcquireQueuedSpinLock(7uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = KeRemoveByKeyDeviceQueue((PKDEVICE_QUEUE)(a1 + 160), a3);
  if ( v7 )
  {
    v8 = v7 - 5;
    *(_QWORD *)(a1 + 32) = v7 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v8[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v3);
    }
    guard_dispatch_icall_no_overrides(a1, v8);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v3);
  }
}
