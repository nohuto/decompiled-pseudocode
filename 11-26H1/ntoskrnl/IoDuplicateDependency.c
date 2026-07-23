/*
 * XREFs of IoDuplicateDependency @ 0x1407A23F0
 * Callers:
 *     <none>
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405DB580 (PipAddDependencyEdgeBetweenNodes.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409B0E50 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x1409B6958 (PiGetDependentList.c)
 *     PipQueryBindingResolution @ 0x140B0A564 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x140B48FD4 (PipCreateDependencyNode.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 BindingResolution; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 DependencyNode; // rdi
  _QWORD **DependentList; // r15
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r13
  _QWORD *v13; // r12
  _QWORD *v14; // r14
  _QWORD *v15; // r8
  int v16; // eax
  _DWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v18[1] = 0;
  v4 = a1;
  if ( a1 && a2 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 312) + 80LL) )
    {
LABEL_4:
      PnpReleaseDependencyRelationsLock();
      return v2;
    }
    v18[0] = 0;
    v19 = a2;
    BindingResolution = PipQueryBindingResolution(v18);
    DependencyNode = BindingResolution;
    if ( BindingResolution )
    {
      ++*(_DWORD *)(BindingResolution + 88);
    }
    else
    {
      DependencyNode = PipCreateDependencyNode(v18, v6, v7);
      if ( !DependencyNode )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    DependentList = (_QWORD **)PiGetDependentList(v4);
    v10 = *DependentList;
    while ( v10 != DependentList )
    {
      v11 = PiListEntryToDependencyEdge((__int64)v10, 1);
      v10 = (_QWORD *)*v10;
      v12 = v11;
      v13 = (_QWORD *)(v11 + 56);
      v14 = *(_QWORD **)(v11 + 56);
      while ( v14 != v13 )
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        v16 = PipAddDependencyEdgeBetweenNodes(*(_QWORD *)(v12 + 40), DependencyNode, (__int64)(v15 + 2));
        if ( v16 < 0 )
        {
          v2 = v16;
          goto LABEL_15;
        }
      }
    }
LABEL_15:
    PipDereferenceDependencyNode(DependencyNode);
    PipAddDependentsToRebuildPowerRelationsQueue(a2);
    PnpReleaseDependencyRelationsLock();
    PipProcessRebuildPowerRelationsQueue();
    return v2;
  }
  return 3221225485LL;
}
