/*
 * XREFs of imp_VfWdfRegistryWdmGetHandle @ 0x1400E1520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfRegistryWdmGetHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  return WdfVersion.Functions.pfnWdfRegistryWdmGetHandle(DriverGlobals, Key);
}
