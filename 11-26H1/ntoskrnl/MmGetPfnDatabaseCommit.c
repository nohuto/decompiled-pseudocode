/*
 * XREFs of MmGetPfnDatabaseCommit @ 0x1404D54EC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *MmGetPfnDatabaseCommit()
{
  return stru_140E366D8.WaitBlock[0].Thread;
}
