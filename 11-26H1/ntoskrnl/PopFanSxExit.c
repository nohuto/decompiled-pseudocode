/*
 * XREFs of PopFanSxExit @ 0x1404352D4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 PopFanSxExit()
{
  int *i; // rbx

  PopAcquireRwLockShared(&unk_140F10E30);
  for ( i = *(int **)((char *)&stru_140F10828.116 + 4); i != &stru_140F10828.MiscFlags + 1; i = *(int **)i )
  {
    PopAcquireRwLockExclusive(i + 100);
    if ( *((_BYTE *)i + 88) )
    {
      *((_QWORD *)i + 26) = MEMORY[0xFFFFF78000000008];
      *((_BYTE *)i + 200) = 0;
    }
    PopReleaseRwLock((struct _KTHREAD *)(i + 100));
  }
  return PopReleaseRwLock(&unk_140F10E30);
}
