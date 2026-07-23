/*
 * XREFs of PpmCheckRun @ 0x140258540
 * Callers:
 *     PpmCheckStart @ 0x14025832C (PpmCheckStart.c)
 * Callees:
 *     PpmCheckBeginNewAccountingPeriod @ 0x1402585C4 (PpmCheckBeginNewAccountingPeriod.c)
 *     PpmEventTracePerfCheckStop @ 0x140258628 (PpmEventTracePerfCheckStop.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PpmCheckRun()
{
  char *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // r8
  signed __int32 v3; // eax
  bool v4; // cc
  __int64 result; // rax

  while ( 1 )
  {
    v0 = (char *)&PpmCheckPhaseStatistics + 8 * (unsigned int)PpmCheckPipelineIndex;
    PpmCheckCurrentActionAccountingBucket = (__int64)(v0 + 4);
    PpmCheckBeginNewAccountingPeriod(v0);
    if ( !*(_QWORD *)(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex) )
      break;
    ++PpmCheckPipelineIndex;
    PpmCheckActionCount = 1;
    guard_dispatch_icall_no_overrides(v1, (unsigned int)PpmCheckPipelineIndex, v2);
    v3 = _InterlockedExchangeAdd(&PpmCheckActionCount, 0xFFFFFFFF);
    v4 = v3 <= 1;
    result = (unsigned int)(v3 - 1);
    if ( !v4 )
      return result;
  }
  PpmEventTracePerfCheckStop();
  return PpmReleaseLock(&PpmIdlePolicyLock.ThreadLock);
}
