/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x1407D9FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABC8DC (PopPowerAggregatorScheduleWorker.c)
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
  if ( byte_140F0D919 )
  {
    unk_140F0D918 = 0;
    v4 = 1;
    PopPowerAggregatorScheduleWorker(PopPowerAggregatorContext);
  }
  else
  {
    byte_140F0D919 = 1;
    v5 = 1;
  }
  result = PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  if ( v4 )
    return PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 0LL);
  if ( v5 )
  {
    LOBYTE(v7) = 1;
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, v7);
    v8[0] = 0LL;
    v8[1] = -1LL;
    return KeSetTimer2((__int64)&unk_140F0D940, -50000000LL, 0LL, (__int64)v8);
  }
  return result;
}
