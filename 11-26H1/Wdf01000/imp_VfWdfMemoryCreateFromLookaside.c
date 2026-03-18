/*
 * XREFs of imp_VfWdfMemoryCreateFromLookaside @ 0x1400E0DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFLOOKASIDE__ *Lookaside,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFLOOKASIDE__ *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfMemoryCreateFromLookaside)(
           DriverGlobals,
           Lookaside,
           Memory);
}
