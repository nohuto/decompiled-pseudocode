/*
 * XREFs of PopPowerRequestReferenceAcquire @ 0x1404A6310
 * Callers:
 *     PpmBeginHighPerfRequest @ 0x1404A6170 (PpmBeginHighPerfRequest.c)
 *     PoSetPowerRequest @ 0x1404A61A0 (PoSetPowerRequest.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1404A61E0 (PopApplyLegacyPowerRequestFlags.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerRequestActionInfo @ 0x140AF1B4C (PopPowerRequestActionInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x1404A68A0 (PopPowerRequestCallbackWorker.c)
 *     PopDiagTracePowerRequestChange @ 0x1404A6A68 (PopDiagTracePowerRequestChange.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopPowerRequestReferenceAcquire(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // rbp
  bool v4; // r14
  unsigned __int8 CurrentIrql; // al
  _QWORD *v6; // rdi
  int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (int)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v9 + 1) = &v9;
    *(_QWORD *)&v9 = &v9;
  }
  v6 = (_QWORD *)((unsigned __int64)&v9 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && ((1 << a2) & Object[5]) != 0
    && (a2 != 3 || (_KPROCESS *)*((_QWORD *)Object + 17) == KeGetCurrentThread()->ApcState.Process) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12D20.Header.WaitListHead.Blink, &LockHandle);
    if ( Object[v2 + 10] == -1 )
    {
      v7 = -1073741675;
    }
    else
    {
      Object[7] &= ~(1 << v2);
      ++Object[v2 + 10];
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      if ( v6 )
        v4 = *v6 != (_QWORD)v6;
      PopDiagTracePowerRequestChange(Object);
      v7 = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v7 >= 0 )
    {
      if ( v6 )
      {
        if ( v4 )
          PopPowerRequestCallbackWorker(v6);
      }
      else
      {
        PopQueueWorkItem(&stru_140F12D20.SystemCallNumber, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
