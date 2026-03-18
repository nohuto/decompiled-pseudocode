/*
 * XREFs of PpmCheckQueueControlAction @ 0x1402577FC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140257780 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x1402577E0 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x140257CD0 (PpmPerfCommitPerformance.c)
 * Callees:
 *     PpmCheckBeginNewAccountingPeriod @ 0x140256C34 (PpmCheckBeginNewAccountingPeriod.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmCheckQueueControlAction(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  if ( a1 )
  {
    PpmCheckBeginNewAccountingPeriod(PopSleepstudySessionLock.SavedApcState.ApcListHead[0].Flink);
    _InterlockedIncrement((volatile signed __int32 *)&PopSleepstudySessionLock.ApcStateFill[8]);
    return guard_dispatch_icall_no_overrides(PpmCheckControlActionCallback, v1, v2);
  }
  return result;
}
