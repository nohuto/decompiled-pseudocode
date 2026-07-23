/*
 * XREFs of PipDereferenceDependencyNode @ 0x140B33D68
 * Callers:
 *     IoResolveDependency @ 0x1404EF2D0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1405023B0 (PipFreeDependencyEdge.c)
 *     IoDuplicateDependency @ 0x1407A23F0 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x1407A2AD8 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x1407A2C34 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x1407A2CA0 (PipSetDependency.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409B0FCC (PipDeleteAllDependencyRelations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140B33D14 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x140B33DCC (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
