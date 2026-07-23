/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1402A51B0
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1405272A4 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1402A534C (MiGetNumberOfCachedPtes.c)
 */

char *MmGetNumberOfFreeSystemPtes()
{
  struct _LIST_ENTRY *v0; // rbx

  v0 = &stru_140E366D8.Timer.TimerListEntry.Blink[32 * (*(_QWORD *)&stru_140E2DAB0.Timer.Header.Lock - qword_140E37B88)];
  return (char *)v0 + MiGetNumberOfCachedPtes(&stru_140E366D8.WaitBlockList);
}
