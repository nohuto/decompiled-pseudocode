/*
 * XREFs of imp_VfWdfInterruptReportInactive @ 0x1400DFE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfInterruptReportInactive(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptReportInactive(DriverGlobals, Interrupt);
}
