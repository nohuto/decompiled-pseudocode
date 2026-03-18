/*
 * XREFs of imp_VfWdfIoTargetSelfAssignDefaultIoQueue @ 0x1400E0A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoTargetSelfAssignDefaultIoQueue)(
           DriverGlobals,
           IoTarget,
           Queue);
}
