/*
 * XREFs of imp_VfWdfInterruptSetPolicy @ 0x1400DFE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfInterruptSetPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        __int64 Policy,
        __int64 Priority,
        unsigned __int64 TargetProcessorSet)
{
  WdfVersion.Functions.pfnWdfInterruptSetPolicy(
    DriverGlobals,
    Interrupt,
    (_WDF_INTERRUPT_POLICY)Policy,
    (_WDF_INTERRUPT_PRIORITY)Priority,
    TargetProcessorSet);
}
