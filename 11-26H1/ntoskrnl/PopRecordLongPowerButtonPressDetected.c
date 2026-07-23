/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x1407CC060
 * Callers:
 *     PoClearTransitionMarker @ 0x1407CB8BC (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1407D6CF4 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x140532BD0 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140B0C7D0 (RtlSetSystemBootStatus.c)
 */

__int64 __fastcall PopRecordLongPowerButtonPressDetected(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( (_BYTE)a2 )
    RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  HIBYTE(stru_140E67200.SchedulerSharedSwappablePage) = HIBYTE(stru_140E67200.SchedulerSharedSwappablePage) & 0xFB | (4 * (a1 & 1));
  BYTE1(stru_140E67200.Spare35[0]) = PnpSetupInProgress & 1 | BYTE1(stru_140E67200.Spare35[0]) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(RtlBsdItemPowerButtonPressInfo, &stru_140E67200.ResourceIndex, 0x40u, 0LL);
  RtlSetSystemBootStatus(RtlBsdPowerTransitionExtension, stru_140E67200.Spare35, 0x20u, 0LL);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
