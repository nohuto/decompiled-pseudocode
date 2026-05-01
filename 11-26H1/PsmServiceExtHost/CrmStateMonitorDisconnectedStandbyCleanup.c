/*
 * XREFs of CrmStateMonitorDisconnectedStandbyCleanup @ 0x180076A2C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorDisconnectedStandbyCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3810, a1 + 64);
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800E38C0, a1 + 88);
}
