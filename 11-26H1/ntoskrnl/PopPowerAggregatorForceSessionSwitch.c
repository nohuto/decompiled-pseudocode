/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1407D9B50
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404F6940 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1407D8A50 (PopPreCriticalBatteryNotify.c)
 *     PopNotifyLidStateChange @ 0x140B53DF8 (PopNotifyLidStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorForceSessionSwitch(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  v7 = 0;
  if ( (_DWORD)xmmword_140F0D8D0 == 1 )
  {
    v5 = 3LL;
    if ( BYTE8(xmmword_140F0D8E0) && (a1 != 4 || dword_140F0D9E8 != 8 && dword_140F0D9E8 != 2) )
      v5 = 2LL;
    goto LABEL_12;
  }
  if ( (_DWORD)xmmword_140F0D8D0 == 4 && BYTE8(xmmword_140F0D8E0) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v5 = 10LL;
LABEL_12:
    PopPowerAggregatorHandleIntentUnsafe(v5, &v7, 0LL, a1);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
}
