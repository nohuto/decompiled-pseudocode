/*
 * XREFs of imp_VfWdfIoQueueDrainSynchronously @ 0x1400DFFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoQueueDrainSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueDrainSynchronously(DriverGlobals, Queue);
}
