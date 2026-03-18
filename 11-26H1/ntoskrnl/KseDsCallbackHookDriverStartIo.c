/*
 * XREFs of KseDsCallbackHookDriverStartIo @ 0x1405FE440
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverStartIo @ 0x1405FF034 (KsepDsEventDriverStartIo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookDriverStartIo(__int64 a1, __int64 a2)
{
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  guard_dispatch_icall_no_overrides(a1, a2);
  return KsepDsEventDriverStartIo(*(_QWORD *)(a1 + 8), a1, a2);
}
