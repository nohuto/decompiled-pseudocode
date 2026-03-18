/*
 * XREFs of imp_VfWdfPdoInitSetDefaultLocale @ 0x1400E1140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoInitSetDefaultLocale(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 LocaleId)
{
  WdfVersion.Functions.pfnWdfPdoInitSetDefaultLocale(DriverGlobals, DeviceInit, LocaleId);
}
