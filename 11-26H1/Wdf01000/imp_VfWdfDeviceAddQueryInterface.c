/*
 * XREFs of imp_VfWdfDeviceAddQueryInterface @ 0x1400DE680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceAddQueryInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_QUERY_INTERFACE_CONFIG *InterfaceConfig)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_QUERY_INTERFACE_CONFIG *))WdfVersion.Functions.pfnWdfDeviceAddQueryInterface)(
           DriverGlobals,
           Device,
           InterfaceConfig);
}
