/*
 * XREFs of imp_VfWdfGetTriageInfo @ 0x1400DFC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfGetTriageInfo(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  return WdfVersion.Functions.pfnWdfGetTriageInfo(DriverGlobals);
}
