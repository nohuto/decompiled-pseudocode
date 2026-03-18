/*
 * XREFs of WPP_SF_qqd @ 0x140004C84
 * Callers:
 *     CiProcessSuspend @ 0x140001070 (CiProcessSuspend.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qqd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0f961914fea93012ea63c8b8118ed7e5_Traceguids);
}
