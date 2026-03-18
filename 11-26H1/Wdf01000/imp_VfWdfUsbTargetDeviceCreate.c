/*
 * XREFs of imp_VfWdfUsbTargetDeviceCreate @ 0x1400E2160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, WDFUSBDEVICE__ **))WdfVersion.Functions.pfnWdfUsbTargetDeviceCreate)(
           DriverGlobals,
           Device,
           Attributes,
           UsbDevice);
}
