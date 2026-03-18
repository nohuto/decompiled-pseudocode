/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1409A7AC8
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14079FF98 (PipMergeDependencyEdgeList.c)
 *     PiProcessAddBootDevices @ 0x1407A4FDC (PiProcessAddBootDevices.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A71F8 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x1407ACC4C (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B0854 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140909994 (PiDcUpdateDeviceContainerMembership.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x14090E340 (PiProcessQueryDeviceState.c)
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14091129C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409119E4 (PnpProcessTargetDeviceEvent.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     PiDqIrpPropertySet @ 0x14098D708 (PiDqIrpPropertySet.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14099D6C4 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x1409A7950 (PiDqQueryEvaluateFilter.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x1409DAD84 (PiSwPropertySet.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409DD768 (PiDcHandleCustomDeviceEvent.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB458C (PiDqActionDataGetChangedProperties.c)
 *     PiProcessSetDeviceProblem @ 0x140B314EC (PiProcessSetDeviceProblem.c)
 *     PiProcessClearDeviceProblem @ 0x140B419C4 (PiProcessClearDeviceProblem.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     PiCMDeleteObject @ 0x140B6A43C (PiCMDeleteObject.c)
 *     PiCMDeleteClassKey @ 0x140B6B2E8 (PiCMDeleteClassKey.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14048F5B0 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1409A7BF0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1409A7E68 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1409A7E94 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  __int64 Pool2; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v9 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v9);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = (_QWORD *)v9;
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 144);
  }
  else
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v5 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 144) = 1;
    *(_QWORD *)(Pool2 + 16) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(Pool2 + 24),
      PiPnpRtlObjectEventCompareObjects,
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    v5[17] = v5 + 16;
    v5[16] = v5 + 16;
    PiPnpRtlOperationListAcquireExclusiveLock();
    v7 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    *v5 = PiPnpRtlActiveOperations;
    v5[1] = &PiPnpRtlActiveOperations;
    *(_QWORD *)(v7 + 8) = v5;
    PiPnpRtlActiveOperations = (__int64)v5;
    PiPnpRtlOperationListReleaseLock();
  }
  *a1 = v5;
  return v4;
}
