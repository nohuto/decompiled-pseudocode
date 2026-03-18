/*
 * XREFs of PiPnpRtlEndOperation @ 0x1409A7CB4
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
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x140480580 (RtlIsGenericTableEmptyAvl.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PiPnpRtlObjectEventRelease @ 0x1409A7DD4 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1409A7E68 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1409A7E94 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1409A7EC4 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1409A7EF4 (PiPnpRtlObjectEventDispatch.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(char *P)
{
  bool v1; // zf
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  HANDLE *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  HANDLE *Buffer; // [rsp+38h] [rbp+10h] BYREF

  v1 = (*((_DWORD *)P + 36))-- == 1;
  Buffer = 0LL;
  if ( v1 )
  {
    PiPnpRtlDisableRemoveOperationDispatch();
    PiPnpRtlOperationListAcquireExclusiveLock();
    v3 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
LABEL_16:
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    PiPnpRtlOperationListReleaseLock();
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 24)) )
    {
      v5 = *(HANDLE **)(*((_QWORD *)P + 5) + 32LL);
      Buffer = v5;
      if ( v5[2] )
      {
        ZwClose(v5[2]);
        Buffer[2] = 0LL;
        v5 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v5);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 24), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    v6 = (_QWORD **)(P + 128);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      if ( (_QWORD **)v7[1] != v6 )
        goto LABEL_16;
      v8 = (_QWORD *)*v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_16;
      *v6 = v8;
      v8[1] = v6;
      Buffer = (HANDLE *)(v7 - 7);
      PiPnpRtlObjectEventRelease(v7 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
