/*
 * XREFs of imp_VfWdfIoQueueGetDevice @ 0x1400E0000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  return WdfVersion.Functions.pfnWdfIoQueueGetDevice(DriverGlobals, Queue);
}
