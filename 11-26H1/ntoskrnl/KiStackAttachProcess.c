/*
 * XREFs of KiStackAttachProcess @ 0x140247880
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140390E54 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     KeForceAttachProcess @ 0x14045D2E0 (KeForceAttachProcess.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiAttachWorkingSet @ 0x140471654 (MiAttachWorkingSet.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1404B3DE0 (PspIsProcessReadyForRemoteThread.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404CA524 (MmUpdateOldWorkingSetPages.c)
 *     MiDeleteFinalPageTables @ 0x1404CE05C (MiDeleteFinalPageTables.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     KeCopyXfdMaskToTeb @ 0x1404EA0C8 (KeCopyXfdMaskToTeb.c)
 *     MiEmptyAccessLogs @ 0x140501AF0 (MiEmptyAccessLogs.c)
 *     MiLockProcessParentPage @ 0x14050E464 (MiLockProcessParentPage.c)
 *     IoRaiseHardError @ 0x1405CB060 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1405E5930 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x1405FC774 (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x140607880 (PopStateTransitionTimeoutDispatch.c)
 *     PsAttachSession @ 0x140616D80 (PsAttachSession.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14063CDAC (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     ExpSvmServicePageFault @ 0x1406D23E0 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406E2EA4 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E2FDC (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x1406E56EC (MmSetCommitReleaseEligibility.c)
 *     MiLogHotPatchRundownForProcess @ 0x1406FC34C (MiLogHotPatchRundownForProcess.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     PspApplyWorkingSetLimits @ 0x140771F6C (PspApplyWorkingSetLimits.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1407BB690 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x1407BC570 (KiTpReadImageData.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407C72C0 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x1407F0350 (PsQueryProcessExceptionFlags.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1407F14B0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PsStartSiloMonitor @ 0x1407FBC40 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407FBE80 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x1407FDBD8 (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14081AA98 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14081B974 (SmHwAcceleratorPartitionMgrStart.c)
 *     EtwpUMGLEnabled @ 0x14082853C (EtwpUMGLEnabled.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     MiQueryProcessActivePatches @ 0x140874330 (MiQueryProcessActivePatches.c)
 *     MmCreateShadowMapping @ 0x140875970 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140875BF4 (MmDeleteShadowMapping.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x140876D00 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140877100 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateUserPhysicalView @ 0x140878ADC (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MiScrubActiveLargePage @ 0x14087DD8C (MiScrubActiveLargePage.c)
 *     MiCopyLargeVad @ 0x14087FE1C (MiCopyLargeVad.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093C018 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x140940AF0 (EtwpCovSampEnumerateProcess.c)
 *     ExpWnfWriteStateData @ 0x14094BAC4 (ExpWnfWriteStateData.c)
 *     PoEnergyContextStart @ 0x14094EFDC (PoEnergyContextStart.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140954D20 (EtwpPsProvProcessEnumCallback.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409556F0 (DbgkpPostFakeThreadMessages.c)
 *     PspFindFirstThreadByTebValue @ 0x140955E54 (PspFindFirstThreadByTebValue.c)
 *     MiAllocateProcessVads @ 0x14095E044 (MiAllocateProcessVads.c)
 *     NtProtectVirtualMemory @ 0x14095E180 (NtProtectVirtualMemory.c)
 *     PspDeleteUserStack @ 0x14095EE54 (PspDeleteUserStack.c)
 *     MmAssignProcessToJob @ 0x14096022C (MmAssignProcessToJob.c)
 *     MiLockUnlockVmPrepare @ 0x140960C00 (MiLockUnlockVmPrepare.c)
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 *     MiCloneNoChange @ 0x140961FAC (MiCloneNoChange.c)
 *     MiReturnCloneResources @ 0x1409620A4 (MiReturnCloneResources.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x140962ADC (PsMapSystemDlls.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140964050 (MmInitializeHandBuiltProcess2.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     SmpKeyedStoreCreate @ 0x140966FB8 (SmpKeyedStoreCreate.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     ObSetHandleAttributes @ 0x140970980 (ObSetHandleAttributes.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140985F5C (DbgkpPostFakeProcessCreateMessages.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409B77C0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x1409B9120 (PfSnPopulateReadList.c)
 *     AlpcViewDestroyProcedure @ 0x1409C1BF0 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     MmCreateTeb @ 0x1409C8D18 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1409EA234 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409EA95C (PspWow64InitThread.c)
 *     PspSetupUserShadowStack @ 0x1409F1C84 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A14FC8 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwTiLogReadWriteVm @ 0x140A22020 (EtwTiLogReadWriteVm.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x140A6B5B0 (PspQueryQuotaLimits.c)
 *     EtwTiLogProtectExecVm @ 0x140A79D30 (EtwTiLogProtectExecVm.c)
 *     EtwpTiQueryVad @ 0x140A82DC0 (EtwpTiQueryVad.c)
 *     MiPrepareWriteWatchPacket @ 0x140A8DCD0 (MiPrepareWriteWatchPacket.c)
 *     MiQueryPtePrepare @ 0x140A90EB4 (MiQueryPtePrepare.c)
 *     MmProbeAndLockProcessPages @ 0x140A9A0D0 (MmProbeAndLockProcessPages.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x140A9AA04 (PspUpdatePebForAffinityChange.c)
 *     NtResetWriteWatch @ 0x140AB72D0 (NtResetWriteWatch.c)
 *     PspWow64SetupUserStack @ 0x140AB848C (PspWow64SetupUserStack.c)
 *     MmCreatePeb @ 0x140ACA4F0 (MmCreatePeb.c)
 *     PspIumResolveVirtualFault @ 0x140AD66A8 (PspIumResolveVirtualFault.c)
 *     PspSetupReservedUserMappings @ 0x140ADE30C (PspSetupReservedUserMappings.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B003D8 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x140B00674 (MmEnforceWorkingSetLimit.c)
 *     IopRaiseHardError @ 0x140B06A30 (IopRaiseHardError.c)
 *     VmpTracingEnabledCallback @ 0x140B1FF10 (VmpTracingEnabledCallback.c)
 *     MiInsertChildVads @ 0x140B2090C (MiInsertChildVads.c)
 *     PspAttachSession @ 0x140B216C8 (PspAttachSession.c)
 *     PspCreateSecureThread @ 0x140B342F8 (PspCreateSecureThread.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B46178 (MiUnmapImageForEnclaveUse.c)
 *     MiCombineIdenticalPages @ 0x140B49E94 (MiCombineIdenticalPages.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B522A4 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B65804 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B66514 (PspProcessDynamicEHContinuationTargets.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B792F0 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C01874 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140CB7B1C (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140CD85C4 (PspInitPhase3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetAddressPolicy @ 0x140247450 (KiSetAddressPolicy.c)
 *     KiLoadDirectoryTableBase @ 0x140247600 (KiLoadDirectoryTableBase.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402C79B0 (HvlSwitchVirtualAddressSpace.c)
 *     KiInSwapSingleProcess @ 0x1402C79E4 (KiInSwapSingleProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r10
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // edi
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v11; // rcx
  _KPROCESS *Process; // rax
  $B3FD53340A977CC9CDA66D808670C106 *v13; // rdi
  struct _LIST_ENTRY *v14; // rdx
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rdx
  struct _KPRCB *v17; // rax
  _KPROCESS *v18; // r13
  __int64 Group; // rsi
  unsigned __int64 v20; // rbp
  unsigned __int64 DirectoryTableBase; // rdi
  unsigned __int64 v22; // rax
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned int i; // ecx
  __int64 v27; // rdx
  __int64 v28; // r9
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v30; // r8
  struct _KTHREAD **v31; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v33; // rsi
  unsigned __int64 GroupIndex; // rbp
  __int64 v35; // rdi
  __int64 v36; // r8
  __int64 v37; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  int v44; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  v5 = a3;
  LOBYTE(v8) = (a2 & 2) == 0;
  if ( (((KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) & (unsigned __int8)v8) != 0
    || (*(_DWORD *)&BugCheckParameter1->0 & 0x800) != 0 )
  {
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  }
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
    return v8;
  }
  v9 = 0;
  if ( (a2 & 2) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v10 = 0;
LABEL_11:
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v5 = a3;
      goto LABEL_13;
    }
    while ( 1 )
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_54:
          HvlNotifyLongSpinWait(v10);
          goto LABEL_37;
        }
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          v27 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v27 + 35) & 1) != 0 )
          {
            v28 = *(_QWORD *)(v27 + 36600);
            if ( !v28 || !*(_BYTE *)(v28 + 65) || !*(_BYTE *)(v28 + 64) )
              goto LABEL_54;
          }
        }
      }
      _mm_pause();
LABEL_37:
      if ( !CurrentThread->ThreadLock )
        goto LABEL_11;
    }
  }
LABEL_13:
  v11 = &CurrentThread->152;
  Process = CurrentThread->ApcState.Process;
  if ( CurrentThread->ApcStateIndex )
  {
    *(_QWORD *)(v5 + 32) = Process;
    *(_BYTE *)(v5 + 40) = CurrentThread->ApcState.InProgressFlags;
    *(_BYTE *)(v5 + 41) = CurrentThread->ApcState.KernelApcPending;
    *(_BYTE *)(v5 + 42) = CurrentThread->ApcState.UserApcPendingAll;
    Flink = v11->ApcState.ApcListHead[0].Flink;
    if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v11->ApcState.ApcListHead[0].Flink == v11 )
    {
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      *(_BYTE *)(v5 + 41) = 0;
    }
    else
    {
      Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
      *(_QWORD *)v5 = Flink;
      *(_QWORD *)(v5 + 8) = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v5;
      Blink->Flink = (struct _LIST_ENTRY *)v5;
    }
    v30 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
    v31 = (struct _KTHREAD **)(v5 + 16);
    if ( v30 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
    {
      *(_QWORD *)(v5 + 24) = v5 + 16;
      *v31 = (struct _KTHREAD *)v31;
      *(_BYTE *)(v5 + 42) = 0;
    }
    else
    {
      v39 = CurrentThread->ApcState.ApcListHead[1].Blink;
      *v31 = v30;
      *(_QWORD *)(v5 + 24) = v39;
      v30->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v31;
      v39->Flink = (struct _LIST_ENTRY *)v31;
    }
    CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
    v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
    CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
    CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
    *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
    CurrentThread->ApcState.UserApcPendingAll = 0;
    if ( ($B3FD53340A977CC9CDA66D808670C106 *)v5 == &CurrentThread->600 )
      CurrentThread->ApcStateIndex = 1;
    if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
    {
      CurrentThread->ThreadLock = 0LL;
      KiInSwapSingleProcess((LegacyAutoBoost *)CurrentThread);
      v41 = KeGetCurrentIrql();
      if ( (_BYTE)v41 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v41, 2LL);
      v44 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v44);
        while ( CurrentThread->ThreadLock );
      }
      v5 = a3;
    }
    CurrentThread->MiscFlags |= 0x800u;
    CurrentThread->ApcState.Process = BugCheckParameter1;
    if ( (a2 & 2) == 0 )
      CurrentThread->ThreadLock = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v33 = *(_QWORD *)(v5 + 32);
    GroupIndex = CurrentPrcb->GroupIndex;
    v35 = 8LL * CurrentPrcb->Group;
    _interlockedbittestandset64(
      (volatile signed __int32 *)((char *)&BugCheckParameter1->ActiveProcessors->8 + v35),
      GroupIndex);
    KiLoadDirectoryTableBase((__int64)BugCheckParameter1, BugCheckParameter1->DirectoryTableBase);
    v8 = *(_QWORD *)(v33 + 128);
    _interlockedbittestandreset64((volatile signed __int32 *)(v8 + v35 + 8), GroupIndex);
    CurrentThread->MiscFlags &= ~0x800u;
    if ( (a2 & 2) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      LOBYTE(v8) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    v13 = &CurrentThread->600;
    CurrentThread->SavedApcState.Process = Process;
    CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
    CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
    CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
    v14 = v11->ApcState.ApcListHead[0].Flink;
    if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v11->ApcState.ApcListHead[0].Flink == v11 )
    {
      CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
      v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v13;
      CurrentThread->SavedApcState.KernelApcPending = 0;
    }
    else
    {
      v23 = CurrentThread->ApcState.ApcListHead[0].Blink;
      v13->SavedApcState.ApcListHead[0].Flink = v14;
      CurrentThread->SavedApcState.ApcListHead[0].Blink = v23;
      v14->Blink = (struct _LIST_ENTRY *)v13;
      v23->Flink = (struct _LIST_ENTRY *)v13;
    }
    v15 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
    v16 = &CurrentThread->SavedApcState.ApcListHead[1];
    if ( v15 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
      v16->Flink = v16;
      CurrentThread->SavedApcState.UserApcPendingAll = 0;
    }
    else
    {
      v24 = CurrentThread->ApcState.ApcListHead[1].Blink;
      v16->Flink = (struct _LIST_ENTRY *)v15;
      CurrentThread->SavedApcState.ApcListHead[1].Blink = v24;
      v15->Header.WaitListHead.Flink = v16;
      v24->Flink = v16;
    }
    CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
    v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
    CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
    CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
    *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
    CurrentThread->ApcState.UserApcPendingAll = 0;
    CurrentThread->ApcStateIndex = 1;
    if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
    {
      CurrentThread->ThreadLock = 0LL;
      KiInSwapSingleProcess((LegacyAutoBoost *)CurrentThread);
      v37 = KeGetCurrentIrql();
      if ( (_BYTE)v37 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v37, 2LL);
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v37, v16, v36) )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
    }
    CurrentThread->MiscFlags |= 0x800u;
    CurrentThread->ApcState.Process = BugCheckParameter1;
    if ( (a2 & 2) == 0 )
      CurrentThread->ThreadLock = 0LL;
    v17 = KeGetCurrentPrcb();
    v18 = CurrentThread->SavedApcState.Process;
    Group = v17->Group;
    v20 = v17->GroupIndex;
    _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter1->ActiveProcessors->Bitmap[Group], v20);
    DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
    if ( KiKvaShadow )
    {
      v22 = DirectoryTableBase | 0x8000000000000000uLL;
      if ( (DirectoryTableBase & 2) == 0 )
        v22 = BugCheckParameter1->DirectoryTableBase;
      __writegsqword(0xB000u, v22);
      KiSetAddressPolicy(BugCheckParameter1->AddressPolicy, (__int64)v16);
    }
    if ( (HvlEnlightenments & 1) != 0 )
      HvlSwitchVirtualAddressSpace(DirectoryTableBase);
    else
      __writecr3(DirectoryTableBase);
    if ( KiKvaShadow && !KiFlushPcid )
    {
      v25 = __readcr4();
      if ( (v25 & 0x20080) != 0 )
      {
        __writecr4(v25 ^ 0x80);
        __writecr4(v25);
      }
      else
      {
        v40 = __readcr3();
        __writecr3(v40);
      }
    }
    _interlockedbittestandreset64((volatile signed __int32 *)&v18->ActiveProcessors->Bitmap[Group], v20);
    CurrentThread->MiscFlags &= ~0x800u;
    if ( (a2 & 2) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    LOBYTE(v8) = a3;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  return v8;
}
