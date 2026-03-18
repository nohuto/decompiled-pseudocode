/*
 * XREFs of CmInitSystem1 @ 0x140CE888C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     ExInitializeLookasideListExInternal @ 0x140498FD0 (ExInitializeLookasideListExInternal.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E7750 (ExAllocateCacheAwarePushLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpInitializeLoadOptions @ 0x1406E20E8 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084C024 (CmpMarkCurrentProfileDirty.c)
 *     CmpInitCallbacks @ 0x14085099C (CmpInitCallbacks.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x140850EEC (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitSiloSupport @ 0x140854C64 (CmpInitSiloSupport.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x140856DE8 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x14085739C (CmpInitializeFreezeThaw.c)
 *     CmpVolumeManagerInitialize @ 0x140857620 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeNameCache @ 0x140859338 (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x140859F24 (CmpInitSIDToHiveMapping.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14085A18C (CmpAdminSystemSecurityDescriptor.c)
 *     CmpInitializeDelayedCloseTable @ 0x14085B75C (CmpInitializeDelayedCloseTable.c)
 *     HvInitializeHashLibrary @ 0x14085B974 (HvInitializeHashLibrary.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x14085BAD0 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeLightWeightTransactionType @ 0x14085BFCC (CmpInitializeLightWeightTransactionType.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpHashUnicodeComponent @ 0x1408D1470 (CmpHashUnicodeComponent.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpInitializeKcbCache @ 0x14097C668 (CmpInitializeKcbCache.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmpAddToHiveFileList @ 0x140B05280 (CmpAddToHiveFileList.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B4E1EC (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpCreateControlSet @ 0x140CE9794 (CmpCreateControlSet.c)
 *     CmpCreateExtendedControlSets @ 0x140CE9CBC (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140CE9D78 (CmpCreateHardwareProfiles.c)
 *     CmpCreateObjectTypes @ 0x140CEA620 (CmpCreateObjectTypes.c)
 *     CmpCreateRegistryRoot @ 0x140CEA70C (CmpCreateRegistryRoot.c)
 *     CmpInitializeDriverStores @ 0x140CEAB70 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHives @ 0x140CEB354 (CmpInitializePreloadedHives.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140CEB820 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetNetworkValue @ 0x140CEB944 (CmpSetNetworkValue.c)
 *     CmpSetSystemValues @ 0x140CEBA30 (CmpSetSystemValues.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140CEC908 (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CECE84 (CmpInitializeMachineDependentConfiguration.c)
 *     CmFcInitSystem2 @ 0x140CEDB4C (CmFcInitSystem2.c)
 *     CmpInitializeRegistryNames @ 0x140CEDD14 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140CEDF54 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x140CEDFDC (CmpInitializeTransactions.c)
 *     CmpInitializeHardwareConfiguration @ 0x140CEE32C (CmpInitializeHardwareConfiguration.c)
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
  ULONG_PTR v23; // r15
  NTSTATUS v24; // eax
  ULONG_PTR v25; // r15
  int v26; // eax
  int ControlSet; // eax
  int v28; // eax
  ULONG_PTR v29; // rsi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int ExtendedControlSets; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  int v43[2]; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _KAFFINITY_EX BugCheckParameter4; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v46[116]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v43 = 0LL;
  memset(&BugCheckParameter4, 0, 56);
  memset_0(v46, 0, sizeof(v46));
  DestinationString = 0LL;
  memset_0(&BugCheckParameter4.StaticBitmap[9], 0, 0x1B0uLL);
  *(_OWORD *)&BugCheckParameter4.StaticBitmap[6] = 0LL;
  CmpInitializeThreadInfo(&BugCheckParameter4);
  CmpInitializeParseContext((__int64)v46);
  *(_QWORD *)&CmpCallbackListLock.ApcStateFill[40] = &IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    BYTE6(NlsMbOemCodePageTag) = InitIsWinPEMode;
    BYTE5(NlsMbOemCodePageTag) = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( HIDWORD(WheapPfaLock.StackBase) )
    BYTE5(NlsMbOemCodePageTag) = 1;
  v2 = &unk_140E09850;
  v3 = 7LL;
  if ( BYTE5(NlsMbOemCodePageTag) )
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
  *(_OWORD *)&CmpCallbackListLock.ApcStateFill[8] = 0uLL;
  CmpShutdownRundown.Count = 0LL;
  CmpHiveLoadUnloadRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  CmpKeyLockTracker.WaitBlock[0].WaitListEntry.Flink = 0LL;
  CmpKeyLockTracker.Timer.Dpc = 0LL;
  CmpRegistryLock = (struct _KTHREAD *)ExAllocateCacheAwarePushLock(1);
  CmpKeyLockTracker.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&CmpKeyLockTracker.Timer;
  *(_QWORD *)&CmpKeyLockTracker.Timer.Header.Lock = &CmpKeyLockTracker.Timer;
  qword_140FD55B8 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  *((_DWORD *)&CmpKeyLockTracker.SwapListEntry + 2) = 1;
  CmpKeyLockTracker.Queue = 0LL;
  LODWORD(CmpKeyLockTracker.Teb) = 0;
  LOWORD(CmpKeyLockTracker.RelativeTimerBias) = 1;
  BYTE2(CmpKeyLockTracker.RelativeTimerBias) = 6;
  HIDWORD(CmpKeyLockTracker.RelativeTimerBias) = 0;
  CmpInitializeNameCache();
  ExInitializeLookasideListExInternal(
    &CmpKcbLookaside.L.ListHead,
    (PVOID (__fastcall *)(int, SIZE_T, ULONG))CmpAllocatePoolLookaside,
    CmSiFreeMemory,
    1,
    0,
    0x138uLL,
    1651199299,
    0,
    0);
  CmpInitSIDToHiveMapping();
  WheapPfaLock.WaitStatus = (volatile __int64)CmpAdminSystemSecurityDescriptor();
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.SavedApcStateFill[32];
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.880;
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.OtherOperationCount;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v17;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v46[0] = 65;
  v22 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v46,
          (__int64)&KeyHandle);
  v23 = v22;
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    CmpCleanupParseContext((__int64)v46, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v23, 0LL);
  }
  CmpCleanupParseContext((__int64)v46, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ReadOperationCount;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v17;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v24 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v25 = v24;
  if ( v24 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v25, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v26 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v26, 0LL);
  ControlSet = CmpCreateControlSet(L"SYSTEM", 0LL);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( ExpPlatformBinaryLock.CurrentRunTime )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x10u;
  if ( HIDWORD(WheapPfaLock.CycleTime) )
  {
    if ( LODWORD(WheapPfaLock.CycleTime) )
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
      if ( !HIDWORD(WheapPfaLock.ThreadLock) )
      {
        LODWORD(stru_140E098B8.Timer.Header.WaitListHead.Flink) |= 0x8000u;
        *(_DWORD *)&stru_140E098B8.WaitBlockFill11[128] |= 0x8000u;
      }
      stru_140E098B8.PriorityFloorCounts[20] = 0;
      HIBYTE(stru_140E098B8.SchedulerAssistPriorityFloor) = 1;
    }
  }
  memset_0(&BugCheckParameter4.StaticBitmap[9], 0, 0x1B0uLL);
  v28 = CmpCreateHive(
          (ULONG_PTR *)v43,
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
  v29 = v28;
  if ( v28 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v29, (ULONG_PTR)&BugCheckParameter4.StaticBitmap[9]);
  }
  v30 = CmpLinkHiveToMaster(
          (unsigned __int16 *)&KiSystemServiceTraceCallbackLock.PriorityFloorCounts[24],
          0LL,
          *(__int64 *)v43,
          1,
          dword_140E09858,
          0,
          0LL,
          (__int64)v17,
          0LL,
          0LL,
          1,
          &BugCheckParameter4.StaticBitmap[9]);
  if ( v30 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v30, 0LL);
  CmpAddToHiveFileList(*(__int64 *)v43);
  ExFreePoolWithTag(v17, 0);
  qword_140E09848[0] = *(_QWORD *)v43;
  v31 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v31 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v31, 0LL);
  v32 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v32 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v32, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v34);
  v35 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v35 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v35, 0LL);
  v36 = CmpSetSystemValues(BugCheckParameter3);
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v36, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v37 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v37 >= 0x68u )
  {
    if ( *(_QWORD *)(v37 + 96) )
    {
      v38 = CmpSetNetworkValue();
      if ( v38 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v38, 0LL);
    }
  }
  v39 = CmFcInitSystem2();
  if ( v39 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v39, 0LL);
  CmpDetachFromRegistryProcess((__int64)&BugCheckParameter4.StaticBitmap[2]);
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)&BugCheckParameter4.Count;
  return 1;
}
