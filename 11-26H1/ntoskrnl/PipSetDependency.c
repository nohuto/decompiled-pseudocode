/*
 * XREFs of PipSetDependency @ 0x1407A2CA0
 * Callers:
 *     IoReserveDependency @ 0x1407A2520 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1407A25B0 (IoSetDependency.c)
 *     PipConvertResolutionsToReservations @ 0x140B6320C (PipConvertResolutionsToReservations.c)
 * Callees:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405DB580 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipQueryBindingResolution @ 0x140B0A564 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x140B48FD4 (PipCreateDependencyNode.c)
 */

__int64 __fastcall PipSetDependency(__int64 a1, __int64 a2)
{
  __int64 BindingResolution; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 DependencyNode; // rsi
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx

  BindingResolution = PipQueryBindingResolution(a1);
  DependencyNode = BindingResolution;
  if ( BindingResolution )
  {
    ++*(_DWORD *)(BindingResolution + 88);
  }
  else
  {
    DependencyNode = PipCreateDependencyNode(a1, v5, v6);
    if ( !DependencyNode )
      return (unsigned int)-1073741670;
  }
  v9 = PipQueryBindingResolution(a2);
  v12 = v9;
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 88);
  }
  else
  {
    v12 = PipCreateDependencyNode(a2, v10, v11);
    if ( !v12 )
    {
      v8 = -1073741670;
      goto LABEL_10;
    }
  }
  v8 = PipAddDependencyEdgeBetweenNodes(DependencyNode, v12, a2);
LABEL_10:
  PipDereferenceDependencyNode(DependencyNode);
  if ( v12 )
    PipDereferenceDependencyNode(v12);
  return v8;
}
