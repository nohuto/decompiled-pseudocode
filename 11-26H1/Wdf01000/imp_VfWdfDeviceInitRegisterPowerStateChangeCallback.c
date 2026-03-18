/*
 * XREFs of imp_VfWdfDeviceInitRegisterPowerStateChangeCallback @ 0x1400DEBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceInitRegisterPowerStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 PowerState,
        void (__fastcall *EvtDevicePowerStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, __int64, void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *), unsigned int))WdfVersion.Functions.pfnWdfDeviceInitRegisterPowerStateChangeCallback)(
           DriverGlobals,
           DeviceInit,
           PowerState,
           EvtDevicePowerStateChange,
           CallbackTypes);
}
