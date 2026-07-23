/*
 * XREFs of PpmCheckStart @ 0x14025832C
 * Callers:
 *     PpmCheckPeriodicStart @ 0x140258280 (PpmCheckPeriodicStart.c)
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PpmEventTracePerfCheckStart @ 0x140258428 (PpmEventTracePerfCheckStart.c)
 *     PpmCheckRun @ 0x140258540 (PpmCheckRun.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14025A1A8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14025A1F8 (PpmPerfSetAllDomainsToUpdate.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rbx
  _BOOL8 v2; // rdi
  int v4; // edx
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckStartupTime = 0;
  PpmCheckIterations = 1;
  memset_0(&PpmCheckPhaseStatistics, 0, 0xC0uLL);
  PpmCheckCurrentAccountingBucket = (__int64)&PpmCheckStartupTime;
  PpmCheckTime = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  PpmCheckPhaseTimestamp = PpmCheckTime;
  PpmEventTracePerfCheckStart(PpmCheckLastEffectiveExecutionTime, (unsigned int)v1);
  PpmCheckPipelineIndex = 0;
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  v2 = (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008];
  if ( __PAIR64__(PpmCheckLatencyBoostActive, PpmCheckDeadlineBoostActive) != __PAIR64__(
                                                                                (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008],
                                                                                v2) )
  {
    PpmPerfSetAllDomainsToUpdate();
    PpmCheckLatencyBoostActive = v4;
    PpmCheckDeadlineBoostActive = v2;
    PpmHeteroHgsCheckContainmentDecision();
  }
  return PpmCheckRun(0LL, 0LL, 0LL, 0LL);
}
