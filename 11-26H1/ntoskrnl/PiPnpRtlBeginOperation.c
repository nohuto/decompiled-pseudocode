/*
 * XREFs of PiPnpRtlBeginOperation @ 0x140968528
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x1407A2AD8 (PipMergeDependencyEdgeList.c)
 *     PiProcessAddBootDevices @ 0x1407A7B1C (PiProcessAddBootDevices.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PiDqIrpPropertySet @ 0x14094E168 (PiDqIrpPropertySet.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14095E124 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x1409683B0 (PiDqQueryEvaluateFilter.c)
 *     PiProcessClearDeviceProblem @ 0x14096EEE0 (PiProcessClearDeviceProblem.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x1409B0470 (PiProcessQueryDeviceState.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409B247C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409B3AC4 (PnpProcessTargetDeviceEvent.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB592C (PiDqActionDataGetChangedProperties.c)
 *     PiProcessSetDeviceProblem @ 0x140B336EC (PiProcessSetDeviceProblem.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     PiCMDeleteObject @ 0x140B6D64C (PiCMDeleteObject.c)
 *     PiCMDeleteClassKey @ 0x140B6E3E4 (PiCMDeleteClassKey.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140488F70 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140968650 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1409688BC (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1409688E8 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
