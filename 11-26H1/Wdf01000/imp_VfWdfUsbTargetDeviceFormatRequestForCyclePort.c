/*
 * XREFs of imp_VfWdfUsbTargetDeviceFormatRequestForCyclePort @ 0x1400E2260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceFormatRequestForCyclePort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceFormatRequestForCyclePort)(
           DriverGlobals,
           UsbDevice,
           Request);
}
