/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     PopSuspendResumePdc @ 0x140A37334 (PopSuspendResumePdc.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
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
  PopReleaseRwLock(&PopPowerAggregatorLock);
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
