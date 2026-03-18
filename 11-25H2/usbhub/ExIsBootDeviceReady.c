/*
 * XREFs of ExIsBootDeviceReady @ 0x140060090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExIsBootDeviceReady(__int64 a1, __int64 (*a2)(void))
{
  return a2();
}
