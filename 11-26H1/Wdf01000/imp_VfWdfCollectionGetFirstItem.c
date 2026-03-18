/*
 * XREFs of imp_VfWdfCollectionGetFirstItem @ 0x1400DE2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfCollectionGetFirstItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetFirstItem(DriverGlobals, Collection);
}
