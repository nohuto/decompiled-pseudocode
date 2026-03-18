/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140B46F58
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset_0(&stru_140F11D08.StackBase, 0, 0x80uLL);
}
