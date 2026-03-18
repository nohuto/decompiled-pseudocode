/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x140A37300
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140A37360 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404A5FC0 (PopPowerRequestRevokeRequests.c)
 */

__int64 __fastcall PopPowerRequestRevokeRequestsForSleep(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
  PopPowerRequestRevokeRequests(10, 1);
  return PopReleaseRwLock(&stru_140F12D20);
}
