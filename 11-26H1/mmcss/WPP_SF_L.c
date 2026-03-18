/*
 * XREFs of WPP_SF_L @ 0x140004CEC
 * Callers:
 *     CiConfigQueryValue @ 0x140010E80 (CiConfigQueryValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_L(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_350503daac883abe7be9cf63f89038d9_Traceguids);
}
