/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x140A3F16C
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x140A3EEB4 (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopResetIdlePhaseWatchdogDiagnosticContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.ForegroundLossTime, a2, a3, a4);
  LODWORD(PopModernStandbyStateNotify.ReadOperationCount) = 0;
  if ( PopModernStandbyStateNotify.InGlobalForegroundList )
  {
    ExFreePoolWithTag(PopModernStandbyStateNotify.GlobalForegroundListEntry.Blink, 0x67696450u);
    PopModernStandbyStateNotify.InGlobalForegroundList = 0LL;
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.ForegroundLossTime);
}
