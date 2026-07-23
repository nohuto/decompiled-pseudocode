/*
 * XREFs of KseDsCallbackHookIrpDeviceControlFunction @ 0x140600F30
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDataIrp @ 0x14060167C (KsepDsEventDataIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpDeviceControlFunction(__int64 a1, __int64 a2)
{
  int v4; // edi
  unsigned int v5; // ebx

  v4 = **(unsigned __int8 **)(a2 + 184);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  KsepDsEventDataIrp(*(_QWORD *)(a1 + 8), a1, a2, v4, v5);
  return v5;
}
