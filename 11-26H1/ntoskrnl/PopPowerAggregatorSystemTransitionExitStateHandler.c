/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     PopSuspendResumePdc @ 0x1409F2EF4 (PopSuspendResumePdc.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionExitStateHandler(struct _KEVENT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  _OWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF

  KeResetEvent(a1 + 11);
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[0]) = 3;
  PopPowerAggregatorSetCurrentState(a1, v6);
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(1LL, 20LL);
  if ( PopIdleScanInterval )
  {
    KeResetEvent(&PopIdleLoopExecuted);
    PopGetPolicyWorker(128);
    PopCheckForWork();
    KeWaitForSingleObject(&PopIdleLoopExecuted, Executive, 0, 0, 0LL);
  }
  PopSuspendResumePdc(2LL);
  PopSuspendResumePdc(3LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v2, v3, v4);
  return 0LL;
}
