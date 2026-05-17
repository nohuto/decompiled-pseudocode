/*
 * XREFs of LdrpInitializeProcess @ 0x1800CF8B8
 * Callers:
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x180032E30 (RtlGetNtSystemRoot.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitializeHeapLogging @ 0x1800598A0 (RtlInitializeHeapLogging.c)
 *     SbObtainTraceHandle @ 0x1800647E0 (SbObtainTraceHandle.c)
 *     LdrpEnableParallelLoading @ 0x1800649F0 (LdrpEnableParallelLoading.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18006FA5C (LdrpEnableUMGLTracingStateSync.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     RtlControlStackTraceDataBase @ 0x180075780 (RtlControlStackTraceDataBase.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     RtlEncodePointer @ 0x18007E8D0 (RtlEncodePointer.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800818F4 (RtlInsertInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeKernel32Functions @ 0x1800858A8 (LdrpInitializeKernel32Functions.c)
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x180088BCC (RtlpInitializeThreadActivationContextStack.c)
 *     RtlSetBits @ 0x180092430 (RtlSetBits.c)
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800989AC (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     RtlpInitEnvironmentBlock @ 0x1800A0498 (RtlpInitEnvironmentBlock.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     RtlpInitCurrentDir @ 0x1800A5714 (RtlpInitCurrentDir.c)
 *     LdrpCorInitialize @ 0x1800BE60C (LdrpCorInitialize.c)
 *     LdrpInitializePolicy @ 0x1800C1DF0 (LdrpInitializePolicy.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C73C0 (LdrpFreeLoadContextOfNode.c)
 *     TpInitializePackage @ 0x1800CB1A4 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x1800CB280 (RtlCreateTagHeap.c)
 *     LdrpInitializeTeb @ 0x1800CF2D0 (LdrpInitializeTeb.c)
 *     LdrpAllocateModuleEntry @ 0x1800D1C60 (LdrpAllocateModuleEntry.c)
 *     LdrQueryImageFileExecutionOptions @ 0x1800D2EA0 (LdrQueryImageFileExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x1800D2EDC (RtlQueryApplicationKeyOption.c)
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 *     LdrpInitializeNlsInfo @ 0x1800D5244 (LdrpInitializeNlsInfo.c)
 *     RtlIsProcessorFeaturePresent @ 0x1800D5BC0 (RtlIsProcessorFeaturePresent.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D8074 (LdrpProtectAndRelocateImage.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800DB6CC (RtlRemoveInvertedFunctionTable.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800E2CEC (LdrpThreadTokenSetMainThreadToken.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x1800E36A8 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x1800E36D8 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlInitializeHistoryTable @ 0x1800E554C (RtlInitializeHistoryTable.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E81A0 (LdrpInitializeGraphRecurse.c)
 *     LdrpCaptureCriticalThunks @ 0x1800E85C4 (LdrpCaptureCriticalThunks.c)
 *     RtlpInitParameterBlock @ 0x1800E9634 (RtlpInitParameterBlock.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800E9CA4 (LdrpInitializeSmtDelayedSleep.c)
 *     LdrpInitializeProcessHeap @ 0x1800EBB8C (LdrpInitializeProcessHeap.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800ED158 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F8458 (LdrpAllocateSchedulerSharedData.c)
 *     LdrpInitParallelLoadingSupport @ 0x1800FBB44 (LdrpInitParallelLoadingSupport.c)
 *     LdrpInsertModuleToIndex @ 0x1800FBFF4 (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800FC320 (LdrpInitializeSnapsBuffer.c)
 *     LdrpInitializePatchData @ 0x1800FC550 (LdrpInitializePatchData.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FC5C0 (RtlpInitializeNonVolatileFlush.c)
 *     RtlNormalizeProcessParams @ 0x1800FD080 (RtlNormalizeProcessParams.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FF4BC (LdrpInitializeCfgScpHelpers.c)
 *     LdrpCorFixupImage @ 0x180100B5C (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x180108614 (LdrpCorValidateImage.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x18010B200 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     RtlpInitFeatureConfiguration @ 0x18010C9FC (RtlpInitFeatureConfiguration.c)
 *     Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline @ 0x180110090 (Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 *     RtlInitializeExceptionLog @ 0x180111294 (RtlInitializeExceptionLog.c)
 *     LdrpCheckAppDirType @ 0x1801154EC (LdrpCheckAppDirType.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     LdrpInsertDataTableEntry @ 0x180117FB0 (LdrpInsertDataTableEntry.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     LdrpCorProcessImports @ 0x18011D1A0 (LdrpCorProcessImports.c)
 *     LdrpIncludeAlternateForwarders @ 0x18012126C (LdrpIncludeAlternateForwarders.c)
 *     TpSetDefaultPoolCpuSets @ 0x180121A24 (TpSetDefaultPoolCpuSets.c)
 *     LdrpDoDebuggerBreak @ 0x180122678 (LdrpDoDebuggerBreak.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18015FA40 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180161650 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180161CB0 (NtQuerySymbolicLinkObject.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x180162D80 (InterlockedPushListSList.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  int v3; // r14d
  struct _TEB *v4; // r13
  _PEB *ProcessEnvironmentBlock; // rdi
  int v6; // r15d
  bool v7; // cc
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  wchar_t *Buffer; // rdx
  __int16 v10; // bx
  __int64 v11; // r12
  __int64 v12; // rcx
  int result; // eax
  _QWORD *v14; // rax
  char *v15; // rdx
  int v16; // ebx
  char v17; // al
  int v18; // eax
  int WowTebOffset; // ecx
  _DWORD *v20; // rax
  __int64 v21; // r13
  _DWORD *Config; // r15
  _QWORD *v23; // r8
  char v24; // al
  unsigned __int64 v25; // r14
  void *ProcessHeap; // r12
  __int64 v27; // rdx
  int v28; // r14d
  _RTL_USER_PROCESS_PARAMETERS *v29; // r13
  const wchar_t *NtSystemRoot; // rax
  __int16 v31; // r14
  const void *Heap_0; // rax
  __int16 v33; // r14
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int64 v37; // r15
  UNICODE_STRING DosPath; // xmm1
  _WORD *v39; // xmm0_8
  wchar_t *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  char v44; // r12
  unsigned __int64 v45; // r14
  __int64 v46; // rdx
  unsigned __int64 v47; // r15
  __int16 v48; // dx
  __int64 v49; // r8
  _WORD *v50; // rcx
  _WORD *v51; // rax
  __int16 v52; // dx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rcx
  int inited; // eax
  __int64 v57; // rax
  __int64 v58; // rcx
  char v59; // r12
  void *ImageBaseAddress; // rcx
  __int64 v61; // r15
  __int64 v62; // rcx
  int v63; // eax
  __int64 ModuleEntry; // rax
  unsigned __int64 *v65; // r14
  struct _TEB *v66; // r14
  __int64 v67; // rdx
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  struct _TEB *v71; // rcx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  _DWORD *v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // r8
  unsigned __int64 v87; // r9
  void (*PostProcessInitRoutine)(void); // rax
  int v94; // eax
  unsigned __int8 IsProcessorFeaturePresent; // al
  const char *v101; // rcx
  char i; // al
  char ArgList[8]; // [rsp+28h] [rbp-350h]
  char ArgLista[8]; // [rsp+28h] [rbp-350h]
  _QWORD *ArgListb; // [rsp+28h] [rbp-350h]
  char ArgListc[8]; // [rsp+28h] [rbp-350h]
  int v107; // [rsp+30h] [rbp-348h]
  __int64 v108; // [rsp+30h] [rbp-348h]
  __int64 v109; // [rsp+38h] [rbp-340h]
  int v110; // [rsp+50h] [rbp-328h] BYREF
  _BYTE v111[4]; // [rsp+54h] [rbp-324h] BYREF
  int v112; // [rsp+58h] [rbp-320h]
  int v113; // [rsp+5Ch] [rbp-31Ch]
  __int64 v114; // [rsp+60h] [rbp-318h] BYREF
  __int64 v115; // [rsp+68h] [rbp-310h] BYREF
  struct _TEB *v116; // [rsp+70h] [rbp-308h] BYREF
  __int128 v117; // [rsp+78h] [rbp-300h] BYREF
  __int64 v118; // [rsp+88h] [rbp-2F0h] BYREF
  HANDLE v119[2]; // [rsp+90h] [rbp-2E8h] BYREF
  UNICODE_STRING v120; // [rsp+A0h] [rbp-2D8h] BYREF
  __int64 v121; // [rsp+B0h] [rbp-2C8h] BYREF
  HANDLE v122; // [rsp+B8h] [rbp-2C0h] BYREF
  const void *v123[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  __int128 v124; // [rsp+D0h] [rbp-2A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-298h] BYREF
  __int64 v126; // [rsp+F0h] [rbp-288h]
  __m128i ImagePathName; // [rsp+100h] [rbp-278h] BYREF
  HANDLE Handle; // [rsp+110h] [rbp-268h] BYREF
  __int64 v129; // [rsp+118h] [rbp-260h]
  __m128i v130; // [rsp+120h] [rbp-258h] BYREF
  __int64 SystemInformation; // [rsp+130h] [rbp-248h] BYREF
  __int64 v132; // [rsp+138h] [rbp-240h] BYREF
  _DWORD *pShimData; // [rsp+140h] [rbp-238h]
  _QWORD v134[2]; // [rsp+148h] [rbp-230h] BYREF
  __int128 v135; // [rsp+158h] [rbp-220h] BYREF
  __int64 v136; // [rsp+168h] [rbp-210h]
  __int128 v137; // [rsp+170h] [rbp-208h] BYREF
  __int128 v138; // [rsp+180h] [rbp-1F8h]
  __int128 v139; // [rsp+190h] [rbp-1E8h]
  _QWORD v140[2]; // [rsp+1A0h] [rbp-1D8h] BYREF
  __int128 v141; // [rsp+1B0h] [rbp-1C8h]
  __int128 v142; // [rsp+1C0h] [rbp-1B8h]
  __int128 v143; // [rsp+1D0h] [rbp-1A8h]
  __int64 v144; // [rsp+1E0h] [rbp-198h]
  __m128i v145; // [rsp+1F0h] [rbp-188h] BYREF
  _BYTE *v146; // [rsp+200h] [rbp-178h]
  int v147; // [rsp+210h] [rbp-168h]
  int *v148; // [rsp+218h] [rbp-160h]
  _BYTE v149[128]; // [rsp+2C0h] [rbp-B8h] BYREF

  v126 = a2;
  v129 = a1;
  UnicodeString = 0LL;
  ImagePathName = 0LL;
  v130 = 0LL;
  v3 = 0;
  HIDWORD(v123[0]) = 0;
  v121 = 0LL;
  v120 = 0LL;
  v124 = 0LL;
  v132 = 0LL;
  Handle = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  *(_QWORD *)&v139 = 0LL;
  DWORD2(v139) = 0;
  v134[0] = 1441812LL;
  v134[1] = L"\\KnownDlls";
  v122 = 0LL;
  v119[0] = 0LL;
  v114 = 0LL;
  memset_thunk_772440563353939046(&v145, 0, 0xD0uLL);
  v117 = 0LL;
  memset_thunk_772440563353939046(v149, 0, 0x80uLL);
  SystemInformation = 0LL;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v4 = NtCurrentTeb();
  v116 = v4;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  LdrpInitializeTeb((__int64)v4);
  PebLdr = 88;
  v6 = 1;
  byte_1801CB884 = 1;
  qword_1801CB898 = (__int64)&qword_1801CB890;
  qword_1801CB890 = (__int64)&qword_1801CB890;
  qword_1801CB8A8 = (__int64)&qword_1801CB8A0;
  qword_1801CB8A0 = (__int64)&qword_1801CB8A0;
  qword_1801CB8B8 = (__int64)&qword_1801CB8B0;
  qword_1801CB8B0 = (__int64)&qword_1801CB8B0;
  byte_1801CB8C8 = 0;
  qword_1801CB8D0 = 0LL;
  ProcessEnvironmentBlock->Ldr = (_PEB_LDR_DATA *)&PebLdr;
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  SRWLockSpinCycleCount = 0;
  v7 = ProcessEnvironmentBlock->NumberOfProcessors <= 1;
  if ( ProcessEnvironmentBlock->NumberOfProcessors > 1 )
    SRWLockSpinCycleCount = 10240;
  ConditionVariableSpinCycleCount = 0;
  if ( !v7 )
    ConditionVariableSpinCycleCount = 10240;
  RtlpWaitOnAddressSpinCycleCount = 0;
  if ( !v7 )
    RtlpWaitOnAddressSpinCycleCount = 10240;
  RtlpInitFeatureConfiguration(1LL);
  RtlpSrwLockAllowImplicitUpgrade = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline() == 0;
  RtlpInitializeNonVolatileFlush();
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  Buffer = (wchar_t *)((char *)ProcessParameters->ImagePathName.Buffer + (unsigned __int64)ProcessParameters);
  if ( (ProcessParameters->Flags & 1) != 0 )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  *((_QWORD *)&v124 + 1) = Buffer;
  LOWORD(v124) = ProcessParameters->ImagePathName.Length;
  v10 = v124;
  WORD1(v124) = v124 + 2;
  if ( (unsigned __int16)v124 >= 8u && *Buffer == 92 )
  {
    if ( Buffer[1] == 63 && Buffer[2] == 63 && Buffer[3] == 92 )
    {
      LOWORD(v124) = v124 - 8;
      WORD1(v124) = v10 - 6;
      *((_QWORD *)&v124 + 1) = Buffer + 4;
      ProcessParameters->ImagePathName.Length -= 8;
      ProcessParameters->ImagePathName.MaximumLength -= 8;
      ProcessParameters->ImagePathName.Buffer += 4;
    }
    v3 = 0;
  }
  v113 = 1;
  UseCOR = 0;
  LOBYTE(v6) = 0;
  v112 = v6;
  LODWORD(v115) = 0;
  RtlImageNtHeaderEx(3, (unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &v121);
  v11 = v121;
  LdrpAppHeaders = v121;
  v12 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v121 + 22) & 0x20) == 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      5780,
      (__int64)"LdrpInitializeProcess",
      0,
      "Secure processes must be large address aware\n");
    return -1073741637;
  }
  v14 = &LdrpHashTable;
  v15 = (char *)&LdrpHashTable;
  do
  {
    v14[1] = v15;
    *v14 = v15;
    v15 += 16;
    v14 += 2;
    --v12;
  }
  while ( v12 );
  v118 = 0LL;
  RtlImageNtHeaderEx(3, a2, 0LL, &v118);
  v16 = *(_DWORD *)(v118 + 80);
  RtlInsertInvertedFunctionTable(a2, v16);
  v135 = 0LL;
  v136 = 0LL;
  RtlpxLookupFunctionTable(a2, (__int64)&v135);
  LdrProtectMrdata(0);
  xmmword_1801E0450 = v135;
  qword_1801E0460 = v136;
  LODWORD(qword_1801E0460) = v16;
  RtlRemoveInvertedFunctionTable(a2);
  LdrProtectMrdata(1);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v17 = ((unsigned __int8)qword_1801E3508 >> 4) & 3;
  LdrpEnforceIntegrityContinuity = v17 == 1;
  LdrpAuditIntegrityContinuity = ((v17 - 1) & 0xFD) == 0;
  v18 = LdrpInitializeExecutionOptions(
          (unsigned int)&v124,
          (_DWORD)ProcessEnvironmentBlock,
          a2,
          (unsigned int)&v122,
          (__int64)v119,
          (__int64)&v114);
  v110 = v18;
  if ( v18 < 0 )
  {
    *(_DWORD *)ArgList = v4->ClientId.UniqueProcess;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      5929,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      *(_QWORD *)ArgList,
      v18);
    return v110;
  }
  if ( LdrpImageExpansionMitigation == 2 )
    LdrpIsHotPatchingEnabled = 0;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrinit.c",
    5987,
    (__int64)"LdrpInitializeProcess",
    2,
    "Initializing process 0x%p\n",
    v4->ClientId.UniqueProcess);
  pShimData = 0LL;
  WowTebOffset = v4->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v11 )
  {
    if ( *(_WORD *)(v11 + 24) == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v6) = 1;
      v112 = v6;
      v3 = 1;
      result = LdrpCorFixupImage(ProcessEnvironmentBlock->ImageBaseAddress);
      if ( result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v20 = RtlImageDirectoryEntryToData((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 1, 0xEu, &v118);
    if ( v20 )
    {
      UseCOR = 1;
      v6 = (unsigned __int8)v6;
      if ( (v20[4] & 1) != 0 )
        v6 = 1;
      v112 = v6;
    }
  }
  LdrpSystemDllBase = v126;
  if ( !UseWOW64 )
    pShimData = ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout;
  v21 = RtlNormalizeProcessParams(ProcessEnvironmentBlock->ProcessParameters);
  ImagePathName = *(__m128i *)(v21 + 96);
  if ( UseWOW64 || UseCOR && v3 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfigEx((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress);
  if ( Config )
  {
    if ( *Config >= 0x10u )
      ProcessEnvironmentBlock->NtGlobalFlag &= ~Config[3];
    if ( *Config >= 0x14u )
      ProcessEnvironmentBlock->NtGlobalFlag |= Config[4];
    if ( *Config >= 0x18u && Config[5] )
      RtlpTimeout.QuadPart = -10000LL * (int)Config[5];
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    RtlpTimeoutDisable = 1;
  RtlFailedCriticalDebugAllocations = 0;
  if ( ((unsigned __int8)&RtlCriticalSectionDebugSList & 0xF) != 0 )
    goto LABEL_280;
  RtlCriticalSectionDebugSList = 0LL;
  v23 = &RtlpStaticDebugInfo;
  do
  {
    *v23 = v23 + 6;
    v23 += 6;
  }
  while ( v23 <= qword_1801CD140 );
  *v23 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, &RtlpStaticDebugInfo, &unk_1801CD170, 8LL);
  dword_1801C7220 = 64;
  qword_1801C7228 = (__int64)ProcessEnvironmentBlock->TlsBitmapBits;
  dword_1801C7210 = 1024;
  qword_1801C7218 = (__int64)ProcessEnvironmentBlock->TlsExpansionBitmapBits;
  ProcessEnvironmentBlock->TlsBitmap = (_RTL_BITMAP *)&dword_1801C7220;
  ProcessEnvironmentBlock->TlsExpansionBitmap = (_RTL_BITMAP *)&dword_1801C7210;
  *(_BYTE *)qword_1801C7228 |= 1u;
  memset_thunk_772440563353939046(&RtlpFlsContext, 0, 0x60uLL);
  xmmword_1801C6E38 = 0LL;
  xmmword_1801C6E48 = 0LL;
  xmmword_1801C6E58 = 0LL;
  xmmword_1801C6E68 = 0LL;
  qword_1801C6E80 = (__int64)&qword_1801C6E78;
  qword_1801C6E78 = (__int64)&qword_1801C6E78;
  if ( UseWOW64 )
    RtlSetBits((__int64)&dword_1801C7220, 0, 0x13u);
  RtlSetBits((__int64)&dword_1801C7220, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v24 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    LODWORD(v118) = 24;
    if ( (int)LdrQueryImageFileExecutionOptions(
                (unsigned int)&v124,
                (unsigned int)L"StackTraceDatabaseSizeInMb",
                4,
                (unsigned int)&v118,
                4,
                0LL) >= 0
      && (unsigned int)v118 >= 0x18 )
    {
      if ( (unsigned int)v118 <= 0x80 )
        v25 = (unsigned int)((_DWORD)v118 << 20);
      else
        v25 = 0x8000000LL;
    }
    else
    {
      v25 = 25165824LL;
    }
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      6236,
      (__int64)"LdrpInitializeProcess",
      2,
      "Stack trace database size is %Id Mb\n",
      v25 >> 20);
    v135 = 0uLL;
    v136 = v25;
    RtlControlStackTraceDataBase(0, 24, &v135);
    v24 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v24 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0, 0);
  if ( result < 0 )
    return result;
  ProcessEnvironmentBlock->FastPebLock = (_RTL_CRITICAL_SECTION *)&FastPebLock;
  result = RtlInitializeHeapManager(&v124);
  if ( result < 0 )
    return result;
  if ( (((unsigned __int64)qword_1801E3500 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1LL, 0LL);
  if ( (int)LdrpInitializeProcessHeap(Config, v121, v21, &ProcessEnvironmentBlock->ProcessHeap) < 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      6309,
      (__int64)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    return -1073741801;
  }
  ProcessHeap = ProcessEnvironmentBlock->ProcessHeap;
  RtlpInitFeatureConfiguration(2LL);
  if ( (unsigned int)Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline() )
    LdrpInitializeSnapsBuffer();
  RtlInitializeCriticalSectionEx((__int64)&LdrpEnclaveListLock, 0, 0);
  qword_1801CD228 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v116);
  LdrpHeap = (__int64)ProcessHeap;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
LABEL_280:
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  if ( NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL) >= 0 )
    RtlpHypervisorSharedUserVa = SystemInformation;
  NtdllBaseTag = RtlCreateTagHeap(ProcessHeap, 0, (__int64)L"NTDLL!", L"!Process");
  result = TpInitializePackage();
  if ( result < 0 )
    return result;
  v27 = *(unsigned int *)(v21 + 1080);
  if ( (_DWORD)v27 )
    TpSetDefaultPoolCpuSets(*(void **)(v21 + 1072));
  v28 = *(_DWORD *)(v21 + 1084);
  if ( v28 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock, v27);
    TppPoolpGlobalPoolMaxThreadsOverride = v28;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( !UseWOW64 && !LdrpIsSecureProcess )
    LdrpEnableUMGLTracingStateSync();
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C5700);
  EtwEventRegister((struct _SLIST_ENTRY *)&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    &UserDiagnosticGuid,
    (_SLIST_ENTRY *)UserDiagnosticProviderCallback,
    0LL,
    (unsigned __int64 *)&g_hUserDiagnosticProvider);
  RtlInitializeHeapLogging();
  result = RtlpInitEnvironmentBlock();
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  if ( result < 0 )
    return result;
  v29 = ProcessEnvironmentBlock->ProcessParameters;
  ImagePathName = (__m128i)v29->ImagePathName;
  *((_QWORD *)&v124 + 1) = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( v122 || v119[0] )
  {
    v109 = 0LL;
    if ( (int)RtlQueryApplicationKeyOption(
                v119[0],
                (_DWORD)v122,
                (unsigned int)L"DebugProcessHeapOnly",
                4,
                (__int64)&v115,
                4) >= 0
      && dword_1801C5588
      && (_DWORD)v115 )
    {
      dword_1801C5588 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v120, NtSystemRoot);
  v31 = v120.Length + 40;
  Heap_0 = (const void *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return -1073741801;
  LOWORD(v123[0]) = 0;
  WORD1(v123[0]) = v31;
  v123[1] = Heap_0;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v123, (const void **)&v120);
  RtlAppendUnicodeStringToString((unsigned __int16 *)v123, &SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 2) == 0 )
  {
    LODWORD(v115) = 0;
    v33 = 48;
    LODWORD(v137) = 48;
    *((_QWORD *)&v137 + 1) = 0LL;
    DWORD2(v138) = 64;
    *(_QWORD *)&v138 = v134;
    v139 = 0LL;
    LdrProtectMrdata(0);
    v110 = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3LL, &v137);
    LdrProtectMrdata(1);
    if ( v110 < 0 )
    {
      v107 = v110;
      ArgListb = v134;
      v34 = 6604;
LABEL_113:
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        v34,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        ArgListb,
        v107,
        v109);
      return v110;
    }
    LODWORD(v137) = 48;
    *((_QWORD *)&v137 + 1) = LdrpKnownDllDirectoryHandle;
    DWORD2(v138) = 64;
    *(_QWORD *)&v138 = &unk_180172D30;
    v139 = 0LL;
    v35 = ZwOpenSymbolicLinkObject(&Handle, 1LL, &v137);
    v110 = v35;
    if ( v35 < 0 )
    {
      v107 = v35;
      ArgListb = &unk_180172D30;
      v34 = 6627;
      goto LABEL_113;
    }
    while ( 1 )
    {
      v37 = RtlAllocateHeap_0();
      if ( !v37 )
        return -1073741801;
      LdrpKnownDllPath = 0;
      word_1801CB822 = v33;
      qword_1801CB828 = v37;
      v36 = NtQuerySymbolicLinkObject(Handle, &LdrpKnownDllPath, &v115);
      v110 = v36;
      if ( v36 >= 0 )
        break;
      if ( v36 != -1073741789 )
      {
        *(_DWORD *)ArgLista = v36;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          6662,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          *(_QWORD *)ArgLista);
        return v110;
      }
      RtlFreeHeap_0();
      v33 = v115;
    }
    NtClose(Handle);
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v120;
  }
  else
  {
    DosPath = v29->CurrentDirectory.DosPath;
    UnicodeString = DosPath;
    v39 = (_WORD *)_mm_srli_si128((__m128i)DosPath, 8).m128i_u64[0];
    if ( !v39 || !(unsigned __int16)_mm_cvtsi128_si32((__m128i)DosPath) || !*v39 )
    {
      v40 = (wchar_t *)RtlAllocateHeap_0();
      UnicodeString.Buffer = v40;
      if ( !v40 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          6714,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return -1073741801;
      }
      v113 = 0;
      v41 = RtlGetNtSystemRoot();
      *(_DWORD *)v40 = *(_DWORD *)v41;
      v40[2] = *(_WORD *)(v41 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v44 = 0;
  v45 = LOWORD(v123[0]);
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    v44 = LdrpIncludeAlternateForwarders(v42, LOWORD(v123[0]), v43);
    v45 = 2 * v46 + 22;
    if ( v44 )
      v45 = v46 + 2 * v46 + 52;
  }
  v47 = v45;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v47 = v45 + 2 * (v120.Length + 9LL);
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v29->DllPath.Length = 0;
  }
  *((_QWORD *)&v117 + 1) = RtlAllocateHeap_0();
  if ( !*((_QWORD *)&v117 + 1) )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      6807,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return -1073741801;
  }
  LOWORD(v117) = 0;
  WORD1(v117) = v47;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v117, v123);
  v48 = v117;
  *(_WORD *)(*((_QWORD *)&v117 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v117 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v117;
  LdrpSystem32 = v117;
  LOWORD(LdrpSystem32) = v48 - 2;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    if ( v44 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v117, v123);
      RtlAppendUnicodeToString((unsigned __int16 *)&v117, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v117, v123);
    RtlAppendUnicodeToString((unsigned __int16 *)&v117, L"forwarders;");
  }
  if ( v47 > v45 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v117, (const void **)&v120);
    RtlAppendUnicodeToString((unsigned __int16 *)&v117, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v117, (const void **)&v120);
    RtlAppendUnicodeToString((unsigned __int16 *)&v117, L";");
    RtlpSystemDirs = v117;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  result = LdrpInitializeNtdllDataTableEntry(v126, &LdrpNtDllDataTableEntry, 0LL, v123);
  if ( result < 0 )
    return result;
  v49 = 0LL;
  v50 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v50 )
  {
    while ( (unsigned __int64)v50 > ImagePathName.m128i_i64[1] )
    {
      v51 = v50--;
      if ( *v50 == 92 )
      {
        v49 = (__int64)v51;
        break;
      }
    }
  }
  if ( v49 )
  {
    v52 = ImagePathName.m128i_i16[0] + ImagePathName.m128i_i16[4] - v49;
    v130.m128i_i16[0] = v52;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v52 += 2;
    v130.m128i_i16[1] = v52;
    v130.m128i_i64[1] = v49;
  }
  else
  {
    v130 = ImagePathName;
  }
  if ( *(int *)(LdrpNtdllHotPatchContext + 8) < 0 && LdrpIsHotPatchingEnabled )
    __fastfail(0x45u);
  v115 = 0LL;
  if ( *(_QWORD *)LdrpNtdllHotPatchContext )
  {
    result = LdrpInitializeNtdllDataTableEntry(*(_QWORD *)LdrpNtdllHotPatchContext, &v115, LdrpNtDllDataTableEntry, 0LL);
    if ( result < 0 )
      return result;
  }
  RtlInitializeHistoryTable();
  v53 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v54 = qword_1801CB8B0;
  if ( *(__int64 **)(qword_1801CB8B0 + 8) != &qword_1801CB8B0 )
    goto LABEL_279;
  *v53 = qword_1801CB8B0;
  v53[1] = &qword_1801CB8B0;
  *(_QWORD *)(v54 + 8) = v53;
  qword_1801CB8B0 = (__int64)v53;
  if ( v115 )
  {
    v55 = (_QWORD *)(v115 + 32);
    if ( (__int64 *)v53[1] == &qword_1801CB8B0 )
    {
      *v55 = v53;
      v55[1] = &qword_1801CB8B0;
      v53[1] = v55;
      qword_1801CB8B0 = (__int64)v55;
      goto LABEL_169;
    }
LABEL_279:
    __fastfail(3u);
  }
LABEL_169:
  inited = LdrpInitParallelLoadingSupport();
  v110 = inited;
  if ( inited < 0 )
  {
    *(_DWORD *)ArgLista = inited;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      7038,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      *(_QWORD *)ArgLista);
    return v110;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v149);
  v146 = v149;
  v147 = 512;
  v145 = ImagePathName;
  v148 = &v110;
  v57 = LdrpAllocateModuleEntry(&v145);
  if ( !v57 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      7059,
      (__int64)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    return -1073741801;
  }
  LdrpImageEntry = v57;
  *(_DWORD *)(*(_QWORD *)(v57 + 152) + 24LL) = -1;
  *(_DWORD *)(*(_QWORD *)(v57 + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v58 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v58 + 104) |= 4u;
  if ( (ProcessEnvironmentBlock->BitField & 0x10) != 0 )
    *(_DWORD *)(LdrpImageEntry + 104) |= 1u;
  v59 = v112;
  if ( UseCOR )
  {
    *(_DWORD *)(LdrpImageEntry + 104) |= 0x400000u;
    if ( v59 )
      *(_DWORD *)(LdrpImageEntry + 104) |= 0x1000000u;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  *(__m128i *)(LdrpImageEntry + 88) = v130;
  ImageBaseAddress = ProcessEnvironmentBlock->ImageBaseAddress;
  v61 = v121;
  if ( *(void **)(v121 + 48) != ImageBaseAddress && !v59 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage((char)ImageBaseAddress);
    v110 = result;
    if ( result < 0 )
      return result;
  }
  v62 = LdrpImageEntry;
  *(_QWORD *)(LdrpImageEntry + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v62);
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrinit.c",
    7151,
    (__int64)"LdrpInitializeProcess",
    2,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88,
    LdrpImageEntry + 72,
    &UnicodeString,
    &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v61);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0LL, UseWOW64 == 0);
  v110 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v63 = RtlpInitCurrentDir((__int64)&UnicodeString);
  v110 = v63;
  if ( v63 < 0 )
  {
    LODWORD(v108) = v63;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      7188,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v108);
  }
  if ( !v113 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    ModuleEntry = LdrpAllocateModuleEntry(0LL);
    v65 = (unsigned __int64 *)ModuleEntry;
    if ( !ModuleEntry )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        7213,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return -1073741801;
    }
    *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(ModuleEntry + 152) - 52LL) = -1;
    *(_DWORD *)(ModuleEntry + 104) |= *(_DWORD *)(v114 + 104);
    *(_QWORD *)(ModuleEntry + 248) = *(_QWORD *)(v114 + 248);
    *(_WORD *)(ModuleEntry + 110) = 0;
    *(_OWORD *)(ModuleEntry + 72) = *(_OWORD *)(v114 + 72);
    *(_OWORD *)(ModuleEntry + 88) = *(_OWORD *)(v114 + 88);
    *(_DWORD *)(ModuleEntry + 128) = *(_DWORD *)(v114 + 128);
    *(_DWORD *)(ModuleEntry + 288) = *(_DWORD *)(v114 + 288);
    *(_QWORD *)(ModuleEntry + 48) = *(_QWORD *)(v114 + 48);
    LdrpInsertDataTableEntry(ModuleEntry);
    LdrpLogDllState(v65[6], (__int64)(v65 + 9), 0x14A5u);
    result = RtlImageNtHeaderEx(3, v65[6], 0LL, &v132);
    v110 = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v65, v132);
    result = LdrpProcessMappedModule(v65, 0LL, 1LL);
    v110 = result;
    if ( result < 0 )
      return result;
    v65[7] = *(_QWORD *)(v114 + 56);
    LdrpLogDllState(v65[6], (__int64)(v65 + 9), 0x14ADu);
    *(_DWORD *)(v65[19] + 56) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, v126, 0LL);
      v110 = result;
      if ( result >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(v65[19] + 56) = 9;
        result = v110;
      }
    }
    else
    {
      v111[0] = 0;
      result = LdrpInitializeGraphRecurse(v65[19], 0LL, v111);
      v110 = result;
    }
    if ( result < 0 )
      return result;
    v61 = v121;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v122 )
    {
      NtClose(v122);
      v122 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v119[0] )
    {
      NtClose(v119[0]);
      v119[0] = 0LL;
    }
    result = LdrpLoadWow64(v123);
    v110 = result;
    if ( result >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      g_LdrpWow64LdrpInitialize(v129);
LABEL_261:
      if ( v122 )
        NtClose(v122);
      if ( v119[0] )
        NtClose(v119[0]);
      _RAX = 1LL;
      __asm { cpuid }
      x86_cpu_enable_ssse3 = _RCX & 0x200;
      if ( (_RDX & 0x4000000) == 0 || (_RCX & 0x100000) == 0 || (v94 = 1, (_RCX & 2) == 0) )
        v94 = 0;
      x86_cpu_enable_simd = v94;
      IsProcessorFeaturePresent = RtlIsProcessorFeaturePresent(41LL);
      _RCX = IsProcessorFeaturePresent;
      x86_cpu_enable_avx512 = IsProcessorFeaturePresent;
      if ( IsProcessorFeaturePresent )
      {
        if ( x86_cpu_enable_simd )
        {
          _RAX = 7LL;
          __asm { cpuid }
          if ( (_RCX & 0x400) == 0 )
            x86_cpu_enable_avx512 = 0;
        }
      }
      if ( (g_SymCryptFlags & 1) == 0 )
      {
        SymCryptDetectCpuFeaturesByCpuid(_RCX, _RDX);
        _InterlockedOr(&g_SymCryptFlags, 1u);
        v113 = 6750217;
        v101 = "v103.9.1__2025-07-25T01:19:34+00:00_ac2c15c_2025-07-25T19:54:35";
        for ( i = aV1039120250725[0]; i; i = *v101 )
        {
          LOBYTE(v113) = i;
          ++v101;
        }
        g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
      }
      return 0;
    }
    return result;
  }
  LdrpInitializeCfgScpHelpers();
  LdrpSchedulerSharedDataListHeadLock = 0LL;
  qword_1801CB958 = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpAllocateSchedulerSharedData();
  v66 = v116;
  LdrpAcquireSchedulerSharedDataSlot(v116, v67, v68);
  v116 = 0LL;
  if ( UseCOR )
  {
    result = LdrpCorInitialize((__int64 *)&v116);
    v110 = result;
    if ( result < 0 )
      return result;
    if ( v59 )
    {
      result = LdrpCorValidateImage(ProcessEnvironmentBlock->ImageBaseAddress);
      v110 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v66->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v129 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  v69 = LdrpInitializeTls();
  v110 = v69;
  v70 = 0LL;
  if ( v69 < 0 )
  {
    *(_DWORD *)ArgListc = v69;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      7479,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      *(_QWORD *)ArgListc);
    return v110;
  }
  if ( *(_BYTE *)(LdrpNtdllHotPatchContext + 12) )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v130,
      LdrpNtDllDataTableEntry,
      0LL,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 8),
      0);
    v70 = 0LL;
  }
  v71 = v116;
  if ( v116 )
  {
    v111[0] = 0;
    v72 = LdrpInitializeGraphRecurse(*(_QWORD *)&v116->User32Reserved[6], 0LL, v111);
    v110 = v72;
    if ( v72 < 0 )
    {
      *(_DWORD *)ArgListc = v72;
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        7516,
        (__int64)"LdrpInitializeProcess",
        0,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        *(_QWORD *)ArgListc);
      return v110;
    }
  }
  v73 = LdrpInitializeImportRedirection(v71, v70);
  v110 = v73;
  if ( v73 < 0 )
  {
    *(_DWORD *)ArgListc = v73;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      7532,
      (__int64)"LdrpInitializeProcess",
      0,
      "Loading of import redirection module failed with status 0x%08x\n",
      *(_QWORD *)ArgListc);
    return v110;
  }
  v116 = 0LL;
  if ( *(_WORD *)(v61 + 92) == 2 || *(_WORD *)(v61 + 92) == 3 )
  {
    v74 = LdrpInitializeKernel32Functions(&v116);
    v110 = v74;
    if ( v74 < 0 )
    {
      *(_DWORD *)ArgListc = v74;
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        7554,
        (__int64)"LdrpInitializeProcess",
        0,
        "Calling LdrpInitializeKernel32Functions failed with status 0x%08lx\n",
        *(_QWORD *)ArgListc);
      return v110;
    }
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v75 = pShimData;
  if ( pShimData && pShimData[132] )
  {
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v75);
  }
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    v29->LoaderThreads = 1;
  LdrpEnableParallelLoading(v29->LoaderThreads);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *v148 = 0;
  if ( v59 )
  {
    v79 = LdrpCorProcessImports(LdrpImageEntry, v76, v77, v78);
  }
  else
  {
    LdrpThreadTokenSetMainThreadToken();
    v147 |= 1u;
    LdrpMapAndSnapDependency(&v145, v80, v81, v82);
    LdrpDrainWorkQueue(1);
    if ( LdrpMainThreadToken )
      LdrpThreadTokenUnsetMainThreadToken();
    v79 = v110;
    if ( v110 < 0 )
      goto LABEL_245;
    v79 = LdrpPrepareModuleForExecution(LdrpImageEntry, v148);
  }
  v110 = v79;
  if ( v79 < 0 )
  {
LABEL_245:
    *(_DWORD *)ArgListc = v79;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      7793,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      *(_QWORD *)ArgListc);
    return v110;
  }
  LdrInitState = 2;
  result = LdrpInitializePatchData();
  v110 = result;
  if ( result >= 0 )
  {
    if ( ProcessEnvironmentBlock->BeingDebugged )
      LdrpDoDebuggerBreak();
    LdrpDropLastInProgressCount();
    if ( !Kernel32ThreadInitThunkFunction
      || (result = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL, v83), v110 = result, result >= 0)
      && (result = LdrpInitializePerUserWindowsDirectory(v116), v110 = result, result >= 0) )
    {
      LdrpProcessInitContextRecord = v129;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v111[0] = 0;
      v110 = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), v148, v111);
      LdrpReleaseLoaderLock(v84, 9, v110);
      LdrpFreeLoadContextOfNode(*(_QWORD *)(LdrpImageEntry + 152), (__int64)v148);
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath((__int64)v149);
      if ( v110 < 0 )
      {
        *(_DWORD *)ArgListc = v110;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          7941,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          *(_QWORD *)ArgListc);
        return v110;
      }
      LdrpInitializeSmtDelayedSleep();
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v140[0] = 72LL;
        v140[1] = 1LL;
        v141 = 0LL;
        v142 = 0LL;
        v143 = 0LL;
        v144 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v140, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v140);
      }
      if ( g_ShimsEnabled
        && !((unsigned __int8 (__fastcall *)(__int128 *, _DWORD *))(__ROR8__(
                                                                      g_pfnSE_InstallAfterInit,
                                                                      64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              &v124,
              v75) )
      {
        Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline();
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule, v85, v86, v87);
        g_pShimEngineModule = 0LL;
      }
      PostProcessInitRoutine = ProcessEnvironmentBlock->PostProcessInitRoutine;
      if ( PostProcessInitRoutine )
        PostProcessInitRoutine();
      goto LABEL_261;
    }
  }
  return result;
}
