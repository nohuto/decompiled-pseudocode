/*
 * XREFs of PopFanUpdateRunningState @ 0x1407DEF44
 * Callers:
 *     PopFanWorker @ 0x140B36AD0 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1407DEE64 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateRunningState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock, a2, a3, a4);
  if ( a1 )
    v5 = PopFanTracking + 1;
  else
    v5 = PopFanTracking - 1;
  PopFanTracking = v5;
  if ( v5 )
  {
    if ( !byte_140F102A4 )
    {
      byte_140F102A4 = 1;
      qword_140F102B8 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140F102A4 )
  {
    if ( byte_140F102A5 )
      PopFanEndCsFanPeriod();
    byte_140F102A4 = 0;
    qword_140F102B8 = 0LL;
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopFanLock);
}
