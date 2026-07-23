/*
 * XREFs of PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14049FC60
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407DF428 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140AF9FD4 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestTableLookupEntry @ 0x140AFFCC0 (PopPowerRequestTableLookupEntry.c)
 */

__int64 __fastcall PopPowerRequestHandleRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquirePowerRequestPushLock(a1);
  v4 = (_DWORD *)PopPowerRequestTableLookupEntry(*v1);
  if ( v4 )
  {
    v6 = v1[2];
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12EA0.QueuedScb, &LockHandle);
    v4[6] = v6;
    PopPowerRequestEvaluatePendingRequestStatus(v4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedIncrement(&stru_140F12EA0.SchedulerAssistPriorityFloor) == 1 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F12EA0.KernelWaitTime, CriticalWorkQueue);
  }
  return PopReleasePowerRequestPushLock(v3, v2, v5);
}
