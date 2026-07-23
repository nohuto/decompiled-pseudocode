/*
 * XREFs of PipUnlinkDeviceObjectAndDependencyNode @ 0x140B33D14
 * Callers:
 *     IoResolveDependency @ 0x1404EF2D0 (IoResolveDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x1409B0FCC (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall PipUnlinkDeviceObjectAndDependencyNode(_QWORD *a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 72) != a2 + 72 )
    ObfDereferenceObjectWithTag(a1, 0x44706E50u);
  *(_QWORD *)(a1[39] + 80LL) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return PipDereferenceDependencyNode(a2);
}
