/*
 * XREFs of IoInitSystemPreDrivers @ 0x140CC0D18
 * Callers:
 *     IoInitSystem @ 0x140CC0C78 (IoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     RtlGetNtProductType @ 0x1404490A0 (RtlGetNtProductType.c)
 *     MiLogBadMapper @ 0x140451340 (MiLogBadMapper.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     KeInitializeQueue @ 0x1404C58F0 (KeInitializeQueue.c)
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x1404EDE04 (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     McGenEventRegister_EtwRegister @ 0x1405B5AA8 (McGenEventRegister_EtwRegister.c)
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     VslpIumPhase4Initialize @ 0x1405C6E54 (VslpIumPhase4Initialize.c)
 *     IopInitDumpCapsuleSupport @ 0x1405CC278 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1405CC53C (IopRemoveDumpCapsuleSupport.c)
 *     Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline @ 0x1405CCE0C (Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1405CCEA0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1405CCEE4 (McTemplateK0q_EtwWriteTransfer.c)
 *     IoInitializeLiveDump @ 0x1405CE8E8 (IoInitializeLiveDump.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x1405D48EC (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopInitializeSystemVariableService @ 0x1405D6288 (IopInitializeSystemVariableService.c)
 *     SecureDump_PrepareForInit @ 0x1405D94AC (SecureDump_PrepareForInit.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1405D9700 (SecureDump_ProvisionCrashDumpKey.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405F4308 (KeOptimizeSpecCtrlSettings.c)
 *     WheaSelLogCheckPoint @ 0x1406D8424 (WheaSelLogCheckPoint.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x14077E5F0 (TlgRegisterAggregateProvider.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407903B0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140795F98 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeBugCheckDriverData @ 0x140796090 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeDumpPolicySettings @ 0x140796374 (IopInitializeDumpPolicySettings.c)
 *     IopInitializeTriageDumpData @ 0x140796670 (IopInitializeTriageDumpData.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x14079674C (IopTraceCrashDumpDisabledOnBoot.c)
 *     IoInitializeProcessor @ 0x140796878 (IoInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140796B38 (IopQueryProcessorInitValues.c)
 *     AstInitializeBloomFilter @ 0x14079DF8C (AstInitializeBloomFilter.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407A65D8 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407A6724 (IopQueryPassiveInterruptRegistryOptions.c)
 *     PpPagePathAssign @ 0x1407A6AA0 (PpPagePathAssign.c)
 *     PsLocateSystemDlls @ 0x1407F3B98 (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x14081818C (SeAuditBootConfiguration.c)
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x14082DAF0 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x14082DBC8 (EtwTraceLeapSecondDataUpdate.c)
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x140854798 (CmIsStateSeparationDevModeEnabled.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF6E60 (RtlIsStateSeparationEnabled.c)
 *     EtwWriteStartScenario @ 0x140B476D0 (EtwWriteStartScenario.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B7192C (TlgRegisterAggregateProviderEx.c)
 *     PfSnBeginBootPhase @ 0x140BFEFAC (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140C0DC54 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 *     VslRegisterIumPowerCallbacks @ 0x140CBFA3C (VslRegisterIumPowerCallbacks.c)
 *     IopCreateRootDirectories @ 0x140CC2DB0 (IopCreateRootDirectories.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140CC3490 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeReserveIrps @ 0x140CC3790 (IopInitializeReserveIrps.c)
 *     IopReassignSystemRoot @ 0x140CC3E74 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x140CC4068 (IopStoreArcInformation.c)
 *     IopInitializeSessionNotifications @ 0x140CC4ECC (IopInitializeSessionNotifications.c)
 *     IopProtectSystemPartition @ 0x140CC5268 (IopProtectSystemPartition.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140CC9A24 (PnpMarkHalDeviceNode.c)
 *     PpLastGoodDoBootProcessing @ 0x140CCADCC (PpLastGoodDoBootProcessing.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 *     PoInitDriverServices @ 0x140CD4774 (PoInitDriverServices.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PsInitializeSyscallProviders @ 0x140CDDC90 (PsInitializeSyscallProviders.c)
 *     WMIInitialize @ 0x140CE6210 (WMIInitialize.c)
 *     KitpInitAitSampleRate @ 0x140CED130 (KitpInitAitSampleRate.c)
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 *     MmInitializeImageViewExtension @ 0x140D00404 (MmInitializeImageViewExtension.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 */

