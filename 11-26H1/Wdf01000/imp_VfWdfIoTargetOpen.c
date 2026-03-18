/*
 * XREFs of imp_VfWdfIoTargetOpen @ 0x1400E0980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, _WDF_IO_TARGET_OPEN_PARAMS *))WdfVersion.Functions.pfnWdfIoTargetOpen)(
           DriverGlobals,
           IoTarget,
           OpenParams);
}
