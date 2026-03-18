/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x1407D14E0
 * Callers:
 *     PopLidReliabilityInit @ 0x14060799C (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLidReliabilityUpdateCallback(char a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  BOOL v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1 != 0;
  _InterlockedExchange(&PopLidStateIsReliable, v6);
  result = PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_RELIABILITY, 4LL, &v6);
  if ( !LOBYTE(stru_140F12D20.SchedulerAssist) )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, v3, v4, v5);
    stru_140E66FF0.PriorityFloorCounts[25] = stru_140E66FF0.PriorityFloorCounts[25] & 0xEF | (16 * (a1 & 1));
    PopBsdHandleRequest(2u);
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  }
  return result;
}
