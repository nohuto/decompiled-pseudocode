/*
 * XREFs of LdrpInitializeProcess @ 0x1800CD028
 * Callers:
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x18001DF90 (RtlGetNtSystemRoot.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     RtlInitializeHeapLogging @ 0x180043E20 (RtlInitializeHeapLogging.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180073DE0 (RtlSetBits.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlInsertInvertedFunctionTable @ 0x180078C94 (RtlInsertInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 *     LdrpLoadWow64 @ 0x18007DAB0 (LdrpLoadWow64.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x18007FFCC (RtlpInitializeThreadActivationContextStack.c)
 *     SbObtainTraceHandle @ 0x180084C30 (SbObtainTraceHandle.c)
 *     LdrpEnableParallelLoading @ 0x180084E40 (LdrpEnableParallelLoading.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18008FEAC (LdrpEnableUMGLTracingStateSync.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18008FFAC (LdrpLogEtwHotPatchStatus.c)
 *     RtlControlStackTraceDataBase @ 0x180096370 (RtlControlStackTraceDataBase.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180097AD8 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     RtlpInitEnvironmentBlock @ 0x18009F5C8 (RtlpInitEnvironmentBlock.c)
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     RtlpInitCurrentDir @ 0x1800A4844 (RtlpInitCurrentDir.c)
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C4B80 (LdrpFreeLoadContextOfNode.c)
 *     TpInitializePackage @ 0x1800C8914 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x1800C89F0 (RtlCreateTagHeap.c)
 *     LdrpInitializeTeb @ 0x1800CCA40 (LdrpInitializeTeb.c)
 *     LdrpAllocateModuleEntry @ 0x1800CF3D0 (LdrpAllocateModuleEntry.c)
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 *     RtlIsProcessorFeaturePresent @ 0x1800D11A0 (RtlIsProcessorFeaturePresent.c)
 *     LdrQueryImageFileExecutionOptions @ 0x1800D12B0 (LdrQueryImageFileExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x1800D12EC (RtlQueryApplicationKeyOption.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D5034 (LdrpProtectAndRelocateImage.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800D868C (RtlRemoveInvertedFunctionTable.c)
 *     RtlEncodePointer @ 0x1800D8BA0 (RtlEncodePointer.c)
 *     LdrpInitializeNlsInfo @ 0x1800DCF9C (LdrpInitializeNlsInfo.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800E154C (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlInitializeHistoryTable @ 0x1800E33FC (RtlInitializeHistoryTable.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x1800E4DC8 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x1800E4DF8 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 *     LdrpCaptureCriticalThunks @ 0x1800E77D4 (LdrpCaptureCriticalThunks.c)
 *     RtlpInitParameterBlock @ 0x1800E8844 (RtlpInitParameterBlock.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800E8EB4 (LdrpInitializeSmtDelayedSleep.c)
 *     LdrpInitializeProcessHeap @ 0x1800EAD58 (LdrpInitializeProcessHeap.c)
 *     LdrpInitializePolicy @ 0x1800EB844 (LdrpInitializePolicy.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800EC5F8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F7C28 (LdrpAllocateSchedulerSharedData.c)
 *     LdrpInitParallelLoadingSupport @ 0x1800FB294 (LdrpInitParallelLoadingSupport.c)
 *     LdrpInsertModuleToIndex @ 0x1800FB744 (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800FBA70 (LdrpInitializeSnapsBuffer.c)
 *     LdrpInitializePatchData @ 0x1800FBCA0 (LdrpInitializePatchData.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBD10 (RtlpInitializeNonVolatileFlush.c)
 *     RtlNormalizeProcessParams @ 0x1800FC7D0 (RtlNormalizeProcessParams.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FEC0C (LdrpInitializeCfgScpHelpers.c)
 *     LdrpCorFixupImage @ 0x1801002AC (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x180108014 (LdrpCorValidateImage.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x18010AB70 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     RtlpInitFeatureConfiguration @ 0x18010C54C (RtlpInitFeatureConfiguration.c)
 *     Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline @ 0x18010FC20 (Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     RtlInitializeExceptionLog @ 0x180110E20 (RtlInitializeExceptionLog.c)
 *     LdrpCheckAppDirType @ 0x180114CCC (LdrpCheckAppDirType.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     LdrpInsertDataTableEntry @ 0x180117D60 (LdrpInsertDataTableEntry.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeImportRedirection @ 0x18011CDB4 (LdrpInitializeImportRedirection.c)
 *     LdrpCorProcessImports @ 0x18011CF50 (LdrpCorProcessImports.c)
 *     LdrpIncludeAlternateForwarders @ 0x18012101C (LdrpIncludeAlternateForwarders.c)
 *     TpSetDefaultPoolCpuSets @ 0x1801217C0 (TpSetDefaultPoolCpuSets.c)
 *     LdrpDoDebuggerBreak @ 0x180122418 (LdrpDoDebuggerBreak.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18015F940 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180161550 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180161BB0 (NtQuerySymbolicLinkObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x180162C80 (InterlockedPushListSList.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016E69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  int v3; // r14d
  struct _TEB *v4; // r13
  _PEB *ProcessEnvironmentBlock; // rdi
  int v6; // r15d
  bool v7; // cc
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  wchar_t *v9; // rdx
  unsigned __int16 Length; // bx
  PIMAGE_NT_HEADERS v11; // r12
  __int64 v12; // rcx
  int result; // eax
  _QWORD *v14; // rax
  char *v15; // rdx
  unsigned int SizeOfImage; // ebx
  char v17; // al
  int v18; // eax
  int WowTebOffset; // ecx
  _BYTE *v20; // rax
  PRTL_USER_PROCESS_PARAMETERS v21; // r13
  _DWORD *Config; // r15
  _QWORD *v23; // r8
  char v24; // al
  unsigned __int64 v25; // r14
  void *ProcessHeap; // r12
  int DefaultThreadpoolThreadMaximum; // r14d
  _RTL_USER_PROCESS_PARAMETERS *v28; // r13
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v30; // r14
  wchar_t *Heap_0; // rax
  SIZE_T v32; // r14
  int v33; // edx
  NTSTATUS v34; // eax
  NTSTATUS SymbolicLinkObject; // eax
  wchar_t *v36; // r15
  _UNICODE_STRING DosPath; // xmm1
  _WORD *v38; // xmm0_8
  wchar_t *v39; // r14
  PWSTR v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // r12
  unsigned __int64 v44; // r14
  __int64 v45; // rdx
  SIZE_T v46; // r15
  unsigned __int16 v47; // dx
  __int64 v48; // r8
  _WORD *v49; // rcx
  _WORD *v50; // rax
  __int16 v51; // dx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  int inited; // eax
  __int64 v56; // rax
  __int64 v57; // rcx
  char v58; // r12
  void *ImageBaseAddress; // rcx
  PIMAGE_NT_HEADERS v60; // r15
  __int64 v61; // rcx
  int v62; // eax
  __int64 ModuleEntry; // rax
  __int64 v64; // r14
  _WORD *v65; // r14
  __int64 v66; // rdx
  __int64 v67; // r8
  int v68; // eax
  __int64 v69; // rdx
  PVOID v70; // rcx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  _DWORD *v74; // r15
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  void (*PostProcessInitRoutine)(void); // rax
  int v89; // eax
  BOOLEAN IsProcessorFeaturePresent; // al
  const char *v96; // rcx
  char i; // al
  PULONG ReturnedLength; // [rsp+28h] [rbp-350h]
  PULONG ReturnedLengtha; // [rsp+28h] [rbp-350h]
  PULONG ReturnedLengthb; // [rsp+28h] [rbp-350h]
  PULONG ReturnedLengthc; // [rsp+28h] [rbp-350h]
  NTSTATUS v102; // [rsp+30h] [rbp-348h]
  __int64 v103; // [rsp+30h] [rbp-348h]
  NTSTATUS v104; // [rsp+50h] [rbp-328h] BYREF
  _BYTE v105[4]; // [rsp+54h] [rbp-324h] BYREF
  int v106; // [rsp+58h] [rbp-320h]
  int v107; // [rsp+5Ch] [rbp-31Ch]
  __int64 v108; // [rsp+60h] [rbp-318h] BYREF
  ULONG v109[2]; // [rsp+68h] [rbp-310h] BYREF
  PVOID ProcedureAddress; // [rsp+70h] [rbp-308h] BYREF
  _UNICODE_STRING v111; // [rsp+78h] [rbp-300h] BYREF
  PIMAGE_NT_HEADERS Buffer; // [rsp+88h] [rbp-2F0h] BYREF
  HANDLE v113[2]; // [rsp+90h] [rbp-2E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-2D8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B0h] [rbp-2C8h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-2C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+C0h] [rbp-2B8h] BYREF
  _UNICODE_STRING SubKey; // [rsp+D0h] [rbp-2A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-298h] BYREF
  PVOID BaseOfImage; // [rsp+F0h] [rbp-288h]
  __m128i ImagePathName; // [rsp+100h] [rbp-278h] BYREF
  HANDLE LinkHandle; // [rsp+110h] [rbp-268h] BYREF
  __int64 v123; // [rsp+118h] [rbp-260h]
  __m128i v124; // [rsp+120h] [rbp-258h] BYREF
  __int64 SystemInformation; // [rsp+130h] [rbp-248h] BYREF
  PIMAGE_NT_HEADERS v126; // [rsp+138h] [rbp-240h] BYREF
  _DWORD *pShimData; // [rsp+140h] [rbp-238h]
  _QWORD v128[2]; // [rsp+148h] [rbp-230h] BYREF
  __int128 v129; // [rsp+158h] [rbp-220h] BYREF
  __int64 v130; // [rsp+168h] [rbp-210h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+170h] [rbp-208h] BYREF
  _QWORD v132[2]; // [rsp+1A0h] [rbp-1D8h] BYREF
  __int128 v133; // [rsp+1B0h] [rbp-1C8h]
  __int128 v134; // [rsp+1C0h] [rbp-1B8h]
  __int128 v135; // [rsp+1D0h] [rbp-1A8h]
  __int64 v136; // [rsp+1E0h] [rbp-198h]
  __m128i v137; // [rsp+1F0h] [rbp-188h] BYREF
  _BYTE *v138; // [rsp+200h] [rbp-178h]
  int v139; // [rsp+210h] [rbp-168h]
  NTSTATUS *v140; // [rsp+218h] [rbp-160h]
  _BYTE v141[128]; // [rsp+2C0h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v123 = a1;
  UnicodeString = 0LL;
  ImagePathName = 0LL;
  v124 = 0LL;
  v3 = 0;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  OutHeaders = 0LL;
  DestinationString = 0LL;
  SubKey = 0LL;
  v126 = 0LL;
  LinkHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v128[0] = 1441812LL;
  v128[1] = L"\\KnownDlls";
  Handle = 0LL;
  v113[0] = 0LL;
  v108 = 0LL;
  memset_thunk_772440563353939046(&v137, 0, 0xD0uLL);
  v111 = 0LL;
  memset_thunk_772440563353939046(v141, 0, 0x80uLL);
  SystemInformation = 0LL;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v4 = NtCurrentTeb();
  ProcedureAddress = v4;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  LdrpInitializeTeb((__int64)v4);
  PebLdr = 88;
  v6 = 1;
  byte_1801CA8C4 = 1;
  qword_1801CA8D8 = (__int64)&qword_1801CA8D0;
  qword_1801CA8D0 = (__int64)&qword_1801CA8D0;
  qword_1801CA8E8 = (__int64)&qword_1801CA8E0;
  qword_1801CA8E0 = (__int64)&qword_1801CA8E0;
  qword_1801CA8F8 = (__int64)&qword_1801CA8F0;
  qword_1801CA8F0 = (__int64)&qword_1801CA8F0;
  byte_1801CA908 = 0;
  qword_1801CA910 = 0LL;
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
  v9 = (wchar_t *)((char *)ProcessParameters->ImagePathName.Buffer + (unsigned __int64)ProcessParameters);
  if ( (ProcessParameters->Flags & 1) != 0 )
    v9 = ProcessParameters->ImagePathName.Buffer;
  SubKey.Buffer = v9;
  SubKey.Length = ProcessParameters->ImagePathName.Length;
  Length = SubKey.Length;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v9 == 92 )
  {
    if ( v9[1] == 63 && v9[2] == 63 && v9[3] == 92 )
    {
      SubKey.Length -= 8;
      SubKey.MaximumLength = Length - 6;
      SubKey.Buffer = v9 + 4;
      ProcessParameters->ImagePathName.Length -= 8;
      ProcessParameters->ImagePathName.MaximumLength -= 8;
      ProcessParameters->ImagePathName.Buffer += 4;
    }
    v3 = 0;
  }
  v107 = 1;
  UseCOR = 0;
  LOBYTE(v6) = 0;
  v106 = v6;
  v109[0] = 0;
  RtlImageNtHeaderEx(3u, ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &OutHeaders);
  v11 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v12 = 32LL;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
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
  Buffer = 0LL;
  RtlImageNtHeaderEx(3u, a2, 0LL, &Buffer);
  SizeOfImage = Buffer->OptionalHeader.SizeOfImage;
  RtlInsertInvertedFunctionTable(a2, SizeOfImage);
  v129 = 0LL;
  v130 = 0LL;
  RtlpxLookupFunctionTable(a2, (char **)&v129);
  LdrProtectMrdata(0);
  xmmword_1801DF450 = v129;
  qword_1801DF460 = v130;
  LODWORD(qword_1801DF460) = SizeOfImage;
  RtlRemoveInvertedFunctionTable(a2);
  LdrProtectMrdata(1);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v17 = (LOBYTE(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) >> 4) & 3;
  LdrpEnforceIntegrityContinuity = v17 == 1;
  LdrpAuditIntegrityContinuity = ((v17 - 1) & 0xFD) == 0;
  v18 = LdrpInitializeExecutionOptions(
          (unsigned int)&SubKey,
          (_DWORD)ProcessEnvironmentBlock,
          (_DWORD)a2,
          (unsigned int)&Handle,
          (__int64)v113,
          (__int64)&v108);
  v104 = v18;
  if ( v18 < 0 )
  {
    LODWORD(ReturnedLength) = v4->ClientId.UniqueProcess;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      5929,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      ReturnedLength,
      v18);
    return v104;
  }
  if ( LdrpImageExpansionMitigation == 2 )
    LdrpIsHotPatchingEnabled = 0;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
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
    if ( v11->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v6) = 1;
      v106 = v6;
      v3 = 1;
      result = LdrpCorFixupImage(ProcessEnvironmentBlock->ImageBaseAddress);
      if ( result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v20 = RtlImageDirectoryEntryToData(ProcessEnvironmentBlock->ImageBaseAddress, 1u, 0xEu, (PULONG)&Buffer);
    if ( v20 )
    {
      UseCOR = 1;
      v6 = (unsigned __int8)v6;
      if ( (v20[16] & 1) != 0 )
        v6 = 1;
      v106 = v6;
    }
  }
  LdrpSystemDllBase = BaseOfImage;
  if ( !UseWOW64 )
    pShimData = ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout;
  v21 = RtlNormalizeProcessParams(ProcessEnvironmentBlock->ProcessParameters);
  ImagePathName = (__m128i)v21->ImagePathName;
  if ( UseWOW64 || UseCOR && v3 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfigEx(ProcessEnvironmentBlock->ImageBaseAddress);
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
  while ( v23 <= qword_1801CC180 );
  *v23 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, &RtlpStaticDebugInfo, &unk_1801CC1B0, 8LL);
  BitMapHeader.SizeOfBitMap = 64;
  BitMapHeader.Buffer = ProcessEnvironmentBlock->TlsBitmapBits;
  dword_1801C6210 = 1024;
  qword_1801C6218 = (__int64)ProcessEnvironmentBlock->TlsExpansionBitmapBits;
  ProcessEnvironmentBlock->TlsBitmap = &BitMapHeader;
  ProcessEnvironmentBlock->TlsExpansionBitmap = (_RTL_BITMAP *)&dword_1801C6210;
  *(_BYTE *)BitMapHeader.Buffer |= 1u;
  memset_thunk_772440563353939046(&RtlpFlsContext, 0, 0x60uLL);
  xmmword_1801C5E38 = 0LL;
  xmmword_1801C5E48 = 0LL;
  xmmword_1801C5E58 = 0LL;
  xmmword_1801C5E68 = 0LL;
  qword_1801C5E80 = (__int64)&qword_1801C5E78;
  qword_1801C5E78 = (__int64)&qword_1801C5E78;
  if ( UseWOW64 )
    RtlSetBits(&BitMapHeader, 0, 0x13u);
  RtlSetBits(&BitMapHeader, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v24 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    LODWORD(Buffer) = 24;
    if ( LdrQueryImageFileExecutionOptions(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL) >= 0
      && (unsigned int)Buffer >= 0x18 )
    {
      if ( (unsigned int)Buffer <= 0x80 )
        v25 = (unsigned int)((_DWORD)Buffer << 20);
      else
        v25 = 0x8000000LL;
    }
    else
    {
      v25 = 25165824LL;
    }
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6236,
      (__int64)"LdrpInitializeProcess",
      2,
      "Stack trace database size is %Id Mb\n",
      v25 >> 20);
    v129 = 0uLL;
    v130 = v25;
    RtlControlStackTraceDataBase(0, 24, &v129);
    v24 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v24 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
  if ( result < 0 )
    return result;
  ProcessEnvironmentBlock->FastPebLock = &FastPebLock;
  result = RtlInitializeHeapManager(&SubKey);
  if ( result < 0 )
    return result;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( (int)LdrpInitializeProcessHeap(Config, OutHeaders, v21, &ProcessEnvironmentBlock->ProcessHeap) < 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
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
  RtlInitializeCriticalSectionEx(&LdrpEnclaveListLock, 0, 0);
  qword_1801CC268 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)ProcedureAddress);
  LdrpHeap = ProcessHeap;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
LABEL_280:
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  if ( NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL) >= 0 )
    RtlpHypervisorSharedUserVa = SystemInformation;
  NtdllBaseTag = RtlCreateTagHeap(ProcessHeap, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = TpInitializePackage();
  if ( result < 0 )
    return result;
  if ( v21->DefaultThreadpoolCpuSetMaskCount )
    TpSetDefaultPoolCpuSets(v21->DefaultThreadpoolCpuSetMasks);
  DefaultThreadpoolThreadMaximum = v21->DefaultThreadpoolThreadMaximum;
  if ( DefaultThreadpoolThreadMaximum )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    TppPoolpGlobalPoolMaxThreadsOverride = DefaultThreadpoolThreadMaximum;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( !UseWOW64 && !LdrpIsSecureProcess )
    LdrpEnableUMGLTracingStateSync();
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C4700);
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  RtlInitializeHeapLogging();
  result = RtlpInitEnvironmentBlock();
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  if ( result < 0 )
    return result;
  v28 = ProcessEnvironmentBlock->ProcessParameters;
  ImagePathName = (__m128i)v28->ImagePathName;
  SubKey.Buffer = (wchar_t *)_mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( (Handle || v113[0])
    && (int)RtlQueryApplicationKeyOption(v113[0], Handle, L"DebugProcessHeapOnly", 4LL, v109, 4) >= 0
    && dword_1801C4588
    && v109[0] )
  {
    dword_1801C4588 = 0;
    *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v30 = DestinationString.Length + 40;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(ProcessHeap, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !Heap_0 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v30;
  Destination.Buffer = Heap_0;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 2) == 0 )
  {
    v109[0] = 0;
    v32 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v128;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LdrProtectMrdata(0);
    v104 = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    LdrProtectMrdata(1);
    if ( v104 < 0 )
    {
      v102 = v104;
      ReturnedLengthb = (PULONG)v128;
      v33 = 6604;
LABEL_113:
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        v33,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        ReturnedLengthb,
        v102);
      return v104;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180171D90;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v34 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    v104 = v34;
    if ( v34 < 0 )
    {
      v102 = v34;
      ReturnedLengthb = (PULONG)&unk_180171D90;
      v33 = 6627;
      goto LABEL_113;
    }
    while ( 1 )
    {
      v36 = (wchar_t *)RtlAllocateHeap_0(ProcessHeap, 0, v32);
      if ( !v36 )
        return -1073741801;
      LdrpKnownDllPath.Length = 0;
      LdrpKnownDllPath.MaximumLength = v32;
      LdrpKnownDllPath.Buffer = v36;
      SymbolicLinkObject = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, v109);
      v104 = SymbolicLinkObject;
      if ( SymbolicLinkObject >= 0 )
        break;
      if ( SymbolicLinkObject != -1073741789 )
      {
        LODWORD(ReturnedLengtha) = SymbolicLinkObject;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          6662,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          ReturnedLengtha);
        return v104;
      }
      RtlFreeHeap_0(ProcessHeap, 0, v36);
      v32 = v109[0];
    }
    NtClose(LinkHandle);
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    DosPath = v28->CurrentDirectory.DosPath;
    UnicodeString = DosPath;
    v38 = (_WORD *)_mm_srli_si128((__m128i)DosPath, 8).m128i_u64[0];
    if ( !v38 || !(unsigned __int16)_mm_cvtsi128_si32((__m128i)DosPath) || !*v38 )
    {
      v39 = (wchar_t *)RtlAllocateHeap_0(ProcessHeap, 0, 8uLL);
      UnicodeString.Buffer = v39;
      if ( !v39 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          6714,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return -1073741801;
      }
      v107 = 0;
      v40 = RtlGetNtSystemRoot();
      *(_DWORD *)v39 = *(_DWORD *)v40;
      v39[2] = v40[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v43 = 0;
  v44 = Destination.Length;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    v43 = LdrpIncludeAlternateForwarders(v41, Destination.Length, v42);
    v44 = 2 * v45 + 22;
    if ( v43 )
      v44 = v45 + 2 * v45 + 52;
  }
  v46 = v44;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v46 = v44 + 2 * (DestinationString.Length + 9LL);
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v28->DllPath.Length = 0;
  }
  v111.Buffer = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v46);
  if ( !v111.Buffer )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6807,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return -1073741801;
  }
  v111.Length = 0;
  v111.MaximumLength = v46;
  RtlAppendUnicodeStringToString(&v111, &Destination);
  v47 = v111.Length;
  v111.Buffer[((unsigned __int64)v111.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v111;
  LdrpSystem32 = (__int128)v111;
  LOWORD(LdrpSystem32) = v47 - 2;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    if ( v43 )
    {
      RtlAppendUnicodeStringToString(&v111, &Destination);
      RtlAppendUnicodeToString(&v111, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v111, &Destination);
    RtlAppendUnicodeToString(&v111, L"forwarders;");
  }
  if ( v46 > v44 )
  {
    RtlAppendUnicodeStringToString(&v111, &DestinationString);
    RtlAppendUnicodeToString(&v111, L"\\system;");
    RtlAppendUnicodeStringToString(&v111, &DestinationString);
    RtlAppendUnicodeToString(&v111, L";");
    RtlpSystemDirs = v111;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  result = LdrpInitializeNtdllDataTableEntry(BaseOfImage);
  if ( result < 0 )
    return result;
  v48 = 0LL;
  v49 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v49 )
  {
    while ( (unsigned __int64)v49 > ImagePathName.m128i_i64[1] )
    {
      v50 = v49--;
      if ( *v49 == 92 )
      {
        v48 = (__int64)v50;
        break;
      }
    }
  }
  if ( v48 )
  {
    v51 = ImagePathName.m128i_i16[0] + ImagePathName.m128i_i16[4] - v48;
    v124.m128i_i16[0] = v51;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v51 += 2;
    v124.m128i_i16[1] = v51;
    v124.m128i_i64[1] = v48;
  }
  else
  {
    v124 = ImagePathName;
  }
  if ( *(int *)(LdrpNtdllHotPatchContext + 8) < 0 && LdrpIsHotPatchingEnabled )
    __fastfail(0x45u);
  *(_QWORD *)v109 = 0LL;
  if ( *(_QWORD *)LdrpNtdllHotPatchContext )
  {
    result = LdrpInitializeNtdllDataTableEntry(*(PVOID *)LdrpNtdllHotPatchContext);
    if ( result < 0 )
      return result;
  }
  RtlInitializeHistoryTable();
  v52 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v53 = qword_1801CA8F0;
  if ( *(__int64 **)(qword_1801CA8F0 + 8) != &qword_1801CA8F0 )
    goto LABEL_279;
  *v52 = qword_1801CA8F0;
  v52[1] = &qword_1801CA8F0;
  *(_QWORD *)(v53 + 8) = v52;
  qword_1801CA8F0 = (__int64)v52;
  if ( *(_QWORD *)v109 )
  {
    v54 = (_QWORD *)(*(_QWORD *)v109 + 32LL);
    if ( (__int64 *)v52[1] == &qword_1801CA8F0 )
    {
      *v54 = v52;
      v54[1] = &qword_1801CA8F0;
      v52[1] = v54;
      qword_1801CA8F0 = (__int64)v54;
      goto LABEL_169;
    }
LABEL_279:
    __fastfail(3u);
  }
LABEL_169:
  inited = LdrpInitParallelLoadingSupport();
  v104 = inited;
  if ( inited < 0 )
  {
    LODWORD(ReturnedLengtha) = inited;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7038,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      ReturnedLengtha);
    return v104;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v141);
  v138 = v141;
  v139 = 512;
  v137 = ImagePathName;
  v140 = &v104;
  v56 = LdrpAllocateModuleEntry(&v137);
  if ( !v56 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7059,
      (__int64)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    return -1073741801;
  }
  LdrpImageEntry = v56;
  *(_DWORD *)(*(_QWORD *)(v56 + 152) + 24LL) = -1;
  *(_DWORD *)(*(_QWORD *)(v56 + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v57 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v57 + 104) |= 4u;
  if ( (ProcessEnvironmentBlock->BitField & 0x10) != 0 )
    *(_DWORD *)(LdrpImageEntry + 104) |= 1u;
  v58 = v106;
  if ( UseCOR )
  {
    *(_DWORD *)(LdrpImageEntry + 104) |= 0x400000u;
    if ( v58 )
      *(_DWORD *)(LdrpImageEntry + 104) |= 0x1000000u;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  *(__m128i *)(LdrpImageEntry + 88) = v124;
  ImageBaseAddress = ProcessEnvironmentBlock->ImageBaseAddress;
  v60 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != ImageBaseAddress && !v58 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(ImageBaseAddress);
    v104 = result;
    if ( result < 0 )
      return result;
  }
  v61 = LdrpImageEntry;
  *(_QWORD *)(LdrpImageEntry + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v61);
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    7151,
    (__int64)"LdrpInitializeProcess",
    2,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88,
    LdrpImageEntry + 72,
    &UnicodeString,
    &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v60);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0LL, UseWOW64 == 0);
  v104 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v62 = RtlpInitCurrentDir((__int64)&UnicodeString);
  v104 = v62;
  if ( v62 < 0 )
  {
    LODWORD(v103) = v62;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7188,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v103);
  }
  if ( !v107 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    ModuleEntry = LdrpAllocateModuleEntry(0LL);
    v64 = ModuleEntry;
    if ( !ModuleEntry )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7213,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return -1073741801;
    }
    *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(ModuleEntry + 152) - 52LL) = -1;
    *(_DWORD *)(ModuleEntry + 104) |= *(_DWORD *)(v108 + 104);
    *(_QWORD *)(ModuleEntry + 248) = *(_QWORD *)(v108 + 248);
    *(_WORD *)(ModuleEntry + 110) = 0;
    *(_OWORD *)(ModuleEntry + 72) = *(_OWORD *)(v108 + 72);
    *(_OWORD *)(ModuleEntry + 88) = *(_OWORD *)(v108 + 88);
    *(_DWORD *)(ModuleEntry + 128) = *(_DWORD *)(v108 + 128);
    *(_DWORD *)(ModuleEntry + 288) = *(_DWORD *)(v108 + 288);
    *(_QWORD *)(ModuleEntry + 48) = *(_QWORD *)(v108 + 48);
    LdrpInsertDataTableEntry(ModuleEntry);
    LdrpLogDllState(*(_QWORD *)(v64 + 48), v64 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v64 + 48), 0LL, &v126);
    v104 = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v64, v126);
    result = LdrpProcessMappedModule(v64, 0LL, 1LL);
    v104 = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v64 + 56) = *(_QWORD *)(v108 + 56);
    LdrpLogDllState(*(_QWORD *)(v64 + 48), v64 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v64 + 152) + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      result = AVrfInitializeVerifier(0LL, 0LL, 0LL, 1LL, BaseOfImage, 0LL);
      v104 = result;
      if ( result >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v64 + 152) + 56LL) = 9;
        result = v104;
      }
    }
    else
    {
      v105[0] = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v64 + 152), 0LL, v105);
      v104 = result;
    }
    if ( result < 0 )
      return result;
    v60 = OutHeaders;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v113[0] )
    {
      NtClose(v113[0]);
      v113[0] = 0LL;
    }
    result = LdrpLoadWow64(&Destination);
    v104 = result;
    if ( result >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      g_LdrpWow64LdrpInitialize(v123);
LABEL_261:
      if ( Handle )
        NtClose(Handle);
      if ( v113[0] )
        NtClose(v113[0]);
      _RAX = 1LL;
      __asm { cpuid }
      x86_cpu_enable_ssse3 = _RCX & 0x200;
      if ( (_RDX & 0x4000000) == 0 || (_RCX & 0x100000) == 0 || (v89 = 1, (_RCX & 2) == 0) )
        v89 = 0;
      x86_cpu_enable_simd = v89;
      IsProcessorFeaturePresent = RtlIsProcessorFeaturePresent(0x29u);
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
        v107 = 6750220;
        v96 = "v103.12.0__2026-05-07T00:16:03+00:00_0df2f18_2026-05-09T04:02:31";
        for ( i = aV1031202026050[0]; i; i = *v96 )
        {
          LOBYTE(v107) = i;
          ++v96;
        }
        g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
      }
      return 0;
    }
    return result;
  }
  LdrpInitializeCfgScpHelpers();
  LdrpSchedulerSharedDataListHeadLock.0 = 0LL;
  qword_1801CA998 = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpAllocateSchedulerSharedData();
  v65 = ProcedureAddress;
  LdrpAcquireSchedulerSharedDataSlot(ProcedureAddress, v66, v67);
  ProcedureAddress = 0LL;
  if ( UseCOR )
  {
    result = LdrpCorInitialize((char **)&ProcedureAddress);
    v104 = result;
    if ( result < 0 )
      return result;
    if ( v58 )
    {
      result = LdrpCorValidateImage(ProcessEnvironmentBlock->ImageBaseAddress);
      v104 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v65[3063] & 0x400) != 0 )
      *(_QWORD *)(v123 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  v68 = LdrpInitializeTls();
  v104 = v68;
  v69 = 0LL;
  if ( v68 < 0 )
  {
    LODWORD(ReturnedLengthc) = v68;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7479,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      ReturnedLengthc);
    return v104;
  }
  if ( *(_BYTE *)(LdrpNtdllHotPatchContext + 12) )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v124,
      LdrpNtDllDataTableEntry,
      0LL,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 8),
      0);
    v69 = 0LL;
  }
  v70 = ProcedureAddress;
  if ( ProcedureAddress )
  {
    v105[0] = 0;
    v71 = LdrpInitializeGraphRecurse(*((_QWORD *)ProcedureAddress + 19), 0LL, v105);
    v104 = v71;
    if ( v71 < 0 )
    {
      LODWORD(ReturnedLengthc) = v71;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7516,
        (__int64)"LdrpInitializeProcess",
        0,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        ReturnedLengthc);
      return v104;
    }
  }
  v72 = LdrpInitializeImportRedirection(v70, v69);
  v104 = v72;
  if ( v72 < 0 )
  {
    LODWORD(ReturnedLengthc) = v72;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7532,
      (__int64)"LdrpInitializeProcess",
      0,
      "Loading of import redirection module failed with status 0x%08x\n",
      ReturnedLengthc);
    return v104;
  }
  ProcedureAddress = 0LL;
  if ( v60->OptionalHeader.Subsystem == 2 || v60->OptionalHeader.Subsystem == 3 )
  {
    v73 = LdrpInitializeKernel32Functions(&ProcedureAddress);
    v104 = v73;
    if ( v73 < 0 )
    {
      LODWORD(ReturnedLengthc) = v73;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7554,
        (__int64)"LdrpInitializeProcess",
        0,
        "Calling LdrpInitializeKernel32Functions failed with status 0x%08lx\n",
        ReturnedLengthc);
      return v104;
    }
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v74 = pShimData;
  if ( pShimData && pShimData[132] )
  {
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v74);
  }
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    v28->LoaderThreads = 1;
  LdrpEnableParallelLoading(v28->LoaderThreads);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *v140 = 0;
  if ( v58 )
  {
    v78 = LdrpCorProcessImports(LdrpImageEntry, v75, v76, v77);
  }
  else
  {
    LdrpThreadTokenSetMainThreadToken();
    v139 |= 1u;
    LdrpMapAndSnapDependency(&v137, v79, v80, v81);
    LdrpDrainWorkQueue(1);
    if ( LdrpMainThreadToken )
      LdrpThreadTokenUnsetMainThreadToken();
    v78 = v104;
    if ( v104 < 0 )
      goto LABEL_245;
    v78 = LdrpPrepareModuleForExecution(LdrpImageEntry, v140);
  }
  v104 = v78;
  if ( v78 < 0 )
  {
LABEL_245:
    LODWORD(ReturnedLengthc) = v78;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7793,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      ReturnedLengthc);
    return v104;
  }
  LdrInitState = 2;
  result = LdrpInitializePatchData();
  v104 = result;
  if ( result >= 0 )
  {
    if ( ProcessEnvironmentBlock->BeingDebugged )
      LdrpDoDebuggerBreak();
    LdrpDropLastInProgressCount();
    if ( !Kernel32ThreadInitThunkFunction
      || (result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))Kernel32ThreadInitThunkFunction)(1LL, 0LL, 0LL),
          v104 = result,
          result >= 0)
      && (result = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress),
          v104 = result,
          result >= 0) )
    {
      LdrpProcessInitContextRecord = v123;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v105[0] = 0;
      v104 = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), v140, v105);
      LdrpReleaseLoaderLock(v82, 9, v104);
      LdrpFreeLoadContextOfNode(*(_QWORD *)(LdrpImageEntry + 152), (__int64)v140);
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath((__int64)v141);
      if ( v104 < 0 )
      {
        LODWORD(ReturnedLengthc) = v104;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          7941,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          ReturnedLengthc);
        return v104;
      }
      LdrpInitializeSmtDelayedSleep();
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v132[0] = 72LL;
        v132[1] = 1LL;
        v133 = 0LL;
        v134 = 0LL;
        v135 = 0LL;
        v136 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v132, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v132);
      }
      if ( g_ShimsEnabled
        && !((unsigned __int8 (__fastcall *)(_UNICODE_STRING *, _DWORD *))(__ROR8__(
                                                                             g_pfnSE_InstallAfterInit,
                                                                             64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              &SubKey,
              v74) )
      {
        Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline();
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
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
