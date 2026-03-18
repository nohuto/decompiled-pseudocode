/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x14037A1C0
 * Callers:
 *     MiSetIdealProcessorThread @ 0x14020445C (MiSetIdealProcessorThread.c)
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x1402C4E20 (IopPassiveInterruptWorker.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140355F20 (HalpAllocatePmcCounterSetEx.c)
 *     ExpUpdateTimerConfiguration @ 0x140379D60 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x140379F74 (KeGenericProcessorCallback.c)
 *     KeSetSystemAffinityThreadEx @ 0x14037A3C0 (KeSetSystemAffinityThreadEx.c)
 *     KiAcquireInterruptConnectLock @ 0x14042372C (KiAcquireInterruptConnectLock.c)
 *     KiDisconnectInterruptCommon @ 0x140423DC4 (KiDisconnectInterruptCommon.c)
 *     PpmSetSimulatedIdle @ 0x14042A28C (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x14042A3B8 (PpmClearSimulatedIdle.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140452620 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140471990 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140471AF0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140471D30 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140471F00 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404997AC (ExpSaPageGroupDescriptorAllocate.c)
 *     PnpSetDeviceAffinityThread @ 0x1404A17D4 (PnpSetDeviceAffinityThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E7750 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1405764CC (MakeGdtReadOnly.c)
 *     HalpFreePmcCounterSet @ 0x140580300 (HalpFreePmcCounterSet.c)
 *     HalpMcStaging @ 0x140593950 (HalpMcStaging.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059A7C0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x14059A910 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x1405A4210 (Amd64InitializeUncoreProfiling.c)
 *     IopLiveDumpCorralProcessors @ 0x1405CED50 (IopLiveDumpCorralProcessors.c)
 *     KiDynamicProcessorInitialization @ 0x1405EAF74 (KiDynamicProcessorInitialization.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405F6AC8 (KiSetSystemAffinityThreadToProcessor.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405FA6C8 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x140602180 (PpmIdleInstallNewVetoList.c)
 *     PpmInstallFeedbackCounters @ 0x140602A90 (PpmInstallFeedbackCounters.c)
 *     HalpLoadMicrocodeSerialized @ 0x140785120 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140853CB8 (CmInitializeProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140AD4340 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140BE9B88 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140BE9EA4 (HalpInitializeMce.c)
 *     PopEndMirroring @ 0x140C03D50 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     HalpCmciInit @ 0x140C08ECC (HalpCmciInit.c)
 *     HalpMceInit @ 0x140C0A118 (HalpMceInit.c)
 *     ViIsBTSSupported @ 0x140C31F0C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140C32038 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CECE84 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x14037C620 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F416C (KiCpuPartitionCheckAffinitization.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  _KAFFINITY_EX *v2; // r8
  __int64 Group; // rcx
  struct _GROUP_AFFINITY v6; // xmm6
  char v7; // si
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  __int64 v12; // r9
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  unsigned __int16 i; // cx
  unsigned __int64 v15; // rdx
  struct _GROUP_AFFINITY v16; // [rsp+30h] [rbp-20h]
  int v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  Group = Affinity->Group;
  v18 = 0LL;
  v6 = 0LL;
  if ( (unsigned __int16)Group < *(_WORD *)&stru_140FC01F0.WaitRegister.Flags
    && (Group = *(__int64 *)((char *)&stru_140FC01F0.116 + 8 * Group + 4), (Group & Affinity->Mask) != 0)
    && (Group = Affinity->Reserved[2],
        LOWORD(Group) = Affinity->Reserved[0] | Affinity->Reserved[1] | Group,
        !(_WORD)Group) )
  {
    v7 = 1;
    Affinity->Mask &= *(_QWORD *)((char *)&stru_140FC01F0.116 + 8 * Affinity->Group + 4);
  }
  else
  {
    v7 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Group) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Group, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
    goto LABEL_15;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( !Next )
  {
    v2 = CurrentThread->Affinity;
    for ( i = 0; i < v2->Count; ++i )
    {
      v15 = v2->Bitmap[i];
      if ( v15 )
        goto LABEL_28;
    }
    goto LABEL_15;
  }
  if ( BYTE2(Next[2].Next) )
  {
    if ( BYTE2(Next[2].Next) == 1 )
    {
      v2 = CurrentThread->Affinity;
      for ( i = 0; i < v2->Count; ++i )
      {
        v15 = v2->Bitmap[i];
        if ( v15 )
        {
LABEL_28:
          *(_QWORD *)&v16.Group = i;
          v16.Mask = v15;
          v6 = v16;
          goto LABEL_15;
        }
      }
      goto LABEL_15;
    }
    if ( BYTE2(Next[2].Next) != 2 )
      goto LABEL_15;
  }
  if ( v7 )
  {
    BYTE2(Next[2].Next) = 1;
    v18 = 0LL;
    goto LABEL_16;
  }
LABEL_15:
  v18 = 0LL;
  if ( v7 )
  {
LABEL_16:
    KiSetSystemAffinityThread(CurrentThread, CurrentPrcb, 0LL, Affinity, 2048, &v18);
    goto LABEL_17;
  }
  CurrentThread->ThreadLock = 0LL;
LABEL_17:
  LOBYTE(v2) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v18, v2);
  if ( PreviousAffinity )
    *PreviousAffinity = v6;
  KeGetCurrentIrql();
  if ( v7 && (WORD2(xmmword_140FBFC10) & 0x200) != 0 )
  {
    LOBYTE(v12) = 1;
    KiCpuPartitionCheckAffinitization(CurrentThread->Process, CurrentThread, CurrentThread->Affinity, v12);
  }
}
