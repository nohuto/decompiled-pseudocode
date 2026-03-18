/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x14091034C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     PiListEntryToDependencyEdge @ 0x140515F40 (PiListEntryToDependencyEdge.c)
 *     PipNotifyDependenciesChanged @ 0x140778910 (PipNotifyDependenciesChanged.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14090ECA0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14090ECD0 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14090ED8C (PipProcessRebuildPowerRelationsQueue.c)
 *     PiGetProviderList @ 0x1409108AC (PiGetProviderList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14091159C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x1409142E8 (PiGetDependentList.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 */

void __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  __int64 v2; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  _QWORD **ProviderList; // rdi
  _QWORD *v6; // rbx
  struct _KTHREAD *v7; // rax
  __int64 v8; // rbx
  _QWORD **DependentList; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(a1 + 32));
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation(&P, v2);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 32);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  ProviderList = (_QWORD **)PiGetProviderList(v4);
  v6 = *ProviderList;
  while ( v6 != ProviderList )
  {
    v11 = PiListEntryToDependencyEdge((__int64)v6, 0);
    v6 = (_QWORD *)*v6;
    PipNotifyDependenciesChanged(0LL, *(_QWORD *)(v11 + 32));
  }
  PnpReleaseDependencyRelationsLock();
  v7 = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 32);
  --v7->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  DependentList = (_QWORD **)PiGetDependentList(v8);
  v10 = *DependentList;
  while ( v10 != DependentList )
  {
    v12 = PiListEntryToDependencyEdge((__int64)v10, 1);
    v10 = (_QWORD *)*v10;
    PipNotifyDependenciesChanged(*(_QWORD *)(v12 + 40), 0LL);
  }
  PnpReleaseDependencyRelationsLock();
  if ( P )
    PiPnpRtlEndOperation(P);
}
