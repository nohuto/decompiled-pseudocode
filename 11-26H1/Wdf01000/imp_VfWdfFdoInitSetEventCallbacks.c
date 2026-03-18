/*
 * XREFs of imp_VfWdfFdoInitSetEventCallbacks @ 0x1400DFAE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfFdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FDO_EVENT_CALLBACKS *FdoEventCallbacks)
{
  WdfVersion.Functions.pfnWdfFdoInitSetEventCallbacks(DriverGlobals, DeviceInit, FdoEventCallbacks);
}
