/*
 * XREFs of PipForAllDeviceNodesCallback @ 0x140AC8930
 * Callers:
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 *     PipForAllChildDeviceNodes @ 0x140AC88F0 (PipForAllChildDeviceNodes.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PipForAllChildDeviceNodes @ 0x140AC88F0 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForAllDeviceNodesCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 8));
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return PipForAllChildDeviceNodes(a1, v5, a2);
  }
  return result;
}
