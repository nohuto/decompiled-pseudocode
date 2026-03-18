/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1402A5DB8
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x140524C34 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1402A5F54 (MiGetNumberOfCachedPtes.c)
 */

char *MmGetNumberOfFreeSystemPtes()
{
  struct _LIST_ENTRY *v0; // rbx

  v0 = &stru_140E36558.Timer.TimerListEntry.Blink[32 * (*(_QWORD *)&stru_140E2D930.Timer.Header.Lock - qword_140E37A08)];
  return (char *)v0 + MiGetNumberOfCachedPtes(&stru_140E36558.WaitBlockList);
}
