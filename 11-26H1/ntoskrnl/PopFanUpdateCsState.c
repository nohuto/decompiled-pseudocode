/*
 * XREFs of PopFanUpdateCsState @ 0x140B69324
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140B22110 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1407DEE64 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateCsState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock, a2, a3, a4);
  if ( a1 )
  {
    if ( byte_140F102A5 )
    {
      if ( byte_140F102A4 )
        PopFanEndCsFanPeriod();
      byte_140F102A5 = 0;
      qword_140F102C0 = 0LL;
    }
  }
  else if ( !byte_140F102A5 )
  {
    byte_140F102A5 = 1;
    qword_140F102C0 = MEMORY[0xFFFFF78000000008];
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopFanLock);
}
