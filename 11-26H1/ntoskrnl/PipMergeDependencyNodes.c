/*
 * XREFs of PipMergeDependencyNodes @ 0x1407A2C34
 * Callers:
 *     IoResolveDependency @ 0x1404EF2D0 (IoResolveDependency.c)
 * Callees:
 *     PipMoveListEntries @ 0x1405DB770 (PipMoveListEntries.c)
 *     PipMergeDependencyEdgeList @ 0x1407A2AD8 (PipMergeDependencyEdgeList.c)
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall PipMergeDependencyNodes(__int64 a1, __int64 a2)
{
  ++*(_DWORD *)(a1 + 88);
  ++*(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) |= *(_DWORD *)(a2 + 92);
  PipMoveListEntries((_QWORD *)(a1 + 56), a2 + 56);
  PipMergeDependencyEdgeList(a1, a2, 0);
  PipMergeDependencyEdgeList(a1, a2, 1);
  PipDereferenceDependencyNode(a1);
  return PipDereferenceDependencyNode(a2);
}
