/*
 * XREFs of MmGetSystemPageTableCommit @ 0x1404D54DC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *MmGetSystemPageTableCommit()
{
  return stru_140E366D8.WaitBlock[0].WaitListEntry.Blink;
}
