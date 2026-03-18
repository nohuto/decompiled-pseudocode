/*
 * XREFs of ExGetFirmwareType @ 0x140529C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ExGetFirmwareType()
{
  return *(unsigned int *)&ExpSysDbgLock.SchedulerApcFill5[64];
}
