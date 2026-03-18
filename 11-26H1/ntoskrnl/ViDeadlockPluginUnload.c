/*
 * XREFs of ViDeadlockPluginUnload @ 0x1406470E0
 * Callers:
 *     <none>
 * Callees:
 *     ViDeadlockDetectionApplySettings @ 0x140C37414 (ViDeadlockDetectionApplySettings.c)
 */

void __noreturn ViDeadlockPluginUnload()
{
  ViDeadlockDetectionApplySettings(0LL);
}
