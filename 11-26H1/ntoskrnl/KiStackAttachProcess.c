/*
 * XREFs of KiStackAttachProcess @ 0x1402491E0
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140392C04 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiAttachWorkingSet @ 0x14046ADD4 (MiAttachWorkingSet.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1404AD3B0 (PspIsProcessReadyForRemoteThread.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404C3F54 (MmUpdateOldWorkingSetPages.c)
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     KeCopyXfdMaskToTeb @ 0x1404E3478 (KeCopyXfdMaskToTeb.c)
 *     MiEmptyAccessLogs @ 0x1404FB2E0 (MiEmptyAccessLogs.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     IoRaiseHardError @ 0x1405CD930 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1405E82A0 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x1405FF1C4 (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x14060A3E0 (PopStateTransitionTimeoutDispatch.c)
 *     PsAttachSession @ 0x140619D70 (PsAttachSession.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     ExpSvmServicePageFault @ 0x1406D6410 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406E7B50 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E7C88 (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x1406EA39C (MmSetCommitReleaseEligibility.c)
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     PspApplyWorkingSetLimits @ 0x140774F6C (PspApplyWorkingSetLimits.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1407BE6F0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x1407BF5D0 (KiTpReadImageData.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407CA320 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x1407F5EB0 (PsQueryProcessExceptionFlags.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1407F7010 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PsStartSiloMonitor @ 0x140801670 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408018B0 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x140820CA8 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x140821B84 (SmHwAcceleratorPartitionMgrStart.c)
 *     EtwpUMGLEnabled @ 0x14082E77C (EtwpUMGLEnabled.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14087D0E0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14087D4E0 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MiScrubActiveLargePage @ 0x14088418C (MiScrubActiveLargePage.c)
 *     MiCopyLargeVad @ 0x14088621C (MiCopyLargeVad.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140917BB8 (EtwpTrackGuidEntryRegistrations.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140947C5C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     PspFindFirstThreadByTebValue @ 0x140949C14 (PspFindFirstThreadByTebValue.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x14098A100 (PfSnPopulateReadList.c)
 *     AlpcViewDestroyProcedure @ 0x140992BD0 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     MmCreateTeb @ 0x140999CF8 (MmCreateTeb.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     ObSetHandleAttributes @ 0x1409BAAF0 (ObSetHandleAttributes.c)
 *     ExpWnfWriteStateData @ 0x1409C7434 (ExpWnfWriteStateData.c)
 *     PoEnergyContextStart @ 0x1409CA91C (PoEnergyContextStart.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x1409E5A34 (PspUpdatePebForAffinityChange.c)
 *     PspSetupUserStack @ 0x1409E6A04 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PspSetupUserShadowStack @ 0x1409EE454 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiAllocateProcessVads @ 0x140A03904 (MiAllocateProcessVads.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 *     PspDeleteUserStack @ 0x140A04714 (PspDeleteUserStack.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MiCloneNoChange @ 0x140A07CA0 (MiCloneNoChange.c)
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140A08068 (MmInitializeHandBuiltProcess2.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x140A08964 (PsMapSystemDlls.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A141BC (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwTiLogReadWriteVm @ 0x140A2B640 (EtwTiLogReadWriteVm.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A33C00 (EtwpCovSampEnumerateProcess.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspQueryQuotaLimits @ 0x140A7CBE0 (PspQueryQuotaLimits.c)
 *     EtwTiLogProtectExecVm @ 0x140A81C70 (EtwTiLogProtectExecVm.c)
 *     EtwpTiQueryVad @ 0x140A88C30 (EtwpTiQueryVad.c)
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 *     MiQueryPtePrepare @ 0x140A95A04 (MiQueryPtePrepare.c)
 *     MmProbeAndLockProcessPages @ 0x140A9E250 (MmProbeAndLockProcessPages.c)
 *     NtResetWriteWatch @ 0x140AB8910 (NtResetWriteWatch.c)
 *     PspWow64SetupUserStack @ 0x140AB9ACC (PspWow64SetupUserStack.c)
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 *     PspIumResolveVirtualFault @ 0x140AD33B4 (PspIumResolveVirtualFault.c)
 *     PspSetupReservedUserMappings @ 0x140ADB07C (PspSetupReservedUserMappings.c)
 *     SmpKeyedStoreCreate @ 0x140ADC25C (SmpKeyedStoreCreate.c)
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B02108 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x140B023A4 (MmEnforceWorkingSetLimit.c)
 *     IopRaiseHardError @ 0x140B08B60 (IopRaiseHardError.c)
 *     VmpTracingEnabledCallback @ 0x140B22330 (VmpTracingEnabledCallback.c)
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 *     PspAttachSession @ 0x140B23AC8 (PspAttachSession.c)
 *     PspCreateSecureThread @ 0x140B36748 (PspCreateSecureThread.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B481A8 (MiUnmapImageForEnclaveUse.c)
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B54B44 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiMapImageForEnclaveUse @ 0x140B61ED8 (MiMapImageForEnclaveUse.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B688A4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B694A0 (PspProcessDynamicEHContinuationTargets.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140CBDB60 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140CDE944 (PspInitPhase3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetAddressPolicy @ 0x140248DB0 (KiSetAddressPolicy.c)
 *     KiLoadDirectoryTableBase @ 0x140248F60 (KiLoadDirectoryTableBase.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140312650 (HvlSwitchVirtualAddressSpace.c)
 *     KiInSwapSingleProcess @ 0x140312684 (KiInSwapSingleProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r10
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // edi
  $241382875694CED3D471BC5892DE3337 *v11; // rcx
  _KPROCESS *Process; // rax
  $A4FCC2D77D2C8DA06473821DBD6C3FF5 *v13; // rdi
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
    if ( ($241382875694CED3D471BC5892DE3337 *)v11->ApcState.ApcListHead[0].Flink == v11 )
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
    if ( ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)v5 == &CurrentThread->600 )
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
    if ( ($241382875694CED3D471BC5892DE3337 *)v11->ApcState.ApcListHead[0].Flink == v11 )
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
