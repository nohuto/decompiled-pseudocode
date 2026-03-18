/*
 * XREFs of PopEsExitSleep @ 0x140B4F60C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140B4F63C (PopEsStartTelemetry.c)
 */

__int64 __fastcall PopEsExitSleep(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, a2, a3, a4);
  PopEsStartTelemetry();
  return PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
}
