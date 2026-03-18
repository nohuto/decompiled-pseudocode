/*
 * XREFs of imp_VfWdfDeviceInitSetIoInCallerContextCallback @ 0x1400DEC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoInCallerContextCallback(DriverGlobals, DeviceInit, EvtIoInCallerContext);
}
