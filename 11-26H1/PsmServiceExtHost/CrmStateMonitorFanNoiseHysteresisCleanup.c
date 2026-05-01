/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006AD54
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorFanNoiseHysteresisCleanup(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3910, a1 + 88);
  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 112), 1LL);
    TpReleaseTimer(*(_QWORD *)(a1 + 112));
  }
}
