/*
 * XREFs of CrmStateMonitorPostShellReadyTimerCallback @ 0x180076D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorPostShellReadyTimerCallback(__int64 a1, __int64 a2)
{
  return CrmStateMonitorPostShellReadySetAndReset(a2, 1);
}
