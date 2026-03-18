/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x1404DA020
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1404DA0E0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1404DA1A0 (PopDiagTraceIdleResiliencyEnd.c)
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
    v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread);
    v1 = v0;
    LOBYTE(v2) = PopWeakChargerLock.SchedulerApcFill3[17];
    v3 = PopDeepSleepEnforced != 0;
    v4 = *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] == 0;
    if ( PopWeakChargerLock.SchedulerApcFill3[17] == (*(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] == 0) )
      break;
    if ( *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] )
      PopDiagTraceIdleResiliencyEnd(v2, (unsigned int)(v3 + 2));
    else
      PopDiagTraceIdleResiliencyStart(v2, (unsigned int)(v3 + 2), 0x1Eu / KeMaximumIncrement + 1);
    PopWeakChargerLock.SchedulerApcFill3[17] = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread, v1);
    PpmAcquireLock((struct _KTHREAD **)&qword_140F123A0, v5, v6);
    PoFxSendSystemLatencyUpdate(v8, v7, v9, v10);
    PpmReleaseLock(&qword_140F123A0);
  }
  PopWeakChargerLock.SchedulerApcFill3[32] = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread, v0);
}
