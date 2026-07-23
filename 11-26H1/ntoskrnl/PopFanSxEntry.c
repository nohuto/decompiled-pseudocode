/*
 * XREFs of PopFanSxEntry @ 0x14042474C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopFanUpdateStatistics @ 0x140B6BA6C (PopFanUpdateStatistics.c)
 */

__int64 PopFanSxEntry()
{
  unsigned __int8 *i; // rdi

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = *(unsigned __int8 **)&PpmIdlePolicyLock.ResourceIndex;
        i != &PpmIdlePolicyLock.ResourceIndex;
        i = *(unsigned __int8 **)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    PopFanUpdateStatistics(i);
    i[200] = 1;
    PopReleaseRwLock((struct _KTHREAD *)(i + 400));
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
}
