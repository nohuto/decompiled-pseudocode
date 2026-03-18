/*
 * XREFs of imp_VfWdfFdoInitSetFilter @ 0x1400DFB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfFdoInitSetFilter(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfFdoInitSetFilter(DriverGlobals, DeviceInit);
}
