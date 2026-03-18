/*
 * XREFs of PopFanUpdateCsState @ 0x140B66398
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140B1FCF0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1407DAF74 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateCsState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&unk_140F10E20, a2, a3, a4);
  if ( a1 )
  {
    if ( unk_140F10EA5 )
    {
      if ( unk_140F10EA4 )
        PopFanEndCsFanPeriod();
      unk_140F10EA5 = 0;
      unk_140F10EC0 = 0LL;
    }
  }
  else if ( !unk_140F10EA5 )
  {
    unk_140F10EA5 = 1;
    unk_140F10EC0 = MEMORY[0xFFFFF78000000008];
  }
  return PopReleaseRwLock((struct _KTHREAD *)&unk_140F10E20);
}
