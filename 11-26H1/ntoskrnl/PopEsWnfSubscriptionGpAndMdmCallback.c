/*
 * XREFs of PopEsWnfSubscriptionGpAndMdmCallback @ 0x1407DFDB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x1409C34D4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionGpAndMdmCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, a2, a3, a4);
  PopEsWorkItemSchedule(2LL);
  PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
  return 0LL;
}
