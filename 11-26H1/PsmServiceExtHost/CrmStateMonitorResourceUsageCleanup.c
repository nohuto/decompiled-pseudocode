/*
 * XREFs of CrmStateMonitorResourceUsageCleanup @ 0x180076EB8
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

void __fastcall CrmStateMonitorResourceUsageCleanup(__int64 a1)
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
  if ( *(_DWORD *)a1 == 42 )
  {
    CempLockAcquireExclusive((__int64)&unk_1800E39A0);
    *((_QWORD *)&xmmword_1800E39B0 + 1) = 0LL;
    dword_1800E39A8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E39A0);
  }
}
