/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x1407D6EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABB41C (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopPowerAggregatorSessionSwitchWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  char v5; // bl
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  if ( BYTE1(PopPowerAggregatorLock.SchedulingGroup) )
  {
    LOWORD(PopPowerAggregatorLock.SchedulingGroup) = 0;
    v4 = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorLock.Header.WaitListHead.Blink);
  }
  else
  {
    BYTE1(PopPowerAggregatorLock.SchedulingGroup) = 1;
    v5 = 1;
  }
  result = PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( v4 )
    return PdcTaskClientRequest(PopSleepstudySessionLock.WriteTransferCount, 0LL);
  if ( v5 )
  {
    LOBYTE(v7) = 1;
    PdcTaskClientRequest(PopSleepstudySessionLock.WriteTransferCount, v7);
    v8[0] = 0LL;
    v8[1] = -1LL;
    return KeSetTimer2((__int64)&PopPowerAggregatorLock.TrapFrame, -50000000LL, 0LL, (__int64)v8);
  }
  return result;
}
