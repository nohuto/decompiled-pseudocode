/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140B48F88
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset_0(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
