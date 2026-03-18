/*
 * XREFs of WPP_SF_Zq @ 0x1400047C8
 * Callers:
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids);
}
