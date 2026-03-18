/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1400DED70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_POWER_POLICY_EVENT_CALLBACKS *PowerPolicyEventCallbacks)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPolicyEventCallbacks(
    DriverGlobals,
    DeviceInit,
    PowerPolicyEventCallbacks);
}