int __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  __int64 v1; // rax
  int v3; // r14d
  KSPIN_LOCK *v4; // rbx
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
  NTSTATUS v37; // ebx
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
  int inited; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // ebx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r8
  struct _KLOCK_ENTRIES *v61; // r9
  int v62; // eax
  __int64 v63; // r8
  signed int v64; // ebx
  ULONG v65; // ebx
  int SystemDlls; // eax
  int v67; // r15d
  __int64 v68; // r8
  _BYTE v69[8]; // [rsp+40h] [rbp-F8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-F0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v73; // [rsp+68h] [rbp-D0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v76[2]; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v78[5]; // [rsp+D0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-40h] BYREF
  unsigned __int64 retaddr; // [rsp+138h] [rbp+0h]

  v76[0] = 0x1000000LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v76[1] = IoInitSystem_deviceNameBuffer;
  v1 = Context[30];
  v77 = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = *(_DWORD *)(v1 + 132) & 0x80000;
  v69[0] = 0;
  *(_OWORD *)Object = 0LL;
  v73 = 0LL;
  if ( (unsigned __int64)&IopDriverLoadResource < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopDriverLoadResource) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopDriverLoadResource, retaddr);
  }
  memset_0(&IopDriverLoadResource.OwnerTable, 0, 0x50uLL);
  IopDriverLoadResource.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&IopDriverLoadResource;
  IopDriverLoadResource.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&IopDriverLoadResource;
  IopDriverLoadResource.SharedWaiters = 0LL;
  IopDriverLoadResource.ExclusiveWaiters = 0LL;
  IopDriverLoadResource.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v6 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
      v7 = (__int64 *)v6;
      if ( v6 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v4, v6);
        v5 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)v4, v7);
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
    IopDriverLoadResource.CreatorBackTraceIndex = v5;
  }
  else
  {
    IopDriverLoadResource.CreatorBackTraceIndex = 0LL;
  }
  HIDWORD(IopDriverLoadResource.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&IopDriverLoadResource);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopDriverLoadResource, 0, 0);
  if ( (unsigned __int64)&IopDatabaseResource < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopDatabaseResource) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopDatabaseResource, retaddr);
  }
  memset_0(&IopDatabaseResource.OwnerTable, 0, 0x50uLL);
  IopDatabaseResource.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&IopDatabaseResource;
  IopDatabaseResource.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&IopDatabaseResource;
  IopDatabaseResource.SharedWaiters = 0LL;
  IopDatabaseResource.ExclusiveWaiters = 0LL;
  IopDatabaseResource.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v9 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v11 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
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
    IopDatabaseResource.CreatorBackTraceIndex = v10;
  }
  else
  {
    IopDatabaseResource.CreatorBackTraceIndex = 0LL;
  }
  HIDWORD(IopDatabaseResource.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&IopDatabaseResource);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopDatabaseResource, 0, 0);
  if ( (unsigned __int64)&IopSecurityResource < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&IopSecurityResource) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&IopSecurityResource, retaddr);
  }
  memset_0(&IopSecurityResource.OwnerTable, 0, 0x50uLL);
  IopSecurityResource.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&IopSecurityResource;
  IopSecurityResource.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&IopSecurityResource;
  IopSecurityResource.SharedWaiters = 0LL;
  IopSecurityResource.ExclusiveWaiters = 0LL;
  IopSecurityResource.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v14 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v16 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
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
    IopSecurityResource.CreatorBackTraceIndex = v15;
  }
  else
  {
    IopSecurityResource.CreatorBackTraceIndex = 0LL;
  }
  HIDWORD(IopSecurityResource.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&IopSecurityResource);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&IopSecurityResource, 0, 0);
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
    v19 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v21 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
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
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&IopCrashDumpLock);
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
    v24 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v26 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
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
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&IopLiveDumpLock);
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
  IopFilesystemDatabaseShutdownRundown.Count = 0LL;
  qword_140F85358 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140F85368 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140F85378 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140F85388 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140F85398 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140F853B8 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140F853C8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140F853D8 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140F853E8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = &IopFsNotifyChangeQueueHead;
  qword_140F853F8 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  *(_QWORD *)&IopPerfIoTrackingLock.Header.Lock = 0LL;
  IoStatisticsLock = 0LL;
  IopPerfIoTrackingLock.Header.WaitListHead.Flink = 0LL;
  *(_OWORD *)&IopPerfIoTrackingLock.Header.WaitListHead.Blink = 0LL;
  if ( (unsigned int)Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline() )
    LODWORD(IopPerfIoTrackingLock.QuantumTarget) |= 1u;
  if ( (unsigned int)Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline() )
    LODWORD(IopPerfIoTrackingLock.QuantumTarget) |= 2u;
  *(_DWORD *)&IopPerfIoTrackingLock.UserAffinityPrimaryGroup = 0;
  IopIrpStackProfilerFlags = 0;
  v30 = __rdtsc() >> 4;
  v31 = 0;
  *(_DWORD *)&IopPerfIoTrackingLock.SharedComputeUnitsUsed = v30 % 0x64 + 10;
  if ( !LODWORD(IopPerfIoTrackingLock.AffinityVersion) )
  {
    LODWORD(IopPerfIoTrackingLock.AffinityVersion) = 14;
    v31 = 1;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !HIDWORD(IopPerfIoTrackingLock.AffinityVersion) )
  {
    HIDWORD(IopPerfIoTrackingLock.AffinityVersion) = 4;
    IopIrpStackProfilerFlags = v31 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)Object);
  ExInitializeSystemLookasideList((__int64)&IopCompletionLookasideList, 512, 56, 544236361, SHIWORD(Object[0]));
  ExInitializeSystemLookasideList((__int64)&IopLargeIrpLookasideList, 512, SDWORD1(v73), 1819308617, SWORD2(Object[0]));
  ExInitializeSystemLookasideList((__int64)&IopMediumIrpLookasideList, 512, v73, 1836085833, SWORD1(Object[0]));
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(Object[1]),
    1936749129,
    (__int16)Object[0]);
  ExInitializeSystemLookasideList((__int64)&IopMdlLookasideList, 512, SDWORD2(v73), 543974477, (__int16)Object[1]);
  ExInitializeNPagedLookasideListInternal((__int64)&IopSafeCompletionLookasideList, 0LL, 0LL, 512, 32, 1934978889, 0, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideListInternal((__int64)&IopOplockFoExtLookasideList, 0LL, 0LL, 512, 48, 1950576719, 0, 0);
  ResultLength = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v33 = 0LL;
    do
    {
      IoInitializeProcessor(KiProcessorBlock[v33], Object);
      v33 = ResultLength + 1;
      ResultLength = v33;
    }
    while ( (unsigned int)v33 < ActiveProcessorCount );
  }
  IopErrorLogLock = 0LL;
  *(_QWORD *)&IopPerfIoTrackingLock.AffinityPrimaryGroup = &IopPerfIoTrackingLock.Affinity;
  IopPerfIoTrackingLock.Affinity = (_KAFFINITY_EX *)&IopPerfIoTrackingLock.Affinity;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    LODWORD(IopInitFailCode) = 1;
    return -1073741823;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopPerfIoTrackingLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)0x7D000000190LL;
    IopPerfIoTrackingLock.WaitBlock[0].Thread = (struct _KTHREAD *)IopIrpStackProfilerDpcRoutine;
    IopIrpStackProfilerFlags |= 4u;
    LODWORD(IopPerfIoTrackingLock.WaitBlock[0].WaitListEntry.Flink) = 275;
    IopPerfIoTrackingLock.WaitBlock[0].Object = 0LL;
    IopPerfIoTrackingLock.WaitBlock[1].WaitListEntry.Blink = 0LL;
    *(_QWORD *)&IopPerfIoTrackingLock.WaitBlockFill11[16] = 0LL;
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.PriorityFloorCounts[16];
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
    v36 = NtQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            IoInitSystem_valueBuffer,
            0x20u,
            &ResultLength) < 0
       || dword_140FFC9EC != 4
       || dword_140FFC9F4 == 4;
    IopErrorLogDisabledThisBoot = v36;
    ObCloseHandle(KeyHandle, 0);
  }
  *(_QWORD *)&IopPerfIoTrackingLock.WaitBlockFill11[160] = 9LL;
  IopPerfIoTrackingLock.WaitBlock[1].Thread = (struct _KTHREAD *)&IopPerfIoTrackingLock.WaitBlockFill11[64];
  *(_QWORD *)&IopPerfIoTrackingLock.WaitBlockFill11[64] = &IopPerfIoTrackingLock.WaitBlockFill11[64];
  IopPerfIoTrackingLock.WaitBlock[2].Thread = (struct _KTHREAD *)IopTimerDispatch;
  IopPerfIoTrackingLock.WaitBlock[2].Object = &IopPerfIoTrackingLock.WaitBlockFill11[80];
  IopPerfIoTrackingLock.Spare18 = (unsigned __int64)&IopPerfIoTrackingLock.WaitBlock[3].Thread;
  IopPerfIoTrackingLock.WaitBlock[3].Thread = (struct _KTHREAD *)&IopPerfIoTrackingLock.WaitBlockFill11[168];
  IopPerfIoTrackingLock.UserAffinity = (_KAFFINITY_EX *)&IopPerfIoTrackingLock.Process;
  IopPerfIoTrackingLock.Process = (_KPROCESS *)&IopPerfIoTrackingLock.Process;
  IopPerfIoTrackingLock.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)IopHardErrorThread;
  *(_QWORD *)&IopPerfIoTrackingLock.SchedulerApc.Type = &IopPerfIoTrackingLock.SavedApcStateFill[40];
  *(_QWORD *)&IopPerfIoTrackingLock.SavedApcStateFill[40] = &IopPerfIoTrackingLock.SavedApcStateFill[40];
  IopPerfIoTrackingLock.SchedulerApc.Reserved[0] = &IopPerfIoTrackingLock.SchedulerApcFill5[24];
  IopPerfIoTrackingLock.SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)&IopPerfIoTrackingLock.SchedulerApcFill5[24];
  IopTimerLock = 0LL;
  *(_DWORD *)&IopPerfIoTrackingLock.WaitBlockFill11[96] = 275;
  IopPerfIoTrackingLock.WaitBlock[3].WaitListEntry.Blink = 0LL;
  *(_QWORD *)&IopPerfIoTrackingLock.WaitBlockFill11[112] = 0LL;
  IopPerfIoTrackingLock.LastXStateSaveDebugInfo = 0LL;
  IopPerfIoTrackingLock.QueuePriority = 0;
  LOWORD(IopPerfIoTrackingLock.NextProcessor) = 0;
  *((_BYTE *)&IopPerfIoTrackingLock.1 + 3) = 0;
  IopPerfIoTrackingLock.SavedApcState.Process = 0LL;
  IopPerfIoTrackingLock.SavedApcState.ApcListHead[0].Blink = 0LL;
  IopPerfIoTrackingLock.SchedulerApc.Thread = 0LL;
  IopPerfIoTrackingLock.SchedulerApcFill3[16] = 5;
  IopPerfIoTrackingLock.SchedulerApcFill3[18] = 8;
  *(_DWORD *)&IopPerfIoTrackingLock.SchedulerApcFill5[20] = 0;
  *(_DWORD *)&IopPerfIoTrackingLock.SchedulerApcFill5[40] = 0x7FFFFFFF;
  IopPerfIoTrackingLock.SchedulerApcFill3[48] = 0;
  if ( (unsigned int)(IopKeepAliveTimeMs - 1000) > 0x2328 )
    IopKeepAliveTimeMs = 5000;
  *(_QWORD *)&IopPerfIoTrackingLock.SchedulerApcFill5[80] = 0LL;
  IopPerfIoTrackingLock.SchedulerApc.SystemArgument2 = IopKeepAliveWorker;
  IopPerfIoTrackingLock.SchedulerApc.NormalContext = 0LL;
  IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&IopPerfIoTrackingLock.SuspendEvent;
  *(_QWORD *)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock = &IopPerfIoTrackingLock.SuspendEvent;
  IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink = 0LL;
  IopPerfIoTrackingLock.AbWaitEntryCount = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v37 = NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v37 < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 26;
    return v37;
  }
  Object[0] = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, Object, 0LL);
  PspSiloMonitorLock.ExtendedFeatureDisableMask = (unsigned __int64)Object[0];
  *(_QWORD *)&IopPerfIoTrackingLock.PriorityFloorCounts[24] = &IopPerfIoTrackingLock.PriorityFloorCounts[16];
  *(_QWORD *)&IopPerfIoTrackingLock.PriorityFloorCounts[16] = &IopPerfIoTrackingLock.PriorityFloorCounts[16];
  IopPerfIoTrackingLock.OtherOperationCount = (__int64)&IopPerfIoTrackingLock.WriteOperationCount;
  IopPerfIoTrackingLock.WriteOperationCount = (__int64)&IopPerfIoTrackingLock.WriteOperationCount;
  IopPerfIoTrackingLock.QueuedScb = (_KSCB *)&IopPerfIoTrackingLock.OtherTransferCount;
  IopPerfIoTrackingLock.OtherTransferCount = (__int64)&IopPerfIoTrackingLock.OtherTransferCount;
  *(_WORD *)&IopPerfIoTrackingLock.PriorityFloorCounts[8] = 0;
  IopPerfIoTrackingLock.PriorityFloorCounts[10] = 6;
  *(_DWORD *)&IopPerfIoTrackingLock.PriorityFloorCounts[12] = 0;
  LOWORD(IopPerfIoTrackingLock.ReadOperationCount) = 0;
  BYTE2(IopPerfIoTrackingLock.ReadOperationCount) = 6;
  HIDWORD(IopPerfIoTrackingLock.ReadOperationCount) = 0;
  LOWORD(IopPerfIoTrackingLock.WriteTransferCount) = 1;
  BYTE2(IopPerfIoTrackingLock.WriteTransferCount) = 6;
  HIDWORD(IopPerfIoTrackingLock.WriteTransferCount) = 1;
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
  v37 = IopInitializePlugPlayServices(Context, 0LL);
  if ( v37 < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 4;
    return v37;
  }
  if ( v3 )
    WheaSelLogCheckPoint(8u, 1u);
  KseInitialize(Context, 0LL);
  PoInitDriverServices();
  guard_dispatch_icall_no_overrides(v39, v38);
  PnpMarkHalDeviceNode(0LL);
  if ( !(unsigned __int8)WMIInitialize(0LL, Context) )
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
  LODWORD(Object[0]) = 0;
  if ( RtlGetNtProductType((PNT_PRODUCT_TYPE)Object) && LODWORD(Object[0]) == 1 )
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
  EtwInitialize(1u, (__int64)Context);
  result = EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IopPerfIoTrackingLock.NpxState);
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
        stru_140E366D8.FirstArgument = &unk_140E09FE8;
        if ( *(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[76]
          && stru_140E366D8.FirstArgument
          && *(_DWORD *)stru_140E366D8.FirstArgument
          && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000080LL) )
        {
          MiLogBadMapper(v47, 0LL, -1, 0LL);
        }
        EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06CD8, 0LL, 0LL);
        IopInitializeDumpPolicySettings(1);
        TlgRegisterAggregateProvider((__int64)&dword_140E06D58);
        SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2880LL));
        BootApplicationPersistentDataProcess(1);
        KdInitialize(2LL, 0LL, &KdpContext);
        KeInitSystem(2LL);
        if ( !IopErrorLogDisabledThisBoot )
        {
          v49 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
          if ( (_KAFFINITY_EX **)IopPerfIoTrackingLock.Affinity == &IopPerfIoTrackingLock.Affinity )
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
        WheaInitialize(Context, 0LL);
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
          McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
        if ( v3 )
          WheaSelLogCheckPoint(8u, 4u);
        result = IopStoreArcInformation(Context);
        if ( result >= 0 )
        {
          v37 = IopInitializePlugPlayServices(Context, 1LL);
          if ( v37 < 0 )
          {
            HeadlessKernelAddLogEntry();
            LODWORD(IopInitFailCode) = 5;
            return v37;
          }
          memset_0(IopPerfIoTrackingLock.TracingPrivate, 0, 0x68uLL);
          IopPerfIoTrackingLock.TracingPrivate[0] = (unsigned __int64)IopPerfIoTrackingLock.TracingPrivate;
          IopPerfIoTrackingLock.KernelShadowStack = IopCompareIosbRanges;
          IopPerfIoTrackingLock.KernelShadowStackLimit.AllFields = 0LL;
          IopPerfIoTrackingLock.KernelShadowStackInitial = IopAllocateGenericTableEntry;
          LODWORD(IopPerfIoTrackingLock.Spare35[1]) = 1;
          IopPerfIoTrackingLock.KernelShadowStackBase = IopFreeGenericTableEntry;
          IopPerfIoTrackingLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)&IopPerfIoTrackingLock.ResourceIndex;
          *(_QWORD *)&IopPerfIoTrackingLock.ResourceIndex = &IopPerfIoTrackingLock.ResourceIndex;
          *(_QWORD *)&IopPerfIoTrackingLock.Spare36 = 0LL;
          LODWORD(IopPerfIoTrackingLock.SystemAffinityTokenListHead.Next) = 0;
          LOWORD(IopPerfIoTrackingLock.IptSaveArea) = 1;
          BYTE2(IopPerfIoTrackingLock.IptSaveArea) = 6;
          HIDWORD(IopPerfIoTrackingLock.IptSaveArea) = 0;
          KitpInitAitSampleRate(Context);
          if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, (PREGHANDLE)&ExpUuidLock.Header.WaitListHead) < 0 )
            ExpUuidLock.Header.WaitListHead.Flink = 0LL;
          KseInitialize(Context, 1LL);
          result = HvlPhase2Initialize((__int64)Context);
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
            qword_140F84D88 = (__int64)&ActiveConnectList;
            ActiveConnectList = (__int64)&ActiveConnectList;
            ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.Size = 6;
            ActiveConnectListLock.Header.SignalState = 1;
            IopQueryPassiveInterruptRegistryOptions();
            qword_140F84D58 = (__int64)&PassiveInterruptList;
            PassiveInterruptList = (__int64)&PassiveInterruptList;
            PassiveInterruptListLock = 0LL;
            KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
            result = IopCreatePassiveInterruptRealtimeThreads(v50);
            if ( result >= 0 )
            {
              SecureDump_PrepareForInit(v51, v69);
              if ( ForceDumpDisabled || v69[0] || !AllowCrashDump )
                CapsuleDumpAllowed = 0;
              else
                IopInitDumpCapsuleSupport();
              if ( v3 )
                WheaSelLogCheckPoint(8u, 0x106u);
              if ( HIDWORD(PspSiloMonitorLock.KernelStack) )
                EtwTraceLeapSecondDataParseFailure(SHIDWORD(PspSiloMonitorLock.KernelStack));
              EtwTraceLeapSecondDataUpdate(
                0,
                (unsigned __int8)ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink,
                HIDWORD(ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink),
                0);
              v78[0] = 65542LL;
              Object[1] = &IopIoRateHostTable;
              v78[2] = 512LL;
              v78[1] = Object;
              LODWORD(Object[0]) = 1;
              v78[3] = 0LL;
              v78[4] = 0LL;
              if ( (int)ExRegisterHost(&IopIoRateExtensionHost, v52, (unsigned __int16 *)v78) < 0 )
                IopIoRateExtensionHost = 0LL;
              *(_QWORD *)&PsAltSystemCallRegistrationLock.Header.Lock = 0LL;
              stru_140FC11F0.QueueListEntry.Blink = (struct _LIST_ENTRY *)PsPicoAltSystemCallDispatch;
              IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
              if ( (Context[33] & 2) != 0 )
                IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
              if ( v3 )
                WheaSelLogCheckPoint(8u, 0x206u);
              if ( (*(_DWORD *)(Context[30] + 132LL) & 0x100000) != 0 )
              {
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
                inited = IopInitCrashDumpDuringSysInit(Context);
                v57 = inited;
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0q_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                    v56,
                    inited);
                if ( v3 )
                  WheaSelLogCheckPoint(0x4Fu, v57);
                if ( ExpSysDbgLock.SchedulerApc.ApcListEntry.Blink )
                  guard_dispatch_icall_no_overrides(v55, v54);
              }
              v37 = IopInitializeBootDrivers(Context, &v77);
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
              v37 = MmRegisterHotPatches(Context);
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
              if ( v37 < 0 )
              {
                LODWORD(IopInitFailCode) = 21;
                return v37;
              }
              if ( !(unsigned __int8)PoInitSystem(2LL, Context, v58) )
                KeBugCheck(0xA0u);
              if ( v3 )
                WheaSelLogCheckPoint(8u, 7u);
              SmInitSystem(2, v59, v60, v61);
              EtwInitialize(2u, (__int64)Context);
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
              v62 = IopInitCrashDumpDuringSysInit(Context);
              v64 = v62;
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                McTemplateK0q_EtwWriteTransfer(
                  IoMgrProvider_Context,
                  (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                  v63,
                  v62);
              if ( v3 )
                WheaSelLogCheckPoint(0x50u, v64);
              if ( v64 < 0 )
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
              v65 = NtGlobalFlag;
              NtGlobalFlag |= 0x40000u;
              SystemDlls = PsLocateSystemDlls();
              NtGlobalFlag = v65;
              v67 = SystemDlls;
              if ( SystemDlls >= 0 )
              {
                MmInitializeImageViewExtension(1LL);
                PfSnBeginBootPhase(0);
                if ( !(unsigned __int8)IopReassignSystemRoot(Context, v76) )
                {
                  HeadlessKernelAddLogEntry();
                  LODWORD(IopInitFailCode) = 9;
                  return -1073741823;
                }
                if ( !(unsigned __int8)IopProtectSystemPartition(Context) )
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
                  Object[0] = 0LL;
                  if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, Object, 0LL) >= 0 )
                  {
                    PpPagePathAssign((struct _FILE_OBJECT *)Object[0]);
                    ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
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
                    v68,
                    1);
                WheaInitialize(Context, 1LL);
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
                if ( v3 )
                  WheaSelLogCheckPoint(8u, 9u);
                return 0;
              }
              else
              {
                HeadlessKernelAddLogEntry();
                result = v67;
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
