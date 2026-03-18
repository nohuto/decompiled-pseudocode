/*
 * XREFs of KeStartAllProcessors @ 0x140CC8ACC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KeWakeAddressAll @ 0x1402BA1F0 (KeWakeAddressAll.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140470DF0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KiRcuProcessorInitialize @ 0x140512FBC (KiRcuProcessorInitialize.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalStartNextProcessor @ 0x1405809B0 (HalStartNextProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateProcessorLookupStructures @ 0x1405E9DF4 (KiAllocateProcessorLookupStructures.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405E9EDC (KiAllocateProcessorSchedulerStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405EA1C0 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405EA85C (KiCompleteBootProcessorContextInitialization.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405EA980 (KiComputeEstimatedMaximumProcessors.c)
 *     KiFreeProcessorSchedulerStructures @ 0x1405EB250 (KiFreeProcessorSchedulerStructures.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405EB404 (KiFreeProcessorStateInitializationParameters.c)
 *     KiQueryProcessorNode @ 0x1405EFC3C (KiQueryProcessorNode.c)
 *     ExDeletePoolTagTable @ 0x1406CBB38 (ExDeletePoolTagTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvlDeleteProcessor @ 0x140791814 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x1407BB330 (KiInitializeProcessorState.c)
 *     EtwDeleteProcessor @ 0x140824694 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x140824894 (EtwInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x140837808 (ExCreatePoolTagTable.c)
 *     MmDeleteProcessor @ 0x140864718 (MmDeleteProcessor.c)
 *     KeInitializeTimerTable @ 0x140B24A18 (KeInitializeTimerTable.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     KiUpdateProcessorCount @ 0x140BF3458 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140BF3A10 (KiConfigureProcessorBlock.c)
 *     KiInitializeThreadCycleTable @ 0x140BF40D8 (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140BF430C (KiInitializePrcbContext.c)
 *     KiCreateCpuSetForProcessor @ 0x140BF5578 (KiCreateCpuSetForProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140BF85DC (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140BF869C (KiComputeProcessorDataSize.c)
 *     MmInitializeProcessor @ 0x140C0013C (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140C0D99C (VmInitializeProcessor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CC99F0 (KiConfigureAllSchedulingInformation.c)
 *     PoInitHeteroDetection @ 0x140CCE7E8 (PoInitHeteroDetection.c)
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
  unsigned int v8; // ebx
  char *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r13d
  int v13; // ebx
  unsigned __int64 v14; // r12
  unsigned int v15; // r14d
  __int64 IndependentPages; // rax
  unsigned int *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  int started; // eax
  SIZE_T v24; // rdx
  MEMORY_CACHING_TYPE v25; // r8d
  __int64 v26; // r8
  unsigned int v27; // edx
  int v28; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int i; // ebx
  int v31; // eax
  __int64 v32; // rcx
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h]
  _QWORD v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+64h] [rbp-9Ch]
  unsigned int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h]
  unsigned int v44; // [rsp+74h] [rbp-8Ch]
  int v45; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter1[196]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int16 v47; // [rsp+770h] [rbp+670h] BYREF
  ULONG_PTR v48; // [rsp+778h] [rbp+678h] BYREF
  __int64 v49; // [rsp+780h] [rbp+680h] BYREF
  unsigned int v50; // [rsp+788h] [rbp+688h] BYREF

  v0 = 0;
  v34 = 0;
  v36 = 0;
  v50 = 0;
  v47 = 0;
  LODWORD(v48) = 0;
  v35 = 0;
  LODWORD(v49) = 0;
  if ( (int)KiCompleteBootProcessorContextInitialization() < 0 )
    goto LABEL_58;
  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v4 = KiFredEnabled ? 4096 : Limit + 1;
  LODWORD(KiBootProcessorIdtSize) = v4;
  Pool2 = (void *)ExAllocatePool2(256LL, v4, 0x2020654Bu);
  *(_QWORD *)&PspSiloMonitorLock.PriorityFloorCounts[24] = Pool2;
  if ( !Pool2 )
    goto LABEL_58;
  memmove(Pool2, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x800 )
    KeRegisteredProcessors = 2048;
  KiBarrierWait = 1;
  memset_0(BugCheckParameter1, 0, 0x5E0uLL);
  KiComputeEstimatedMaximumProcessors(&v36, (unsigned int *)&v34, &v50);
  v6 = v50;
  if ( (int)KiAllocateProcessorLookupStructures() < 0 )
    goto LABEL_58;
  v7 = v34;
  KeMaximumProcessors = v6;
  v8 = KiMaximumGroups == 1 ? v34 : (unsigned __int16)KiMaximumGroups << 6;
  v9 = (char *)ExAllocatePool2(64LL, 32 * v8, 0x2020654Bu);
  if ( !v9 )
    goto LABEL_58;
  KiCpuSetAffinities = v9;
  v10 = 8LL * v8;
  KiCpuSetAffinitiesShadow = &v9[v10];
  stru_140FC01F0.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&v9[v10 + v10];
  LODWORD(KiCpuSetAffinitySize) = 8 * v8;
  KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
  v11 = KiComputeProcessorDataSize(v7, &v35, &v49);
  v12 = v35;
  v13 = v49;
  v37 = v35;
  v38 = (unsigned int)v49;
  v14 = v11;
  if ( (int)HvlStartBootLogicalProcessors() < 0 )
    goto LABEL_58;
  v15 = 0;
  while ( v15 < 0x7FF && (unsigned int)KeNumberProcessors_0 < v36 )
  {
    v47 = -1;
    ++v15;
    LODWORD(v48) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v15, (int *)&v48, &v47) )
    {
      ++v0;
      memset_0(v39, 0, 0xE8uLL);
      if ( !ExCreatePoolTagTable(v0, v47) )
        goto LABEL_58;
      IndependentPages = MmAllocateIndependentPagesEx(v14, v47, (__int64)&v37, 2uLL);
      if ( !IndependentPages )
        goto LABEL_58;
      v41 = v47;
      v39[1] = IndependentPages;
      v40 = v14;
      v42 = v0;
      v43 = v7;
      v44 = v12;
      v45 = v13;
      if ( (int)KiAllocateProcessorStateInitializationParameters((__int64)v39, v47) < 0 )
        goto LABEL_58;
      v17 = (unsigned int *)KiInitializeProcessorState(BugCheckParameter1, (_QWORD *)KeLoaderBlock_0, (__int64)v39);
      v18 = (__int64)v17;
      if ( !v17 )
        goto LABEL_58;
      KiRcuProcessorInitialize(v17, 1u);
      if ( (unsigned int)HvlInitializeProcessor(v18, v0, v48)
        || !(unsigned int)MmInitializeProcessor(v18)
        || (int)KiInitializePrcbContext(v18, v47) < 0
        || (int)KeInitializeTimerTable(v18, v19) < 0
        || (int)EtwInitializeProcessor(v18) < 0
        || (int)KiAllocateProcessorSchedulerStructures((_QWORD *)v18, v20, v21, v22) < 0
        || (int)VmInitializeProcessor(v18) < 0 )
      {
        goto LABEL_58;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v0, v48);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v0, (unsigned int)v48);
      if ( started != 4 )
      {
        KiFreeProcessorSchedulerStructures((_QWORD *)v18);
        HvlDeleteProcessor((struct _KPRCB *)v18, v24, v25);
        MmDeleteProcessor(v18);
        EtwDeleteProcessor(v18);
        ExDeletePoolTagTable(v0);
        KiUnshadowProcessorAllocation(v18, (__int64)BugCheckParameter1, v39);
        v26 = *(unsigned __int8 *)(v18 + 209);
        v27 = *(unsigned __int8 *)(v18 + 208);
        *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * *(unsigned int *)(v18 + 36)) = 0;
        *(&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.LockNV + 64 * (unsigned __int64)v27 + v26) = 0;
        *(_QWORD *)(v18 + 192) = 0LL;
        KiFreeProcessorStateInitializationParameters((__int64)v39);
        break;
      }
      v50 = 0;
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        KeYieldProcessorEx(&v50);
      KiConfigureProcessorBlock(v18);
      KiUpdateProcessorCount(v0, *(unsigned __int8 *)(v18 + 208));
      v13 = v49;
    }
  }
  if ( KeNumberNodes == 1 )
  {
    v28 = 0;
    v37 = KeNodeBlock[0];
    v49 = 0LL;
    v38 = 0LL;
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)&v37, &v49) )
      v28 += __popcnt(*(_QWORD *)(v49 + 128));
    if ( v28 != (_DWORD)KeNumberProcessors_0 )
LABEL_58:
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
    if ( v6 > KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore )
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
  if ( !(unsigned __int8)PoInitHeteroDetection() )
    KeBugCheck(0xA0u);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    v31 = KiInitializeThreadCycleTable(KiProcessorBlock[i]);
    if ( v31 < 0 )
      KeBugCheckEx(0x32u, v31, 0xCuLL, 0LL, 0LL);
  }
  KiConfigureAllSchedulingInformation();
  LOBYTE(v32) = 1;
  guard_dispatch_icall_no_overrides(v32, 0LL);
  KiBootProcessorsStarted = 1;
  KiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBarrierWait = 0;
  return KeWakeAddressAll();
}
