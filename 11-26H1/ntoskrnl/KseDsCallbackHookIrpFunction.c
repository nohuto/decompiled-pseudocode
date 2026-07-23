/*
 * XREFs of KseDsCallbackHookIrpFunction @ 0x140600FB0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDataIrp @ 0x14060167C (KsepDsEventDataIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpFunction(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // esi

  v4 = **(unsigned __int8 **)(a2 + 184);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  v6 = v5;
  if ( v4 == 3 || v4 == 4 )
    KsepDsEventDataIrp(*(_QWORD *)(a1 + 8), a1, a2, v4, v5);
  return v6;
}
