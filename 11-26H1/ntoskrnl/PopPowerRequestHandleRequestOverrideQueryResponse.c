/*
 * XREFs of PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1404A65D0
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AECCA4 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140AF7934 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestTableLookupEntry @ 0x140AFDC50 (PopPowerRequestTableLookupEntry.c)
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12D20.Header.WaitListHead.Blink, &LockHandle);
    v4[6] = v6;
    PopPowerRequestEvaluatePendingRequestStatus(v4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedIncrement((volatile signed __int32 *)&stru_140F12D20.ApcStateFill[8]) == 1 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F12D20.SystemCallNumber, CriticalWorkQueue);
  }
  return PopReleasePowerRequestPushLock(v3, v2, v5);
}
