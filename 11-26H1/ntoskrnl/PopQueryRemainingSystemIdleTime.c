/*
 * XREFs of PopQueryRemainingSystemIdleTime @ 0x140AE44F4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopQueryRemainingSystemIdleTime(int *a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char *v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  int v11; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.SuspendEvent, (__int64)a2, a3, a4);
  *a1 = 0;
  if ( a2 )
    *a2 = dword_140E0B744;
  if ( dword_140E0B748 )
  {
    v7 = (char *)&unk_140E0B760;
    v8 = 4LL;
    v9 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    do
    {
      if ( !v7[8] )
      {
        v10 = v9 - *(_QWORD *)v7;
        if ( v10 <= (unsigned int)dword_140E0B748 )
        {
          v11 = *a1;
          if ( *a1 <= (unsigned int)(dword_140E0B748 - v10) )
            v11 = dword_140E0B748 - v10;
          *a1 = v11;
        }
      }
      v7 += 56;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    *a1 = -1;
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
}
