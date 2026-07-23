/*
 * XREFs of KeDelayExecutionThread @ 0x1402461A0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020C608 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     FsRtlCreateSectionForDataScan @ 0x1403100A0 (FsRtlCreateSectionForDataScan.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     MiFlushAllPagesWorker @ 0x1403E3C5C (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E3DAC (MiFlushAllStoreSwapPages.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     MiModwriterConfigureMode @ 0x1403FFEC0 (MiModwriterConfigureMode.c)
 *     ExpExpandResourceOwnerTable @ 0x14042E344 (ExpExpandResourceOwnerTable.c)
 *     PoBlockConsoleSwitchEx @ 0x140448F98 (PoBlockConsoleSwitchEx.c)
 *     MiHandleSynchronousFlushError @ 0x14046717C (MiHandleSynchronousFlushError.c)
 *     MiMappedPageWriter @ 0x140490470 (MiMappedPageWriter.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiRemoveUnusedSegments @ 0x14049CD9C (MiRemoveUnusedSegments.c)
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 *     IopKeepAliveWorker @ 0x1404C4130 (IopKeepAliveWorker.c)
 *     MiDelayFaultingThread @ 0x1404FED04 (MiDelayFaultingThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x140515BDC (IopCancelIrpsInFileObjectList.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     IommupDeviceUnregisterFaultCallback @ 0x1405A2E70 (IommupDeviceUnregisterFaultCallback.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B3E18 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcErrorCallbackRoutine @ 0x1405B4060 (CcErrorCallbackRoutine.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x1405C77F0 (InbvRotateGuiBootDisplay.c)
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     MdlInvariantPostProcessing1 @ 0x140646724 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x140664840 (DifKeDelayExecutionThreadWrapper.c)
 *     ExpPrmWaitForForZeroActiveCount @ 0x1406D3F30 (ExpPrmWaitForForZeroActiveCount.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     sub_140717D80 @ 0x140717D80 (sub_140717D80.c)
 *     IpmiLibpDelay @ 0x1407224F4 (IpmiLibpDelay.c)
 *     sub_14077B28C @ 0x14077B28C (sub_14077B28C.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407BB964 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x1407D4050 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140845B80 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
 *     CmpTransMgrCommit @ 0x1408B5850 (CmpTransMgrCommit.c)
 *     NtDelayExecution @ 0x1408F8F20 (NtDelayExecution.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     IoCancelThreadIo @ 0x14094BAC8 (IoCancelThreadIo.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x14098BDF0 (PfpOpenHandleCreate.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409B317C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 *     PfTLoggingWorker @ 0x1409F1030 (PfTLoggingWorker.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A13E18 (EtwpWaitForBufferReferenceCount.c)
 *     PnpCompleteDeviceEvent @ 0x140A1B2E0 (PnpCompleteDeviceEvent.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     CmpUuidCreate @ 0x140A7EF4C (CmpUuidCreate.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     NtCreateJobObject @ 0x140A7F420 (NtCreateJobObject.c)
 *     PopAcquireAdaptiveLock @ 0x140ABAFAC (PopAcquireAdaptiveLock.c)
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 *     NtCancelIoFile @ 0x140AD0240 (NtCancelIoFile.c)
 *     PopPolicyWorkerNotify @ 0x140AEF0F0 (PopPolicyWorkerNotify.c)
 *     CmFcpConnectToAlpcServer @ 0x140B05DC8 (CmFcpConnectToAlpcServer.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 *     CmpRetryBackOff @ 0x140B3E90C (CmpRetryBackOff.c)
 *     MiGetReadyInPageBlock @ 0x140B3EB1C (MiGetReadyInPageBlock.c)
 *     NtNotifyChangeSession @ 0x140B4ED50 (NtNotifyChangeSession.c)
 *     IopFreeBandwidthContract @ 0x140B71E1C (IopFreeBandwidthContract.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140C3BAE0 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140C53228 (HdlspPutMore.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC9C90 (PiCreateDriverDataDirectoryRoot.c)
 *     StartFirstUserProcess @ 0x140D0E818 (StartFirstUserProcess.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140247840 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiClearPriorityFloor @ 0x1403823E0 (KiClearPriorityFloor.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiRcuReportQuiescentState @ 0x1404D3098 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // r10
  PLARGE_INTEGER v5; // r14
  bool v6; // zf
  BOOLEAN v7; // r12
  unsigned int v8; // r15d
  unsigned __int64 AwaitingCompletion; // rcx
  unsigned int v10; // edi
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 WaitIrql; // r14
  unsigned int v13; // esi
  int v14; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // r13
  NTSTATUS v16; // esi
  __int64 PriorityFloorSummary; // rdx
  struct _SINGLE_LIST_ENTRY *v19; // rax
  __int64 ThreadTimerDelay; // rdx
  struct _KPRCB *v21; // r15
  unsigned __int64 ThreadLock; // rax
  NTSTATUS v23; // r13d
  unsigned int v24; // esi
  struct _SINGLE_LIST_ENTRY *v25; // rsi
  _KWAIT_STATUS_REGISTER v26; // al
  int v27; // ebx
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  char v29; // bl
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r9
  unsigned __int8 AllCompareThreadStateFlags; // r8
  _KPRCB *Prcb; // rdx
  _KTHREAD *IdleThread; // rcx
  __int64 v34; // r8
  unsigned __int8 v35; // al
  _KPRCB *v36; // rsi
  unsigned __int8 v37; // al
  __int64 v38; // rdx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r12
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  int v42; // edx
  _DWORD *v43; // rcx
  __int64 Number; // r12
  char v45; // bl
  unsigned __int8 TargetType; // al
  unsigned int v47; // edx
  struct _KPRCB *v48; // rax
  unsigned __int8 Level; // r8
  __int64 v50; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v53; // rsi
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  ULONG_PTR WobPriority; // rcx
  unsigned __int8 v57; // al
  unsigned __int8 v58; // si
  struct _SINGLE_LIST_ENTRY *v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int i; // r8d
  unsigned __int8 *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int8 v66; // al
  unsigned __int64 v67; // r14
  _LIST_ENTRY *v68; // rax
  __int64 v69; // rax
  char v70; // al
  _LIST_ENTRY *v71; // rdx
  struct _LIST_ENTRY *v72; // rax
  char v73; // al
  int IsEnabledNoReportingNoInline; // eax
  int BasePriority; // ecx
  char DecayBoost; // al
  signed int v77; // eax
  bool v78; // cc
  struct _KPRCB *v79; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v81; // eax
  __int64 v82; // rdx
  unsigned __int32 v83; // ett
  ULONG LowPart; // eax
  __int64 v85; // rdx
  ULONG v86; // ett
  ULONG v87; // eax
  __int64 v88; // rdx
  ULONG v89; // ett
  int v90; // ecx
  signed __int32 v91[8]; // [rsp+0h] [rbp-49h] BYREF
  _QWORD *v92; // [rsp+28h] [rbp-21h]
  __int64 v93; // [rsp+30h] [rbp-19h] BYREF
  struct _KTHREAD *v94; // [rsp+38h] [rbp-11h]
  struct _SINGLE_LIST_ENTRY v95; // [rsp+40h] [rbp-9h] BYREF
  struct _KI_RESCHEDULE_CONTEXT *v96; // [rsp+48h] [rbp-1h] BYREF
  __int64 v97; // [rsp+50h] [rbp+7h] BYREF
  unsigned int SingleTargetIndex; // [rsp+58h] [rbp+Fh]
  __int64 v99; // [rsp+5Ch] [rbp+13h]
  PLARGE_INTEGER v100; // [rsp+C0h] [rbp+77h]
  LARGE_INTEGER PerformanceCounter; // [rsp+C8h] [rbp+7Fh] BYREF

  v100 = Interval;
  CurrentThread = KeGetCurrentThread();
  v5 = Interval;
  v6 = Interval->QuadPart == 0;
  v7 = Alertable;
  v94 = CurrentThread;
  v8 = WaitMode;
  if ( v6 && WaitMode && !Alertable && (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 )
    return KeYieldExecution(0);
  AwaitingCompletion = 2LL;
  v10 = 0;
  LODWORD(v93) = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    LODWORD(v93) = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      CurrentThread = v94;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( CurrentPrcb->RcuData.AwaitingCompletion )
    {
      v66 = KeDisableInterrupts(AwaitingCompletion, Alertable, Interval);
      AwaitingCompletion = (unsigned __int64)CurrentPrcb->RcuData.AwaitingCompletion;
      Interval = (PLARGE_INTEGER)v66;
      if ( AwaitingCompletion )
      {
        v67 = AwaitingCompletion - 8;
        v68 = *(_LIST_ENTRY **)AwaitingCompletion;
        if ( *(_QWORD *)(AwaitingCompletion - 8) )
        {
          if ( (_LIST_ENTRY *)AwaitingCompletion != v68 )
            CurrentPrcb->RcuData.AwaitingCompletion = v68;
        }
        else
        {
          if ( v68 == (_LIST_ENTRY *)AwaitingCompletion )
          {
            CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = v68;
            v71 = *(_LIST_ENTRY **)AwaitingCompletion;
            v72 = *(struct _LIST_ENTRY **)(AwaitingCompletion + 8);
            if ( *(_QWORD *)(*(_QWORD *)AwaitingCompletion + 8LL) != AwaitingCompletion
              || v72->Flink != (struct _LIST_ENTRY *)AwaitingCompletion )
            {
              __fastfail(3u);
            }
            v72->Flink = v71;
            v71->Blink = v72;
          }
          v69 = *(_QWORD *)(v67 + 56);
          *(_QWORD *)AwaitingCompletion = 0LL;
          *(_QWORD *)(v67 + 24) = *(_QWORD *)(v69 + 56);
        }
        if ( (_BYTE)Interval )
        {
          v79 = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int32 *)v79->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v81 = *SchedulerAssist;
            do
            {
              v82 = v81;
              LODWORD(v82) = v81 & 0xFFDFFFFF;
              v83 = v81;
              v81 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v81 & 0xFFDFFFFF, v81);
            }
            while ( v83 != v81 );
            if ( (v81 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v79, v82, SchedulerAssist, v3);
          }
          _enable();
        }
        if ( (unsigned int)KiSrcuReportQuiescent(v67, CurrentPrcb) )
          KiSrcuFlushCompleted(*(_QWORD *)(v67 + 56), 0LL);
        v5 = v100;
      }
      else if ( v66 )
      {
        AwaitingCompletion = (unsigned __int64)KeGetCurrentPrcb();
        Interval = *(PLARGE_INTEGER *)(AwaitingCompletion + 36600);
        if ( Interval )
        {
          _m_prefetchw(Interval);
          LowPart = Interval->LowPart;
          do
          {
            v85 = LowPart;
            *(_DWORD *)&Alertable = LowPart & 0xFFDFFFFF;
            v86 = LowPart;
            LowPart = _InterlockedCompareExchange((volatile signed __int32 *)Interval, LowPart & 0xFFDFFFFF, LowPart);
          }
          while ( v86 != LowPart );
          if ( (LowPart & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(AwaitingCompletion, Alertable, Interval, v3);
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      v70 = KeDisableInterrupts(AwaitingCompletion, Alertable, Interval);
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v91, 0);
        AwaitingCompletion = (unsigned __int64)KiDpcCorralLock.WaitBlock[2].Thread;
        CurrentPrcb->RcuData.GraceSequenceQuiescent = (unsigned __int64)KiDpcCorralLock.WaitBlock[2].Thread;
      }
      if ( v70 )
      {
        AwaitingCompletion = (unsigned __int64)KeGetCurrentPrcb();
        Interval = *(PLARGE_INTEGER *)(AwaitingCompletion + 36600);
        if ( Interval )
        {
          _m_prefetchw(Interval);
          v87 = Interval->LowPart;
          do
          {
            v88 = v87;
            LODWORD(v88) = v87 & 0xFFDFFFFF;
            v89 = v87;
            v87 = _InterlockedCompareExchange((volatile signed __int32 *)Interval, v87 & 0xFFDFFFFF, v87);
          }
          while ( v89 != v87 );
          if ( (v87 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(AwaitingCompletion, v88, Interval, v3);
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
    {
      AwaitingCompletion = (unsigned __int64)(&KiDpcCorralLock.NpxState + 4 * CurrentPrcb->Number);
      Interval = *(PLARGE_INTEGER *)AwaitingCompletion;
      if ( (*(_QWORD *)(*(_QWORD *)(AwaitingCompletion + 8) + 48LL) & *(_QWORD *)AwaitingCompletion) == 0LL )
      {
        if ( (unsigned int)KiRcuReportQuiescentState(
                             AwaitingCompletion,
                             CurrentPrcb->RcuData.GraceSequenceQuiescent,
                             0LL) )
          KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
      }
    }
    CurrentThread = v94;
  }
  if ( v5->HighPart < 0 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    CurrentThread = v94;
    Interval = (PLARGE_INTEGER)0xFFFFF780000003B0LL;
    PerformanceCounter.LowPart = 2;
    AwaitingCompletion = MEMORY[0xFFFFF780000003B0];
    v95.Next = (struct _SINGLE_LIST_ENTRY *)(InterruptTimePrecise.QuadPart
                                           - (v5->QuadPart
                                            + MEMORY[0xFFFFF780000003B0]
                                            + v94->RelativeTimerBias));
  }
  else
  {
    v95.Next = (struct _SINGLE_LIST_ENTRY *)v5->QuadPart;
    PerformanceCounter.LowPart = 1;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v96 = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v8;
      if ( v7 )
        CurrentThread->MiscFlags |= 0x10u;
      v13 = 0;
LABEL_15:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        while ( 1 )
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
          {
            if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
            {
LABEL_140:
              HvlNotifyLongSpinWait(v13);
              CurrentThread = v94;
              goto LABEL_18;
            }
            v3 = (unsigned int)KeNumberProcessors_0;
            for ( AwaitingCompletion = 0LL;
                  (unsigned int)AwaitingCompletion < (unsigned int)KeNumberProcessors_0;
                  AwaitingCompletion = (unsigned int)(AwaitingCompletion + 1) )
            {
              v50 = KiProcessorBlock[(unsigned int)AwaitingCompletion];
              if ( (*(_BYTE *)(v50 + 35) & 1) != 0 )
              {
                Interval = *(PLARGE_INTEGER *)(v50 + 36600);
                if ( !Interval || !BYTE1(Interval[8].LowPart) || !LOBYTE(Interval[8].LowPart) )
                  goto LABEL_140;
              }
            }
          }
          _mm_pause();
LABEL_18:
          if ( !CurrentThread->ThreadLock )
            goto LABEL_15;
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      AwaitingCompletion = KeGetCurrentIrql();
      if ( (_BYTE)AwaitingCompletion != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(AwaitingCompletion, 2LL);
      CurrentThread = v94;
      v94->WaitIrql = 0;
    }
    v14 = v93;
    Next = v95.Next;
    if ( v7 )
    {
      AwaitingCompletion = CurrentThread->Alerted;
      if ( _bittest((const int *)&AwaitingCompletion, v8) )
      {
        LODWORD(AwaitingCompletion) = AwaitingCompletion & ~(1 << v8);
        v16 = 257;
        CurrentThread->Alerted = AwaitingCompletion;
      }
      else if ( !(_BYTE)v8
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( (AwaitingCompletion & 1) != 0 )
        {
          LOBYTE(AwaitingCompletion) = AwaitingCompletion & 0xFE;
          v16 = 257;
          CurrentThread->Alerted = AwaitingCompletion;
        }
        else
        {
          v16 = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v16 = 192;
      }
      if ( v16 )
        goto LABEL_34;
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && (_BYTE)v8 )
    {
      v16 = 192;
LABEL_34:
      if ( (v14 & 2) != 0 )
      {
        KiClearPriorityFloor((ULONG_PTR)CurrentThread);
        CurrentThread = v94;
        v94->WobPriority = 32;
      }
      CurrentThread->ThreadLock = 0LL;
      if ( (v14 & 1) != 0 )
      {
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v96, (unsigned __int8)WaitIrql);
        return v16;
      }
      else
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)WaitIrql);
        __writecr8(WaitIrql);
        return v16;
      }
    }
    PriorityFloorSummary = PerformanceCounter.LowPart;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 4;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v19 = Next;
    CurrentThread->ThreadLock = 0LL;
    if ( (_DWORD)PriorityFloorSummary == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      AwaitingCompletion = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v19 = Next;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v19 = (struct _SINGLE_LIST_ENTRY *)((char *)Next + ThreadTimerDelay);
      }
      PriorityFloorSummary = PerformanceCounter.LowPart;
    }
    else
    {
      if ( !Next )
        break;
      AwaitingCompletion = MEMORY[0xFFFFF78000000014];
    }
    if ( AwaitingCompletion > (unsigned __int64)v19 )
      break;
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    v92 = 0LL;
    CurrentThread->WaitBlockCount = 1;
    v54 = KiCommitThreadWait(
            (LegacyAutoBoost *)CurrentThread,
            (__int64 *)&CurrentThread->320,
            PriorityFloorSummary,
            (__int64)Next,
            v14,
            v92);
    LODWORD(v93) = 0;
    if ( v54 != 256 )
    {
      if ( v54 != 258 )
        return v54;
      return v10;
    }
    v58 = KeGetCurrentIrql();
    if ( v58 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v55) = 2;
      KiRaiseIrqlProcessIrqlFlags(v58, v55);
    }
    CurrentThread = v94;
    v94->WaitIrql = v58;
  }
  v21 = KeGetCurrentPrcb();
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v91, 0);
  ThreadLock = CurrentThread->ThreadLock;
  v23 = 0;
  PerformanceCounter.LowPart = 0;
  if ( ThreadLock )
  {
    v24 = 0;
    PerformanceCounter.LowPart = 0;
LABEL_56:
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      CurrentThread->ThreadLock = 0LL;
      goto LABEL_58;
    }
    while ( 1 )
    {
      if ( (++v24 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_165:
          HvlNotifyLongSpinWait(v24);
          CurrentThread = v94;
          goto LABEL_88;
        }
        v3 = (unsigned int)KeNumberProcessors_0;
        for ( AwaitingCompletion = 0LL;
              (unsigned int)AwaitingCompletion < (unsigned int)KeNumberProcessors_0;
              AwaitingCompletion = (unsigned int)(AwaitingCompletion + 1) )
        {
          PriorityFloorSummary = KiProcessorBlock[(unsigned int)AwaitingCompletion];
          if ( (*(_BYTE *)(PriorityFloorSummary + 35) & 1) != 0 )
          {
            PriorityFloorSummary = *(_QWORD *)(PriorityFloorSummary + 36600);
            if ( !PriorityFloorSummary )
              goto LABEL_165;
            Interval = (PLARGE_INTEGER)*(unsigned __int8 *)(PriorityFloorSummary + 64);
            if ( !*(_BYTE *)(PriorityFloorSummary + 65) || !(_BYTE)Interval )
              goto LABEL_165;
          }
        }
      }
      _mm_pause();
LABEL_88:
      if ( !CurrentThread->ThreadLock )
        goto LABEL_56;
    }
  }
LABEL_58:
  v95.Next = 0LL;
  v25 = 0LL;
  if ( (v14 & 2) != 0 )
  {
LABEL_171:
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      while ( 1 )
      {
        LODWORD(v25) = (_DWORD)v25 + 1;
        if ( ((unsigned int)v25 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(
                                  AwaitingCompletion,
                                  PriorityFloorSummary,
                                  Interval) )
          {
            HvlNotifyLongSpinWait((unsigned int)v25);
            CurrentThread = v94;
            goto LABEL_174;
          }
          CurrentThread = v94;
        }
        _mm_pause();
LABEL_174:
        if ( !CurrentThread->ThreadLock )
          goto LABEL_171;
      }
    }
    WobPriority = CurrentThread->WobPriority;
    Interval = (PLARGE_INTEGER)WobPriority;
    PriorityFloorSummary = (__int64)CurrentThread + WobPriority;
    v57 = CurrentThread->PriorityFloorCounts[WobPriority];
    if ( !v57 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, WobPriority, 2uLL, 0LL);
    v73 = v57 - 1;
    *(_BYTE *)(PriorityFloorSummary + 824) = v73;
    if ( v73
      || (PriorityFloorSummary = CurrentThread->PriorityFloorSummary,
          LODWORD(PriorityFloorSummary) = PriorityFloorSummary ^ (1 << WobPriority),
          CurrentThread->PriorityFloorSummary = PriorityFloorSummary,
          (unsigned int)PriorityFloorSummary >= 1 << WobPriority)
      || CurrentThread->Priority > 31 )
    {
LABEL_246:
      v25 = v95.Next;
      CurrentThread->WobPriority = 32;
      CurrentThread->ThreadLock = 0LL;
      goto LABEL_59;
    }
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(WobPriority);
    CurrentThread = v94;
    BasePriority = v94->BasePriority;
    Interval = (PLARGE_INTEGER)(unsigned int)BasePriority;
    if ( IsEnabledNoReportingNoInline )
    {
      if ( BasePriority < 16 )
      {
        DecayBoost = 0;
        PriorityFloorSummary = BasePriority + (v94->PriorityDecrement & 0xFu);
        if ( (int)PriorityFloorSummary <= BasePriority )
          PriorityFloorSummary = (unsigned int)BasePriority;
        if ( v94->DecayBoost > 0 )
          DecayBoost = v94->DecayBoost;
        Interval = (PLARGE_INTEGER)(unsigned int)(PriorityFloorSummary + DecayBoost);
        if ( (int)Interval >= 16 )
          Interval = (PLARGE_INTEGER)15;
        v3 = (unsigned __int16)v94->PriorityDecrement >> 4;
        if ( (unsigned __int8)v3 > (int)Interval )
          Interval = (PLARGE_INTEGER)(unsigned __int8)v3;
      }
      v77 = v94->PriorityFloorSummary;
      if ( !v77 )
        goto LABEL_244;
      _BitScanReverse((unsigned int *)&v77, v77);
      v78 = (int)Interval < v77;
    }
    else
    {
      v3 = (unsigned int)BasePriority;
      if ( BasePriority < 16 )
      {
        v90 = BasePriority + (v94->PriorityDecrement & 0xF);
        if ( v90 <= (int)Interval )
          v90 = (int)Interval;
        v3 = (unsigned int)(v94->BasePriority + v94->DecayBoost);
        if ( (int)v3 <= v90 )
          v3 = (unsigned int)v90;
        PriorityFloorSummary = (unsigned __int16)v94->PriorityDecrement >> 4;
        if ( (unsigned __int8)PriorityFloorSummary > (int)v3 )
          v3 = (unsigned __int8)PriorityFloorSummary;
        if ( (int)v3 >= 16 && (*((_DWORD *)&v94->0 + 1) & 0x400000) == 0 )
          v3 = 15LL;
      }
      v77 = v94->PriorityFloorSummary;
      Interval = (PLARGE_INTEGER)(unsigned int)v3;
      if ( !v77 )
        goto LABEL_244;
      _BitScanReverse((unsigned int *)&v77, v77);
      v78 = (int)v3 < v77;
    }
    if ( v78 )
      Interval = (PLARGE_INTEGER)(unsigned int)v77;
    LODWORD(v93) = 0;
LABEL_244:
    if ( (int)Interval < v94->Priority )
    {
      KiSetPriorityThread(v94, &v95, Interval);
      CurrentThread = v94;
    }
    goto LABEL_246;
  }
LABEL_59:
  v26.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  v27 = v14 & 1;
  if ( (v26.Flags & 0x38) == 0 )
  {
    v53 = CurrentThread->WaitIrql;
    if ( v27 )
    {
      v59 = v95.Next;
      if ( v95.Next )
      {
        v95.Next = v95.Next->Next;
        do
        {
          KiDeferredReadySingleThread(v21, (ULONG_PTR)&v59[-27], &v95, 0LL);
          v59 = v95.Next;
          LOBYTE(v10) = v10 + 1;
          if ( v95.Next )
            v95.Next = v95.Next->Next;
          if ( (v10 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&v21->DeferredDispatchInterrupts);
        }
        while ( v59 );
      }
      KiFlushSoftwareInterruptBatch((char *)&v21->DeferredDispatchInterrupts);
      KiCheckForThreadDispatch(v21, (unsigned __int8)v53, v60, v61);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v53);
      __writecr8(v53);
    }
    goto LABEL_83;
  }
  if ( (v26.Flags & 0x18) == 0 )
  {
    v45 = 0;
    if ( v25 )
    {
      v95.Next = v25->Next;
      do
      {
        KiDeferredReadySingleThread(v21, (ULONG_PTR)&v25[-27], &v95, 0LL);
        v25 = v95.Next;
        ++v45;
        if ( v95.Next )
          v95.Next = v95.Next->Next;
        if ( (v45 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((char *)&v21->DeferredDispatchInterrupts);
      }
      while ( v25 );
    }
    TargetType = v21->DeferredDispatchInterrupts.TargetType;
    if ( TargetType )
    {
      if ( TargetType == 1 )
      {
        v47 = 31;
        v48 = KeGetCurrentPrcb();
        Level = v21->DeferredDispatchInterrupts.Level;
        SingleTargetIndex = v21->DeferredDispatchInterrupts.SingleTargetIndex;
        v97 = 6LL;
        ++v48->SynchCounters.IpiSendSoftwareInterruptCount;
        v99 = 0LL;
        if ( Level != 1 )
          v47 = 47;
        HalpInterruptSendIpi((unsigned int *)&v97, v47);
      }
      else
      {
        KiSendSoftwareInterruptAffinity(
          &v21->DeferredDispatchInterrupts.MultipleTargetAffinity,
          v21->DeferredDispatchInterrupts.Level);
      }
      if ( v21->DeferredDispatchInterrupts.TargetType == 2 )
      {
        *(_QWORD *)&v21->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = 2097153LL;
        memset_0(
          &v21->DeferredDispatchInterrupts.MultipleTargetAffinity.8,
          0,
          sizeof(v21->DeferredDispatchInterrupts.MultipleTargetAffinity.8));
      }
      v21->DeferredDispatchInterrupts.TargetType = 0;
      v21->DeferredDispatchInterrupts.SingleTargetIndex = 0xFFFF;
    }
    LOBYTE(PriorityFloorSummary) = 1;
    KiCheckForThreadDispatch(v21, PriorityFloorSummary, Interval, v3);
    KiDeliverApc(0, 0LL, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
    __writecr8(0LL);
    goto LABEL_83;
  }
  v93 = 0LL;
  if ( (v26.Flags & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
  StaticRescheduleContext = v21->StaticRescheduleContext;
  v29 = 0;
  v96 = StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiAcquirePrcbLocksForIsolationUnit(v21, 1LL, &v93);
  if ( !v21->NextThread )
  {
    KiStartRescheduleContext(StaticRescheduleContext, &v93, 0LL);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v21);
    RescheduleContextEntryForPrcb->___u5[0] |= 2u;
    AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
    Prcb = RescheduleContextEntryForPrcb->Prcb;
    RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
    RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
    IdleThread = Prcb->IdleThread;
    *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
    RescheduleContextEntryForPrcb->NewThread = IdleThread;
    if ( (AllCompareThreadStateFlags & 2) != 0 )
    {
      for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      {
        v63 = &StaticRescheduleContext->ProcessorCount + 40 * i;
        if ( v63 + 16 != (unsigned __int8 *)RescheduleContextEntryForPrcb )
        {
          v63[50] |= 2u;
          v64 = *((_QWORD *)v63 + 2);
          *((_QWORD *)v63 + 4) = *(_QWORD *)(v64 + 24);
          v63[48] = v63[48] & 0xC0 | 5;
          v65 = *(_QWORD *)(v64 + 24);
          v63[49] &= ~1u;
          *((_QWORD *)v63 + 5) = v65;
        }
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
    KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v95);
    v29 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, v21, 0, &v95);
  }
  KiReleasePrcbLocksForIsolationUnit(&v93);
  if ( !v29 )
    goto LABEL_82;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_81;
  do
  {
    v35 = StaticRescheduleContext->ProcessorEntries[v10].___u6[0];
    v36 = StaticRescheduleContext->ProcessorEntries[v10].Prcb;
    if ( (v35 & 0x10) != 0 )
    {
      KiAddProcessorToSoftwareInterruptBatch(
        &v21->DeferredDispatchInterrupts,
        StaticRescheduleContext->ProcessorEntries[v10].Prcb);
      goto LABEL_73;
    }
    if ( (v35 & 8) != 0 && v36->IdleHalt )
    {
      v37 = v21->DeferredDispatchInterrupts.TargetType;
      if ( !v37 )
      {
        v21->DeferredDispatchInterrupts.TargetType = 1;
        v21->DeferredDispatchInterrupts.SingleTargetIndex = v36->Number;
        goto LABEL_73;
      }
      if ( v37 == 1 )
      {
        v38 = v21->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( (_DWORD)v38 == v36->Number )
          goto LABEL_73;
        p_MultipleTargetAffinity = &v21->DeferredDispatchInterrupts.MultipleTargetAffinity;
        v21->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&v21->DeferredDispatchInterrupts.MultipleTargetAffinity, v38);
      }
      else
      {
        p_MultipleTargetAffinity = &v21->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      Group = v36->Group;
      GroupSetMember = v36->GroupSetMember;
      if ( p_MultipleTargetAffinity->Count > (unsigned __int16)Group )
        goto LABEL_99;
      if ( p_MultipleTargetAffinity->Size > (unsigned __int16)Group )
      {
        p_MultipleTargetAffinity->Count = Group + 1;
LABEL_99:
        p_MultipleTargetAffinity->Bitmap[Group] |= GroupSetMember;
      }
    }
LABEL_73:
    if ( (StaticRescheduleContext->ProcessorEntries[v10].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v10].NewThread, v36, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v10].___u6[0] & 4) != 0 )
    {
      if ( v36->SchedulerAssist )
      {
        if ( v21->SchedulerAssist )
        {
          if ( v21 != v36 )
          {
            v42 = *(_DWORD *)v36->SchedulerAssist;
            if ( (v42 & 0x100000) != 0
              || (*(_DWORD *)v36->SchedulerAssist & 0x40000) != 0
              && (unsigned __int8)v42 < StaticRescheduleContext->ProcessorEntries[v10].KickPriority )
            {
              v6 = HvlpVirtualProcessorsIdentityMapped == 0;
              v43 = v21->SchedulerAssist;
              v43[3] = 2;
              Number = v36->Number;
              if ( v6 )
              {
                StaticRescheduleContext = v96;
                LODWORD(Number) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
              }
              v43[2] = Number;
              if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(v36->Number, 2LL, v34);
              __writemsr(0x400000C2u, (unsigned int)Number);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v10].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v10].NewThread->KeReferenceCount);
    ++v10;
  }
  while ( v10 < StaticRescheduleContext->ProcessorCount );
  v23 = PerformanceCounter.LowPart;
LABEL_81:
  KiFlushSoftwareInterruptBatch((char *)&v21->DeferredDispatchInterrupts);
LABEL_82:
  KiProcessDeferredReadyList(v21, &v95, v94->WaitIrql);
LABEL_83:
  if ( !v100->QuadPart )
    return KeYieldExecution(0);
  return v23;
}
