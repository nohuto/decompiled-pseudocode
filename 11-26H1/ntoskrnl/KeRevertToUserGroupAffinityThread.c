/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14037C490
 * Callers:
 *     MiSetIdealProcessorThread @ 0x14020445C (MiSetIdealProcessorThread.c)
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x1402C4E20 (IopPassiveInterruptWorker.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140355F20 (HalpAllocatePmcCounterSetEx.c)
 *     ExpUpdateTimerConfiguration @ 0x140379D60 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x140379F74 (KeGenericProcessorCallback.c)
 *     HalpTimerStallExecutionProcessor @ 0x14037BA20 (HalpTimerStallExecutionProcessor.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x1403F5680 (ExpWorkerThread.c)
 *     KiDisconnectInterruptCommon @ 0x140423DC4 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x140424570 (KiConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140424930 (KeMaskInterrupt.c)
 *     PpmSetSimulatedIdle @ 0x14042A28C (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x14042A3B8 (PpmClearSimulatedIdle.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140452620 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140471990 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140471AF0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140471D30 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140471F00 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404997AC (ExpSaPageGroupDescriptorAllocate.c)
 *     PnpGetRelatedTargetDevice @ 0x1404A15E4 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x1404A1724 (PnpSendIrp.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1404AB950 (KeRevertToUserAffinityThreadEx.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E7750 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1405764CC (MakeGdtReadOnly.c)
 *     HalpFreePmcCounterSet @ 0x140580300 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059A7C0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x14059A910 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x1405A4210 (Amd64InitializeUncoreProfiling.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405D2C0C (IopLiveDumpUncorralProcessors.c)
 *     KiDeregisterNmiSxCallback @ 0x1405E4FA8 (KiDeregisterNmiSxCallback.c)
 *     KiDynamicProcessorInitialization @ 0x1405EAF74 (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x1405EBFF0 (KeRevertToUserAffinityThread.c)
 *     KiInitMachineDependent @ 0x1405F4994 (KiInitMachineDependent.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405FA6C8 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x140602180 (PpmIdleInstallNewVetoList.c)
 *     PpmInstallFeedbackCounters @ 0x140602A90 (PpmInstallFeedbackCounters.c)
 *     HalpLoadMicrocodeSerialized @ 0x140785120 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140853CB8 (CmInitializeProcessor.c)
 *     PnpCallAddDevice @ 0x14091480C (PnpCallAddDevice.c)
 *     HalpCmcWorkerRoutine @ 0x140AD4340 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140BE9B88 (HalpHandlePreviousMcaErrors.c)
 *     HalpCmciInit @ 0x140C08ECC (HalpCmciInit.c)
 *     HalpMceInit @ 0x140C0A118 (HalpMceInit.c)
 *     ViIsBTSSupported @ 0x140C31F0C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140C32038 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CECE84 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x14037C620 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  _KAFFINITY_EX *UserAffinity; // rbp
  PGROUP_AFFINITY v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int UserIdealProcessor; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  bool v12; // zf
  int v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  UserAffinity = 0LL;
  v14 = 0LL;
  v2 = 0LL;
  KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) == 0 )
    return;
  v5 = PreviousAffinity->Reserved[2];
  LOWORD(v5) = PreviousAffinity->Reserved[0] | PreviousAffinity->Reserved[1] | v5;
  if ( (_WORD)v5 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !PreviousAffinity->Mask )
  {
    Next = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( Next )
    {
      UserAffinity = (_KAFFINITY_EX *)Next[3].Next;
      BYTE2(Next[2].Next) = BYTE3(Next[2].Next) & 2;
    }
    goto LABEL_10;
  }
  if ( PreviousAffinity->Group < *(_WORD *)&stru_140FC01F0.WaitRegister.Flags )
  {
    v11 = *(__int64 *)((char *)&stru_140FC01F0.116 + 8 * PreviousAffinity->Group + 4);
    v12 = (v11 & PreviousAffinity->Mask) == 0;
    PreviousAffinity->Mask &= v11;
    if ( !v12 )
    {
      v2 = PreviousAffinity;
LABEL_10:
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( CurrentThread->ThreadLock );
      }
      if ( UserAffinity || v2 )
      {
        UserIdealProcessor = 2048;
      }
      else
      {
        UserAffinity = CurrentThread->UserAffinity;
        UserIdealProcessor = CurrentThread->UserIdealProcessor;
        CurrentThread->MiscFlags &= ~8u;
      }
      v14 = 0LL;
      KiSetSystemAffinityThread(CurrentThread, CurrentPrcb, UserAffinity, v2, UserIdealProcessor, &v14);
      LOBYTE(v10) = CurrentIrql;
      KiProcessDeferredReadyList(CurrentPrcb, &v14, v10);
      return;
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
