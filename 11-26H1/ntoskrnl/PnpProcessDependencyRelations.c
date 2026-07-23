/*
 * XREFs of PnpProcessDependencyRelations @ 0x1409B6868
 * Callers:
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 *     PiGetDependentList @ 0x1409B6958 (PiGetDependentList.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int **BugCheckParameter3)
{
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v8; // edi
  _QWORD **DependentList; // rsi
  _QWORD *v12; // rbx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r10
  bool v19; // zf
  int v20; // eax

  v5 = *(_QWORD *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  DependentList = (_QWORD **)PiGetDependentList(v5);
  v12 = *DependentList;
  while ( v12 != DependentList )
  {
    v14 = PiListEntryToDependencyEdge((__int64)v12, 1);
    v12 = (_QWORD *)*v12;
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 48LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 312);
      v18 = *(_QWORD *)(v17 + 40);
      if ( *(_DWORD *)(v18 + 300) != 784 && *(_DWORD *)(v18 + 300) - 784 != v15 )
      {
        v19 = (unsigned __int8)PipIsDevNodeDNStarted(*(_QWORD *)(v17 + 40)) == 0;
        goto LABEL_10;
      }
      v20 = *(_DWORD *)(v18 + 304);
      if ( v20 != 788 )
      {
        v19 = v20 == 790;
LABEL_10:
        if ( !v19 )
          v8 = PnpProcessRelation(v18, a2, a3, a4, BugCheckParameter3);
      }
      if ( v8 < 0 )
        break;
    }
  }
  PnpReleaseDependencyRelationsLock();
  return (unsigned int)v8;
}
