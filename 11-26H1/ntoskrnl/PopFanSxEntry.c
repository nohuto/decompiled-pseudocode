/*
 * XREFs of PopFanSxEntry @ 0x140435910
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopFanUpdateStatistics @ 0x140B68ADC (PopFanUpdateStatistics.c)
 */

__int64 PopFanSxEntry()
{
  int *i; // rdi

  PopAcquireRwLockShared(&unk_140F10E30);
  for ( i = *(int **)((char *)&stru_140F10828.116 + 4); i != &stru_140F10828.MiscFlags + 1; i = *(int **)i )
  {
    PopAcquireRwLockExclusive(i + 100);
    PopFanUpdateStatistics(i);
    *((_BYTE *)i + 200) = 1;
    PopReleaseRwLock((struct _KTHREAD *)(i + 100));
  }
  return PopReleaseRwLock(&unk_140F10E30);
}
