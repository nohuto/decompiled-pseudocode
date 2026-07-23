/*
 * XREFs of PopGetEnergyCounter @ 0x140B3D67C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D94D8 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopGetEnergyCounter(_OWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, a2, a3, a4);
  *a1 = xmmword_140F108A8;
  return PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
}
