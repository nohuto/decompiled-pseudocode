/*
 * XREFs of NtIsUILanguageComitted @ 0x140B24990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtIsUILanguageComitted()
{
  return HIDWORD(PspSiloMonitorLock.CycleTime) == 0 ? 0xC0000034 : 0;
}
