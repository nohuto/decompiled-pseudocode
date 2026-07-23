/*
 * XREFs of PsIsDiskCountersEnabled @ 0x140617DB0
 * Callers:
 *     ExpPcwHostCallback @ 0x140847B90 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
