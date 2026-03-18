/*
 * XREFs of imp_VfWdfUsbTargetDeviceGetInterface @ 0x1400E2310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_VfWdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        __int64 InterfaceIndex)
{
  return WdfVersion.Functions.pfnWdfUsbTargetDeviceGetInterface(DriverGlobals, UsbDevice, InterfaceIndex);
}
