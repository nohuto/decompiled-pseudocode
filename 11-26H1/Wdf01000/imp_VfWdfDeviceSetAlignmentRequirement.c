/*
 * XREFs of imp_VfWdfDeviceSetAlignmentRequirement @ 0x1400DF020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetAlignmentRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 AlignmentRequirement)
{
  WdfVersion.Functions.pfnWdfDeviceSetAlignmentRequirement(DriverGlobals, Device, AlignmentRequirement);
}
