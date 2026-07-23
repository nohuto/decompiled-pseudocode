/*
 * XREFs of WmipNotificationIrpCancel @ 0x1403FBA80
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402FF4B0 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x1403FB2AC (WmipClearIrpObjectList.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2, __int64 a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &WmipCancelSpinLock;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&WmipCancelSpinLock, a3);
  WmipClearIrpObjectList((__int64)a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Status = -1073741536;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
}
