/*
 * XREFs of ViDeadlockPluginUnload @ 0x140608000
 * Callers:
 *     <none>
 * Callees:
 *     ViDeadlockDetectionApplySettings @ 0x140B891A8 (ViDeadlockDetectionApplySettings.c)
 */

void __noreturn ViDeadlockPluginUnload()
{
  ViDeadlockDetectionApplySettings(0LL);
}
