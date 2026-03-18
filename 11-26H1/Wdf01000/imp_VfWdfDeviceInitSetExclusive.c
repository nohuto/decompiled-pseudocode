/*
 * XREFs of imp_VfWdfDeviceInitSetExclusive @ 0x1400DEC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetExclusive(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IsExclusive)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetExclusive(DriverGlobals, DeviceInit, IsExclusive);
}
