/*
 * XREFs of IoInitSystemPreDrivers @ 0x140CBACA0
 * Callers:
 *     IoInitSystem @ 0x140CBAC00 (IoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     RtlGetNtProductType @ 0x140450F70 (RtlGetNtProductType.c)
 *     MiLogBadMapper @ 0x140459AC0 (MiLogBadMapper.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     KeInitializeQueue @ 0x1404CBEC0 (KeInitializeQueue.c)
 *     HeadlessKernelAddLogEntry @ 0x1404EDA18 (HeadlessKernelAddLogEntry.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x1404F4824 (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     McGenEventRegister_EtwRegister @ 0x1405B3298 (McGenEventRegister_EtwRegister.c)
 *     HvlPhase2Initialize @ 0x1405B8B08 (HvlPhase2Initialize.c)
 *     VslpIumPhase4Initialize @ 0x1405C45E4 (VslpIumPhase4Initialize.c)
 *     IopInitDumpCapsuleSupport @ 0x1405C99A8 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1405C9C6C (IopRemoveDumpCapsuleSupport.c)
 *     Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline @ 0x1405CA53C (Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1405CA5D0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1405CA614 (McTemplateK0q_EtwWriteTransfer.c)
 *     IoInitializeLiveDump @ 0x1405CC0D4 (IoInitializeLiveDump.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x1405D20FC (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopInitializeSystemVariableService @ 0x1405D3A98 (IopInitializeSystemVariableService.c)
 *     SecureDump_PrepareForInit @ 0x1405D6CBC (SecureDump_PrepareForInit.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1405D6F10 (SecureDump_ProvisionCrashDumpKey.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405F1948 (KeOptimizeSpecCtrlSettings.c)
 *     WheaSelLogCheckPoint @ 0x1406D43A4 (WheaSelLogCheckPoint.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x14077B9B0 (TlgRegisterAggregateProvider.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14078D880 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140793468 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeBugCheckDriverData @ 0x140793560 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeDumpPolicySettings @ 0x140793844 (IopInitializeDumpPolicySettings.c)
 *     IopInitializeTriageDumpData @ 0x140793B40 (IopInitializeTriageDumpData.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x140793C1C (IopTraceCrashDumpDisabledOnBoot.c)
 *     IoInitializeProcessor @ 0x140793D48 (IoInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140794008 (IopQueryProcessorInitValues.c)
 *     AstInitializeBloomFilter @ 0x14079B44C (AstInitializeBloomFilter.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407A3A98 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407A3BE4 (IopQueryPassiveInterruptRegistryOptions.c)
 *     PpPagePathAssign @ 0x1407A3F60 (PpPagePathAssign.c)
 *     PsLocateSystemDlls @ 0x1407EE038 (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x14081232C (SeAuditBootConfiguration.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1408278B0 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x140827988 (EtwTraceLeapSecondDataUpdate.c)
 *     ExRegisterHost @ 0x140840A68 (ExRegisterHost.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x14084E488 (CmIsStateSeparationDevModeEnabled.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF47C0 (RtlIsStateSeparationEnabled.c)
 *     EtwWriteStartScenario @ 0x140B456A0 (EtwWriteStartScenario.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B6E47C (TlgRegisterAggregateProviderEx.c)
 *     PfSnBeginBootPhase @ 0x140BF8FAC (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140C07A44 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     SmInitSystem @ 0x140C7F2E8 (SmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140C7FBB0 (BootApplicationPersistentDataProcess.c)
 *     VslRegisterIumPowerCallbacks @ 0x140CB99FC (VslRegisterIumPowerCallbacks.c)
 *     IopCreateRootDirectories @ 0x140CBCD38 (IopCreateRootDirectories.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140CBD3BC (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeReserveIrps @ 0x140CBD6C0 (IopInitializeReserveIrps.c)
 *     IopReassignSystemRoot @ 0x140CBDDA4 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x140CBDF98 (IopStoreArcInformation.c)
 *     IopInitializeSessionNotifications @ 0x140CBEDFC (IopInitializeSessionNotifications.c)
 *     IopProtectSystemPartition @ 0x140CBF198 (IopProtectSystemPartition.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140CC3950 (PnpMarkHalDeviceNode.c)
 *     PpLastGoodDoBootProcessing @ 0x140CC4CEC (PpLastGoodDoBootProcessing.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 *     PoInitDriverServices @ 0x140CCE614 (PoInitDriverServices.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PsInitializeSyscallProviders @ 0x140CD7910 (PsInitializeSyscallProviders.c)
 *     WMIInitialize @ 0x140CDFE78 (WMIInitialize.c)
 *     KitpInitAitSampleRate @ 0x140CE6D90 (KitpInitAitSampleRate.c)
 *     WheaInitialize @ 0x140CE7AB8 (WheaInitialize.c)
 *     MmInitializeImageViewExtension @ 0x140CFA084 (MmInitializeImageViewExtension.c)
 *     MmRegisterHotPatches @ 0x140CFBBA4 (MmRegisterHotPatches.c)
 */

