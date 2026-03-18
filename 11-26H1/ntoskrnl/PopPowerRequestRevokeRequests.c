/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x1404A5FC0
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409467E0 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140A37300 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B5EBCC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 */

void __fastcall PopPowerRequestRevokeRequests(int a1, char a2)
{
  struct _KTHREAD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12D20.Header.WaitListHead.Blink, &LockHandle);
  if ( !a2 )
  {
    a1 &= ~LODWORD(stru_140F12D20.Timer.TimerListEntry.Blink);
    if ( !a1 )
      goto LABEL_3;
    LODWORD(stru_140F12D20.Timer.TimerListEntry.Blink) |= a1;
  }
  for ( i = (struct _KTHREAD *)stru_140F12D20.QuantumTarget;
        i != (struct _KTHREAD *)&stru_140F12D20.QuantumTarget;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( a2 )
    {
      if ( (a1 & HIDWORD(i->SListFaultAddress)) == a1 )
        continue;
      HIDWORD(i->SListFaultAddress) |= a1;
    }
    PopPowerRequestEvaluatePendingRequestStatus(i);
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)&stru_140F12D20.ApcStateFill[8]) == 1 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F12D20.SystemCallNumber, CriticalWorkQueue);
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
