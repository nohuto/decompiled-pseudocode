/*
 * XREFs of imp_VfWdfRequestRetrieveInputWdmMdl @ 0x1400E1CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveInputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _MDL **Mdl)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, _MDL **))WdfVersion.Functions.pfnWdfRequestRetrieveInputWdmMdl)(
           DriverGlobals,
           Request,
           Mdl);
}
