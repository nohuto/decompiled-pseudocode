/*
 * XREFs of PopPowerRequestUnrevokeRequests @ 0x1404E8960
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140B5FE6C (PopPowerRequestNotifyTtmSessionInitialized.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerRequestUnrevokeRequests(int a1)
{
  int v2; // ebx
  int v3; // eax
  struct _KTHREAD *WpsFeedback; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12EA0.QueuedScb, &LockHandle);
  v2 = (__int64)stru_140F12EA0.IoSelfBoostsEntry.Next & a1;
  if ( v2 )
  {
    v3 = ~v2 & (__int64)stru_140F12EA0.IoSelfBoostsEntry.Next;
    WpsFeedback = (struct _KTHREAD *)stru_140F12EA0.WpsFeedback;
    LODWORD(stru_140F12EA0.IoSelfBoostsEntry.Next) = v3;
    while ( WpsFeedback != (struct _KTHREAD *)&stru_140F12EA0.WpsFeedback )
    {
      PopPowerRequestEvaluatePendingRequestStatus(WpsFeedback, 0LL);
      WpsFeedback = *(struct _KTHREAD **)&WpsFeedback->Header.Lock;
    }
    PopQueueWorkItem((__int64)&stru_140F12EA0.KernelWaitTime, CriticalWorkQueue);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
