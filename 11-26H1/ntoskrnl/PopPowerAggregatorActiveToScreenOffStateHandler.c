/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D9690
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E00B4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorActiveToScreenOffStateHandler(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( PopPowerAggregatorUmpoInitialized )
  {
    memset(v8, 0, 32);
    v8[0] = 3;
    PopPowerAggregatorSetCurrentState(a1, v8);
    v2 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 304) = 0;
    v3 = PopGetMonitorReasonFromPowerEventId(v2) & 0xFFFFFF;
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
    PopSleepstudyStartNextSession(1LL, (unsigned int)v3);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v4, v5, v6);
  }
  return 0LL;
}
