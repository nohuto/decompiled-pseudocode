/*
 * XREFs of imp_VfWdfCmResourceListRemove @ 0x1400DE220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCmResourceListRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List, __int64 Index)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemove(DriverGlobals, List, Index);
}
