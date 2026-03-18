/*
 * XREFs of imp_VfWdfInterruptGetDevice @ 0x1400DFD40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptGetDevice(DriverGlobals, Interrupt);
}
