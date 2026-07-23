/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x140274770
 * Callers:
 *     SepQueueWorkItem @ 0x140216B84 (SepQueueWorkItem.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14026D554 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140274730 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403AFC1C (SepInternalSetSecurityAttributesToken.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1404CFBD8 (SeTokenSetRedirectionTrustPolicy.c)
 *     PfResourceExclusiveAcquire @ 0x1404D07E8 (PfResourceExclusiveAcquire.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404EBFC4 (PiDmaGuardQueueRemoveEntry.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404F3CE8 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404F45F0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405CA5C8 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x1405CEA0C (IoSetDeferredLiveDumpFileHandle.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14062045C (RtlpSetupExtendedBlock.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14063F470 (SeSetSecurityAttributesTokenEx.c)
 *     DifExAcquireResourceExclusiveLiteWrapper @ 0x140652B40 (DifExAcquireResourceExclusiveLiteWrapper.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406D2710 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140776E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     SepAddTokenLogonSession @ 0x140777EB0 (SepAddTokenLogonSession.c)
 *     PpReleaseBootDDB @ 0x140779D38 (PpReleaseBootDDB.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x1407925A0 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x1407927D0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14079305C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14079320C (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x140795BE8 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x140796CF4 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x1407977F0 (IopInitializeBootLogging.c)
 *     IoRegisterFileSystem @ 0x140799160 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140799780 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140799840 (IoUnregisterFsRegistrationChange.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A487C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A62F0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x1407B5F5C (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PipDgqInsertEntry @ 0x1407BBBA8 (PipDgqInsertEntry.c)
 *     TtmiResetInactivityTimer @ 0x1407F1B44 (TtmiResetInactivityTimer.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407F27F0 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpAcquireQueueLock @ 0x1407F2D90 (TtmpAcquireQueueLock.c)
 *     RtlZeroHeap @ 0x14080B8A0 (RtlZeroHeap.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SeSetPrivateNameSpaceToken @ 0x140817D70 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x140818078 (SepSetServerSiloToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     SepBlockAccessForLogonSession @ 0x14081B5D0 (SepBlockAccessForLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14081B6A4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x14081B844 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x14081BA88 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14081C9E0 (SepRmGlobalSaclSetWrkr.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140828854 (WmiAcquireSmbiosLockExclusive.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1408392AC (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x140849A20 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x14089BFF8 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     LockRMLog @ 0x1408B3D64 (LockRMLog.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1409688E8 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096EA80 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140977EEC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409786A0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C650 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409AA1AC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     IoSetDeviceInterfaceState @ 0x1409AA7B0 (IoSetDeviceInterfaceState.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409B317C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PpDeviceRegistration @ 0x1409B4D7C (PpDeviceRegistration.c)
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 *     PnpChainDereferenceComplete @ 0x1409B69F0 (PnpChainDereferenceComplete.c)
 *     PnpDisableDeviceInterfaces @ 0x1409B7A10 (PnpDisableDeviceInterfaces.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409C1164 (PopAdaptiveGetBootIsUnattended.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     NtAdjustGroupsToken @ 0x1409E0F30 (NtAdjustGroupsToken.c)
 *     NtAdjustPrivilegesToken @ 0x1409E1580 (NtAdjustPrivilegesToken.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
 *     PopSetDisplayStatus @ 0x1409F7320 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x1409F7584 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetSessionState @ 0x1409F91C0 (PopAdaptiveGetSessionState.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     PpCheckInDriverDatabase @ 0x140A391E4 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiDrvDbNodeActionCallback @ 0x140A80C80 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     IopGetRootDevices @ 0x140AA1748 (IopGetRootDevices.c)
 *     SepCreateLogonSessionTrack @ 0x140AACD9C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB8628 (SepReferenceLogonSessionSilo.c)
 *     PopAcquireAdaptiveLock @ 0x140ABAFAC (PopAcquireAdaptiveLock.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABE290 (PopAdaptivePowerSettingCallback.c)
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADA87C (SeSetMandatoryPolicyToken.c)
 *     NtGetMUIRegistryInfo @ 0x140AE2DD0 (NtGetMUIRegistryInfo.c)
 *     SepUpdateLogonSessionTrack @ 0x140AE46F4 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AFA774 (IopSetDeviceSecurityDescriptor.c)
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     IopDoDeferredSetInterfaceState @ 0x140B0C470 (IopDoDeferredSetInterfaceState.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140B27930 (IoOpenDeviceInterfaceRegistryKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140B33E8C (SeSetVirtualizationToken.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140B368A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x140B3ABDC (PopAdaptiveGetBootTargetSystemState.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140B3CF40 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140B40870 (IoEnumerateRegisteredFiltersList.c)
 *     PiDmaGuardQueueFlush @ 0x140B40F7C (PiDmaGuardQueueFlush.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140B49B40 (PopIsLockConsoleTimeoutActive.c)
 *     PnpDeleteDeviceInterfaces @ 0x140B4C2E4 (PnpDeleteDeviceInterfaces.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     PnpNotifyHwProfileChange @ 0x140B6D3FC (PnpNotifyHwProfileChange.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     IopInitCrashDumpRegCallback @ 0x140CC3630 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC9240 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205768 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x14020606C (ExpWaitForResource.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceWait @ 0x14048F974 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14048FAF8 (PerfLogExecutiveResourceAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  BOOLEAN v3; // bl
  BOOLEAN v4; // cl
  UCHAR ReservedLowFlags; // al
  LegacyAutoBoost *v7; // r12
  bool v8; // r13
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  signed __int8 v11; // al
  BOOLEAN v12; // bl
  struct _KTHREAD *CurrentThread; // r8
  ULONG v14; // eax
  _QWORD *ExclusiveWaiters; // rax
  PVOID *v16; // rcx
  ULONG v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  PVOID v23; // [rsp+50h] [rbp-9h] BYREF
  PVOID *v24; // [rsp+58h] [rbp-1h]
  LegacyAutoBoost *v25; // [rsp+60h] [rbp+7h]
  __int64 v26; // [rsp+68h] [rbp+Fh]
  _QWORD v27[4]; // [rsp+70h] [rbp+17h] BYREF

  v3 = Wait;
  v4 = (Wait == 0) + 1;
  ReservedLowFlags = Resource->ReservedLowFlags;
  if ( (ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (ReservedLowFlags & 1) != 0 )
  {
    *(_QWORD *)&Wait = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( Wait > v4 )
      KeBugCheckEx(0x1C6u, 0LL, Wait, v4, 0LL);
    if ( Wait >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !Wait && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    return ExAcquireFastResourceExclusive((struct _KTHREAD *)Resource);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v24 = 0LL;
  BYTE3(v26) = 0;
  v27[3] = 0LL;
  v7 = (LegacyAutoBoost *)KeGetCurrentThread();
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x90B8u);
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock);
  }
  v11 = Resource->ReservedLowFlags;
  if ( !Resource->ActiveEntries )
  {
    Resource->ReservedLowFlags = v11 | 0x80;
    Resource->ActiveCount = 1;
    v12 = 1;
    Resource->ActiveEntries = 1;
    Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v7;
    Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | 8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90BCu);
    __incgsdword(0x90A4u);
    if ( v8 )
      PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
    return v12;
  }
  if ( v11 < 0 && (LegacyAutoBoost *)Resource->OwnerEntry.OwnerThread == v7 )
  {
    v17 = Resource->OwnerEntry.TableSize & 7 | ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
    Resource->OwnerEntry.TableSize = v17;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90C0u);
    __incgsdword(0x90A4u);
    if ( !v8 )
      return 1;
    v18 = 65585LL;
    v19 = v17 >> 3;
LABEL_46:
    PerfLogExecutiveResourceAcquire(v18, Resource, v19, Resource->ContentionCount);
    return 1;
  }
  if ( !v3 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90C8u);
    return 0;
  }
  v14 = Resource->NumberOfExclusiveWaiters + 1;
  v23 = 0LL;
  Resource->NumberOfExclusiveWaiters = v14;
  v27[1] = v27;
  v27[0] = v27;
  ExclusiveWaiters = Resource->ExclusiveWaiters;
  v24 = 0LL;
  v26 = 393217LL;
  v25 = v7;
  v27[2] = 0LL;
  if ( ExclusiveWaiters )
  {
    v16 = (PVOID *)ExclusiveWaiters[1];
    if ( *v16 != ExclusiveWaiters )
      __fastfail(3u);
    v24 = (PVOID *)ExclusiveWaiters[1];
    v23 = ExclusiveWaiters;
    *v16 = &v23;
    ExclusiveWaiters[1] = &v23;
  }
  else
  {
    v24 = &v23;
    v23 = &v23;
    Resource->ExclusiveWaiters = &v23;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x90C4u);
  if ( v8 )
    PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
  ExpApplyPrewaitBoost((__int64)Resource, v20, v21);
  ExpWaitForResource(Resource, (__int64)&v23, 0x10224u);
  ExpBoostIoAfterAcquire((__int64)Resource, v7, 0);
  __incgsdword(0x90BCu);
  __incgsdword(0x90A4u);
  if ( v8 )
  {
    v19 = 1LL;
    v18 = 65569LL;
    goto LABEL_46;
  }
  return 1;
}
