/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x140586D0C
 * Callers:
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x140588EF0 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerStopProfileInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  if ( HalpProfileTimer && ((*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !KeGetPcr()->Prcb.Number) )
  {
    InternalData = HalpTimerGetInternalData(HalpProfileTimer);
    guard_dispatch_icall_no_overrides(InternalData, v1);
  }
  HalpProfilingActive = 0;
}
