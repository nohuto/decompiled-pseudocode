/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x1405847EC
 * Callers:
 *     HalpTimerSelectRoles @ 0x140577E78 (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x1405869D0 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
