/*
 * XREFs of PopEsInStandbyAcDcCallback @ 0x140B772A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x1409C21AC (PopEsInStandbyEvaluate.c)
 *     PopEsWorkItemSchedule @ 0x1409C34D4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsInStandbyAcDcCallback(
        LPCGUID SettingGuid,
        __int64 Value,
        __int64 ValueLength,
        struct _KLOCK_ENTRIES *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, Value, ValueLength, Context);
  PopEsInStandbyEvaluate(v5, v4);
  PopEsWorkItemSchedule(2);
  PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
  return 0LL;
}
