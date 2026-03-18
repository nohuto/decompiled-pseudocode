/*
 * XREFs of imp_VfWdfDeviceSetDeviceInterfaceStateEx @ 0x1400DF0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetDeviceInterfaceStateEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString,
        unsigned __int8 IsInterfaceEnabled)
{
  WdfVersion.Functions.pfnWdfDeviceSetDeviceInterfaceStateEx(
    DriverGlobals,
    Device,
    InterfaceClassGUID,
    ReferenceString,
    IsInterfaceEnabled);
}
