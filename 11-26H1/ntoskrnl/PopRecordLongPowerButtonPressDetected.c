/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x1407C8FC0
 * Callers:
 *     PoClearTransitionMarker @ 0x1407C881C (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1407D3B74 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x1405306D0 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140B0B080 (RtlSetSystemBootStatus.c)
 */

__int64 __fastcall PopRecordLongPowerButtonPressDetected(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( (_BYTE)a2 )
    RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
  HIBYTE(stru_140E66FF0.SecureThreadCookie) = HIBYTE(stru_140E66FF0.SecureThreadCookie) & 0xFB | (4 * (a1 & 1));
  stru_140E66FF0.PriorityFloorCounts[25] = PnpSetupInProgress & 1 | stru_140E66FF0.PriorityFloorCounts[25] & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(14LL, &stru_140E66FF0.MutantListHead.Blink, 64LL, 0LL);
  RtlSetSystemBootStatus(16LL, &stru_140E66FF0.PriorityFloorCounts[24], 32LL, 0LL);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
}
