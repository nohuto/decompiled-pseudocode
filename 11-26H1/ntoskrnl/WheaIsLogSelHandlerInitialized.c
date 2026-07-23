/*
 * XREFs of WheaIsLogSelHandlerInitialized @ 0x1406DB320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool WheaIsLogSelHandlerInitialized()
{
  return *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] != 0;
}
