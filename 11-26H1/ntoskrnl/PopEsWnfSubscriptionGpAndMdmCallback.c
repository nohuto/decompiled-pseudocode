/*
 * XREFs of PopEsWnfSubscriptionGpAndMdmCallback @ 0x1407DBB90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140947B64 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionGpAndMdmCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, a2, a3, a4);
  PopEsWorkItemSchedule(2LL);
  PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
  return 0LL;
}
