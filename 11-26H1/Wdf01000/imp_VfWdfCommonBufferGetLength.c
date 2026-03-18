/*
 * XREFs of imp_VfWdfCommonBufferGetLength @ 0x1400DE400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfCommonBufferGetLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return WdfVersion.Functions.pfnWdfCommonBufferGetLength(DriverGlobals, CommonBuffer);
}
