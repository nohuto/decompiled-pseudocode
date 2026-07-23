/*
 * XREFs of PpmCheckInit @ 0x140CD8DAC
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char PpmCheckInit()
{
  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140F0F658 = (__int64)PpmCheckRun;
  qword_140F0F660 = 0LL;
  qword_140F0F698 = (__int64)PpmCheckPeriodicStart;
  qword_140F0F678 = 0LL;
  qword_140F0F650 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140F0F6A0 = 0LL;
  qword_140F0F6B8 = 0LL;
  qword_140F0F690 = 0LL;
  *(_QWORD *)&PpmCachedSystemAllowedCpuSet.Count = 2097153LL;
  memset_0(&PpmCachedSystemAllowedCpuSet.8, 0, sizeof(PpmCachedSystemAllowedCpuSet.8));
  PpmCheckExecutionLock = 0LL;
  word_140F0F562 = 0;
  return KiInitializeTimer2((unsigned __int64)&PpmCheckTimer, (__int64)PpmCheckTimerCallback, 0LL, 12);
}
