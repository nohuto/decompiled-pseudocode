/*
 * XREFs of imp_VfWdfInterruptTryToAcquireLock @ 0x1400DFE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfInterruptTryToAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *))WdfVersion.Functions.pfnWdfInterruptTryToAcquireLock)(
           DriverGlobals,
           Interrupt);
}
