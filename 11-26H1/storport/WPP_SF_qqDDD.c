/*
 * XREFs of WPP_SF_qqDDD @ 0x1400ACA1C
 * Callers:
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_25fa594137633db1985de5dda85c818b_Traceguids);
}
