/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x1404D3700
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1404D37C0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1404D3880 (PopDiagTraceIdleResiliencyEnd.c)
 */

void PopDeepSleepEvaluateCallback()
{
  KIRQL v0; // al
  KIRQL v1; // di
  __int64 v2; // rcx
  BOOL v3; // r9d
  bool v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v1 = v0;
    LOBYTE(v2) = PopDeepSleepIsEngaged;
    v3 = PopDeepSleepEnforced != 0;
    v4 = PopDeepSleepDisengageReasonMask == 0;
    if ( PopDeepSleepIsEngaged == (PopDeepSleepDisengageReasonMask == 0) )
      break;
    if ( PopDeepSleepDisengageReasonMask )
      PopDiagTraceIdleResiliencyEnd(v2, (unsigned int)(v3 + 2));
    else
      PopDiagTraceIdleResiliencyStart(v2, (unsigned int)(v3 + 2), 0x1E / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v4;
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v1);
    PpmAcquireLock((struct _KTHREAD **)&qword_140F12AA0, v5, v6);
    PoFxSendSystemLatencyUpdate(v8, v7, v9, v10);
    PpmReleaseLock(&qword_140F12AA0);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v0);
}
