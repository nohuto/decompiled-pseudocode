/*
 * XREFs of WPP_SF_q @ 0x1400048E4
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x14000D280 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_q(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids);
}
