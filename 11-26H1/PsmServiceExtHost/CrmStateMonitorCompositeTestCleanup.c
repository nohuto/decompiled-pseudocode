/*
 * XREFs of CrmStateMonitorCompositeTestCleanup @ 0x180076510
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorCompositeTestCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800E37D0, a1 + 64);
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((int *)qword_1800E37D8, a1 + 96);
}
