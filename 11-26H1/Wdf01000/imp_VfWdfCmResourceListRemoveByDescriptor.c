/*
 * XREFs of imp_VfWdfCmResourceListRemoveByDescriptor @ 0x1400DE240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCmResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemoveByDescriptor(DriverGlobals, List, Descriptor);
}
