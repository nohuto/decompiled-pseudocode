/*
 * XREFs of PpmCheckQueueControlAction @ 0x140258FDC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140258F60 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x140258FC0 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x1402594B0 (PpmPerfCommitPerformance.c)
 * Callees:
 *     PpmCheckBeginNewAccountingPeriod @ 0x1402585C4 (PpmCheckBeginNewAccountingPeriod.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmCheckQueueControlAction(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  if ( a1 )
  {
    PpmCheckBeginNewAccountingPeriod(PpmCheckCurrentActionAccountingBucket);
    _InterlockedIncrement(&PpmCheckActionCount);
    return guard_dispatch_icall_no_overrides(PpmCheckControlActionCallback, v1, v2);
  }
  return result;
}
