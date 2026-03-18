/*
 * XREFs of imp_VfWdfDeviceSetDeviceInterfaceState @ 0x1400DF080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetDeviceInterfaceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString,
        unsigned __int8 IsInterfaceEnabled)
{
  WdfVersion.Functions.pfnWdfDeviceSetDeviceInterfaceState(
    DriverGlobals,
    Device,
    InterfaceClassGUID,
    ReferenceString,
    IsInterfaceEnabled);
}
