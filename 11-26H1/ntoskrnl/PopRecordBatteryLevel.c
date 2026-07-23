/*
 * XREFs of PopRecordBatteryLevel @ 0x1407CC014
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordBatteryLevel(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  BYTE2(stru_140E67200.ReservedPreviousReadyTimeValue) = (a1 << 6) | BYTE2(stru_140E67200.ReservedPreviousReadyTimeValue) & 0x3F;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
