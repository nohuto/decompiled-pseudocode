/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x14004D014
 * Callers:
 *     ?VidMmReadPhysicalAdapterConfiguration@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400A6C3C (-VidMmReadPhysicalAdapterConfiguration@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64))DxgCoreInterface[2])(a1, 2LL);
}
