/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x1409B247C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 *     PipNotifyDependenciesChanged @ 0x14077B7B0 (PipNotifyDependenciesChanged.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PiGetProviderList @ 0x1409B298C (PiGetProviderList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1409B367C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x1409B6958 (PiGetDependentList.c)
 */

void __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  _QWORD **ProviderList; // rdi
  _QWORD *v5; // rbx
  struct _KTHREAD *v6; // rax
  __int64 v7; // rbx
  _QWORD **DependentList; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(a1 + 32));
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation(&P);
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 32);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  ProviderList = (_QWORD **)PiGetProviderList(v3);
  v5 = *ProviderList;
  while ( v5 != ProviderList )
  {
    v10 = PiListEntryToDependencyEdge((__int64)v5, 0);
    v5 = (_QWORD *)*v5;
    PipNotifyDependenciesChanged(0LL, *(_QWORD *)(v10 + 32));
  }
  PnpReleaseDependencyRelationsLock();
  v6 = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 32);
  --v6->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  DependentList = (_QWORD **)PiGetDependentList(v7);
  v9 = *DependentList;
  while ( v9 != DependentList )
  {
    v11 = PiListEntryToDependencyEdge((__int64)v9, 1);
    v9 = (_QWORD *)*v9;
    PipNotifyDependenciesChanged(*(_QWORD *)(v11 + 40), 0LL);
  }
  PnpReleaseDependencyRelationsLock();
  if ( P )
    PiPnpRtlEndOperation((char *)P);
}
