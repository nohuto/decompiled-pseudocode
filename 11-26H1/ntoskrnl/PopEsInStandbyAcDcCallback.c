/*
 * XREFs of PopEsInStandbyAcDcCallback @ 0x140B722C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x14094683C (PopEsInStandbyEvaluate.c)
 *     PopEsWorkItemSchedule @ 0x140947B64 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsInStandbyAcDcCallback(
        LPCGUID SettingGuid,
        __int64 Value,
        __int64 ValueLength,
        struct _KLOCK_ENTRIES *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  PopAcquireRwLockExclusive(
    (unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink,
    Value,
    ValueLength,
    Context);
  PopEsInStandbyEvaluate(v5, v4);
  PopEsWorkItemSchedule(2);
  PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
  return 0LL;
}
