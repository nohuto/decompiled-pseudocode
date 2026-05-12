/*
 * XREFs of WPP_SF_dddd @ 0x14007DB88
 * Callers:
 *     StorPortDeviceBusy @ 0x140027E70 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
}
