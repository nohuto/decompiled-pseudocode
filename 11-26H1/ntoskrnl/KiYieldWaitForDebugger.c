/*
 * XREFs of KiYieldWaitForDebugger @ 0x1405EB62C
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KiCheckForFreezeExecution @ 0x1405EA320 (KiCheckForFreezeExecution.c)
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
