/*
 * XREFs of imp_VfWdfWmiProviderCreate @ 0x1400E2970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfWmiProviderCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        WDFWMIPROVIDER__ **WmiProvider)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_WMI_PROVIDER_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFWMIPROVIDER__ **))WdfVersion.Functions.pfnWdfWmiProviderCreate)(
           DriverGlobals,
           Device,
           WmiProviderConfig,
           ProviderAttributes,
           WmiProvider);
}
