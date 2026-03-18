/*
 * XREFs of imp_VfWdfIoTargetStop @ 0x1400E0C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoTargetStop(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetStop(DriverGlobals, IoTarget, (_WDF_IO_TARGET_SENT_IO_ACTION)Action);
}