int __fastcall IoInitSystemPreDrivers(__int64 a1)
{
  __int64 v1; // rax
  int v3; // r14d
  KSPIN_LOCK *p_Policy; // rbx
  unsigned __int16 v5; // si
  unsigned __int16 *v6; // rax
  __int64 *v7; // r15
  int RecordedStackTraceIndex; // eax
  KSPIN_LOCK *v9; // rbx
  unsigned __int16 v10; // si
  unsigned __int16 *v11; // rax
  __int64 *v12; // r15
  int v13; // eax
  KSPIN_LOCK *v14; // rbx
  unsigned __int16 v15; // si
  unsigned __int16 *v16; // rax
  __int64 *v17; // r15
  int v18; // eax
  KSPIN_LOCK *v19; // rbx
  unsigned __int16 v20; // si
  unsigned __int16 *v21; // rax
  __int64 *v22; // r15
  int v23; // eax
  KSPIN_LOCK *v24; // rbx
  unsigned __int16 v25; // si
  unsigned __int16 *v26; // rax
  __int64 *v27; // r15
  int v28; // eax
  _QWORD *Pool2; // rax
  unsigned __int64 v30; // r8
  int v31; // eax
  ULONG ActiveProcessorCount; // ebx
  __int64 v33; // rcx
  int result; // eax
  unsigned int v35; // eax
  bool v36; // al
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  bool IsStateSeparationDevModeEnabled; // bl
  __int64 v41; // rcx
  __int64 v42; // rdx
  ULONG_PTR v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  KIRQL v49; // bl
  void *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  int inited; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // ebx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  struct _KLOCK_ENTRIES *v62; // r9
  int v63; // eax
  __int64 v64; // r8
  signed int v65; // ebx
  ULONG v66; // ebx
  int SystemDlls; // eax
  int v68; // r15d
  __int64 v69; // r8
  PVOID *Object; // [rsp+20h] [rbp-118h]
  _BYTE v71[8]; // [rsp+40h] [rbp-F8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v73; // [rsp+50h] [rbp-E8h] BYREF
  PVOID v74[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v75; // [rsp+68h] [rbp-D0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v78[2]; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v80[5]; // [rsp+D0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-40h] BYREF
  unsigned __int64 retaddr; // [rsp+138h] [rbp+0h]

  v78[0] = 0x1000000LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v78[1] = IoInitSystem_deviceNameBuffer;
  v1 = *(_QWORD *)(a1 + 240);
  v79 = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = *(_DWORD *)(v1 + 132) & 0x80000;
  v71[0] = 0;
  *(_OWORD *)v74 = 0LL;
  v75 = 0LL;
  if ( (unsigned __int64)&IopSessionNotificationLock.ApcState.ApcListHead[1] < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopSessionNotificationLock.ApcState.ApcListHead[1]) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopSessionNotificationLock.ApcState.ApcListHead[1], retaddr);
  }
  memset_0(&IopSessionNotificationLock.ApcStateFill[32], 0, 0x50uLL);
  IopSessionNotificationLock.ApcState.ApcListHead[1].Blink = &IopSessionNotificationLock.ApcState.ApcListHead[1];
  IopSessionNotificationLock.ApcState.ApcListHead[1].Flink = &IopSessionNotificationLock.ApcState.ApcListHead[1];
  IopSessionNotificationLock.WaitStatus = 0LL;
  IopSessionNotificationLock.WaitBlockList = 0LL;
  IopSessionNotificationLock.Timer.Header.WaitListHead.Flink = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v6 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v7 = (__int64 *)v6;
      if ( v6 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v6);
        v5 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)p_Policy, v7);
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v5 = 0;
    }
    *(_QWORD *)&IopSessionNotificationLock.Timer.Header.Lock = v5;
  }
  else
  {
    *(_QWORD *)&IopSessionNotificationLock.Timer.Header.Lock = 0LL;
  }
  HIDWORD(IopSessionNotificationLock.RelativeTimerBias) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&IopSessionNotificationLock.ApcStateFill[16]);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopSessionNotificationLock.ApcState.ApcListHead[1], 0, 0);
  if ( (unsigned __int64)&IopSessionNotificationLock.SavedApcState.ApcListHead[1] < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopSessionNotificationLock.SavedApcState.ApcListHead[1]) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopSessionNotificationLock.SavedApcState.ApcListHead[1], retaddr);
  }
  memset_0(&IopSessionNotificationLock.SavedApcStateFill[32], 0, 0x50uLL);
  IopSessionNotificationLock.SavedApcState.ApcListHead[1].Blink = &IopSessionNotificationLock.SavedApcState.ApcListHead[1];
  IopSessionNotificationLock.SavedApcState.ApcListHead[1].Flink = &IopSessionNotificationLock.SavedApcState.ApcListHead[1];
  *(_OWORD *)&IopSessionNotificationLock.SchedulerApc.Type = 0uLL;
  IopSessionNotificationLock.SchedulerApc.SystemArgument1 = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v9 = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v11 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v12 = (__int64 *)v11;
      if ( v11 )
      {
        v13 = RtlpStdGetRecordedStackTraceIndex(v9, v11);
        v10 = v13;
        if ( !v13 )
          RtlStdReleaseStackTrace((__int64)v9, v12);
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      v10 = 0;
    }
    IopSessionNotificationLock.SchedulerApc.NormalContext = (PVOID)v10;
  }
  else
  {
    IopSessionNotificationLock.SchedulerApc.NormalContext = 0LL;
  }
  *(_DWORD *)&IopSessionNotificationLock.SchedulerApcFill5[52] = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&IopSessionNotificationLock.SavedApcStateFill[16]);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopSessionNotificationLock.SavedApcState.ApcListHead[1], 0, 0);
  if ( (unsigned __int64)&IopSessionNotificationLock.WaitBlock[3].Thread < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopSessionNotificationLock.WaitBlock[3].Thread) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopSessionNotificationLock.WaitBlock[3].Thread, retaddr);
  }
  memset_0(&IopSessionNotificationLock.LastXStateSaveDebugInfo, 0, 0x50uLL);
  IopSessionNotificationLock.Spare18 = (unsigned __int64)&IopSessionNotificationLock.WaitBlock[3].Thread;
  IopSessionNotificationLock.WaitBlock[3].Thread = (struct _KTHREAD *)&IopSessionNotificationLock.WaitBlockFill11[168];
  IopSessionNotificationLock.QueueListEntry.Flink = 0LL;
  IopSessionNotificationLock.QueueListEntry.Blink = 0LL;
  *(_QWORD *)&IopSessionNotificationLock.AffinityPrimaryGroup = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v14 = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v16 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v17 = (__int64 *)v16;
      if ( v16 )
      {
        v18 = RtlpStdGetRecordedStackTraceIndex(v14, v16);
        v15 = v18;
        if ( !v18 )
          RtlStdReleaseStackTrace((__int64)v14, v17);
      }
      else
      {
        v15 = 0;
      }
    }
    else
    {
      v15 = 0;
    }
    IopSessionNotificationLock.Affinity = (_KAFFINITY_EX *)v15;
  }
  else
  {
    IopSessionNotificationLock.Affinity = 0LL;
  }
  HIDWORD(IopSessionNotificationLock.AffinityVersion) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[168]);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopSessionNotificationLock.WaitBlock[3].Thread, 0, 0);
  if ( (unsigned __int64)&IopCrashDumpLock < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopCrashDumpLock) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopCrashDumpLock, retaddr);
  }
  memset_0(&IopCrashDumpLock.OwnerTable, 0, 0x50uLL);
  IopCrashDumpLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&IopCrashDumpLock;
  IopCrashDumpLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&IopCrashDumpLock;
  IopCrashDumpLock.SharedWaiters = 0LL;
  IopCrashDumpLock.ExclusiveWaiters = 0LL;
  IopCrashDumpLock.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v19 = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v21 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v22 = (__int64 *)v21;
      if ( v21 )
      {
        v23 = RtlpStdGetRecordedStackTraceIndex(v19, v21);
        v20 = v23;
        if ( !v23 )
          RtlStdReleaseStackTrace((__int64)v19, v22);
      }
      else
      {
        v20 = 0;
      }
    }
    else
    {
      v20 = 0;
    }
    IopCrashDumpLock.CreatorBackTraceIndex = v20;
  }
  else
  {
    IopCrashDumpLock.CreatorBackTraceIndex = 0LL;
  }
  HIDWORD(IopCrashDumpLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&IopCrashDumpLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopCrashDumpLock, 0, 0);
  if ( (unsigned __int64)&IopLiveDumpLock < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopLiveDumpLock) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopLiveDumpLock, retaddr);
  }
  memset_0(&IopLiveDumpLock.OwnerTable, 0, 0x50uLL);
  IopLiveDumpLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&IopLiveDumpLock;
  IopLiveDumpLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&IopLiveDumpLock;
  IopLiveDumpLock.SharedWaiters = 0LL;
  IopLiveDumpLock.ExclusiveWaiters = 0LL;
  IopLiveDumpLock.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v24 = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v26 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v27 = (__int64 *)v26;
      if ( v26 )
      {
        v28 = RtlpStdGetRecordedStackTraceIndex(v24, v26);
        v25 = v28;
        if ( !v28 )
          RtlStdReleaseStackTrace((__int64)v24, v27);
      }
      else
      {
        v25 = 0;
      }
    }
    else
    {
      v25 = 0;
    }
    IopLiveDumpLock.CreatorBackTraceIndex = v25;
  }
  else
  {
    IopLiveDumpLock.CreatorBackTraceIndex = 0LL;
  }
  HIDWORD(IopLiveDumpLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&IopLiveDumpLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopLiveDumpLock, 0, 0);
  if ( !PnpBootDriverTracking )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x1A0uLL, 0x20206F49u);
    PnpBootDriverTracking = Pool2;
    if ( Pool2 )
      Pool2[51] = 0LL;
  }
  IopSessionNotificationLock.WaitBlock[2].SparePtr = 0LL;
  IopSessionNotificationLock.WaitBlock[2].Object = &IopSessionNotificationLock.WaitBlockFill11[120];
  IopSessionNotificationLock.WaitBlock[2].Thread = (struct _KTHREAD *)&IopSessionNotificationLock.WaitBlockFill11[120];
  *(_QWORD *)&IopSessionNotificationLock.WaitBlockFill11[112] = &IopSessionNotificationLock.WaitBlock[2].WaitListEntry.Blink;
  IopSessionNotificationLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[104];
  IopSessionNotificationLock.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[88];
  IopSessionNotificationLock.WaitBlock[1].SparePtr = &IopSessionNotificationLock.WaitBlockFill11[88];
  IopSessionNotificationLock.WaitBlock[1].Object = &IopSessionNotificationLock.WaitBlockFill11[72];
  IopSessionNotificationLock.WaitBlock[1].Thread = (struct _KTHREAD *)&IopSessionNotificationLock.WaitBlockFill11[72];
  *(_QWORD *)&IopSessionNotificationLock.WaitBlockFill11[64] = &IopSessionNotificationLock.WaitBlock[1].WaitListEntry.Blink;
  IopSessionNotificationLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[56];
  IopSessionNotificationLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill11[40];
  IopSessionNotificationLock.WaitBlock[0].SparePtr = &IopSessionNotificationLock.WaitBlockFill11[40];
  IopSessionNotificationLock.WaitBlock[0].Object = &IopSessionNotificationLock.WaitBlockFill11[24];
  IopSessionNotificationLock.WaitBlock[0].Thread = (struct _KTHREAD *)&IopSessionNotificationLock.WaitBlockFill11[24];
  *(_QWORD *)&IopSessionNotificationLock.WaitBlockFill11[16] = &IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Blink;
  IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.WaitBlockFill10[8];
  IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.Timer.Processor;
  *(_QWORD *)&IopSessionNotificationLock.Timer.Processor = &IopSessionNotificationLock.Timer.Processor;
  IopSessionNotificationLock.Timer.Dpc = (_KDPC *)&IopSessionNotificationLock.Timer.TimerListEntry.Blink;
  IopSessionNotificationLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)&IopSessionNotificationLock.Timer.TimerListEntry.Blink;
  IopSessionNotificationLock.Timer.DueTime.QuadPart = 0LL;
  IoStatisticsLock = 0LL;
  IopSessionNotificationLock.SuspendEvent.Header.WaitListHead.Flink = 0LL;
  *(_OWORD *)&IopSessionNotificationLock.SchedulerApcFill5[80] = 0LL;
  if ( (unsigned int)Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline() )
    LODWORD(IopSessionNotificationLock.SuspendEvent.Header.WaitListHead.Blink) |= 1u;
  if ( (unsigned int)Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline() )
    LODWORD(IopSessionNotificationLock.SuspendEvent.Header.WaitListHead.Blink) |= 2u;
  HIDWORD(IopSessionNotificationLock.SuspendEvent.Header.WaitListHead.Blink) = 0;
  LODWORD(IopSessionNotificationLock.Timer.Header.WaitListHead.Blink) = 0;
  v30 = __rdtsc() >> 4;
  v31 = 0;
  LODWORD(IopSessionNotificationLock.AutoBoostThreadState) = v30 % 0x64 + 10;
  if ( !HIDWORD(IopSessionNotificationLock.SchedulerSharedSwappablePage) )
  {
    HIDWORD(IopSessionNotificationLock.SchedulerSharedSwappablePage) = 14;
    v31 = 1;
    LODWORD(IopSessionNotificationLock.Timer.Header.WaitListHead.Blink) = 1;
  }
  if ( !LODWORD(IopSessionNotificationLock.SchedulerSharedSwappablePage) )
  {
    LODWORD(IopSessionNotificationLock.SchedulerSharedSwappablePage) = 4;
    LODWORD(IopSessionNotificationLock.Timer.Header.WaitListHead.Blink) = v31 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)v74);
  ExInitializeSystemLookasideList((__int64)&IopCompletionLookasideList, 512, 56, 544236361, SHIWORD(v74[0]));
  ExInitializeSystemLookasideList((__int64)&IopLargeIrpLookasideList, 512, SDWORD1(v75), 1819308617, SWORD2(v74[0]));
  ExInitializeSystemLookasideList((__int64)&IopMediumIrpLookasideList, 512, v75, 1836085833, SWORD1(v74[0]));
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v74[1]),
    1936749129,
    (__int16)v74[0]);
  ExInitializeSystemLookasideList((__int64)&IopMdlLookasideList, 512, SDWORD2(v75), 543974477, (__int16)v74[1]);
  ExInitializeNPagedLookasideListInternal((__int64)&IopSafeCompletionLookasideList, 0LL, 0LL, 512, 32, 1934978889, 0, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideListInternal((__int64)&IopOplockFoExtLookasideList, 0LL, 0LL, 512, 48, 1950576719, 0, 0);
  LODWORD(v73) = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v33 = 0LL;
    do
    {
      IoInitializeProcessor(KiProcessorBlock[v33], v74);
      v33 = (unsigned int)(v73 + 1);
      LODWORD(v73) = v33;
    }
    while ( (unsigned int)v33 < ActiveProcessorCount );
  }
  IopErrorLogLock = 0LL;
  *(_QWORD *)&IopSessionNotificationLock.ResourceIndex = &IopSessionNotificationLock.IptSaveArea;
  IopSessionNotificationLock.IptSaveArea = &IopSessionNotificationLock.IptSaveArea;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    LODWORD(IopInitFailCode) = 1;
    return -1073741823;
  }
  if ( ((__int64)IopSessionNotificationLock.Timer.Header.WaitListHead.Blink & 3) != 0 )
  {
    *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[20] = 400;
    IopSessionNotificationLock.SchedulerSharedSystemSlot = IopIrpStackProfilerDpcRoutine;
    LODWORD(IopSessionNotificationLock.Timer.Header.WaitListHead.Blink) |= 4u;
    *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[16] = 2000;
    LODWORD(IopSessionNotificationLock.MutantListHead.Flink) = 275;
    IopSessionNotificationLock.PropagateBoostsEntry.Next = 0LL;
    *(_QWORD *)&IopSessionNotificationLock.PriorityFloorCounts[8] = 0LL;
    *(_QWORD *)&IopSessionNotificationLock.AbWaitEntryCount = 0LL;
  }
  v35 = IopDiskIoAttributionBaseIoSize;
  if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
  {
    v35 = 0x400000;
    IopDiskIoAttributionBaseIoSize = 0x400000;
  }
  if ( v35 <= 0x1000 )
    IopDiskIoAttributionBaseIoSize = 4096;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)KiSystemServiceTraceCallbackLock.TracingPrivate;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    IopErrorLogDisabledThisBoot = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    LODWORD(Object) = 32;
    v36 = (int)NtQueryValueKey(
                 KeyHandle,
                 (unsigned int *)&DestinationString.Length,
                 2LL,
                 (unsigned __int64)IoInitSystem_valueBuffer,
                 (size_t)Object,
                 (unsigned int *)&v73) < 0
       || dword_140FFB9EC != 4
       || dword_140FFB9F4 == 4;
    IopErrorLogDisabledThisBoot = v36;
    ObCloseHandle(KeyHandle, 0);
  }
  *(_QWORD *)&qword_140F85400.Header.Lock = 9LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  unk_140F85458 = IopTimerDispatch;
  unk_140F85460 = &IopTimerCount;
  qword_140F85410 = (__int64)&qword_140F85408;
  qword_140F85408 = (__int64)&qword_140F85408;
  qword_140F853E8 = (__int64)&qword_140F853E0;
  qword_140F853E0 = (__int64)&qword_140F853E0;
  qword_140F85390 = (__int64)IopHardErrorThread;
  qword_140F853A8 = (__int64)&qword_140F853A0;
  qword_140F853A0 = (__int64)&qword_140F853A0;
  qword_140F853C8 = (__int64)&qword_140F853C0;
  qword_140F853C0 = (__int64)&qword_140F853C0;
  IopTimerLock = 0LL;
  dword_140F85440.TargetInfoAsUlong = 275;
  unk_140F85478 = 0LL;
  unk_140F85450 = 0LL;
  qword_140F85418 = 0LL;
  dword_140F8543C = 0;
  word_140F85438 = 0;
  byte_140F8543B = 0;
  qword_140F85398 = 0LL;
  qword_140F85380.List.Flink = 0LL;
  qword_140F853B0 = 0LL;
  byte_140F853B8.Header.Type = 5;
  byte_140F853BA = 8;
  dword_140F853BC = 0;
  dword_140F853D0 = 0x7FFFFFFF;
  byte_140F853D8 = 0;
  if ( (unsigned int)(IopKeepAliveTimeMs - 1000) > 0x2328 )
    IopKeepAliveTimeMs = 5000;
  IopSessionNotificationLock.Padding[1] = 0LL;
  IopSessionNotificationLock.Padding[0] = (unsigned __int64)IopKeepAliveWorker;
  *(_QWORD *)&IopSessionNotificationLock.SchedulerAssistYieldCounter = 0LL;
  IopSessionNotificationLock.Padding[3] = (unsigned __int64)&IopSessionNotificationLock.Padding[2];
  IopSessionNotificationLock.Padding[2] = (unsigned __int64)&IopSessionNotificationLock.Padding[2];
  IopSessionNotificationLock.Padding[4] = 0LL;
  byte_140F85358 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v37 = NtCreateEvent(&KeyHandle, 0x1F0003u, (__int64)&ObjectAttributes, NotificationEvent, 0);
  if ( v37 < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 26;
    return v37;
  }
  v74[0] = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, v74, 0LL);
  PspSiloMonitorLock.ExtendedFeatureDisableMask = (unsigned __int64)v74[0];
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140F85500.Header.WaitListHead.Blink = &stru_140F85500.Header.WaitListHead;
  stru_140F85500.Header.WaitListHead.Flink = &stru_140F85500.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140F85500.Header.Lock) = 0;
  stru_140F85500.Header.Size = 6;
  stru_140F85500.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 3;
    return -1073741823;
  }
  result = IopInitializeSessionNotifications();
  if ( result < 0 )
  {
    LODWORD(IopInitFailCode) = 15;
    return result;
  }
  v37 = IopInitializePlugPlayServices(a1, 0LL);
  if ( v37 < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 4;
    return v37;
  }
  if ( v3 )
    WheaSelLogCheckPoint(8u, 1u);
  KseInitialize(a1, 0LL);
  PoInitDriverServices();
  guard_dispatch_icall_no_overrides(v39, v38);
  PnpMarkHalDeviceNode(0LL);
  if ( !(unsigned __int8)WMIInitialize(0LL, a1) )
  {
    LODWORD(IopInitFailCode) = 18;
    return -1073741823;
  }
  if ( v3 )
    WheaSelLogCheckPoint(8u, 2u);
  IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled();
  LOBYTE(v41) = RtlIsStateSeparationEnabled();
  LOBYTE(v42) = IsStateSeparationDevModeEnabled;
  result = ExpInitializeStateSeparationPhase0(v41, v42);
  if ( (int)(result + 0x80000000) >= 0 && result != -1073741637 )
  {
    LODWORD(IopInitFailCode) = 19;
    return result;
  }
  LODWORD(v74[0]) = 0;
  if ( RtlGetNtProductType(v74) && LODWORD(v74[0]) == 1 )
  {
    AstIsActive = 1;
    v43 = ExAllocatePool2(256LL, 0x1000uLL, 0x6E446341u);
    if ( !v43 )
    {
      LODWORD(IopInitFailCode) = 17;
      return -1073741801;
    }
    AstInitializeBloomFilter(v45, v44, v43);
  }
  else
  {
    AstIsActive = 0;
  }
  EtwInitialize(1u, a1);
  result = EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle);
  if ( result >= 0 )
  {
    result = McGenEventRegister_EtwRegister(
               (const GUID *)IoMgrProvider,
               v46,
               IoMgrProvider_Context,
               IoMgrProvider_Context);
    if ( result >= 0 )
    {
      result = TlgRegisterAggregateProviderEx((__int64)&unk_140E09FE8, (__int64)MiTracingEnabledCallback, 0LL);
      if ( result >= 0 )
      {
        stru_140E36558.FirstArgument = &unk_140E09FE8;
        if ( *(_DWORD *)&stru_140E2EB88.SchedulerApcFill5[76]
          && stru_140E36558.FirstArgument
          && *(_DWORD *)stru_140E36558.FirstArgument
          && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 0x400000000080LL) )
        {
          MiLogBadMapper(v47, 0LL, -1, 0LL);
        }
        EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06CD8, 0LL, 0LL);
        IopInitializeDumpPolicySettings(1);
        TlgRegisterAggregateProvider((__int64)&dword_140E06D58);
        SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 2880LL));
        BootApplicationPersistentDataProcess(1);
        KdInitialize(2LL, 0LL, &KdpContext);
        KeInitSystem(2LL);
        if ( !IopErrorLogDisabledThisBoot )
        {
          v49 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
          if ( IopSessionNotificationLock.IptSaveArea == &IopSessionNotificationLock.IptSaveArea )
          {
            IopErrorLogSessionPending = 0;
          }
          else
          {
            IopErrorLogWorkItem.Parameter = 0LL;
            IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
            IopErrorLogWorkItem.List.Flink = 0LL;
            ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
          }
          KeReleaseSpinLock(&IopErrorLogLock, v49);
        }
        if ( v3 )
          WheaSelLogCheckPoint(8u, 3u);
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
          McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v48, 0);
        WheaInitialize(a1, 0LL);
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
          McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
        if ( v3 )
          WheaSelLogCheckPoint(8u, 4u);
        result = IopStoreArcInformation(a1);
        if ( result >= 0 )
        {
          v37 = IopInitializePlugPlayServices(a1, 1LL);
          if ( v37 < 0 )
          {
            HeadlessKernelAddLogEntry();
            LODWORD(IopInitFailCode) = 5;
            return v37;
          }
          memset_0(&IoStatusBlockRangeTable, 0, sizeof(IoStatusBlockRangeTable));
          IoStatusBlockRangeTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&IoStatusBlockRangeTable;
          IoStatusBlockRangeTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))IopCompareIosbRanges;
          IoStatusBlockRangeTable.TableContext = 0LL;
          IoStatusBlockRangeTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))IopAllocateGenericTableEntry;
          IoStatusBlockRangeTableLock.Count = 1;
          IoStatusBlockRangeTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))IopFreeGenericTableEntry;
          IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
          IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
          IoStatusBlockRangeTableLock.Owner = 0LL;
          IoStatusBlockRangeTableLock.Contention = 0;
          LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
          IoStatusBlockRangeTableLock.Event.Header.Size = 6;
          IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
          KitpInitAitSampleRate(a1);
          if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, (PREGHANDLE)&ExpUuidLock.Header.WaitListHead) < 0 )
            ExpUuidLock.Header.WaitListHead.Flink = 0LL;
          KseInitialize(a1, 1LL);
          result = HvlPhase2Initialize(a1);
          if ( result >= 0 )
          {
            if ( v3 )
              WheaSelLogCheckPoint(8u, 5u);
            KeOptimizeSpecCtrlSettings(0);
            PsInitializeSyscallProviders();
            VslpIumPhase4Initialize();
            BootApplicationPersistentDataProcess(2);
            BapdRecordFirmwareBootStats();
            if ( v3 )
              WheaSelLogCheckPoint(8u, 6u);
            if ( PnpEtwHandle )
              EtwWriteStartScenario(
                (ULONG_PTR *)PnpEtwHandle,
                &KMPnPEvt_DriverInitPhase_Start,
                &PnpDriverInitPhaseActivityId,
                0,
                0LL);
            LOWORD(ActiveConnectListLock.Header.Lock) = 1;
            qword_140F849E8 = (__int64)&ActiveConnectList;
            ActiveConnectList = (__int64)&ActiveConnectList;
            ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.Size = 6;
            ActiveConnectListLock.Header.SignalState = 1;
            IopQueryPassiveInterruptRegistryOptions();
            qword_140F849B8 = (__int64)&PassiveInterruptList;
            PassiveInterruptList = (__int64)&PassiveInterruptList;
            PassiveInterruptListLock = 0LL;
            KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
            result = IopCreatePassiveInterruptRealtimeThreads(v50);
            if ( result >= 0 )
            {
              SecureDump_PrepareForInit(v51, v71);
              if ( ForceDumpDisabled || v71[0] || !AllowCrashDump )
                CapsuleDumpAllowed = 0;
              else
                IopInitDumpCapsuleSupport();
              if ( v3 )
                WheaSelLogCheckPoint(8u, 0x106u);
              if ( HIDWORD(PspSiloMonitorLock.KernelStack) )
                EtwTraceLeapSecondDataParseFailure(SHIDWORD(PspSiloMonitorLock.KernelStack));
              EtwTraceLeapSecondDataUpdate(
                0,
                ExpSysDbgLock.ApcState.Process->Header.Type,
                ExpSysDbgLock.ApcState.Process->Header.SignalState,
                0);
              v80[0] = 65542LL;
              v74[1] = &IopIoRateHostTable;
              v80[2] = 512LL;
              v80[1] = v74;
              LODWORD(v74[0]) = 1;
              v80[3] = 0LL;
              v80[4] = 0LL;
              if ( (int)ExRegisterHost(&IopSessionNotificationLock.SListFaultAddress, v52, (unsigned __int16 *)v80) < 0 )
                IopSessionNotificationLock.SListFaultAddress = 0LL;
              *(_QWORD *)&PsAltSystemCallRegistrationLock.Header.Lock = 0LL;
              stru_140FC01F0.QueueListEntry.Blink = (struct _LIST_ENTRY *)PsPicoAltSystemCallDispatch;
              IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
              if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
                IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
              if ( v3 )
                WheaSelLogCheckPoint(8u, 0x206u);
              if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x100000) != 0 )
              {
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
                LOBYTE(v53) = 1;
                inited = IopInitCrashDumpDuringSysInit(a1, v53);
                v58 = inited;
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0q_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                    v57,
                    inited);
                if ( v3 )
                  WheaSelLogCheckPoint(0x4Fu, v58);
                if ( ExpSysDbgLock.SavedApcState.ApcListHead[1].Flink )
                  guard_dispatch_icall_no_overrides(v56, v55);
              }
              v37 = IopInitializeBootDrivers(a1, &v79);
              if ( v37 < 0 )
              {
                HeadlessKernelAddLogEntry();
                if ( !(_DWORD)IopInitFailCode )
                  LODWORD(IopInitFailCode) = 6;
                return v37;
              }
              if ( v3 )
                WheaSelLogCheckPoint(8u, 0x306u);
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStart);
              v37 = MmRegisterHotPatches(a1);
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
              if ( v37 < 0 )
              {
                LODWORD(IopInitFailCode) = 21;
                return v37;
              }
              if ( !(unsigned __int8)PoInitSystem(2LL, a1, v59) )
                KeBugCheck(0xA0u);
              if ( v3 )
                WheaSelLogCheckPoint(8u, 7u);
              SmInitSystem(2, v60, v61, v62);
              EtwInitialize(2u, a1);
              VslRegisterIumPowerCallbacks();
              IopInitializeSystemVariableService();
              SecureDump_ProvisionCrashDumpKey();
              if ( !ForceDumpDisabled || (IopDumpTraceForceDumpDisabled(), !ForceDumpDisabled) )
              {
                IoInitializeLiveDump();
                if ( !AllowLiveDump )
                  IopLiveDumpTraceDumpDisabledOnBoot();
              }
              IopInitializeBugCheckDriverData();
              IopInitializeTriageDumpData();
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
              WheaSelLogCheckPoint(0x53u, 0);
              v63 = IopInitCrashDumpDuringSysInit(a1, 0LL);
              v65 = v63;
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                McTemplateK0q_EtwWriteTransfer(
                  IoMgrProvider_Context,
                  (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                  v64,
                  v63);
              if ( v3 )
                WheaSelLogCheckPoint(0x50u, v65);
              if ( v65 < 0 )
              {
                if ( !AllowCrashDump )
                  IopTraceCrashDumpDisabledOnBoot();
              }
              else
              {
                IopRemoveDumpCapsuleSupport();
              }
              if ( !RtlIsStateSeparationEnabled() )
                PpLastGoodDoBootProcessing();
              CimfsCheckIntegrity();
              v66 = NtGlobalFlag;
              NtGlobalFlag |= 0x40000u;
              SystemDlls = PsLocateSystemDlls();
              NtGlobalFlag = v66;
              v68 = SystemDlls;
              if ( SystemDlls >= 0 )
              {
                MmInitializeImageViewExtension(1LL);
                PfSnBeginBootPhase(0);
                if ( !(unsigned __int8)IopReassignSystemRoot(a1, v78) )
                {
                  HeadlessKernelAddLogEntry();
                  LODWORD(IopInitFailCode) = 9;
                  return -1073741823;
                }
                if ( !(unsigned __int8)IopProtectSystemPartition(a1) )
                {
                  HeadlessKernelAddLogEntry();
                  LODWORD(IopInitFailCode) = 10;
                  return -1073741823;
                }
                ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
                {
                  v74[0] = 0LL;
                  if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, v74, 0LL) >= 0 )
                  {
                    PpPagePathAssign((struct _FILE_OBJECT *)v74[0]);
                    ObfDereferenceObjectWithTag(v74[0], 0x746C6644u);
                  }
                  ZwClose(KeyHandle);
                }
                if ( !(unsigned __int8)WMIInitialize(1LL, 0LL) )
                {
                  LODWORD(IopInitFailCode) = 25;
                  return -1073741823;
                }
                if ( v3 )
                  WheaSelLogCheckPoint(8u, 8u);
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0q_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)WheaInitializeStart,
                    v69,
                    1);
                WheaInitialize(a1, 1LL);
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
                if ( v3 )
                  WheaSelLogCheckPoint(8u, 9u);
                return 0;
              }
              else
              {
                HeadlessKernelAddLogEntry();
                result = v68;
                LODWORD(IopInitFailCode) = 7;
              }
            }
            else
            {
              LODWORD(IopInitFailCode) = 24;
            }
          }
          else
          {
            LODWORD(IopInitFailCode) = 23;
          }
        }
        else
        {
          LODWORD(IopInitFailCode) = 20;
        }
      }
      else
      {
        LODWORD(IopInitFailCode) = 22;
      }
    }
    else
    {
      LODWORD(IopInitFailCode) = 11;
    }
  }
  else
  {
    LODWORD(IopInitFailCode) = 16;
  }
  return result;
}
