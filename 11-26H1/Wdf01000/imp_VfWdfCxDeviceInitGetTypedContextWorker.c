/*
 * XREFs of imp_VfWdfCxDeviceInitGetTypedContextWorker @ 0x1400DE560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfCxDeviceInitGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  return WdfVersion.Functions.pfnWdfCxDeviceInitGetTypedContextWorker(DriverGlobals, DeviceInit, TypeInfo);
}
