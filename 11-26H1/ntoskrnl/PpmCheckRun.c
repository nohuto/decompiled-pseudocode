/*
 * XREFs of PpmCheckRun @ 0x140256BB0
 * Callers:
 *     PpmCheckStart @ 0x14025699C (PpmCheckStart.c)
 * Callees:
 *     PpmCheckBeginNewAccountingPeriod @ 0x140256C34 (PpmCheckBeginNewAccountingPeriod.c)
 *     PpmEventTracePerfCheckStop @ 0x140256C98 (PpmEventTracePerfCheckStop.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PpmCheckRun()
{
  unsigned __int8 *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // r8
  signed __int32 v3; // eax
  bool v4; // cc
  __int64 result; // rax

  while ( 1 )
  {
    v0 = &PopSleepstudySessionLock.SavedApcState.InProgressFlags
       + 8 * *(unsigned int *)&PopSleepstudySessionLock.WaitBlockFill11[100];
    PopSleepstudySessionLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)(v0 + 4);
    PpmCheckBeginNewAccountingPeriod(v0);
    if ( !*(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.WaitBlockFill11[16]
                    + 8LL * *(unsigned int *)&PopSleepstudySessionLock.WaitBlockFill11[100]) )
      break;
    ++*(_DWORD *)&PopSleepstudySessionLock.WaitBlockFill11[100];
    *(_DWORD *)&PopSleepstudySessionLock.ApcStateFill[8] = 1;
    guard_dispatch_icall_no_overrides(v1, *(unsigned int *)&PopSleepstudySessionLock.WaitBlockFill11[100], v2);
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)&PopSleepstudySessionLock.ApcStateFill[8], 0xFFFFFFFF);
    v4 = v3 <= 1;
    result = (unsigned int)(v3 - 1);
    if ( !v4 )
      return result;
  }
  PpmEventTracePerfCheckStop();
  return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
}
