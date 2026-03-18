/*
 * XREFs of ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ @ 0x1400513E4
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x140050EA0 (-VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_DEFERRED_WORK_QUEUE_DPC::GetNumWorkItems(KSPIN_LOCK *this)
{
  unsigned int v2; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this, &LockHandle);
  this[1] = (KSPIN_LOCK)KeGetCurrentThread();
  v2 = *((_DWORD *)this + 8);
  this[1] = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
