/*
 * XREFs of KiInitializeBootStructures @ 0x140BF5890
 * Callers:
 *     KiSystemStartup @ 0x140BE9640 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KiDetectTsx @ 0x14052B7F8 (KiDetectTsx.c)
 *     KiSaveInitialProcessorControlState @ 0x140533BE0 (KiSaveInitialProcessorControlState.c)
 *     strstr @ 0x140535B20 (strstr.c)
 *     atoi @ 0x140535D60 (atoi.c)
 *     ExInitializeBootStructures @ 0x140576458 (ExInitializeBootStructures.c)
 *     HalInitializeProcessor @ 0x140578450 (HalInitializeProcessor.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     KiInitializeGlobalState @ 0x1405EB47C (KiInitializeGlobalState.c)
 *     KiConfigureInitialNodes @ 0x1405EF678 (KiConfigureInitialNodes.c)
 *     KiDetermineImportOptimizationEnablement @ 0x1405F201C (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405F2064 (KiDetermineRetpolineEnablement.c)
 *     KiGetProcessorSignature @ 0x1405F6C6C (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405F6C84 (KiSetProcessorSignature.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KiInitPrcb @ 0x140BF3C24 (KiInitPrcb.c)
 *     KiInitializeIdt @ 0x140BF5F9C (KiInitializeIdt.c)
 *     KiSetFeatureBits @ 0x140BF74E8 (KiSetFeatureBits.c)
 *     KiEnableKvaShadowing @ 0x140BF8180 (KiEnableKvaShadowing.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 *     MmInitSystem @ 0x140C7FD84 (MmInitSystem.c)
 *     InitializeBuildStrings @ 0x140CAB79C (InitializeBuildStrings.c)
 *     HvlEnableVsmCalls @ 0x140CB972C (HvlEnableVsmCalls.c)
 *     InbvDriverInitialize @ 0x140CBA030 (InbvDriverInitialize.c)
 *     KiInitializeNxSupportDiscard @ 0x140CCB288 (KiInitializeNxSupportDiscard.c)
 *     ExRngInitializeSystem @ 0x140CE6E20 (ExRngInitializeSystem.c)
 *     CmInitBootFeatureConfigurations @ 0x140CE8874 (CmInitBootFeatureConfigurations.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  _KPROCESS **v2; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // r12
  _KTHREAD **v5; // rbx
  _KSHARED_READY_QUEUE **p_LocalSharedReadyQueue; // r11
  __int64 Number; // rbp
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _KTHREAD *v15; // rcx
  __int64 v16; // rax
  _KIDTENTRY64 *IdtBase; // r15
  int ProcessorSignature; // r8d
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  const char *v22; // rcx
  char *v23; // rax
  char v24; // cl
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 (__fastcall *v27)(); // rbx
  __int64 (__fastcall *v28)(); // rsi
  int v29; // ecx
  unsigned __int64 v30; // rdx
  struct _KPRCB *v31; // rbx

  Pcr = KeGetPcr();
  v2 = (_KPROCESS **)(a1 + 144);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (_QWORD *)(a1 + 128);
  v5 = (_KTHREAD **)(a1 + 152);
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  p_LocalSharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    KiInitializeGlobalState();
    InitializeBuildStrings(*(_QWORD *)(v9 + 240));
    v10 = *(_QWORD *)(a1 + 240);
    v11 = *(unsigned int *)(a1 + 160);
    KiFeatureSettings = *(_DWORD *)(v10 + 3492);
    KiFeatureSimulations = (*(_DWORD *)(v10 + 132) >> 21) & 0x3F;
    *v2 = (_KPROCESS *)&unk_140FC8F40;
    *v5 = (_KTHREAD *)&unk_140FCA140;
    LODWORD(KeKernelStackSize) = v11;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3860LL);
    KeKernelLargeStackCommit = v11;
    KeDpcStackSize = v11;
    LODWORD(KeExceptionStackSize) = v11;
    LODWORD(KeIsrStackSize) = v11;
    LODWORD(KeIstStackSize) = v11;
    KeKernelLargeStackSize = v12;
    v13 = v11 + 4096 + *v4;
    LODWORD(KeMaximumKernelStackExpansionSize) = v12 - 2048;
    CurrentPrcb->IsrStack = (void *)v13;
    v14 = (_QWORD *)(v13 + (unsigned int)KeExceptionStackSize + 4016LL);
    v14[5] = &KiExceptionDispatchOnExceptionStackContinue;
    *p_LocalSharedReadyQueue = (_KSHARED_READY_QUEUE *)&KiInitialSharedReadyQueue;
    CurrentPrcb->ExceptionStack = v14;
    CurrentPrcb->GroupSetMember = 1LL;
  }
  CurrentPrcb->SharedReadyQueue = *p_LocalSharedReadyQueue;
  if ( !(_DWORD)Number )
    CurrentPrcb->StaticRescheduleContext = (_KI_RESCHEDULE_CONTEXT *)&KiInitialStaticRescheduleContext;
  v15 = *v5;
  CurrentPrcb->CurrentThread = *v5;
  CurrentPrcb->IdleThread = v15;
  CurrentPrcb->NextThread = 0LL;
  v15->ApcState.Process = *v2;
  v15->ApcState.ApcListHead[0].Blink = v15->ApcState.ApcListHead;
  v15->ApcState.ApcListHead[0].Flink = v15->ApcState.ApcListHead;
  if ( !(_DWORD)Number )
  {
    CmInitBootFeatureConfigurations(a1);
    KiConfigureInitialNodes((__int64)CurrentPrcb);
  }
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v16 = *v4 - 80LL;
  *(_QWORD *)(v16 + 40) = &KiPlatformSwapStacksAndCallReturn;
  CurrentPrcb->DpcStack = (void *)v16;
  if ( !CurrentPrcb->Context )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = KiGetProcessorSignature();
  CurrentPrcb->CpuID = 1;
  CurrentPrcb->CpuType = 0;
  CurrentPrcb->CpuStep = 0;
  if ( !(_DWORD)Number )
  {
    KiSetProcessorSignature((__int64)CurrentPrcb, ProcessorSignature);
    IdtBase[263].Alignment = (unsigned __int64)Pcr;
    HvlEnableVsmCalls(a1);
    ExInitializeBootStructures(a1);
    ExRngInitializeSystem();
    KiDetermineImportOptimizationEnablement(a1);
    KiDetermineRetpolineEnablement(a1);
    MmInitSystem(0xFFFFFFFFLL, a1);
    v19 = a1 + 240;
    v20 = *(_QWORD *)(a1 + 240);
    v21 = *(_DWORD *)(v20 + 132);
    if ( (v21 & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (*(_BYTE *)(v20 + 3856) & 4) != 0 && (v21 & 0x100) == 0 )
    {
      if ( (KeFeatureBits2 & 0xC000000000LL) == 0xC000000000LL )
      {
        KiTrapFeatures |= 2uLL;
        v19 = a1 + 240;
        KiFredEnabled = 1;
      }
      if ( (KeFeatureBits2 & 0x8000000000LL) != 0 )
        KiTrapFeatures |= 4uLL;
    }
    if ( !KiFredEnabled && (*(_DWORD *)(*(_QWORD *)v19 + 132LL) & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(-1, (_QWORD *)a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v22 = *(const char **)(a1 + 216);
    if ( v22 )
    {
      v23 = strstr(v22, "GROUPSIZE");
      if ( v23 )
      {
        while ( 1 )
        {
          v24 = *v23;
          if ( !*v23 || v24 == 32 || (unsigned __int8)(v24 - 48) <= 9u )
            break;
          ++v23;
        }
        v25 = atoi(v23);
        LODWORD(KiMaximumGroupSize) = v25;
        if ( !v25 || v25 > 0x40 )
          LODWORD(KiMaximumGroupSize) = 64;
      }
    }
    if ( (unsigned __int16)KiMaximumSubNodeSize > (unsigned int)KiMaximumGroupSize )
      KiMaximumSubNodeSize = KiMaximumGroupSize;
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard();
  HalInitializeProcessor(Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v26 = CurrentPrcb->Number;
  v27 = KiSystemCall32;
  v28 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !v26 )
  {
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763], 0LL);
    v26 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v27 = KiSystemCall32Shadow;
    v28 = KiSystemCall64Shadow;
  }
  if ( !v26 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v29 = KiDebugTrapIndex;
    *(_QWORD *)&SshpBlockerCollections.PriorityFloorCounts[8] = KiDebugTraps;
    *(_QWORD *)&SshpBlockerCollections.PriorityFloorCounts[16] = 64LL;
    KiDebugTraps[KiDebugTrapIndex] = v28;
    KiDebugTraps[++v29] = v27;
    KiDebugTrapIndex = v29 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v27);
  __writemsr(0xC0000082, (unsigned __int64)v28);
  v30 = 18176LL;
  if ( KeSmapEnabled )
    v30 = 280320LL;
  __writemsr(0xC0000084, v30);
  KiInitPrcb((__int64)CurrentPrcb, Number);
  v31 = KeGetCurrentPrcb();
  if ( !v31->Number )
  {
    ExSaPageGroupDescriptorArrayLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
    ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
    ExInitializeSystemLookasideList((unsigned int)&stru_140E28440.ReadOperationCount, 512, 1264, 1717723987, 32);
  }
  v31->PPLookasideList[8].L = (_GENERAL_LOOKASIDE *)&stru_140E28440.ReadOperationCount;
  v31->PPLookasideList[8].P = (_GENERAL_LOOKASIDE *)&stru_140E28440.ReadOperationCount;
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0 = 1;
    *(_QWORD *)&stru_140FC01F0.WaitRegister.Flags = 2097153LL;
    memset_0((char *)&stru_140FC01F0.116 + 4, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&stru_140FC01F0.WaitRegister.Flags, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
