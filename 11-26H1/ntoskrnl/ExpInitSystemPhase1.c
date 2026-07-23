/*
 * XREFs of ExpInitSystemPhase1 @ 0x140CEA720
 * Callers:
 *     ExInitSystem @ 0x140CEA21C (ExInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     RtlGetProductInfo @ 0x140621260 (RtlGetProductInfo.c)
 *     ExInitializeProcessor @ 0x1406CF4B0 (ExInitializeProcessor.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x1406D1AD8 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpHeapInitPhase1 @ 0x1406D7018 (ExpHeapInitPhase1.c)
 *     ExpSaInitialize @ 0x1406D7200 (ExpSaInitialize.c)
 *     UcInitialize @ 0x14071752C (UcInitialize.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x14083CD58 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExpPrmInitialization @ 0x140CEAA14 (ExpPrmInitialization.c)
 *     ExpInitializeCallbacks @ 0x140CEC404 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140CEC674 (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140CEC8C4 (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140CECA64 (ExpEventInitialization.c)
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140CECF40 (ExpSemaphoreInitialization.c)
 *     ExpInitializeSvm @ 0x140CECFE4 (ExpInitializeSvm.c)
 *     ExpWorkerFactoryInitialization @ 0x140CED3E0 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x140CED5C4 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140CED694 (ExpProfileInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140CED750 (ExpKeyedEventInitialization.c)
 *     ExpInitializeCrossVmIntegration @ 0x140CEDA8C (ExpInitializeCrossVmIntegration.c)
 *     ExpAeThresholdInitialization @ 0x140CEDB34 (ExpAeThresholdInitialization.c)
 */

char __fastcall ExpInitSystemPhase1(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v3; // ebx
  bool i; // di
  bool v5; // bl
  bool v6; // di
  bool v7; // bl
  char v8; // di
  char v9; // bl
  char v10; // di
  char v11; // bl
  char v12; // di
  char v13; // al
  char v14; // bl
  int v15; // eax
  bool v16; // cf
  char v17; // bl
  _QWORD *Pool2; // rax
  char v19; // bl
  char v20; // di
  int v21; // eax
  __int64 v22; // rdx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h]
  _QWORD v26[6]; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedProductType; // [rsp+90h] [rbp+20h] BYREF

  ExpSpinCycleCount = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    ExpSpinCycleCount = 10240;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline();
  PspSiloMonitorLock.WaitBlock[3].WaitListEntry.Flink = 0LL;
  ExpSysDbgLock.ApcState.ApcListHead[1].Blink = 0LL;
  *(_QWORD *)&ExpSysDbgLock.Header.Lock = 0LL;
  KiSystemServiceTraceCallbackLock.QuantumTarget = (unsigned __int64)&KiSystemServiceTraceCallbackLock.SListFaultAddress;
  ExpPushLockAllowImplicitUpgrade = IsEnabledDeviceUsageNoInline == 0;
  KiSystemServiceTraceCallbackLock.SListFaultAddress = &KiSystemServiceTraceCallbackLock.SListFaultAddress;
  *(_QWORD *)&ExpPlatformBinaryLock.Header.Lock = 0LL;
  v3 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v3 < (unsigned int)KeNumberProcessors_0; ++v3 )
    ExInitializeProcessor(KiProcessorBlock[v3], 0);
  v5 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v6 = (unsigned __int8)ExpMutantInitialization() != 0 && v5;
  v7 = (unsigned __int8)ExpAeThresholdInitialization() != 0 && v6;
  v8 = (unsigned __int8)ExpInitializeCallbacks() != 0 && v7;
  v9 = (unsigned __int8)ExpSemaphoreInitialization() != 0 ? v8 : 0;
  v10 = (unsigned __int8)ExpTimerInitialization() != 0 ? v9 : 0;
  v11 = ExpSaInitialize() != 0 ? v10 : 0;
  v12 = ExpHeapInitPhase1() != 0 ? v11 : 0;
  v13 = ExpProfileInitialization();
  *(_QWORD *)&ExpUuidLock.Header.Lock = 0LL;
  v14 = v13;
  ExpPlatformBinaryLock.Timer.DueTime.QuadPart = MEMORY[0xFFFFF78000000014];
  v15 = ExpKeyedEventInitialization();
  v16 = v14 != 0;
  v17 = 0;
  if ( v15 >= 0 )
    v17 = v16 ? v12 : 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x30uLL, 0x20666E57u);
  PspSiloMonitorLock.StackLimit = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 3148040LL;
    Pool2[2] = 0LL;
    Pool2[5] = 0LL;
    Pool2[3] = ExpWnfWorkItemRoutine;
    Pool2[4] = 0LL;
    Pool2[1] = 0LL;
    UcInitialize(2);
  }
  else
  {
    v17 = 0;
  }
  v19 = (unsigned __int8)ExpWin32Initialization() != 0 ? v17 : 0;
  v20 = 0;
  if ( (int)ExpWorkerFactoryInitialization() >= 0 )
    v20 = v19;
  v21 = ExpMicrocodeInitialization(1LL);
  if ( v21 < 0 && v21 != -1073741637 )
    v20 = 0;
  ExpPrmInitialization(*(_QWORD *)(a1 + 240) + 2600LL);
  ReturnedProductType = 0;
  v24 = 0LL;
  LODWORD(v25) = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)&v24)
    && MEMORY[0xFFFFF78000000264] != (_DWORD)v25
    && (MEMORY[0xFFFFF78000000264] != 2 || (_DWORD)v25 != 3) )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = v25;
  }
  v26[0] = 65537LL;
  v26[1] = &v24;
  v26[2] = 1LL;
  v26[3] = ExpPcwHostCallback;
  LODWORD(v24) = 1;
  v25 = 0LL;
  v26[4] = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v22, (unsigned __int16 *)v26) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeCrossVmIntegration();
  ExpInitializeSvm();
  return v20;
}
