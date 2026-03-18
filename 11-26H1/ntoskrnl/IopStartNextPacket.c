/*
 * XREFs of IopStartNextPacket @ 0x1404790D0
 * Callers:
 *     IoStartNextPacket @ 0x140478FC0 (IoStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x140479004 (IopStartNextPacketByKeyEx.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KeRemoveDeviceQueue @ 0x140359C70 (KeRemoveDeviceQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopStartNextPacket(__int64 a1, int a2)
{
  KIRQL v2; // di
  PKDEVICE_QUEUE_ENTRY v5; // rax
  PKDEVICE_QUEUE_ENTRY v6; // rbp

  v2 = 0;
  if ( a2 )
    v2 = KeAcquireQueuedSpinLock(7uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = KeRemoveDeviceQueue((PKDEVICE_QUEUE)(a1 + 160));
  if ( v5 )
  {
    v6 = v5 - 5;
    *(_QWORD *)(a1 + 32) = v5 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v6[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v2);
    }
    guard_dispatch_icall_no_overrides(a1, v6);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
  }
}
