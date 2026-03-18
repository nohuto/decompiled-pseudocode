/*
 * XREFs of imp_VfWdfDeviceInitSetCharacteristics @ 0x1400DEBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceCharacteristics,
        __int64 OrInValues)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetCharacteristics(DriverGlobals, DeviceInit, DeviceCharacteristics, OrInValues);
}
