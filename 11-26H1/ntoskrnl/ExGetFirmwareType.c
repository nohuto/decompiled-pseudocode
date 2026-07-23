/*
 * XREFs of ExGetFirmwareType @ 0x14052C1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ExGetFirmwareType()
{
  return LODWORD(ExpSysDbgLock.ThreadListEntry.Blink);
}
