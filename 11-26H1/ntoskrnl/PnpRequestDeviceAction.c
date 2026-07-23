/*
 * XREFs of PnpRequestDeviceAction @ 0x14047BEF8
 * Callers:
 *     PnpCheckForWaitingReportedDevice @ 0x1404472DC (PnpCheckForWaitingReportedDevice.c)
 *     IoInvalidateDeviceState @ 0x14047BE10 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     PnpInitializeProcessor @ 0x1405DAF0C (PnpInitializeProcessor.c)
 *     PnpBootPhaseComplete @ 0x14079EA7C (PnpBootPhaseComplete.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x1407A2860 (PipAttemptDependentStart.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407A5170 (IoRequestDeviceRemovalForReset.c)
 *     PpSystemHiveLimitCallback @ 0x1407A6E80 (PpSystemHiveLimitCallback.c)
 *     IopReleaseFilteredBootResources @ 0x1407A9034 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AD0C0 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407AFEE0 (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1407B4370 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x1407B4640 (PipDmgRequestUpdateConsoleLockState.c)
 *     PipKsrDeferredHardwareInit @ 0x1407B5E64 (PipKsrDeferredHardwareInit.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x140967F20 (PiControlGetSetDeviceStatus.c)
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     PnpDriverObjectDereferenceComplete @ 0x140AC9214 (PnpDriverObjectDereferenceComplete.c)
 *     PiResetProblemDevicesWorker @ 0x140AEB670 (PiResetProblemDevicesWorker.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x140B3BC20 (IopProcessInvalidateBusRelationsRequest.c)
 *     PiQueueDeviceRequest @ 0x140B63610 (PiQueueDeviceRequest.c)
 *     IopResourceRequirementsChanged @ 0x140B715B8 (IopResourceRequirementsChanged.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D0B300 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14047C3A0 (PnpIsSafeToExamineUserModeTeb.c)
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14047CAC8 (PnpLogActionQueueEvent.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14047CD20 (PopDirectedDripsSetDisengageReason.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PiPdcDeactivate @ 0x140A1B44C (PiPdcDeactivate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpRequestDeviceAction(
        PVOID Object,
        unsigned int a2,
        char a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  _QWORD *v7; // rdi
  _OWORD *v11; // rsi
  unsigned int v12; // r12d
  __int64 Pool2; // rdi
  char v14; // al
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v16; // rcx
  __int64 v17; // r14
  KIRQL v18; // al
  struct _LIST_ENTRY *v19; // r8
  KIRQL v20; // r14
  __int64 *v21; // rax
  KIRQL NewIrql; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  GUID v27; // [rsp+80h] [rbp-48h] BYREF

  v7 = a4;
  v11 = a4;
  v27 = NullGuid;
  v26 = 0LL;
  v12 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
  {
    v12 = -1073741431;
    goto LABEL_29;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v26 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    v7 = v11;
    goto LABEL_29;
  }
  if ( !Object )
    Object = (PVOID)*((_QWORD *)IopRootDeviceNode + 4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *(_QWORD *)(Pool2 + 16) = Object;
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_BYTE *)(Pool2 + 28) = a3;
  if ( v11 )
    *(_OWORD *)(Pool2 + 32) = *v11;
  *(_QWORD *)(Pool2 + 48) = a5;
  *(_QWORD *)(Pool2 + 56) = a6;
  *(_DWORD *)(Pool2 + 80) = 1;
  *(_BYTE *)(Pool2 + 84) = 0;
  *(_BYTE *)(Pool2 + 96) = 0;
  *(_QWORD *)(Pool2 + 88) = 0LL;
  if ( !a2 )
    goto LABEL_44;
  if ( a2 != 6 && a2 != 9 && a2 != 10 && a2 != 14 )
  {
    if ( a2 - 17 >= 2 )
    {
      v14 = 1;
LABEL_14:
      if ( v14 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
        if ( Flink )
        {
          v27 = (GUID)*Flink;
        }
        else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$52D3C1DA33407D154F0BDE5002546D79::$6F04B0361B22895021FCD2048B05DFAB::Self )
        {
          RtlCopyFromUser(
            &v27,
            &KeGetPcr()->NtTib.$52D3C1DA33407D154F0BDE5002546D79::$6F04B0361B22895021FCD2048B05DFAB::Self[105].SubSystemTib,
            0x10uLL);
        }
      }
      goto LABEL_18;
    }
LABEL_44:
    v14 = 0;
    goto LABEL_14;
  }
LABEL_18:
  *(GUID *)(Pool2 + 64) = v27;
  if ( Object )
    v16 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v16 = 0LL;
  PnpLogActionQueueEvent(v16, a2, 0LL, 0LL);
  v17 = *(unsigned int *)(Pool2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2]);
  if ( ++*(_DWORD *)&stru_140F12EA0.WaitBlockFill11[104] == 1 )
    PopDirectedDripsSetDisengageReason(4LL);
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2], NewIrql);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime);
  v19 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
  ++PopDirectedDripsDiagLock.CurrentRunTime;
  ++*((_DWORD *)&PopDirectedDripsDiagLock.KernelStack + v17);
  if ( LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) )
  {
    ++*(_DWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[4 * v17 + 160];
    if ( PopDirectedDripsDiagLock.CurrentRunTime == 1 )
      PopDirectedDripsDiagLock.WaitListEntry.Blink = v19;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime, v18);
  v20 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v21 = (__int64 *)qword_140F82E08;
  if ( *(__int64 **)qword_140F82E08 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &PnpEnumerationRequestList;
  *(_QWORD *)(Pool2 + 8) = v21;
  *v21 = Pool2;
  qword_140F82E08 = Pool2;
  if ( a2 != 29 )
    _InterlockedAdd(&PnpActionRequestCount, 1u);
  if ( a7 )
  {
    ++*(_DWORD *)(Pool2 + 80);
    *a7 = Pool2;
  }
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KeReleaseSpinLock(&PnpSpinLock, v20);
    PnpDeviceActionWorker(0LL);
  }
  else if ( PnpEnumerationInProgress || !PnPBootDriversLoaded )
  {
    KeReleaseSpinLock(&PnpSpinLock, v20);
  }
  else
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KeReleaseSpinLock(&PnpSpinLock, v20);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  v11 = a4;
  v7 = a4;
LABEL_29:
  if ( !v26 && v11 )
  {
    PiPdcDeactivate(*v7);
    *v7 = 0LL;
  }
  return v12;
}
