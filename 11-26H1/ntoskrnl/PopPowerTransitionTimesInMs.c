/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x1404EBB5C
 * Callers:
 *     PopCalculateWakeTimeAdjustment @ 0x1407CF700 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTracePowerTransitionTime @ 0x140B2B8B0 (PopDiagTracePowerTransitionTime.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x140C06CF0 (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r11
  _DWORD *v12; // r10

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&stru_140F10070.216, &stru_140F10070.SwapListEntry + 1);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&stru_140F10070.RelativeTimerBias, &stru_140F10070.Timer);
    *a2 = result;
  }
  if ( a5 )
  {
    a5 = 0LL;
    result = PopQpcTimeInMs(&a5, &stru_140F10070.Timer.DueTime);
    *v12 = result;
    if ( LODWORD(stru_140F10070.PropagateBoostsEntry.Next) )
    {
      result = (unsigned int)(*(_DWORD *)&stru_140F10070.WaitBlockFill11[96] + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = (unsigned __int64)stru_140F10070.WaitBlock[0].Object / v11;
    *a3 = (unsigned __int64)stru_140F10070.WaitBlock[0].Object / v11;
  }
  if ( a4 )
  {
    result = ((unsigned __int64)stru_140F10070.SchedulerApc.ApcListEntry.Blink
            + (unsigned __int64)stru_140F10070.WaitBlock[3].WaitListEntry.Blink)
           / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = (unsigned __int64)stru_140F10070.WaitBlock[0].WaitListEntry.Flink / v11;
    *a6 = (unsigned __int64)stru_140F10070.WaitBlock[0].WaitListEntry.Flink / v11;
  }
  return result;
}
