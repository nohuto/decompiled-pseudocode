/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x140275200
 * Callers:
 *     SepQueueWorkItem @ 0x140216854 (SepQueueWorkItem.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402751C0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403CB048 (SepInternalSetSecurityAttributesToken.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E2360 (CcAcquireByteRangeForWrite.c)
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     CcUnpinRepinnedBcb @ 0x1404AA000 (CcUnpinRepinnedBcb.c)
 *     MiAcquireLoadLock @ 0x1404AB9EC (MiAcquireLoadLock.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404ABEF8 (PnpUnregisterPlugPlayNotification.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1404D6408 (SeTokenSetRedirectionTrustPolicy.c)
 *     PfResourceExclusiveAcquire @ 0x1404D7018 (PfResourceExclusiveAcquire.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404F29E4 (PiDmaGuardQueueRemoveEntry.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404FA6D8 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404FAFE0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 *     RtlpAllocateHeap @ 0x14052125C (RtlpAllocateHeap.c)
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405C7CF8 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x1405CC1F8 (IoSetDeferredLiveDumpFileHandle.c)
 *     RtlpFreeHeap @ 0x14061C6E0 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14061D40C (RtlpSetupExtendedBlock.c)
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14063B970 (SeSetSecurityAttributesTokenEx.c)
 *     DifExAcquireResourceExclusiveLiteWrapper @ 0x14064EF60 (DifExAcquireResourceExclusiveLiteWrapper.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406CE6E0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140773E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     SepAddTokenLogonSession @ 0x140774EB0 (SepAddTokenLogonSession.c)
 *     PpReleaseBootDDB @ 0x140776E90 (PpReleaseBootDDB.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14078DB20 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x14078FA70 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14078FCA0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14079052C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1407906DC (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x1407930B8 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x1407941C4 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140794CC0 (IopInitializeBootLogging.c)
 *     IoRegisterFileSystem @ 0x140796630 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140796800 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140796C50 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140796D10 (IoUnregisterFsRegistrationChange.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A02EC (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A1D3C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A37B0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PpDevCfgProcessDevices @ 0x1407ACC4C (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B0854 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B0AD8 (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x1407B2EFC (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PipDgqInsertEntry @ 0x1407B8B48 (PipDgqInsertEntry.c)
 *     TtmiResetInactivityTimer @ 0x1407EBFE0 (TtmiResetInactivityTimer.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407ECC90 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpAcquireQueueLock @ 0x1407ED230 (TtmpAcquireQueueLock.c)
 *     RtlZeroHeap @ 0x140805E00 (RtlZeroHeap.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     SeSetPrivateNameSpaceToken @ 0x140811FE0 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14081221C (SepSetServerSiloToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     SepBlockAccessForLogonSession @ 0x140815420 (SepBlockAccessForLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408154F4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140815694 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1408158D8 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1408167D0 (SepRmGlobalSaclSetWrkr.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140822644 (WmiAcquireSmbiosLockExclusive.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14083306C (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x140844590 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x140895BF8 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14089E93C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     LockRMLog @ 0x1408AD924 (LockRMLog.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PiSwLock @ 0x14090DC3C (PiSwLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14090ECD0 (PnpAcquireDependencyRelationsLock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14091109C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14091129C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PpDeviceRegistration @ 0x140912C9C (PpDeviceRegistration.c)
 *     PnpDelayedRemoveWorker @ 0x140913AC0 (PnpDelayedRemoveWorker.c)
 *     PnpChainDereferenceComplete @ 0x140914380 (PnpChainDereferenceComplete.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x14091D48C (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409457F4 (PopAdaptiveGetBootIsUnattended.c)
 *     AdtpBuildAccessesString @ 0x14096A1B4 (AdtpBuildAccessesString.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14098D0F4 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140995E20 (_CmGetDeviceSoftwareKeyPath.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1409A7E94 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1409BB670 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409DD768 (PiDcHandleCustomDeviceEvent.c)
 *     PpCheckInDriverDatabase @ 0x140A26144 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A3AFDC (PopAcquireAdaptiveLock.c)
 *     PopSetDisplayStatus @ 0x140A3B900 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x140A3BB64 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetSessionState @ 0x140A3D7A0 (PopAdaptiveGetSessionState.c)
 *     NtAdjustPrivilegesToken @ 0x140A42610 (NtAdjustPrivilegesToken.c)
 *     NtAdjustGroupsToken @ 0x140A46440 (NtAdjustGroupsToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A5D320 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiDrvDbNodeActionCallback @ 0x140A781E0 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140A78308 (PiDrvDbLoadNode.c)
 *     PpDevNodeLockTree @ 0x140A88424 (PpDevNodeLockTree.c)
 *     PnpDisableDeviceInterfaces @ 0x140A8ABF0 (PnpDisableDeviceInterfaces.c)
 *     IopGetRootDevices @ 0x140A9FDB8 (IopGetRootDevices.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     SepCreateLogonSessionTrack @ 0x140AAF14C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB6FE8 (SepReferenceLogonSessionSilo.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABC470 (PopAdaptivePowerSettingCallback.c)
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADDB0C (SeSetMandatoryPolicyToken.c)
 *     NtGetMUIRegistryInfo @ 0x140AE5010 (NtGetMUIRegistryInfo.c)
 *     SepUpdateLogonSessionTrack @ 0x140AE6934 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140AE7F2C (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AF80D4 (IopSetDeviceSecurityDescriptor.c)
 *     IoSetDeviceInterfaceState @ 0x140AF9840 (IoSetDeviceInterfaceState.c)
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 *     IopDoDeferredSetInterfaceState @ 0x140B0AD24 (IopDoDeferredSetInterfaceState.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PnpRestartDeviceNode @ 0x140B218FC (PnpRestartDeviceNode.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140B256D0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B29ACC (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140B31C8C (SeSetVirtualizationToken.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140B34450 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x140B389CC (PopAdaptiveGetBootTargetSystemState.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140B3ACC0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140B3E840 (IoEnumerateRegisteredFiltersList.c)
 *     PiDmaGuardQueueFlush @ 0x140B3EF4C (PiDmaGuardQueueFlush.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140B47DB0 (PopIsLockConsoleTimeoutActive.c)
 *     PnpDeleteDeviceInterfaces @ 0x140B4A554 (PnpDeleteDeviceInterfaces.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6B110 (PiCMUnregisterDeviceInterface.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     IopInitCrashDumpRegCallback @ 0x140CBD560 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC3170 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x140205314 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205688 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x140205F8C (ExpWaitForResource.c)
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceWait @ 0x140495E24 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140495FA8 (PerfLogExecutiveResourceAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
