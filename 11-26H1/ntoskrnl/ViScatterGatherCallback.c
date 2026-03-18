/*
 * XREFs of ViScatterGatherCallback @ 0x140C27C60
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1403DE3D0 (ExInterlockedInsertHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ADD_MAP_REGISTERS @ 0x140C2293C (ADD_MAP_REGISTERS.c)
 *     VF_MARK_SCATTER_GATHER_LIST @ 0x140C230AC (VF_MARK_SCATTER_GATHER_LIST.c)
 */

__int64 __fastcall ViScatterGatherCallback(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)(a4 + 56);
  ADD_MAP_REGISTERS(v4, *a3, 1);
  *(_QWORD *)(a4 + 64) = a3;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(v4 + 88), (PLIST_ENTRY)(a4 + 72), (PKSPIN_LOCK)(v4 + 104));
  VF_MARK_SCATTER_GATHER_LIST((__int64)a3, *(_QWORD *)(a4 + 96));
  return guard_dispatch_icall_no_overrides(a1, a2);
}
