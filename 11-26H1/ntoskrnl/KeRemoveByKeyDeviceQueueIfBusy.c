/*
 * XREFs of KeRemoveByKeyDeviceQueueIfBusy @ 0x140472CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140473070 (KeAcquireInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueueIfBusy(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *v4; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _KDEVICE_QUEUE *Flink; // rcx
  struct _LIST_ENTRY *v7; // rdx
  bool v8; // zf
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  if ( DeviceQueue->Busy )
  {
    p_DeviceListHead = &DeviceQueue->DeviceListHead;
    Flink = (struct _KDEVICE_QUEUE *)DeviceQueue->DeviceListHead.Flink;
    if ( Flink == (struct _KDEVICE_QUEUE *)&DeviceQueue->DeviceListHead )
    {
      DeviceQueue->Busy = 0;
    }
    else
    {
      v4 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
      while ( 1 )
      {
        v7 = v4->DeviceListEntry.Flink;
        if ( SortKey <= v4->SortKey )
          break;
        v4 = (struct _KDEVICE_QUEUE_ENTRY *)v4->DeviceListEntry.Flink;
        if ( v7 == p_DeviceListHead )
        {
          v4 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
          v7 = *(struct _LIST_ENTRY **)&Flink->Type;
          if ( Flink->DeviceListHead.Flink == p_DeviceListHead )
          {
            v8 = v7->Blink == (struct _LIST_ENTRY *)Flink;
            goto LABEL_13;
          }
          goto LABEL_16;
        }
      }
      p_DeviceListHead = v4->DeviceListEntry.Blink;
      if ( (struct _KDEVICE_QUEUE_ENTRY *)v7->Blink != v4 )
        goto LABEL_16;
      v8 = p_DeviceListHead->Flink == (struct _LIST_ENTRY *)v4;
LABEL_13:
      if ( !v8 )
LABEL_16:
        __fastfail(3u);
      p_DeviceListHead->Flink = v7;
      v7->Blink = p_DeviceListHead;
      v4->Inserted = 0;
      v9 = DeviceQueue->1;
      if ( v4 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v9 >> 8) )
        DeviceQueue->1 = v9;
    }
  }
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v4;
}
