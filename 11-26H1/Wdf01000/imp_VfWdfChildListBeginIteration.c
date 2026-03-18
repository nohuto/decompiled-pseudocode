/*
 * XREFs of imp_VfWdfChildListBeginIteration @ 0x1400DE000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfChildListBeginIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  WdfVersion.Functions.pfnWdfChildListBeginIteration(DriverGlobals, ChildList, Iterator);
}
