/*
 * XREFs of CrmStateMonitorCPUUsageCleanup @ 0x1800760F4
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

void __fastcall CrmStateMonitorCPUUsageCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3810, a1 + 64);
  if ( *(_QWORD *)(a1 + 88) )
  {
    CempLockAcquireExclusive(a1 + 8);
    TpSetTimer(*(_QWORD *)(a1 + 88), 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
}
