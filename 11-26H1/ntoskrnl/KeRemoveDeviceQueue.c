/*
 * XREFs of KeRemoveDeviceQueue @ 0x140359C70
 * Callers:
 *     IoFreeAdapterChannelV2 @ 0x14035AD80 (IoFreeAdapterChannelV2.c)
 *     IopStartNextPacket @ 0x1404790D0 (IopStartNextPacket.c)
 *     IoFreeController @ 0x1404FA0B0 (IoFreeController.c)
 *     DifKeRemoveDeviceQueueWrapper @ 0x140663A90 (DifKeRemoveDeviceQueueWrapper.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  __int64 v1; // r8
  struct _KDEVICE_QUEUE_ENTRY *v3; // rdi
  KSPIN_LOCK *p_Lock; // rcx
  __int64 v5; // rdx
  LIST_ENTRY *p_DeviceListHead; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v9; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  p_Lock = &DeviceQueue->Lock;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(p_Lock, &LockHandle);
  }
  else
  {
    LockHandle.LockQueue.Lock = p_Lock;
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v5 = _InterlockedExchange64((volatile __int64 *)p_Lock, (__int64)&LockHandle);
      if ( v5 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v5, v1);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)p_Lock);
    }
  }
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  Flink = DeviceQueue->DeviceListHead.Flink;
  if ( Flink == &DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    v3 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
    v9 = Flink->Flink;
    if ( Flink->Blink != p_DeviceListHead || v9->Blink != Flink )
      __fastfail(3u);
    p_DeviceListHead->Flink = v9;
    v9->Blink = p_DeviceListHead;
    BYTE4(Flink[1].Flink) = 0;
    v10 = DeviceQueue->1;
    if ( v3 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v10 >> 8) )
      DeviceQueue->1 = v10;
  }
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v3;
}
