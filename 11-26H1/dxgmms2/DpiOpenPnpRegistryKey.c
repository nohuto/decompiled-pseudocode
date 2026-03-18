/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x14004C570
 * Callers:
 *     VidSchiReadNodeConfiguration @ 0x140125578 (VidSchiReadNodeConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))DxgCoreInterface[1])(a1, 2LL, 131097LL);
}
