/*
 * XREFs of imp_VfWdfDeviceInitSetIoType @ 0x1400DECB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetIoType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IoType)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoType(DriverGlobals, DeviceInit, (_WDF_DEVICE_IO_TYPE)IoType);
}
