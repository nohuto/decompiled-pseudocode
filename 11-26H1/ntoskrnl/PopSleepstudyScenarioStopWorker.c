/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x140B21670
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStop @ 0x140B216EC (PopDiagTraceSleepStudyStop.c)
 *     PopDiagTraceSleepStudyStart @ 0x140B2BCA4 (PopDiagTraceSleepStudyStart.c)
 */

__int64 __fastcall PopSleepstudyScenarioStopWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock, a2, a3, a4);
  v4 = 120LL * (unsigned int)dword_140F0EFC8;
  byte_140F0EF18 = 0;
  PopDiagTraceSleepStudyStop(qword_140F0EF10);
  qword_140F0EF10 = -1LL;
  v6 = *(_DWORD *)&byte_140F0EFD0[v4];
  if ( v6 == 1 || v6 == 2 )
  {
    LOBYTE(v5) = byte_140F0EFD0[v4 + 57];
    PopDiagTraceSleepStudyStart(v5);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopSleepstudySessionLock);
}
