/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140B50070
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpSysDbgLock.SchedulerApc.ApcStateIndex & 1;
}
