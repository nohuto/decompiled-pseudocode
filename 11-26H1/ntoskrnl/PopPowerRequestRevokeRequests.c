/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x14049F650
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x1409F2EC0 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B61D4C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78 (PopPowerRequestEvaluatePendingRequestStatus.c)
 */

void __fastcall PopPowerRequestRevokeRequests(int a1, char a2)
{
  struct _KTHREAD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12EA0.QueuedScb, &LockHandle);
  if ( !a2 )
  {
    a1 &= ~LODWORD(stru_140F12EA0.IoSelfBoostsEntry.Next);
    if ( !a1 )
      goto LABEL_3;
    LODWORD(stru_140F12EA0.IoSelfBoostsEntry.Next) |= a1;
  }
  for ( i = (struct _KTHREAD *)stru_140F12EA0.WpsFeedback;
        i != (struct _KTHREAD *)&stru_140F12EA0.WpsFeedback;
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
  if ( _InterlockedIncrement(&stru_140F12EA0.SchedulerAssistPriorityFloor) == 1 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F12EA0.KernelWaitTime, CriticalWorkQueue);
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
