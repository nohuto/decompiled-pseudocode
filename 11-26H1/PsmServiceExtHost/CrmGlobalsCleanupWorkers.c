/*
 * XREFs of CrmGlobalsCleanupWorkers @ 0x180075360
 * Callers:
 *     CrmGlobalsCleanup @ 0x180075274 (CrmGlobalsCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18006CA40 (CrmStateMonitorNpuUsageContextCleanup.c)
 */

void __fastcall CrmGlobalsCleanupWorkers(__int64 a1)
{
  __int64 v2; // rcx

  if ( (_QWORD)xmmword_1800E39B0 )
  {
    CempLockAcquireExclusive((__int64)&unk_1800E39A0);
    TpSetTimer(xmmword_1800E39B0, 0LL, 0LL, 0LL);
    dword_1800E39A8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E39A0);
    TpWaitForTimer(xmmword_1800E39B0, 1LL);
    TpReleaseTimer(xmmword_1800E39B0);
  }
  CrmStateMonitorNpuUsageContextCleanup((__int64)&xmmword_1800E39C0);
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
  {
    TpWaitForWork(v2, 0LL);
    TpReleaseWork(*(_QWORD *)(a1 + 464));
  }
}
