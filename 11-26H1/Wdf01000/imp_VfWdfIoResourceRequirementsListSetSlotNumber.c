/*
 * XREFs of imp_VfWdfIoResourceRequirementsListSetSlotNumber @ 0x1400E0710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListSetSlotNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 SlotNumber)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetSlotNumber(DriverGlobals, RequirementsList, SlotNumber);
}
