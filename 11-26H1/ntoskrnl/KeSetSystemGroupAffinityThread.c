/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x14037BF70
 * Callers:
 *     MiSetIdealProcessorThread @ 0x14020453C (MiSetIdealProcessorThread.c)
 *     KiInterruptDispatchCommon @ 0x14030DED8 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x14030FAE0 (IopPassiveInterruptWorker.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140357CC0 (HalpAllocatePmcCounterSetEx.c)
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     KeSetSystemAffinityThreadEx @ 0x14037C170 (KeSetSystemAffinityThreadEx.c)
 *     KiAcquireInterruptConnectLock @ 0x14043081C (KiAcquireInterruptConnectLock.c)
 *     KiDisconnectInterruptCommon @ 0x140430EB4 (KiDisconnectInterruptCommon.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x14044A750 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x14046B110 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x14046B270 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x14046B4B0 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14046B680 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 *     PnpSetDeviceAffinityThread @ 0x14049B304 (PnpSetDeviceAffinityThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E0B10 (ExAllocateCacheAwarePushLock.c)
 *     PpmSetSimulatedIdle @ 0x1405004B8 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x140501B20 (PpmClearSimulatedIdle.c)
 *     MakeGdtReadOnly @ 0x14057897C (MakeGdtReadOnly.c)
 *     HalpFreePmcCounterSet @ 0x140582820 (HalpFreePmcCounterSet.c)
 *     HalpMcStaging @ 0x1405960D0 (HalpMcStaging.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059CF40 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x14059D090 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x1405A6A20 (Amd64InitializeUncoreProfiling.c)
 *     IopLiveDumpCorralProcessors @ 0x1405D1560 (IopLiveDumpCorralProcessors.c)
 *     KiDynamicProcessorInitialization @ 0x1405ED8E4 (KiDynamicProcessorInitialization.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405F9488 (KiSetSystemAffinityThreadToProcessor.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405FD0E8 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x140604C30 (PpmIdleInstallNewVetoList.c)
 *     PpmInstallFeedbackCounters @ 0x140605540 (PpmInstallFeedbackCounters.c)
 *     HalpLoadMicrocodeSerialized @ 0x140787C50 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140859FC8 (CmInitializeProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140AD17A0 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140BEFB88 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140BEFEA4 (HalpInitializeMce.c)
 *     PopEndMirroring @ 0x140C09F60 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     HalpCmciInit @ 0x140C0F0DC (HalpCmciInit.c)
 *     HalpMceInit @ 0x140C10328 (HalpMceInit.c)
 *     ViIsBTSSupported @ 0x140C37F1C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140C38048 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CF3188 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  _KAFFINITY_EX *v2; // r8
  __int64 Group; // rcx
  _GROUP_AFFINITY v6; // xmm6
  char v7; // si
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  __int64 v12; // r9
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  unsigned __int16 i; // cx
  unsigned __int64 v15; // rdx
  _GROUP_AFFINITY v16; // [rsp+30h] [rbp-20h]
  int v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  Group = Affinity->Group;
  v18 = 0LL;
  v6 = 0LL;
  if ( (unsigned __int16)Group < *(_WORD *)&stru_140FC11F0.WaitRegister.Flags
    && (Group = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * Group + 4), (Group & Affinity->Mask) != 0)
    && (Group = Affinity->Reserved[2],
        LOWORD(Group) = Affinity->Reserved[0] | Affinity->Reserved[1] | Group,
        !(_WORD)Group) )
  {
    v7 = 1;
    Affinity->Mask &= *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * Affinity->Group + 4);
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
  if ( v7 && (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
  {
    LOBYTE(v12) = 1;
    KiCpuPartitionCheckAffinitization(CurrentThread->Process, CurrentThread, CurrentThread->Affinity, v12);
  }
}
