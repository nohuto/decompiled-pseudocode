/*
 * XREFs of KiYieldWaitForDebugger @ 0x1405E8CBC
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KiCheckForFreezeExecution @ 0x1405E79B0 (KiCheckForFreezeExecution.c)
 */

void __noreturn KiYieldWaitForDebugger()
{
  while ( 1 )
  {
    if ( KeGetPcr()->Prcb.CombinedNmiMceActive )
      KiCheckForFreezeExecution(0LL);
    _mm_pause();
  }
}
