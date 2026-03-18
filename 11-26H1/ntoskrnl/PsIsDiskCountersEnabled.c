/*
 * XREFs of PsIsDiskCountersEnabled @ 0x140614F10
 * Callers:
 *     ExpPcwHostCallback @ 0x140841950 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
