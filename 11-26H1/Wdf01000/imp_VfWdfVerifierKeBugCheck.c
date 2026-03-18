/*
 * XREFs of imp_VfWdfVerifierKeBugCheck @ 0x1400E27D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfVerifierKeBugCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        __int64 BugCheckCode,
        unsigned __int64 BugCheckParameter1,
        unsigned __int64 BugCheckParameter2,
        unsigned __int64 BugCheckParameter3,
        unsigned __int64 BugCheckParameter4)
{
  WdfVersion.Functions.pfnWdfVerifierKeBugCheck(
    DriverGlobals,
    BugCheckCode,
    BugCheckParameter1,
    BugCheckParameter2,
    BugCheckParameter3,
    BugCheckParameter4);
}
