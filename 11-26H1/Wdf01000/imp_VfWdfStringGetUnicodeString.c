/*
 * XREFs of imp_VfWdfStringGetUnicodeString @ 0x1400E1F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfStringGetUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFSTRING__ *String,
        _UNICODE_STRING *UnicodeString)
{
  WdfVersion.Functions.pfnWdfStringGetUnicodeString(DriverGlobals, String, UnicodeString);
}
