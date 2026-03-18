/*
 * XREFs of imp_VfWdfCollectionGetCount @ 0x1400DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfCollectionGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOLLECTION__ *))WdfVersion.Functions.pfnWdfCollectionGetCount)(
           DriverGlobals,
           Collection);
}
