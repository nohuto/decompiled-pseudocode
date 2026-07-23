/*
 * XREFs of PopPowerRequestReferenceRelease @ 0x14049FB30
 * Callers:
 *     PpmEndHighPerfRequest @ 0x14049F728 (PpmEndHighPerfRequest.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14049F870 (PopApplyLegacyPowerRequestFlags.c)
 *     PoClearPowerRequest @ 0x14049FAF0 (PoClearPowerRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404D57E8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PpmHighPerfRequestExpiration @ 0x14060E7F0 (PpmHighPerfRequestExpiration.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x140AF441C (PopPowerRequestActionInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 *     PopDiagTracePowerRequestChange @ 0x1404A00F8 (PopDiagTracePowerRequestChange.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopPowerRequestReferenceRelease(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // rsi
  bool v4; // bp
  unsigned __int8 CurrentIrql; // al
  _QWORD *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (int)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = 0LL;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v11 + 1) = &v11;
    *(_QWORD *)&v11 = &v11;
  }
  v6 = (_QWORD *)((unsigned __int64)&v11 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && (v7 = Object[5], _bittest(&v7, a2))
    && (a2 != 3 || (_KPROCESS *)*((_QWORD *)Object + 17) == KeGetCurrentThread()->ApcState.Process) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12EA0.QueuedScb, &LockHandle);
    v8 = Object[v2 + 10];
    if ( v8 )
    {
      Object[v2 + 10] = v8 - 1;
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      if ( v6 )
        v4 = *v6 != (_QWORD)v6;
      PopDiagTracePowerRequestChange(Object);
      v9 = 0;
    }
    else
    {
      v9 = -1073741637;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v9 >= 0 )
    {
      if ( v6 )
      {
        if ( v4 )
          PopPowerRequestCallbackWorker(v6);
      }
      else
      {
        PopQueueWorkItem(&stru_140F12EA0.KernelWaitTime, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v9;
}
