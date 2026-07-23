/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409F2F20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E00B4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x1409F2EC0 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopSuspendResumePdc @ 0x1409F2EF4 (PopSuspendResumePdc.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionEnterStateHandler(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
    memset(v13, 0, sizeof(v13));
    v3 = MonitorReasonFromPowerEventId & 0xFFFFFF;
    LODWORD(v13[0]) = 5;
    PopPowerAggregatorSetCurrentState(a1, v13);
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
    PopSuspendResumePdc(1LL, v4);
    PopPowerRequestRevokeRequestsForSleep(v6, v5, v7, v8);
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    PopSleepstudyStartNextSession(3LL, v3);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v9, v10, v11);
  }
  return 0LL;
}
