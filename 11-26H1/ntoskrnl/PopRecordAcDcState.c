/*
 * XREFs of PopRecordAcDcState @ 0x1409C1BCC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordAcDcState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 7) = (a1 << 7) | *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue
                                                                               + 7) & 0x7F;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
