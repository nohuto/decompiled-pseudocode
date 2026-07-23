/*
 * XREFs of Phase1InitializationIoReady @ 0x140CB3060
 * Callers:
 *     Phase1Initialization @ 0x1407829A0 (Phase1Initialization.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 *     RtlpInitializeNonVolatileFlush @ 0x14050FBA0 (RtlpInitializeNonVolatileFlush.c)
 *     ExLogTimeZoneInformation @ 0x14051204C (ExLogTimeZoneInformation.c)
 *     InbvSetProgressBarSubset @ 0x140533100 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline @ 0x140578920 (Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline.c)
 *     VfClearVerifierSettings @ 0x140643E50 (VfClearVerifierSettings.c)
 *     VfUtilCrashEvent @ 0x14064431C (VfUtilCrashEvent.c)
 *     CarEtwCrashEvent @ 0x14064C4AC (CarEtwCrashEvent.c)
 *     CarInitLogging @ 0x14064CD54 (CarInitLogging.c)
 *     CarCleanup @ 0x14064D1D0 (CarCleanup.c)
 *     CarInit @ 0x14064D6BC (CarInit.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x14077E5F0 (TlgRegisterAggregateProvider.c)
 *     ExLookasideMgrsStart @ 0x140840B50 (ExLookasideMgrsStart.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     PsQuerySystemDllInfo @ 0x1409E8308 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x140A08E70 (PspReferenceSystemDll.c)
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     ExQueryBootEntropyInformation @ 0x140B6FF6C (ExQueryBootEntropyInformation.c)
 *     ExInitializeNls @ 0x140B700B4 (ExInitializeNls.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 *     PsInitSystem @ 0x140C85D24 (PsInitSystem.c)
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 *     VmInitSystem @ 0x140C86258 (VmInitSystem.c)
 *     InitSafeBoot @ 0x140CB1580 (InitSafeBoot.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
 *     StartFirstUserProcess @ 0x140D0E818 (StartFirstUserProcess.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 *     SaveNodeDistanceInformation @ 0x140D10214 (SaveNodeDistanceInformation.c)
 *     CmInitSystem2 @ 0x140D10B0C (CmInitSystem2.c)
 *     SeRmInitPhase1 @ 0x140D1143C (SeRmInitPhase1.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
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
  Driver = IoCreateDriver(ExpInternalDriverObjectName, ExpInternalDriverObjectEntry);
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
  LOBYTE(v7) = HIDWORD(WheapPfaLock.KernelStack) != 0;
  v8 = ExpInitializeStateSeparationPhase1(v7);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset(0LL, 100LL);
  if ( InitSafeBootMode )
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09170, 0LL, 0LL);
  if ( byte_140FC8BD8 )
    KasanInitSystem(a1, 2LL);
  ExLogTimeZoneInformation();
  sub_140A83AB0();
  if ( !(unsigned __int8)PsInitSystem(2, a1) )
    goto LABEL_39;
  SystemDllInfo = PsQuerySystemDllInfo(0);
  v15 = SystemDllInfo;
  if ( SystemDllInfo )
  {
    v16 = PspReferenceSystemDll(*(signed __int64 **)(SystemDllInfo - 8));
    stru_140E2D2D0.Padding[3] = *(_QWORD *)(v15 + 24);
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
  if ( (*(_DWORD *)(a1[30] + 132LL) & 2) == 0 && !InitSafeBootMode )
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
  ExSaPageGroupDescriptorArrayLock.ReadTransferCount = (__int64)PnpDriverObject;
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           &GUID_PRM_DEVICE,
           PnpDriverObject,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)ExpPrmNotifyInterfaceChange,
           0LL,
           (PVOID *)&ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[8]);
}
