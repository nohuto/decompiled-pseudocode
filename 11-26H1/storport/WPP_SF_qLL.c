/*
 * XREFs of WPP_SF_qLL @ 0x1400720D4
 * Callers:
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qLL(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_3e90584d844638fb9af1dc8f10a5e4f5_Traceguids);
}
