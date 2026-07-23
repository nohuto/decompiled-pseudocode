/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14037E240
 * Callers:
 *     MiSetIdealProcessorThread @ 0x14020453C (MiSetIdealProcessorThread.c)
 *     KiInterruptDispatchCommon @ 0x14030DED8 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x14030FAE0 (IopPassiveInterruptWorker.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140357CC0 (HalpAllocatePmcCounterSetEx.c)
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     HalpTimerStallExecutionProcessor @ 0x14037D7D0 (HalpTimerStallExecutionProcessor.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 *     KiDisconnectInterruptCommon @ 0x140430EB4 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x140431660 (KiConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x14044A750 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x14046B110 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x14046B270 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x14046B4B0 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14046B680 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14049B254 (PnpSendIrp.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1404A4FE0 (KeRevertToUserAffinityThreadEx.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E0B10 (ExAllocateCacheAwarePushLock.c)
 *     PpmSetSimulatedIdle @ 0x1405004B8 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x140501B20 (PpmClearSimulatedIdle.c)
 *     MakeGdtReadOnly @ 0x14057897C (MakeGdtReadOnly.c)
 *     HalpFreePmcCounterSet @ 0x140582820 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059CF40 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x14059D090 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x1405A6A20 (Amd64InitializeUncoreProfiling.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405D53FC (IopLiveDumpUncorralProcessors.c)
 *     KiDeregisterNmiSxCallback @ 0x1405E7918 (KiDeregisterNmiSxCallback.c)
 *     KiDynamicProcessorInitialization @ 0x1405ED8E4 (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x1405EE960 (KeRevertToUserAffinityThread.c)
 *     KiInitMachineDependent @ 0x1405F7354 (KiInitMachineDependent.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405FD0E8 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x140604C30 (PpmIdleInstallNewVetoList.c)
 *     PpmInstallFeedbackCounters @ 0x140605540 (PpmInstallFeedbackCounters.c)
 *     HalpLoadMicrocodeSerialized @ 0x140787C50 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140859FC8 (CmInitializeProcessor.c)
 *     PnpCallAddDevice @ 0x14096F278 (PnpCallAddDevice.c)
 *     HalpCmcWorkerRoutine @ 0x140AD17A0 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140BEFB88 (HalpHandlePreviousMcaErrors.c)
 *     HalpCmciInit @ 0x140C0F0DC (HalpCmciInit.c)
 *     HalpMceInit @ 0x140C10328 (HalpMceInit.c)
 *     ViIsBTSSupported @ 0x140C37F1C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140C38048 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CF3188 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
  if ( PreviousAffinity->Group < *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
  {
    v11 = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * PreviousAffinity->Group + 4);
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
