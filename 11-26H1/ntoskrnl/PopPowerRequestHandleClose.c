/*
 * XREFs of PopPowerRequestHandleClose @ 0x1404A6668
 * Callers:
 *     PoDeletePowerRequest @ 0x140ABB790 (PoDeletePowerRequest.c)
 *     PopPowerRequestClose @ 0x140B26D80 (PopPowerRequestClose.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x1404A68A0 (PopPowerRequestCallbackWorker.c)
 */

void __fastcall PopPowerRequestHandleClose(_BYTE *Object)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2[1] = v2;
  v2[0] = v2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12D20.Header.WaitListHead.Blink, &LockHandle);
  Object[32] = 1;
  PopPowerRequestEvaluatePendingRequestStatus(Object);
  LOBYTE(Object) = v2[0] != (_QWORD)v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_BYTE)Object )
    PopPowerRequestCallbackWorker(v2);
}
