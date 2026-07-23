/*
 * XREFs of KseDsCallbackHookDriverUnload @ 0x140600EF0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x140601B50 (KsepDsEventDriverUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookDriverUnload(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  guard_dispatch_icall_no_overrides(a1, a2);
  guard_dispatch_icall_no_overrides(a1, v3);
  return KsepDsEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
