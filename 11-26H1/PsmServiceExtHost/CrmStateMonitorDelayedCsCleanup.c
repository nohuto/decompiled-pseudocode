/*
 * XREFs of CrmStateMonitorDelayedCsCleanup @ 0x180076760
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorDelayedCsCleanup(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3810, a1 + 64);
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
}
