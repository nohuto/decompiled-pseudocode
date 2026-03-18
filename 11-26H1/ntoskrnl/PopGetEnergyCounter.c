/*
 * XREFs of PopGetEnergyCounter @ 0x140B3B3FC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D6328 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 __fastcall PopGetEnergyCounter(_OWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, a2, a3, a4);
  *a1 = *(_OWORD *)(&stru_140F10070.MiscFlags + 1);
  return PopReleaseRwLock(&stru_140F10070);
}
