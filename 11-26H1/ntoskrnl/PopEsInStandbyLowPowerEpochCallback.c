/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x1409C2080
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x1409C21AC (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        __int64 Value,
        __int64 ValueLength,
        struct _KLOCK_ENTRIES *Context)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, Value, ValueLength, Context);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
  return 0LL;
}
