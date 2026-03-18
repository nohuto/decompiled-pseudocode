/*
 * XREFs of PopFanUpdateRunningState @ 0x1407DB054
 * Callers:
 *     PopFanWorker @ 0x140B348C0 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1407DAF74 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateRunningState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&unk_140F10E20, a2, a3, a4);
  if ( a1 )
    v5 = unk_140F10EA0 + 1;
  else
    v5 = unk_140F10EA0 - 1;
  unk_140F10EA0 = v5;
  if ( v5 )
  {
    if ( !unk_140F10EA4 )
    {
      unk_140F10EA4 = 1;
      unk_140F10EB8 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( unk_140F10EA4 )
  {
    if ( unk_140F10EA5 )
      PopFanEndCsFanPeriod();
    unk_140F10EA4 = 0;
    unk_140F10EB8 = 0LL;
  }
  return PopReleaseRwLock((struct _KTHREAD *)&unk_140F10E20);
}
