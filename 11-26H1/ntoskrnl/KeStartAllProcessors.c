/*
 * XREFs of KeStartAllProcessors @ 0x140CCEBBC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KiRcuProcessorInitialize @ 0x14050CA2C (KiRcuProcessorInitialize.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalStartNextProcessor @ 0x140582ED0 (HalStartNextProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateProcessorLookupStructures @ 0x1405EC764 (KiAllocateProcessorLookupStructures.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405EC84C (KiAllocateProcessorSchedulerStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405ECB30 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405ED1CC (KiCompleteBootProcessorContextInitialization.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405ED2F0 (KiComputeEstimatedMaximumProcessors.c)
 *     KiFreeProcessorSchedulerStructures @ 0x1405EDBC0 (KiFreeProcessorSchedulerStructures.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405EDD74 (KiFreeProcessorStateInitializationParameters.c)
 *     KiQueryProcessorNode @ 0x1405F25AC (KiQueryProcessorNode.c)
 *     ExDeletePoolTagTable @ 0x1406CFB68 (ExDeletePoolTagTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvlDeleteProcessor @ 0x140794344 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x1407BE390 (KiInitializeProcessorState.c)
 *     EtwDeleteProcessor @ 0x14082A8D4 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x14082AAD4 (EtwInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14083DA48 (ExCreatePoolTagTable.c)
 *     MmDeleteProcessor @ 0x14086AAF8 (MmDeleteProcessor.c)
 *     KeInitializeTimerTable @ 0x140B26EB8 (KeInitializeTimerTable.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 *     KiUpdateProcessorCount @ 0x140BF9458 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140BF9A10 (KiConfigureProcessorBlock.c)
 *     KiInitializeThreadCycleTable @ 0x140BFA0D8 (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140BFA30C (KiInitializePrcbContext.c)
 *     KiUnshadowProcessorAllocation @ 0x140BFE5DC (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140BFE69C (KiComputeProcessorDataSize.c)
 *     MmInitializeProcessor @ 0x140C0634C (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140C13BAC (VmInitializeProcessor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CCFA80 (KiConfigureAllSchedulingInformation.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140CCFB30 (KiCountNodeZeroSetBitsGroupAffinity.c)
 *     KiAllocateCpuSetData @ 0x140CD1870 (KiAllocateCpuSetData.c)
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 */

