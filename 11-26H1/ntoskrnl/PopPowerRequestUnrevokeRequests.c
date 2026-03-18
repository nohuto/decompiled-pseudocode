/*
 * XREFs of PopPowerRequestUnrevokeRequests @ 0x1404EF380
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409467E0 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140B5CCEC (PopPowerRequestNotifyTtmSessionInitialized.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerRequestUnrevokeRequests(int a1)
{
  int v2; // ebx
  int v3; // eax
  struct _KTHREAD *QuantumTarget; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12D20.Header.WaitListHead.Blink, &LockHandle);
  v2 = (__int64)stru_140F12D20.Timer.TimerListEntry.Blink & a1;
  if ( v2 )
  {
    v3 = ~v2 & (__int64)stru_140F12D20.Timer.TimerListEntry.Blink;
    QuantumTarget = (struct _KTHREAD *)stru_140F12D20.QuantumTarget;
    LODWORD(stru_140F12D20.Timer.TimerListEntry.Blink) = v3;
    while ( QuantumTarget != (struct _KTHREAD *)&stru_140F12D20.QuantumTarget )
    {
      PopPowerRequestEvaluatePendingRequestStatus(QuantumTarget, 0LL);
      QuantumTarget = *(struct _KTHREAD **)&QuantumTarget->Header.Lock;
    }
    PopQueueWorkItem((__int64)&stru_140F12D20.SystemCallNumber, CriticalWorkQueue);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
