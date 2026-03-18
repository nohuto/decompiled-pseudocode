/*
 * XREFs of WmipNotificationIrpCancel @ 0x1404855E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140301310 (KxAcquireQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x140485768 (WmipClearIrpObjectList.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &WmipCancelSpinLock;
  KxAcquireQueuedSpinLock((struct _KPRCB *)&LockHandle, (volatile __int64 *)&WmipCancelSpinLock);
  WmipClearIrpObjectList(a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
