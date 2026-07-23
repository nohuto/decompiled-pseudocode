/*
 * XREFs of NtIsUILanguageComitted @ 0x140B26E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtIsUILanguageComitted(void)
{
  return PspSiloMonitorLock.CurrentRunTime == 0 ? 0xC0000034 : 0;
}
