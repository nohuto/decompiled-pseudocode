/*
 * XREFs of imp_VfWdfCollectionAdd @ 0x1400DE260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        void *Object)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOLLECTION__ *, void *))WdfVersion.Functions.pfnWdfCollectionAdd)(
           DriverGlobals,
           Collection,
           Object);
}
