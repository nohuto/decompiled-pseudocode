/*
 * XREFs of MmGetPfnDatabaseCommit @ 0x1404DBE0C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *MmGetPfnDatabaseCommit()
{
  return stru_140E36558.WaitBlock[0].Thread;
}
