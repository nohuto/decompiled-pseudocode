/*
 * XREFs of PopFanReportBootStartDevices @ 0x140CDB6C0
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopSqmFanEnumeration @ 0x1407E83C8 (PopSqmFanEnumeration.c)
 */

__int64 __fastcall PopFanReportBootStartDevices(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *i; // rbx

  PopAcquireRwLockShared(&PopPolicyDeviceLock, a2, a3, a4);
  for ( i = *(struct _KTHREAD **)&PpmIdlePolicyLock.ResourceIndex;
        i != (struct _KTHREAD *)&PpmIdlePolicyLock.ResourceIndex;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    PopSqmFanEnumeration();
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
}
