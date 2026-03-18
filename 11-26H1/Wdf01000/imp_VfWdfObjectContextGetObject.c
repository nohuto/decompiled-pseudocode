/*
 * XREFs of imp_VfWdfObjectContextGetObject @ 0x1400E0E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *DriverGlobals, void *ContextPointer)
{
  return WdfVersion.Functions.pfnWdfObjectContextGetObject(DriverGlobals, ContextPointer);
}
