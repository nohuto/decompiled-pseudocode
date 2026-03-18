/*
 * XREFs of imp_VfWdfIoResourceRequirementsListRemoveByIoResList @ 0x1400E06D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemoveByIoResList(DriverGlobals, RequirementsList, IoResList);
}