__int64 KeStartAllProcessors()
{
  unsigned int v0; // edi
  KPCR *Pcr; // rax
  void *Base; // rbx
  int Limit; // eax
  unsigned int v4; // eax
  void *Pool2; // rax
  unsigned int v6; // esi
  int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 IndependentPages; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r9d
  int started; // eax
  int v22; // eax
  SIZE_T v23; // rdx
  MEMORY_CACHING_TYPE v24; // r8d
  __int64 v25; // r8
  unsigned int v26; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int i; // ebx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v34; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+64h] [rbp-9Ch]
  unsigned int v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+6Ch] [rbp-94h]
  unsigned int v41; // [rsp+74h] [rbp-8Ch]
  unsigned int v42; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter1[196]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int16 v44; // [rsp+770h] [rbp+670h] BYREF
  ULONG_PTR v45; // [rsp+778h] [rbp+678h] BYREF
  unsigned int v46; // [rsp+780h] [rbp+680h] BYREF
  unsigned int v47; // [rsp+788h] [rbp+688h] BYREF

  v0 = 0;
  HIDWORD(v36[0]) = 0;
  v47 = 0;
  memset_0(v36, 0, 0xE4uLL);
  v34 = 0;
  v46 = 0;
  v44 = 0;
  LODWORD(v45) = 0;
  v32 = 0;
  v33 = 0;
  if ( (int)KiCompleteBootProcessorContextInitialization() < 0 )
    goto LABEL_48;
  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v4 = KiFredEnabled ? 4096 : Limit + 1;
  LODWORD(KiBootProcessorIdtSize) = v4;
  Pool2 = (void *)ExAllocatePool2(256LL, v4, 0x2020654Bu);
  *(_QWORD *)&PspSiloMonitorLock.PriorityFloorCounts[24] = Pool2;
  if ( !Pool2 )
    goto LABEL_48;
  memmove(Pool2, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x800 )
    KeRegisteredProcessors = 2048;
  KiBarrierWait = 1;
  memset_0(BugCheckParameter1, 0, 0x5E0uLL);
  KiComputeEstimatedMaximumProcessors(&v34, &v47, &v46);
  v6 = v46;
  if ( (int)KiAllocateProcessorLookupStructures() < 0 )
    goto LABEL_48;
  v7 = v47;
  KeMaximumProcessors = v6;
  if ( !(unsigned int)KiAllocateCpuSetData(v47) )
    goto LABEL_48;
  v8 = KiComputeProcessorDataSize(v7, &v32, &v33);
  v9 = v32;
  v10 = v8;
  v11 = v33;
  v35[0] = v32;
  v35[1] = v33;
  v47 = v8;
  if ( (int)HvlStartBootLogicalProcessors() < 0 )
    goto LABEL_48;
  v12 = 0;
  do
  {
    v13 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= v34 )
      break;
    v44 = -1;
    ++v12;
    LODWORD(v45) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v12, (int *)&v45, &v44) )
    {
      ++v0;
      memset_0(v36, 0, 0xE8uLL);
      if ( !ExCreatePoolTagTable(v0, v44) )
        goto LABEL_48;
      IndependentPages = MmAllocateIndependentPagesEx(v10, v44, (__int64)v35, 2uLL);
      if ( !IndependentPages )
        goto LABEL_48;
      v38 = v44;
      v36[1] = IndependentPages;
      v37 = v10;
      v39 = v0;
      v40 = v7;
      v41 = v9;
      v42 = v11;
      if ( (int)KiAllocateProcessorStateInitializationParameters((__int64)v36, v44) < 0 )
        goto LABEL_48;
      v15 = KiInitializeProcessorState(BugCheckParameter1, (_QWORD *)KeLoaderBlock_0, (__int64)v36);
      v16 = v15;
      if ( !v15 )
        goto LABEL_48;
      KiRcuProcessorInitialize(v15, 1u);
      if ( (unsigned int)HvlInitializeProcessor(v16, v0, v45)
        || !(unsigned int)MmInitializeProcessor(v16)
        || (int)KiInitializePrcbContext(v16, v44) < 0
        || (int)KeInitializeTimerTable(v16, v17) < 0
        || (int)EtwInitializeProcessor(v16) < 0
        || (int)KiAllocateProcessorSchedulerStructures((_QWORD *)v16, v18, v19, v20) < 0
        || (int)VmInitializeProcessor(v16) < 0 )
      {
        goto LABEL_48;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v0, v45);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v0, (unsigned int)v45);
      if ( started != 4 )
      {
        KiRcuProcessorInitialize(v16, 0);
        KiFreeProcessorSchedulerStructures((_QWORD *)v16);
        HvlDeleteProcessor((struct _KPRCB *)v16, v23, v24);
        MmDeleteProcessor(v16);
        EtwDeleteProcessor(v16);
        ExDeletePoolTagTable(v0);
        KiUnshadowProcessorAllocation(v16, (__int64)BugCheckParameter1, v36);
        v25 = *(unsigned __int8 *)(v16 + 209);
        v26 = *(unsigned __int8 *)(v16 + 208);
        *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + *(unsigned int *)(v16 + 36)) = 0;
        *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)v26].Flink
        + v25) = 0;
        *(_QWORD *)(v16 + 192) = 0LL;
        KiFreeProcessorStateInitializationParameters((__int64)v36);
        break;
      }
      v46 = 0;
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        KeYieldProcessorEx(&v46);
      KiConfigureProcessorBlock(v16);
      KiUpdateProcessorCount(v0, *(unsigned __int8 *)(v16 + 208));
      v10 = v47;
    }
  }
  while ( v12 < 0x7FF );
  if ( KeNumberNodes == 1 )
  {
    v22 = KiCountNodeZeroSetBitsGroupAffinity(v13);
    v13 = (unsigned int)KeNumberProcessors_0;
    if ( v22 != (_DWORD)KeNumberProcessors_0 )
LABEL_48:
      KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  if ( KeMaxprocSpecified )
  {
    KeMaximumProcessors = 2048;
  }
  else if ( KeDynamicPartitioningSupported )
  {
    KeMaximumProcessors = v6;
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
    if ( v6 > (unsigned int)v13 )
      KeMaximumProcessors = KeRegisteredProcessors
                          * CurrentPrcb->CoresPerPhysicalProcessor
                          * CurrentPrcb->LogicalProcessorsPerCore;
  }
  else
  {
    KeMaximumProcessors = KeNumberProcessors_0;
  }
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  if ( !(unsigned __int8)PoInitHeteroDetection(v13) )
    KeBugCheck(0xA0u);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    v29 = KiInitializeThreadCycleTable(KiProcessorBlock[i]);
    if ( v29 < 0 )
      KeBugCheckEx(0x32u, v29, 0xCuLL, 0LL, 0LL);
  }
  KiConfigureAllSchedulingInformation();
  LOBYTE(v30) = 1;
  guard_dispatch_icall_no_overrides(v30, 0LL);
  KiBootProcessorsStarted = 1;
  KiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBarrierWait = 0;
  return KeWakeAddressAll();
}
