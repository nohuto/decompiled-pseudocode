/*
 * XREFs of imp_VfWdfIoResourceListGetCount @ 0x1400E0570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIORESLIST__ *ResourceList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESLIST__ *))WdfVersion.Functions.pfnWdfIoResourceListGetCount)(
           DriverGlobals,
           ResourceList);
}
