/*
 * XREFs of PipDereferenceDependencyNode @ 0x140B31B68
 * Callers:
 *     IoResolveDependency @ 0x1404F5D10 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x140508908 (PipFreeDependencyEdge.c)
 *     IoDuplicateDependency @ 0x14079F8B0 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x14079FF98 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x1407A00F4 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x1407A0160 (PipSetDependency.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14090ED8C (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x14090EE9C (PipDeleteAllDependencyRelations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140B31B14 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x140B31BCC (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
