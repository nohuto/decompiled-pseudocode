/*
 * XREFs of KiStartDynamicProcessor @ 0x1407BC9D8
 * Callers:
 *     KeStartDynamicProcessor @ 0x1407BD540 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     KiRcuProcessorInitialize @ 0x14050CA2C (KiRcuProcessorInitialize.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x14057EA90 (HalStartDynamicProcessor.c)
 *     HalRegisterDynamicProcessor @ 0x140581400 (HalRegisterDynamicProcessor.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405EC84C (KiAllocateProcessorSchedulerStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405ECB30 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiDynamicProcessorInitialization @ 0x1405ED8E4 (KiDynamicProcessorInitialization.c)
 *     KiFreeProcessorSchedulerStructures @ 0x1405EDBC0 (KiFreeProcessorSchedulerStructures.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405EDD74 (KiFreeProcessorStateInitializationParameters.c)
 *     KiInitializeProcessorStateInitializationParameters @ 0x1405EDFF0 (KiInitializeProcessorStateInitializationParameters.c)
 *     KiQueryProcessorNode @ 0x1405F25AC (KiQueryProcessorNode.c)
 *     KiUnassignProcessorNumberFromPrcb @ 0x1405F28E8 (KiUnassignProcessorNumberFromPrcb.c)
 *     KiAllocateProcessorHiberSwapShadowStacks @ 0x1405F3088 (KiAllocateProcessorHiberSwapShadowStacks.c)
 *     KiDynamicProcessorAddNotification @ 0x1405F3270 (KiDynamicProcessorAddNotification.c)
 *     ExInitializeProcessor @ 0x1406CF4B0 (ExInitializeProcessor.c)
 *     ExDeletePoolTagTable @ 0x1406CFB68 (ExDeletePoolTagTable.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CcInitializeProcessor @ 0x14078CBAC (CcInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140794344 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140796878 (IoInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x1407BE390 (KiInitializeProcessorState.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x1407BE798 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     ObInitializeProcessor @ 0x1407C54F4 (ObInitializeProcessor.c)
 *     EtwDeleteProcessor @ 0x14082A8D4 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x14082AAD4 (EtwInitializeProcessor.c)
 *     EtwpInitializeActivityIdSeed @ 0x14082C2F8 (EtwpInitializeActivityIdSeed.c)
 *     ExCreatePoolTagTable @ 0x14083DA48 (ExCreatePoolTagTable.c)
 *     CmInitializeProcessorCallbacks @ 0x14085681C (CmInitializeProcessorCallbacks.c)
 *     CmInitializeProcessor @ 0x140859FC8 (CmInitializeProcessor.c)
 *     MmDeleteProcessor @ 0x14086AAF8 (MmDeleteProcessor.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     KeInitializeTimerTable @ 0x140B26EB8 (KeInitializeTimerTable.c)
 *     KiFreeThreadCycleTable @ 0x140BF9BF0 (KiFreeThreadCycleTable.c)
 *     KiInitializeThreadCycleTable @ 0x140BFA0D8 (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140BFA30C (KiInitializePrcbContext.c)
 *     KiInitializeDynamicProcessor @ 0x140BFAFC4 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140BFE5DC (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140BFE69C (KiComputeProcessorDataSize.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140BFE6CC (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x140C05DD8 (WheaInitializeProcessor.c)
 *     MmInitializeProcessor @ 0x140C0634C (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140C13BAC (VmInitializeProcessor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiStartDynamicProcessor(int a1, int a2, __int16 a3, unsigned int a4)
{
  ULONG_PTR v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  struct _KPRCB *v9; // rdi
  int ProcessorNode; // ebx
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  PVOID v15; // rcx
  __int64 v16; // r12
  int v17; // r15d
  int started; // eax
  SIZE_T v19; // rdx
  MEMORY_CACHING_TYPE v20; // r8d
  void *VmInternal; // rcx
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 PoolTagTable; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v25[60]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v26[16]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v27; // [rsp+148h] [rbp+40h]
  __int64 v28; // [rsp+1C0h] [rbp+B8h]
  ULONG_PTR BugCheckParameter1[194]; // [rsp+2A8h] [rbp+1A0h] BYREF
  int v30; // [rsp+8C8h] [rbp+7C0h] BYREF
  ULONG_PTR v31; // [rsp+8D0h] [rbp+7C8h] BYREF

  LODWORD(v31) = a2;
  v30 = a1;
  v5 = a4;
  LODWORD(v23) = 0;
  LODWORD(PoolTagTable) = 0;
  v25[1] = 0;
  memset_0(v25, 0, 0xE4uLL);
  memset_0(v26, 0, 0x170uLL);
  memset_0(BugCheckParameter1, 0, 0x5E0uLL);
  LOWORD(v30) = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  KiInitializeProcessorStateInitializationParameters(v25);
  if ( (unsigned int)KeNumberProcessors_0 >= 0x800
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    ProcessorNode = -1073741223;
    goto LABEL_45;
  }
  ProcessorNode = HalRegisterDynamicProcessor();
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  LOWORD(v30) = a3;
  ProcessorNode = KiQueryProcessorNode(v5, (int *)&v31, (unsigned __int16 *)&v30);
  if ( ProcessorNode )
    goto LABEL_39;
  v25[0] = 1;
  v25[4] = KiComputeProcessorDataSize((unsigned int)KeMaximumProcessors, &v23, &PoolTagTable);
  v25[9] = v23;
  v25[10] = PoolTagTable;
  v25[5] = (unsigned __int16)v30;
  v25[6] = v5;
  v25[7] = v11;
  ProcessorNode = KiAllocateProcessorStateInitializationParameters((__int64)v25, (unsigned __int16)v30);
  if ( ProcessorNode < 0 )
  {
LABEL_45:
    KiBarrierWait = 0;
    if ( v7 )
    {
      *(_OWORD *)v7 = *(_OWORD *)v8;
      *(_OWORD *)(v7 + 16) = *(_OWORD *)(v8 + 16);
      *(_OWORD *)(v7 + 32) = *(_OWORD *)(v8 + 32);
      *(_OWORD *)(v7 + 48) = *(_OWORD *)(v8 + 48);
      *(_OWORD *)(v7 + 64) = *(_OWORD *)(v8 + 64);
      *(_QWORD *)(v7 + 80) = *(_QWORD *)(v8 + 80);
      KeNodeBlock[(unsigned __int16)v30] = v7;
    }
    if ( v9 )
    {
      KiRcuProcessorInitialize((__int64)v9, 0);
      if ( KiHiberSwapStacksAllocated )
        KiAllocateProcessorHiberSwapShadowStacks((__int64)v9, 0);
      KiFreeProcessorSchedulerStructures(v9);
      KiFreeThreadCycleTable(v9);
      HvlDeleteProcessor(v9, v19, v20);
      MmDeleteProcessor(v9);
      EtwDeleteProcessor(v9);
      VmInternal = v9->VmInternal;
      if ( VmInternal )
      {
        ExFreePoolWithTag(VmInternal, 0);
        v9->VmInternal = 0LL;
      }
      KiUnassignProcessorNumberFromPrcb((__int64)v9);
    }
    if ( v6 )
      ExDeletePoolTagTable(v5);
    if ( v9 )
      KiUnshadowProcessorAllocation(v9, BugCheckParameter1, v25);
    goto LABEL_57;
  }
  PoolTagTable = ExCreatePoolTagTable((unsigned int)v5, (unsigned __int16)v30);
  v6 = PoolTagTable;
  if ( !PoolTagTable )
  {
    ProcessorNode = -1073741670;
    KiBarrierWait = 0;
LABEL_57:
    KiFreeProcessorStateInitializationParameters((__int64)v25);
    return (unsigned int)ProcessorNode;
  }
  v7 = KeNodeBlock[(unsigned __int16)v30];
  v27 = *(_OWORD *)&PsLoadedModuleList;
  v9 = (struct _KPRCB *)KiInitializeProcessorState(BugCheckParameter1);
  if ( !v9 )
  {
    ProcessorNode = -1073741670;
    goto LABEL_45;
  }
  v8 = KeNodeBlock[(unsigned __int16)v30];
  if ( !(unsigned int)MmInitializeProcessor(v9) )
  {
    ProcessorNode = -1073741823;
    goto LABEL_45;
  }
  ProcessorNode = KiInitializePrcbContext(v9, (unsigned __int16)v30);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = KeInitializeTimerTable(v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = ExInitializeProcessor((__int64)v9, 1);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = ObInitializeProcessor(v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = IoInitializeProcessor((__int64)v9, 0LL);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = CcInitializeProcessor((__int64)v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = EtwInitializeProcessor(v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  EtwpInitializeActivityIdSeed(v9->EtwSupport, v9->Number);
  ProcessorNode = WheaInitializeProcessor(v9, 0LL);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = HvlInitializeProcessor((__int64)v9, v5, v31);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = KiAllocateProcessorSchedulerStructures(v9, v12, v13, v14);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = KiInitializeThreadCycleTable(v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = CmInitializeProcessorCallbacks(v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = VmInitializeProcessor(v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  ProcessorNode = KiInitializeSingleDpcRuntimeHistoryHashTable(v9);
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  if ( KiHiberSwapStacksAllocated )
  {
    ProcessorNode = KiAllocateProcessorHiberSwapShadowStacks((__int64)v9, 1);
    if ( ProcessorNode < 0 )
      goto LABEL_45;
  }
  v15 = ExPageLockHandle;
  v9->ProfileEventIndexAddress = &v9->ProfileEventIndexAddress;
  v9->ProcessorProfileControlArea = 0LL;
  MmLockPagableSectionByHandle(v15);
  KiAddProcessorToGroupSchedulingDatabase(v9);
  v16 = KeLoaderBlock_0;
  KiBarrierWait = 1;
  if ( !KeLoaderBlock_0 )
  {
    KeLoaderBlock_0 = (__int64)v26;
    v27 = *(_OWORD *)&PsLoadedModuleList;
  }
  ProcessorNode = KiDynamicProcessorAddNotification(0, v9->Number, v9->Group, v9->GroupIndex, v31, 0);
  v17 = 2;
  if ( ProcessorNode >= 0 )
  {
    KiRcuProcessorInitialize((__int64)v9, 1u);
    started = HalStartDynamicProcessor((__int64)BugCheckParameter1, v5, v31, v30);
    if ( started == 3 )
      KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v5, (unsigned int)v31);
    if ( started == 2 )
    {
      ProcessorNode = -1073741823;
    }
    else
    {
      while ( v28 )
        _mm_pause();
      KiInitializeDynamicProcessor(v9);
      v17 = 1;
    }
  }
  KiDynamicProcessorAddNotification(v17, v9->Number, v9->Group, v9->GroupIndex, v31, ProcessorNode);
  if ( ProcessorNode >= 0 )
  {
    WheaInitializeProcessor(v9, 1LL);
    CmInitializeProcessor(v9);
    KiDynamicProcessorInitialization((__int64)v9);
  }
  KeLoaderBlock_0 = v16;
  MmUnlockPagableImageSection(ExPageLockHandle);
  v6 = PoolTagTable;
LABEL_39:
  if ( ProcessorNode < 0 )
    goto LABEL_45;
  return (unsigned int)ProcessorNode;
}
