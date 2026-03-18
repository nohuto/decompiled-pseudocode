/*
 * XREFs of PnpRequestDeviceAction @ 0x140482588
 * Callers:
 *     PnpCheckForWaitingReportedDevice @ 0x14044F1AC (PnpCheckForWaitingReportedDevice.c)
 *     IoInvalidateDeviceState @ 0x1404824A0 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1404D2B60 (IoInvalidateDeviceRelations.c)
 *     PnpInitializeProcessor @ 0x1405D870C (PnpInitializeProcessor.c)
 *     PnpBootPhaseComplete @ 0x14079BF3C (PnpBootPhaseComplete.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x14079FD20 (PipAttemptDependentStart.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407A2630 (IoRequestDeviceRemovalForReset.c)
 *     PpSystemHiveLimitCallback @ 0x1407A4340 (PpSystemHiveLimitCallback.c)
 *     IopReleaseFilteredBootResources @ 0x1407A6484 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AA380 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDevices @ 0x1407ACC4C (PpDevCfgProcessDevices.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407ACE7C (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1407B1310 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x1407B15E0 (PipDmgRequestUpdateConsoleLockState.c)
 *     PipKsrDeferredHardwareInit @ 0x1407B2E04 (PipKsrDeferredHardwareInit.c)
 *     PnpInvalidateRelationsInList @ 0x14091164C (PnpInvalidateRelationsInList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     IopReleaseDeviceResources @ 0x140A8AE94 (IopReleaseDeviceResources.c)
 *     PnpDriverObjectDereferenceComplete @ 0x140AC7624 (PnpDriverObjectDereferenceComplete.c)
 *     PiResetProblemDevicesWorker @ 0x140AE92C0 (PiResetProblemDevicesWorker.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x140B39A10 (IopProcessInvalidateBusRelationsRequest.c)
 *     PiQueueDeviceRequest @ 0x140B60570 (PiQueueDeviceRequest.c)
 *     IopResourceRequirementsChanged @ 0x140B6E108 (IopResourceRequirementsChanged.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D05030 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140482A30 (PnpIsSafeToExamineUserModeTeb.c)
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x140483158 (PnpLogActionQueueEvent.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1404833B0 (PopDirectedDripsSetDisengageReason.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PiPdcDeactivate @ 0x1409DE320 (PiPdcDeactivate.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
  __int128 v27; // [rsp+80h] [rbp-48h] BYREF

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
          v27 = (__int128)*Flink;
        }
        else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$1A4E1036E6CD9573DBF0CCD06E827B69::$8A7F5B5E2BB4B7163F26170312D282BB::Self )
        {
          RtlCopyFromUser(
            &v27,
            &KeGetPcr()->NtTib.$1A4E1036E6CD9573DBF0CCD06E827B69::$8A7F5B5E2BB4B7163F26170312D282BB::Self[105].SubSystemTib,
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
  *(_OWORD *)(Pool2 + 64) = v27;
  if ( Object )
    v16 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v16 = 0LL;
  PnpLogActionQueueEvent(v16, a2, 0LL, 0LL);
  v17 = *(unsigned int *)(Pool2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&qword_140F12D00);
  if ( ++dword_140F12D08 == 1 )
    PopDirectedDripsSetDisengageReason(4LL);
  KeReleaseSpinLock(&qword_140F12D00, NewIrql);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink);
  v19 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
  ++LODWORD(PopDirectedDripsUmLock.Queue);
  ++*((_DWORD *)&PopDirectedDripsUmLock.Teb + v17);
  if ( PopDirectedDripsUmLock.WaitBlockFill5[40] )
  {
    ++*(_DWORD *)&PopDirectedDripsUmLock.SavedApcStateFill[4 * v17 + 32];
    if ( LODWORD(PopDirectedDripsUmLock.Queue) == 1 )
      PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Blink = v19;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink, v18);
  v20 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v21 = (__int64 *)qword_140F82AC8;
  if ( *(__int64 **)qword_140F82AC8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &PnpEnumerationRequestList;
  *(_QWORD *)(Pool2 + 8) = v21;
  *v21 = Pool2;
  qword_140F82AC8 = Pool2;
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
