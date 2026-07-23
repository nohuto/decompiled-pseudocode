/*
 * XREFs of PopPowerRequestHandleClose @ 0x14049FCF8
 * Callers:
 *     PoDeletePowerRequest @ 0x14094CE80 (PoDeletePowerRequest.c)
 *     PopPowerRequestClose @ 0x140B28FE0 (PopPowerRequestClose.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 */

void __fastcall PopPowerRequestHandleClose(_BYTE *Object)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2[1] = v2;
  v2[0] = v2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12EA0.QueuedScb, &LockHandle);
  Object[32] = 1;
  PopPowerRequestEvaluatePendingRequestStatus(Object);
  LOBYTE(Object) = v2[0] != (_QWORD)v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_BYTE)Object )
    PopPowerRequestCallbackWorker(v2);
}
