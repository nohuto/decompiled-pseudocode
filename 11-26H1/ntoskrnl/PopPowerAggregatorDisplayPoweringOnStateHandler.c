/*
 * XREFs of PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1409F44A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E00B4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorDisplayPoweringOnStateHandler(__int64 a1)
{
  int v3; // ebx
  __int64 MonitorReasonFromPowerEventId; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 72) )
  {
    memset(v8, 0, sizeof(v8));
    PopPowerAggregatorSetCurrentState(a1, v8);
    v3 = *(_DWORD *)(a1 + 24);
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(v3);
    PopSleepstudyStartNextSession(0LL, MonitorReasonFromPowerEventId & 0xFFFFFF);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v5, v6, v7);
  }
  return 0LL;
}
