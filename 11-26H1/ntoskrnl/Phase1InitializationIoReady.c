/*
 * XREFs of Phase1InitializationIoReady @ 0x140CAD020
 * Callers:
 *     Phase1Initialization @ 0x14077FEA0 (Phase1Initialization.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ExNotifyWithProcessing @ 0x140439330 (ExNotifyWithProcessing.c)
 *     RtlpInitializeNonVolatileFlush @ 0x140516130 (RtlpInitializeNonVolatileFlush.c)
 *     ExLogTimeZoneInformation @ 0x1405185DC (ExLogTimeZoneInformation.c)
 *     InbvSetProgressBarSubset @ 0x140530C00 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline @ 0x140576470 (Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline.c)
 *     VfClearVerifierSettings @ 0x140640270 (VfClearVerifierSettings.c)
 *     VfUtilCrashEvent @ 0x14064073C (VfUtilCrashEvent.c)
 *     CarEtwCrashEvent @ 0x1406488CC (CarEtwCrashEvent.c)
 *     CarInitLogging @ 0x140649174 (CarInitLogging.c)
 *     CarCleanup @ 0x1406495F0 (CarCleanup.c)
 *     CarInit @ 0x140649ADC (CarInit.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x14077B9B0 (TlgRegisterAggregateProvider.c)
 *     ExLookasideMgrsStart @ 0x14083A910 (ExLookasideMgrsStart.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PspReferenceSystemDll @ 0x140962FE8 (PspReferenceSystemDll.c)
 *     PsQuerySystemDllInfo @ 0x1409EBB38 (PsQuerySystemDllInfo.c)
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 *     ExQueryBootEntropyInformation @ 0x140B6CB9C (ExQueryBootEntropyInformation.c)
 *     ExInitializeNls @ 0x140B6CCE4 (ExInitializeNls.c)
 *     VfNotifyVerifierOfEvent @ 0x140C21340 (VfNotifyVerifierOfEvent.c)
 *     SmInitSystem @ 0x140C7F2E8 (SmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 *     BootApplicationPersistentDataProcess @ 0x140C7FBB0 (BootApplicationPersistentDataProcess.c)
 *     PsInitSystem @ 0x140C7FD24 (PsInitSystem.c)
 *     MmInitSystem @ 0x140C7FD84 (MmInitSystem.c)
 *     VmInitSystem @ 0x140C80258 (VmInitSystem.c)
 *     InitSafeBoot @ 0x140CAB540 (InitSafeBoot.c)
 *     KasanInitSystem @ 0x140CC7D20 (KasanInitSystem.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 *     StartFirstUserProcess @ 0x140D08548 (StartFirstUserProcess.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 *     SaveNodeDistanceInformation @ 0x140D09F44 (SaveNodeDistanceInformation.c)
 *     CmInitSystem2 @ 0x140D0A83C (CmInitSystem2.c)
 *     SeRmInitPhase1 @ 0x140D0B16C (SeRmInitPhase1.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 */

NTSTATUS __fastcall Phase1InitializationIoReady(_QWORD *a1, char a2)
{
  int Driver; // eax
  int v5; // eax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int inited; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // r8
  __int64 SystemDllInfo; // rax
  __int64 v15; // rsi
  ULONG_PTR v16; // rax
  bool v17; // bl
  _BYTE v19[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-30h]
  __int64 v21; // [rsp+B0h] [rbp+18h] BYREF

  RtlpInitializeNonVolatileFlush();
  Driver = IoCreateDriver(ExpInternalDriverObjectName, (unsigned __int64)ExpInternalDriverObjectEntry);
  if ( Driver < 0 )
    KeBugCheckEx(0x32u, Driver, 0xEuLL, 0LL, 0LL);
  if ( (unsigned int)Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = ExLookasideMgrsStart();
    if ( v5 < 0 )
      KeBugCheckEx(0x32u, v5, 0xFuLL, 1uLL, 0LL);
  }
  v6 = ExInitializeNls();
  if ( v6 < 0 )
    KeBugCheckEx(0x32u, v6, 7uLL, 0LL, 0LL);
  LOBYTE(v7) = HIDWORD(WheapPfaLock.CycleTime) != 0;
  v8 = ExpInitializeStateSeparationPhase1(v7);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset(0LL, 100LL);
  if ( (_DWORD)InitSafeBootMode )
    InitSafeBoot(a2);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07398, 0LL, 0LL);
  SmInitSystem(3, v10, v11, v12);
  VmInitSystem(2);
  MmInitSystem(2, (ULONG_PTR)a1);
  CcInitializeCacheManager(2);
  ObInitSystem(2LL);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1, v13) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  KeInitSystem(3LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09178, 0LL, 0LL);
  if ( byte_140FC7BE8 )
    KasanInitSystem(a1, 2LL);
  ExLogTimeZoneInformation();
  sub_140A7DC40();
  if ( !(unsigned __int8)PsInitSystem(2, a1) )
    goto LABEL_39;
  SystemDllInfo = PsQuerySystemDllInfo(0);
  v15 = SystemDllInfo;
  if ( SystemDllInfo )
  {
    v16 = PspReferenceSystemDll(*(signed __int64 **)(SystemDllInfo - 8));
    stru_140E2D150.Padding[3] = *(_QWORD *)(v15 + 24);
    if ( v16 )
      ObFastDereferenceObject(*(signed __int64 **)(v15 - 8), v16, 0x64537350u);
  }
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(3);
  if ( !(unsigned __int8)PsInitSystem(3, a1) )
LABEL_39:
    KeBugCheck(0x6Bu);
  TlgRegisterAggregateProvider((__int64)&dword_140E06B30);
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyWithProcessing(ExCbPhase1InitComplete, 0LL, 0, 0LL);
  if ( ViVerifierEnabled )
  {
    CarInitLogging();
    VfNotifyVerifierOfEvent(5);
  }
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  if ( (*(_DWORD *)(a1[30] + 132LL) & 2) == 0 && !(_DWORD)InitSafeBootMode )
  {
    v17 = ViVerifierEnabled == 0;
    CarInit();
    CarInitLogging();
    memset_0(v19, 0, 0x40uLL);
    v21 = 0LL;
    v20 = &v21;
    if ( VfUtilCrashEvent((__int64)v19) )
      CarEtwCrashEvent();
    if ( v17 )
      CarCleanup();
  }
  ExQueryBootEntropyInformation(0LL);
  if ( !(unsigned __int8)KeInitSystem(4LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  ExSaPageGroupDescriptorArrayLock.GlobalForegroundListEntry.Flink = (struct _LIST_ENTRY *)PnpDriverObject;
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           &GUID_PRM_DEVICE,
           PnpDriverObject,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)ExpPrmNotifyInterfaceChange,
           0LL,
           (PVOID *)&ExSaPageGroupDescriptorArrayLock.792);
}
