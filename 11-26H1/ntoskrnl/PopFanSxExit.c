/*
 * XREFs of PopFanSxExit @ 0x14042446C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 PopFanSxExit()
{
  unsigned __int8 *i; // rbx

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = *(unsigned __int8 **)&PpmIdlePolicyLock.ResourceIndex;
        i != &PpmIdlePolicyLock.ResourceIndex;
        i = *(unsigned __int8 **)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    if ( i[88] )
    {
      *((_QWORD *)i + 26) = MEMORY[0xFFFFF78000000008];
      i[200] = 0;
    }
    PopReleaseRwLock((struct _KTHREAD *)(i + 400));
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
}
