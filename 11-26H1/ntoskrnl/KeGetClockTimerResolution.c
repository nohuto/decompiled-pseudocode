/*
 * XREFs of KeGetClockTimerResolution @ 0x1405EFB00
 * Callers:
 *     HalpTimerSwitchToNormalClock @ 0x140522964 (HalpTimerSwitchToNormalClock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetClockTimerResolution(_DWORD *a1, unsigned int *a2, _BYTE *a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  bool v4; // zf
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = KiClockTimerPerCpuTickScheduling == 0;
  *a3 = 0;
  if ( v4 )
  {
    v4 = KiClockOwnerOneShotRequestState == 1;
    *a2 = KeTimeIncrement;
    result = (unsigned int)KiLastRequestedTimeIncrement;
    *a1 = KiLastRequestedTimeIncrement;
    if ( !v4 )
      return result;
    goto LABEL_5;
  }
  *a2 = CurrentPrcb->ClockTimerState.TimeIncrement;
  result = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
  *a1 = result;
  if ( CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
LABEL_5:
    *a3 = 1;
  return result;
}
