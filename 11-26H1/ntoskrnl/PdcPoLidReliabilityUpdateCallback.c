/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x1407D4580
 * Callers:
 *     PopLidReliabilityInit @ 0x14060A4FC (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
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
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, v3, v4, v5);
    BYTE1(stru_140E67200.Spare35[0]) = BYTE1(stru_140E67200.Spare35[0]) & 0xEF | (16 * (a1 & 1));
    PopBsdHandleRequest(2u);
    return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  }
  return result;
}
