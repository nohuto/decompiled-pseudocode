/*
 * XREFs of PopPowerAggregatorNotifySuspendResume @ 0x140B46B2C
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceSuspendResume @ 0x140B46BD8 (PopPowerAggregatorDiagTraceSuspendResume.c)
 */

NTSTATUS __fastcall PopPowerAggregatorNotifySuspendResume(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  int *v6; // rdx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  int Dpc_high; // [rsp+40h] [rbp+8h] BYREF

  Dpc_high = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  LOBYTE(v5) = a1;
  PopPowerAggregatorDiagTraceSuspendResume(v5, LODWORD(PopPowerAggregatorLock.Timer.Dpc));
  if ( a1 )
  {
    if ( ++LODWORD(PopPowerAggregatorLock.Timer.Dpc) != 1 )
      goto LABEL_7;
    v6 = 0LL;
    v7 = 7LL;
  }
  else
  {
    if ( --LODWORD(PopPowerAggregatorLock.Timer.Dpc) )
      goto LABEL_7;
    v6 = &Dpc_high;
    Dpc_high = HIDWORD(PopPowerAggregatorLock.Timer.Dpc);
    v7 = 8LL;
  }
  PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v7, v6, 0, 0x14u);
LABEL_7:
  result = PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( a1 )
    return KeWaitForSingleObject(&PopPowerAggregatorLock.Timer.DueTime, Executive, 0, 0, 0LL);
  return result;
}
