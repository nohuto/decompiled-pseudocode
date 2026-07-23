/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140424E54
 * Callers:
 *     PopSetSleepMarker @ 0x140B30AB8 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive(&PopTelemetryOsState);
  v0 = dword_140F0F7A8;
  PopReleaseRwLock((struct _KTHREAD *)&PopTelemetryOsState);
  return v0;
}
