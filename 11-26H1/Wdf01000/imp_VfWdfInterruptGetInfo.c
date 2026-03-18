/*
 * XREFs of imp_VfWdfInterruptGetInfo @ 0x1400DFD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  WdfVersion.Functions.pfnWdfInterruptGetInfo(DriverGlobals, Interrupt, Info);
}
