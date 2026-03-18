/*
 * XREFs of imp_VfWdfDeviceSetCharacteristics @ 0x1400DF060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 DeviceCharacteristics)
{
  WdfVersion.Functions.pfnWdfDeviceSetCharacteristics(DriverGlobals, Device, DeviceCharacteristics);
}
