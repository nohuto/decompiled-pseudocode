/*
 * XREFs of imp_VfWdfDeviceResumeIdleNoTrack @ 0x1400DEF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfDeviceResumeIdleNoTrack(DriverGlobals, Device);
}
