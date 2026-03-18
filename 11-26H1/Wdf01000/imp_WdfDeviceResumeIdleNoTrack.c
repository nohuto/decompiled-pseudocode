/*
 * XREFs of imp_WdfDeviceResumeIdleNoTrack @ 0x14004C610
 * Callers:
 *     <none>
 * Callees:
 *     imp_WdfDeviceResumeIdleActual @ 0x14004AD80 (imp_WdfDeviceResumeIdleActual.c)
 */

void __fastcall imp_WdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  imp_WdfDeviceResumeIdleActual(DriverGlobals, (unsigned __int64)Device, 0LL, 0, 0LL);
}
