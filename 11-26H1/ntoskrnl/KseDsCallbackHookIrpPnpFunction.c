/*
 * XREFs of KseDsCallbackHookIrpPnpFunction @ 0x140601040
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPnpIrp @ 0x140535604 (KsepDsEventPnpIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpPnpFunction(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // ebp
  unsigned int v6; // ebx

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(unsigned __int8 *)(v2 + 1);
  if ( !*(_BYTE *)(v2 + 1) || v5 == 4 )
    guard_dispatch_icall_no_overrides(a1, a2);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  v6 = guard_dispatch_icall_no_overrides(a1, a2);
  KsepDsEventPnpIrp(*(_QWORD *)(a1 + 8), a1, a2, v5, v6);
  return v6;
}
