/*
 * XREFs of PopEsExitSleep @ 0x140B51E9C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140B51ECC (PopEsStartTelemetry.c)
 */

__int64 __fastcall PopEsExitSleep(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, a2, a3, a4);
  PopEsStartTelemetry();
  return PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
}
