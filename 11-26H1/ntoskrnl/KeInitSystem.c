/*
 * XREFs of KeInitSystem @ 0x140CC82B8
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x140263890 (KeExpandKernelStackAndCalloutEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x14048AD58 (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 *     KiDetectTsx @ 0x14052B7F8 (KiDetectTsx.c)
 *     KeInitializeCatRegisters @ 0x14052DCD8 (KeInitializeCatRegisters.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405532EC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KdEncodeDataBlock @ 0x1405E3774 (KdEncodeDataBlock.c)
 *     KeRelaxTimingConstraints @ 0x1405E8DE0 (KeRelaxTimingConstraints.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x1405EA234 (KiApplyDpcVerificationScaleSettings.c)
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1405EB4A0 (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     KiInitMachineDependent @ 0x1405F4994 (KiInitMachineDependent.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405F4B78 (KiInitializeIdealProcessorRebalancer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KiStartDpcThread @ 0x1407B98EC (KiStartDpcThread.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x1407BB738 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KeInitializeTimerTable @ 0x140B24A18 (KeInitializeTimerTable.c)
 *     KiInitializeProcessor @ 0x140BF3FD4 (KiInitializeProcessor.c)
 *     KeFreeInitializationCode @ 0x140C80CCC (KeFreeInitializationCode.c)
 *     KiComputeDispatchInterruptCost @ 0x140CC90C0 (KiComputeDispatchInterruptCost.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     KiInitDpcThresholds @ 0x140CC9C0C (KiInitDpcThresholds.c)
 *     KiInitializeVelocity @ 0x140CCA1CC (KiInitializeVelocity.c)
 *     KiRegisterTraceLoggingProvider @ 0x140CCA354 (KiRegisterTraceLoggingProvider.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140CCA3AC (KiInitSupervisorStateExtensionHost.c)
 *     KiInitializeReservedCpuSets @ 0x140CCB790 (KiInitializeReservedCpuSets.c)
 *     KiEpfInitialize @ 0x140CCB9E4 (KiEpfInitialize.c)
 *     KiIntSteerInit @ 0x140CCBB80 (KiIntSteerInit.c)
 *     KiInitDynamicTraceSupport @ 0x140CCBD70 (KiInitDynamicTraceSupport.c)
 *     MmFreeLoaderBlock @ 0x140CF220C (MmFreeLoaderBlock.c)
 *     KiRcuSystemInitialize @ 0x140D09E14 (KiRcuSystemInitialize.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 v7; // rcx
  ULONG v8; // r15d
  __int64 v9; // rdx
  BOOL v10; // ecx
  unsigned int v11; // eax
  ULONG i; // edi
  __int64 v13; // r14
  __int64 Prcb; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // edx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  NTSTATUS v24; // eax
  int v25; // r8d
  unsigned int j; // r11d
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // r11d
  __int64 v30; // r8
  __int64 v31; // [rsp+38h] [rbp-49h] BYREF
  __int64 v32; // [rsp+40h] [rbp-41h] BYREF
  __int128 v33; // [rsp+48h] [rbp-39h] BYREF
  __int16 v34; // [rsp+58h] [rbp-29h]
  int v35; // [rsp+5Ah] [rbp-27h]
  __int16 v36; // [rsp+5Eh] [rbp-23h]
  struct _EVENT_DATA_DESCRIPTOR v37[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 *v38; // [rsp+88h] [rbp+7h]
  __int64 v39; // [rsp+90h] [rbp+Fh]
  __int64 *v40; // [rsp+98h] [rbp+17h]
  __int64 v41; // [rsp+A0h] [rbp+1Fh]
  __int128 *v42; // [rsp+A8h] [rbp+27h]
  __int64 v43; // [rsp+B0h] [rbp+2Fh]

  switch ( a1 )
  {
    case 0:
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (unsigned int)(*(_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[128] - 1) <= 0xFFFE )
      {
        KiMaximumSubNodeSize = *(_WORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[128];
        if ( *(unsigned __int16 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[128] > (unsigned int)KiMaximumGroupSize )
          KiMaximumSubNodeSize = KiMaximumGroupSize;
      }
      if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (CurrentPrcb->MsrIa32TsxCtrl & 3) != 3 )
      {
        v2 = CurrentPrcb->MsrIa32TsxCtrl | 3;
        CurrentPrcb->MsrIa32TsxCtrl = v2;
        __writemsr(0x122u, v2);
      }
      KiTsxSupported = KiDetectTsx();
      KiRcuSystemInitialize(CurrentPrcb);
      v3 = 0;
      if ( !CurrentPrcb->SchedulerAssist )
        goto LABEL_14;
      if ( KiSchedulerAssistThreadFlagOverride == 1 )
      {
        KiSchedulerAssistThreadFlagEnabled = 1;
LABEL_15:
        _interlockedbittestandset(&CurrentPrcb->IdleThread->Header.Lock, 0x16u);
        goto LABEL_16;
      }
      v3 = 1;
      if ( KiSchedulerAssistThreadFlagOverride == 2 )
      {
        KiSchedulerAssistThreadFlagEnabled = 0;
      }
      else
      {
LABEL_14:
        KiSchedulerAssistThreadFlagEnabled = v3;
        if ( v3 )
          goto LABEL_15;
      }
LABEL_16:
      if ( (unsigned int)(KiVpThreadSystemWorkPriority - 1) > 0x1E )
        KiVpThreadSystemWorkPriority = 1;
      if ( CurrentPrcb->SchedulerAssist )
        KiIrqlFlags |= 1u;
      KeInitializeCatRegisters();
      v5 = KeInitializeTimerTable((__int64)CurrentPrcb, v4);
      if ( v5 < 0 )
        KeBugCheckEx(0x31u, v5, 1uLL, 0LL, 0LL);
      KiInitializeVelocity();
      return 1;
    case 1:
      KiInitDynamicTraceSupport();
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      v7 = (unsigned int)KeMaximumIncrement;
      v8 = ActiveProcessorCount;
      *(_QWORD *)&KiDpcWatchdogConfigurationLock.Header.Lock = 0LL;
      v9 = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / (unsigned int)KeMaximumIncrement - 1)
         % ActiveProcessorCount;
      KiClockKeepAliveCycle = (ActiveProcessorCount
                             + (KeMaximumIncrement + 29999999) / (unsigned int)KeMaximumIncrement
                             - 1)
                            / ActiveProcessorCount;
      if ( KiForceBugcheckForDpcWatchdog || !HviIsAnyHypervisorPresent() )
      {
LABEL_32:
        KiInitDpcThresholds(v7, v9);
        if ( ViVerifierEnabled )
        {
          v11 = KeVerifierDpcScalingFactor;
          if ( !KeVerifierDpcScalingFactor )
          {
            v11 = 1;
            KeVerifierDpcScalingFactor = 1;
          }
          if ( v11 > 0x64 )
            KeVerifierDpcScalingFactor = 100;
          KiApplyDpcVerificationScaleSettings();
        }
        for ( i = 0; i < v8; ++i )
        {
          v13 = KiProcessorBlock[i];
          KiInitializeProcessor(v13);
          if ( KeThreadDpcEnable && (int)KiStartDpcThread(v13) < 0 )
            return 0;
        }
        if ( !(unsigned __int8)KiComputeNumaCosts() || (int)KiComputeDispatchInterruptCost() < 0 )
          return 0;
        *((_QWORD *)&v33 + 1) = *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140FC01F0.116 + 4);
        *(_QWORD *)&v33 = &stru_140FC01F0.WaitRegister;
        v35 = 0;
        v36 = 0;
        LODWORD(v31) = 0;
        v34 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v31, (unsigned __int16 **)&v33) )
        {
          Prcb = KeGetPrcb(v31);
          if ( (int)KiInitializeSingleDpcRuntimeHistoryHashTable(Prcb) < 0 )
            return 0;
        }
        if ( (_BYTE)KiKernelCetEnabled )
        {
          LOBYTE(KiKernelCetLogging) = 1;
          dword_140FC1318 = 10;
        }
        SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x670009u);
        KiIntSteerInit(1LL);
        KiInitSupervisorStateExtensionHost();
        if ( !KiInitMachineDependent() )
          return 0;
        v16 = *(unsigned int *)(KiProcessorBlock[0] + 68);
        v17 = v16 * (unsigned __int64)(unsigned int)KeMaximumIncrement / 0xA;
        KiShortExecutionCycles = v17 / 0xF0;
        v18 = v17 / 3;
        KiCyclesPerClockQuantum = v17 / 3;
        KiDirectQuantumTarget = v17 / 3;
        KiLockQuantumTarget = 3 * (v17 / 3);
        if ( (KiVelocityFlags & 0x40000) != 0 )
        {
          KiCyclesPerClockQuantum = (unsigned int)v18 / 6;
          KiLockQuantumTarget = 2 * ((unsigned int)v18 / 6);
        }
        v19 = KiLongDpcRuntimeThreshold;
        _BitScanReverse64(&v20, 6000000 * v16);
        KiFavoredCoreCycleTimeBits = v20;
        if ( (unsigned int)KiLongDpcRuntimeThreshold < 0x32 )
        {
          v19 = 50;
          KiLongDpcRuntimeThreshold = 50;
        }
        if ( (unsigned int)KiLongDpcQueueThreshold < 2 )
          KiLongDpcQueueThreshold = 2;
        v21 = *(unsigned int *)(KiProcessorBlock[0] + 68);
        KiLongDpcRuntimeThresholdCycles = v19 * *(_DWORD *)(KiProcessorBlock[0] + 68);
        qword_140FBE3F8 = (unsigned int)dword_140FBE3F4 * v21;
        v22 = dword_140FBE1F8;
        qword_140FBE408 = (unsigned int)dword_140FBE400 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 68);
        if ( (unsigned int)dword_140FBE1F8 < 0x1F4 )
        {
          v22 = 500;
          dword_140FBE1F8 = 500;
        }
        if ( v22 > 0x989680 )
          dword_140FBE1F8 = 10000000;
        v23 = dword_140FBE1F4;
        if ( (unsigned int)dword_140FBE1F4 < 0x3E8 )
        {
          v23 = 1000;
          dword_140FBE1F4 = 1000;
        }
        if ( v23 > 0x7270E00 )
          dword_140FBE1F4 = 120000000;
        KdEncodeDataBlock();
        v24 = KeExpandKernelStackAndCalloutEx(KiVerifyScopesExecute, 0LL, 0xC000uLL, 1u, 0LL);
        if ( v24 < 0 )
          KeBugCheckEx(0x32u, v24, 0x5356694BuLL, 0LL, 0LL);
        KiInitializeIdealProcessorRebalancer();
        *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[124] = 268288;
        *(_DWORD *)KsepShimDbLock.PriorityFloorCounts = 275;
        *(_QWORD *)&KsepShimDbLock.PriorityFloorCounts[24] = KiPristineTriageDumpAllocationWorker;
        *(_QWORD *)&KsepShimDbLock.PriorityFloorSummary = 0LL;
        KsepShimDbLock.GlobalForegroundListEntry.Flink = 0LL;
        *(_QWORD *)&KsepShimDbLock.PriorityFloorCounts[16] = 0LL;
        KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(KiSystemCpuPartition + 40));
        return 1;
      }
      if ( HvlHypervisorConnected )
      {
        v10 = (HvlEnlightenments & 0x20) != 0;
        if ( (HvlEnlightenments & 0x20) == 0 )
        {
LABEL_31:
          KeRelaxTimingConstraints(v10);
          goto LABEL_32;
        }
      }
      else
      {
        v10 = 1;
      }
      KeDpcWatchdogPeriodMs = 0;
      KeDpcTimeoutMs = 0;
      KeDpcSoftTimeoutMs = 0;
      KeDpcCumulativeSoftTimeoutMs = 0;
      KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
      KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      goto LABEL_31;
    case 2:
      KiRegisterTraceLoggingProvider();
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06F58, 0LL, 0LL);
      if ( KiDisablePointerParameterAlignmentValidation
        && (unsigned int)dword_140E06F90 > 5
        && tlgKeywordOn((__int64)&dword_140E06F90, 0x400000000000LL) )
      {
        LODWORD(v31) = v25;
        v39 = 4LL;
        v38 = &v31;
        v32 = 0x1000000LL;
        v40 = &v32;
        v41 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06F90,
          (unsigned __int8 *)&byte_14005AD4F,
          0LL,
          0LL,
          4u,
          v37);
      }
      KiIntSteerInit(2LL);
      for ( j = 0; j < (unsigned int)KeNumberProcessors_0; j = v29 + 1 )
      {
        v33 = 0LL;
        v27 = KiProcessorBlock[j];
        v28 = *(_QWORD *)(v27 + 36528);
        KeGetTopologySiblingGroupAffinityForProcessor(v27, 5, &v33);
        if ( v28 != (_QWORD)v33 )
        {
          if ( (unsigned int)dword_140E06F90 > 5 && tlgKeywordOn((__int64)&dword_140E06F90, 0x400000000000LL) )
          {
            v32 = v30;
            v38 = &v32;
            v39 = 8LL;
            v40 = &v31;
            v31 = v28;
            v42 = &v33;
            v41 = 8LL;
            *(_QWORD *)&v33 = 0x1000000LL;
            v43 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06F90,
              (unsigned __int8 *)byte_14005AD01,
              0LL,
              0LL,
              5u,
              v37);
          }
          return 1;
        }
      }
      break;
    case 3:
      KiInitializeReservedCpuSets();
      break;
    default:
      ExAcquireFastMutexUnsafe((PFAST_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
      MmFreeLoaderBlock();
      KeLoaderBlock_0 = 0LL;
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
      KiInitializeNormalPriorityAntiStarvationPolicies();
      if ( KiForceBugcheckForDpcWatchdog || !HviIsAnyHypervisorPresent() )
        KeEnableWatchdogTimeout = 1;
      KiEpfInitialize();
      KeFreeInitializationCode();
      KiDiscardableInitState = -336860181;
      break;
  }
  return 1;
}
