/*
 * XREFs of HalpTimerClockStop @ 0x1404F3520
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1405836F0 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerClockStop()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v5; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
  {
    InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
    result = guard_dispatch_icall_no_overrides(InternalData, v5);
    CurrentPrcb->PendingTickFlags &= ~2u;
  }
  else
  {
    v1 = HalpTimerGetInternalData(HalpClockTimer);
    return guard_dispatch_icall_no_overrides(v1, v2);
  }
  return result;
}
