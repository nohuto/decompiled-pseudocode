/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x140946710
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x14094683C (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        __int64 Value,
        __int64 ValueLength,
        struct _KLOCK_ENTRIES *Context)
{
  PopAcquireRwLockExclusive(
    (unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink,
    Value,
    ValueLength,
    Context);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
  return 0LL;
}
