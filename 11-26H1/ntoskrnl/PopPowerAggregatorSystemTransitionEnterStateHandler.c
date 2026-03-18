/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140A37360
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E6C14 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140A37300 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopSuspendResumePdc @ 0x140A37334 (PopSuspendResumePdc.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
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
    PopReleaseRwLock(&PopPowerAggregatorLock);
    PopSuspendResumePdc(1LL, v4);
    PopPowerRequestRevokeRequestsForSleep(v6, v5, v7, v8);
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    PopSleepstudyStartNextSession(3LL, v3);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v9, v10, v11);
  }
  return 0LL;
}
