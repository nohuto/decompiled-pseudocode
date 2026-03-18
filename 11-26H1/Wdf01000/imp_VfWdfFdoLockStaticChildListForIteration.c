/*
 * XREFs of imp_VfWdfFdoLockStaticChildListForIteration @ 0x1400DFB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfFdoLockStaticChildListForIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  WdfVersion.Functions.pfnWdfFdoLockStaticChildListForIteration(DriverGlobals, Fdo);
}
