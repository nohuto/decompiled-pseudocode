/*
 * XREFs of imp_VfWdfCollectionRemoveItem @ 0x1400DE340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCollectionRemoveItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfCollectionRemoveItem(DriverGlobals, Collection, Index);
}
