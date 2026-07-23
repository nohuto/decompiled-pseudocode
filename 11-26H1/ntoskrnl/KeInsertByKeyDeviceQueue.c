/*
 * XREFs of KeInsertByKeyDeviceQueue @ 0x140472F90
 * Callers:
 *     IoStartPacket @ 0x140472E40 (IoStartPacket.c)
 *     DifKeInsertByKeyDeviceQueueWrapper @ 0x1406656D0 (DifKeInsertByKeyDeviceQueueWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140473070 (KeAcquireInStackQueuedSpinLockForDpc.c)
 */

BOOLEAN __stdcall KeInsertByKeyDeviceQueue(
        PKDEVICE_QUEUE DeviceQueue,
        PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
        ULONG SortKey)
{
  BOOLEAN v6; // di
  BOOLEAN Busy; // al
  LIST_ENTRY *p_DeviceListHead; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceQueueEntry->SortKey = SortKey;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  Busy = DeviceQueue->Busy;
  DeviceQueue->Busy = 1;
  if ( Busy == 1 )
  {
    p_DeviceListHead = &DeviceQueue->DeviceListHead;
    if ( p_DeviceListHead->Flink != p_DeviceListHead && SortKey < LODWORD(DeviceQueue->DeviceListHead.Blink[1].Flink) )
    {
      do
        p_DeviceListHead = p_DeviceListHead->Flink;
      while ( SortKey >= LODWORD(p_DeviceListHead[1].Flink) );
    }
    Blink = p_DeviceListHead->Blink;
    if ( Blink->Flink != p_DeviceListHead )
      __fastfail(3u);
    DeviceQueueEntry->DeviceListEntry.Flink = p_DeviceListHead;
    v6 = 1;
    DeviceQueueEntry->DeviceListEntry.Blink = Blink;
    Blink->Flink = &DeviceQueueEntry->DeviceListEntry;
    p_DeviceListHead->Blink = &DeviceQueueEntry->DeviceListEntry;
  }
  DeviceQueueEntry->Inserted = v6;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v6;
}
