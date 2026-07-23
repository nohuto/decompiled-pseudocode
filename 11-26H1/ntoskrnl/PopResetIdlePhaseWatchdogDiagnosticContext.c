/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1409FAB8C
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1409FA8D4 (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopResetIdlePhaseWatchdogDiagnosticContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPdcDeviceListLock.StackBase, a2, a3, a4);
  PopPdcDeviceListLock.CurrentRunTime = 0;
  if ( PopPdcDeviceListLock.CycleTime )
  {
    ExFreePoolWithTag((PVOID)PopPdcDeviceListLock.CycleTime, 0x67696450u);
    PopPdcDeviceListLock.CycleTime = 0LL;
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPdcDeviceListLock.StackBase);
}
