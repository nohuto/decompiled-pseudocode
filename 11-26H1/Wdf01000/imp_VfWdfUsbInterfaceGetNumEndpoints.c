/*
 * XREFs of imp_VfWdfUsbInterfaceGetNumEndpoints @ 0x1400E20C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetNumEndpoints(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 SettingIndex)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *, __int64))WdfVersion.Functions.pfnWdfUsbInterfaceGetNumEndpoints)(
           DriverGlobals,
           UsbInterface,
           SettingIndex);
}
