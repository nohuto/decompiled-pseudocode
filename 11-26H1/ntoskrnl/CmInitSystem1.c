/*
 * XREFs of CmInitSystem1 @ 0x140CEEC2C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     ExInitializeLookasideListExInternal @ 0x140492B20 (ExInitializeLookasideListExInternal.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E0B10 (ExAllocateCacheAwarePushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpInitializeLoadOptions @ 0x1406E6368 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpMarkCurrentProfileDirty @ 0x140852334 (CmpMarkCurrentProfileDirty.c)
 *     CmpInitCallbacks @ 0x140856CAC (CmpInitCallbacks.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x1408571FC (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitSiloSupport @ 0x14085AF74 (CmpInitSiloSupport.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x14085D180 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeRegistryProcess @ 0x14085D3B4 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x14085D72C (CmpInitializeFreezeThaw.c)
 *     CmpVolumeManagerInitialize @ 0x14085D9B0 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeNameCache @ 0x14085F6C8 (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x140860218 (CmpInitSIDToHiveMapping.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140860480 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpInitializeDelayedCloseTable @ 0x140861A50 (CmpInitializeDelayedCloseTable.c)
 *     HvInitializeHashLibrary @ 0x140861C68 (HvInitializeHashLibrary.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x140861DC4 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1408622BC (CmpInitializeLightWeightTransactionType.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpInitializeKcbCache @ 0x14093E678 (CmpInitializeKcbCache.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpAddToHiveFileList @ 0x140B06E90 (CmpAddToHiveFileList.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B50A7C (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpCreateControlSet @ 0x140CEFB34 (CmpCreateControlSet.c)
 *     CmpCreateExtendedControlSets @ 0x140CF005C (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140CF0118 (CmpCreateHardwareProfiles.c)
 *     CmpCreateObjectTypes @ 0x140CF09C0 (CmpCreateObjectTypes.c)
 *     CmpCreateRegistryRoot @ 0x140CF0AAC (CmpCreateRegistryRoot.c)
 *     CmpInitializeDriverStores @ 0x140CF0F10 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHives @ 0x140CF16F4 (CmpInitializePreloadedHives.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140CF1BC0 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetNetworkValue @ 0x140CF1CE4 (CmpSetNetworkValue.c)
 *     CmpSetSystemValues @ 0x140CF1DD0 (CmpSetSystemValues.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140CF2C0C (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CF3188 (CmpInitializeMachineDependentConfiguration.c)
 *     CmFcInitSystem2 @ 0x140CF3EC8 (CmFcInitSystem2.c)
 *     CmpInitializeRegistryNames @ 0x140CF4090 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140CF42D0 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x140CF4358 (CmpInitializeTransactions.c)
 *     CmpInitializeHardwareConfiguration @ 0x140CF46A8 (CmpInitializeHardwareConfiguration.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  _DWORD *v2; // rsi
  __int64 v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int *v6; // rdi
  __int64 v7; // r15
  int ObjectTypes; // eax
  int v9; // eax
  int v10; // eax
  int Hive; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  int inited; // eax
  void *v17; // rdi
  NTSTATUS v18; // eax
  ULONG_PTR v19; // r15
  NTSTATUS v20; // eax
  ULONG_PTR v21; // r15
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // r15
  __int64 v26; // r8
  __int64 v27; // r9
  NTSTATUS v28; // eax
  ULONG_PTR v29; // r15
  int v30; // eax
  int ControlSet; // eax
  int v32; // eax
  ULONG_PTR v33; // rsi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int ExtendedControlSets; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  int v47[2]; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _KAFFINITY_EX BugCheckParameter4; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v50[116]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v47 = 0LL;
  memset(&BugCheckParameter4, 0, 56);
  memset_0(v50, 0, sizeof(v50));
  DestinationString = 0LL;
  memset_0(&BugCheckParameter4.StaticBitmap[9], 0, 0x1B0uLL);
  *(_OWORD *)&BugCheckParameter4.StaticBitmap[6] = 0LL;
  CmpInitializeThreadInfo(&BugCheckParameter4);
  CmpInitializeParseContext((__int64)v50);
  CmpContextListLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    BYTE6(NlsMbOemCodePageTag) = InitIsWinPEMode;
    BYTE4(NlsMbOemCodePageTag) = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( HIDWORD(WheapPfaLock.ThreadLock) )
    BYTE4(NlsMbOemCodePageTag) = 1;
  v2 = &unk_140E09850;
  v3 = 7LL;
  if ( BYTE4(NlsMbOemCodePageTag) )
  {
    v4 = &unk_140E09850;
    v5 = 7LL;
    do
    {
      if ( *((_QWORD *)v4 - 4) )
        *v4 |= 0x8000u;
      v4 += 46;
      --v5;
    }
    while ( v5 );
  }
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpKeyLockTracker.Timer.TimerListEntry.Blink = &CmpKeyLockTracker.Timer.TimerListEntry;
  CmpKeyLockTracker.Timer.TimerListEntry.Flink = &CmpKeyLockTracker.Timer.TimerListEntry;
  PspSiloMonitorLock.WaitBlock[2].Thread = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
  *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[112] = &PspSiloMonitorLock.WaitBlockFill11[112];
  CmpContextListLock.ApcState.ApcListHead[0] = 0uLL;
  CmpShutdownRundown.Count = 0LL;
  CmpHiveLoadUnloadRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  *(_QWORD *)&CmpKeyLockTracker.Timer.Processor = 0LL;
  CmpKeyLockTracker.Timer.DueTime.QuadPart = 0LL;
  CmpRegistryLock = (struct _KTHREAD *)ExAllocateCacheAwarePushLock(1);
  CmpKeyLockTracker.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&CmpKeyLockTracker.Timer;
  *(_QWORD *)&CmpKeyLockTracker.Timer.Header.Lock = &CmpKeyLockTracker.Timer;
  qword_140FD65D0 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  *((_DWORD *)&CmpKeyLockTracker.SwapListEntry + 2) = 1;
  CmpKeyLockTracker.Queue = 0LL;
  LODWORD(CmpKeyLockTracker.Teb) = 0;
  LOWORD(CmpKeyLockTracker.RelativeTimerBias) = 1;
  BYTE2(CmpKeyLockTracker.RelativeTimerBias) = 6;
  HIDWORD(CmpKeyLockTracker.RelativeTimerBias) = 0;
  CmpInitializeNameCache();
  ExInitializeLookasideListExInternal(
    &CmpKcbLookaside,
    (PVOID (__fastcall *)(int, SIZE_T, ULONG))CmpAllocatePoolLookaside,
    CmSiFreeMemory,
    1,
    0,
    0x138uLL,
    1651199299,
    0,
    0);
  CmpInitSIDToHiveMapping();
  *(_QWORD *)&WheapPfaLock.Timer.Header.Lock = CmpAdminSystemSecurityDescriptor();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitCallbacks();
  CmpInitializeMachineHiveLoadedCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeGlobalKeyLockTracker();
  CmpInitializeTransactions();
  CmpVolumeManagerInitialize();
  v6 = dword_140E09DFC;
  v7 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v6 - 3));
    *v6 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v6 += 6;
    --v7;
  }
  while ( v7 );
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v9 = CmpInitializeLightWeightTransactionType();
  if ( v9 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v9, 0LL);
  v10 = CmpInitializeRegistryProcess();
  if ( v10 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v10, 0LL);
  CmpAttachToRegistryProcess((PRKAPC_STATE)&BugCheckParameter4.StaticBitmap[2]);
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(
           &CmpMasterHive,
           0,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0x20000,
           0LL,
           0LL,
           0LL,
           0LL,
           (__int64)&BugCheckParameter4.StaticBitmap[9]);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)&BugCheckParameter4.StaticBitmap[9]);
  v12 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v12 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v12, 0LL);
  if ( (int)CmpCreateRegistryRoot() < 0 )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport(0LL, v13, v14, v15);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v17 = (void *)CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.648;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v17;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v18 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v19, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ThreadTimerDelay;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v17;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v20 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v21 = v20;
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v21, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.SchedulerAssist;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v17;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v50[0] = 65;
  v22 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v50,
          (__int64)&KeyHandle);
  v25 = v22;
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    CmpCleanupParseContext((__int64)v50, 0LL, v26, v27);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v25, 0LL);
  }
  CmpCleanupParseContext((__int64)v50, 0LL, v23, v24);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ReadTransferCount;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v17;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v28 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v29 = v28;
  if ( v28 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v29, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v30 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v30 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v30, 0LL);
  ControlSet = CmpCreateControlSet(L"SYSTEM", 0LL);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( ExpPlatformBinaryLock.CurrentRunTime )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x10u;
  if ( HIDWORD(WheapPfaLock.KernelStack) )
  {
    if ( WheapPfaLock.ExpectedRunTime )
    {
      do
      {
        *v2 |= 0x8000u;
        v2 += 46;
        --v3;
      }
      while ( v3 );
    }
    else
    {
      BYTE4(stru_140E098B8.SchedulingGroup) = 0;
      if ( !LODWORD(WheapPfaLock.KernelStack) )
      {
        LODWORD(stru_140E098B8.Timer.Header.WaitListHead.Flink) |= 0x8000u;
        *(_DWORD *)&stru_140E098B8.WaitBlockFill11[128] |= 0x8000u;
      }
      stru_140E098B8.PriorityFloorCounts[20] = 0;
      HIBYTE(stru_140E098B8.SchedulerAssistPriorityFloor) = 1;
    }
  }
  memset_0(&BugCheckParameter4.StaticBitmap[9], 0, 0x1B0uLL);
  v32 = CmpCreateHive(
          (ULONG_PTR *)v47,
          0,
          1,
          0,
          0LL,
          0LL,
          0LL,
          0x20000,
          0LL,
          0LL,
          0LL,
          0LL,
          (__int64)&BugCheckParameter4.StaticBitmap[9]);
  v33 = v32;
  if ( v32 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v33, (ULONG_PTR)&BugCheckParameter4.StaticBitmap[9]);
  }
  v34 = CmpLinkHiveToMaster(
          (unsigned __int16 *)&KiSystemServiceTraceCallbackLock.PriorityFloorSummary,
          0LL,
          *(__int64 *)v47,
          1,
          dword_140E09858,
          0,
          0LL,
          (__int64)v17,
          0LL,
          0LL,
          1,
          &BugCheckParameter4.StaticBitmap[9]);
  if ( v34 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v34, 0LL);
  CmpAddToHiveFileList(*(__int64 *)v47);
  ExFreePoolWithTag(v17, 0);
  qword_140E09848[0] = *(_QWORD *)v47;
  v35 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v35 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v35, 0LL);
  v36 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v36, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v38);
  v39 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v39 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v39, 0LL);
  v40 = CmpSetSystemValues(BugCheckParameter3);
  if ( v40 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v40, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v41 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v41 >= 0x68u )
  {
    if ( *(_QWORD *)(v41 + 96) )
    {
      v42 = CmpSetNetworkValue();
      if ( v42 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v42, 0LL);
    }
  }
  v43 = CmFcInitSystem2();
  if ( v43 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v43, 0LL);
  CmpDetachFromRegistryProcess((__int64)&BugCheckParameter4.StaticBitmap[2]);
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)&BugCheckParameter4.Count;
  return 1;
}
