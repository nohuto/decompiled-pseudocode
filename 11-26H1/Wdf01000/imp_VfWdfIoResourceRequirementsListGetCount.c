/*
 * XREFs of imp_VfWdfIoResourceRequirementsListGetCount @ 0x1400E0650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoResourceRequirementsListGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *))WdfVersion.Functions.pfnWdfIoResourceRequirementsListGetCount)(
           DriverGlobals,
           RequirementsList);
}
