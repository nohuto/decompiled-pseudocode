/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPolicyOwnership @ 0x1400DED90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPolicyOwnership(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IsPowerPolicyOwner)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPolicyOwnership(DriverGlobals, DeviceInit, IsPowerPolicyOwner);
}
