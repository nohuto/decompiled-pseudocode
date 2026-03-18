/*
 * XREFs of MmGetSystemPageTableCommit @ 0x1404DBDFC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *MmGetSystemPageTableCommit()
{
  return stru_140E36558.WaitBlock[0].WaitListEntry.Blink;
}
