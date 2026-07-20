/*
 * XREFs of SmpLoadDataFromRegistry @ 0x1400159FC
 * Callers:
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     RtlStringCbPrintfW @ 0x140004B90 (RtlStringCbPrintfW.c)
 *     SmpConfigureSharedSessionData @ 0x14000A020 (SmpConfigureSharedSessionData.c)
 *     SmpCreateProtectedPrefixes @ 0x14000A880 (SmpCreateProtectedPrefixes.c)
 *     SmpTranslateSystemPartitionInformation @ 0x14000BE7C (SmpTranslateSystemPartitionInformation.c)
 *     SmpNtSerializeBoot @ 0x14000D240 (SmpNtSerializeBoot.c)
 *     SmpEventWrite @ 0x14000D280 (SmpEventWrite.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D2D4 (SmpFreeSavedRegistryEntry.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpFinalizePathStrings @ 0x14000E2B0 (SmpFinalizePathStrings.c)
 *     SmpReadSafeBootOption @ 0x14000E470 (SmpReadSafeBootOption.c)
 *     SmpInitializeSessionManagement @ 0x14000E800 (SmpInitializeSessionManagement.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140013FA0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpGetPlatformBinary @ 0x140014990 (SmpGetPlatformBinary.c)
 *     SmpInitializeDosDevices @ 0x1400152F0 (SmpInitializeDosDevices.c)
 *     SmpInitializeKnownDlls @ 0x1400154E0 (SmpInitializeKnownDlls.c)
 *     SmpInitializeKnownDllsAsync @ 0x1400156E0 (SmpInitializeKnownDllsAsync.c)
 *     SmpOpenKnownDllsHandles @ 0x140016EC0 (SmpOpenKnownDllsHandles.c)
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017924 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017AB0 (SmpRunSecureKernelTrustlets.c)
 *     SmpSendPlatformBinaryStatus @ 0x140017F7C (SmpSendPlatformBinaryStatus.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle)
{
  unsigned __int16 *Heap; // r14
  char v3; // r15
  __int64 NtSystemRoot; // rax
  int Environment; // ebx
  void *v6; // rax
  int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int8 *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  void *v13; // rax
  unsigned int v14; // edx
  PWSTR Buffer; // r8
  char v16; // al
  int v17; // eax
  __int64 v18; // r12
  int v19; // esi
  int PlatformBinary; // eax
  __int64 *v21; // rax
  __int64 v22; // rbx
  const UNICODE_STRING *v23; // rdi
  unsigned __int16 v24; // ax
  unsigned int v25; // edx
  USHORT v26; // ax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r8
  __int64 *v30; // rbx
  struct _UNICODE_STRING *v31; // rdi
  __int64 v32; // r8
  __int64 *v33; // rdi
  struct _UNICODE_STRING *v34; // rbx
  __int64 v35; // r8
  __int64 *v36; // rdi
  struct _UNICODE_STRING *v37; // rbx
  __int64 v38; // r8
  unsigned int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // ebx
  int RegistryValues; // eax
  int DynamicEnvironmentVariables; // eax
  __int64 v45; // r8
  __int64 *v46; // rdi
  struct _UNICODE_STRING *v47; // rbx
  __int64 v48; // r8
  __int64 *v49; // rdi
  struct _UNICODE_STRING *v50; // rbx
  char Size; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int Size_4; // [rsp+3Ch] [rbp-CCh] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  int ReturnLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ReturnLength_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A8h] BYREF
  PWSTR ObjectAttributes[7]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-38h] BYREF
  const wchar_t *v64; // [rsp+D8h] [rbp-30h]
  _QWORD v65[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v66[3]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v67[4]; // [rsp+108h] [rbp+0h] BYREF
  int v68; // [rsp+10Ch] [rbp+4h]
  HANDLE Object; // [rsp+110h] [rbp+8h]
  HANDLE ThreadHandle; // [rsp+118h] [rbp+10h]
  char v71; // [rsp+15Eh] [rbp+56h]
  _DWORD SystemInformation[3]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v73; // [rsp+184h] [rbp+7Ch]
  wchar_t pszDest[256]; // [rsp+198h] [rbp+90h] BYREF

  v57 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  v68 = 0;
  DestinationString = 0LL;
  memset_0(v67, 0, 0x64uLL);
  v65[0] = 7602290LL;
  v65[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v63 = 1310738LL;
  v64 = L"\\Sessions";
  v66[0] = 10354844LL;
  v66[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  Heap = 0LL;
  *(_QWORD *)&ValueName.Length = 2752552LL;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v3 = 0;
  Size_4 = 0;
  qword_1400319E8 = (__int64)&SmpBootExecuteList;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  qword_1400319F8 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  qword_140031A08 = (__int64)&SmpPlatformExecuteList;
  SmpPlatformExecuteList = (__int64)&SmpPlatformExecuteList;
  qword_140031A18 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_140031A28 = (__int64)&SmpSetupExecuteNoPnpSyncList;
  SmpSetupExecuteNoPnpSyncList = (__int64)&SmpSetupExecuteNoPnpSyncList;
  qword_140031B48 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = (__int64)&SmpPagingFileList;
  qword_140031A38 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = (__int64)&SmpDosDevicesList;
  qword_140031A48 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = (__int64)&SmpFileRenameList;
  qword_140031A58 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = (__int64)&SmpKnownDllsList;
  qword_140031A68 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = (__int64)&SmpExcludeKnownDllsList;
  qword_140031A78 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_140031A88 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140031B38 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = (__int64)&SmpExistingPageFilesList;
  ReturnLength = 0;
  SmpClearTempFiles = 0;
  KeyHandle = 0LL;
  memset(ObjectAttributes, 0, 52);
  Size = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  Environment = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( Environment < 0 )
  {
    v6 = RtlCreateEnvironment;
    v7 = 2320;
    SmpInitProgressByLine = 2318;
LABEL_3:
    SmpInitReturnStatus = Environment;
    SmpInitLastCall = (__int64)v6;
    SmpLogFailure((__int64)"SmpLoadDataFromRegistry", v7, Environment);
    goto LABEL_131;
  }
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[2] = 0LL;
  ObjectAttributes[3] = (PWSTR)v65;
  LODWORD(ObjectAttributes[4]) = 64;
  *(_OWORD *)&ObjectAttributes[5] = 0LL;
  if ( NtOpenKey(&KeyHandle, 0xF003Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]) >= 0 )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
    SmpMiniNTBoot = 1;
  }
  SmpReadSafeBootOption();
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[3] = (PWSTR)v66;
  ObjectAttributes[2] = 0LL;
  LODWORD(ObjectAttributes[4]) = 64;
  *(_OWORD *)&ObjectAttributes[5] = 0LL;
  Environment = NtOpenKey(&KeyHandle, 0xF003Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
  if ( Environment < 0 )
  {
    v6 = NtOpenKey;
    v7 = 2368;
    SmpInitProgressByLine = 2366;
    goto LABEL_3;
  }
  NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
  ReturnLength = 4;
  Environment = NtQuerySystemInformationEx(107LL, &ReturnLength, 4LL);
  if ( Environment != -1073741820 )
  {
    v6 = NtQuerySystemInformationEx;
    v7 = 2402;
    SmpInitProgressByLine = 2400;
    goto LABEL_3;
  }
  Heap = (unsigned __int16 *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Size_4);
  if ( !Heap )
  {
    v6 = RtlAllocateHeap;
    Environment = -1073741670;
    SmpInitProgressByLine = 2411;
    v7 = 2413;
    goto LABEL_3;
  }
  Environment = NtQuerySystemInformationEx(107LL, &ReturnLength, 4LL);
  if ( Environment < 0 )
  {
    v6 = NtQuerySystemInformationEx;
    v7 = 2429;
    SmpInitProgressByLine = 2427;
    goto LABEL_3;
  }
  v8 = 0LL;
  if ( Heap[5] )
  {
    v9 = Heap[5];
    v10 = (unsigned __int8 *)Heap + 33;
    do
    {
      v11 = *v10;
      v10 += 48;
      v8 = (unsigned int)(v11 + v8);
      --v9;
    }
    while ( v9 );
  }
  RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", v8, Size_4, &Size_4);
  v12 = -1LL;
  do
    ++v12;
  while ( pszDest[v12] );
  Environment = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v12 + 2);
  if ( Environment < 0 )
  {
    v13 = NtSetValueKey;
    v14 = 2460;
    Buffer = ValueName.Buffer;
    SmpInitProgressByLine = 2458;
LABEL_21:
    SmpInitReturnStatus = Environment;
    SmpInitLastCall = (__int64)v13;
    SmpLogFailureString((__int64)"SmpLoadDataFromRegistry", v14, (__int64)Buffer, Environment);
    goto LABEL_131;
  }
  RtlSetCurrentEnvironment(SmpDefaultEnvironment, ObjectAttributes);
  Environment = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable, 0LL, 0LL);
  if ( Environment < 0 )
  {
    v6 = RtlQueryRegistryValuesEx;
    v7 = 2484;
    SmpInitProgressByLine = 2482;
    goto LABEL_3;
  }
  Environment = SmpFinalizePathStrings();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2493;
    v6 = SmpFinalizePathStrings;
    v7 = 2495;
    goto LABEL_3;
  }
  SmpEventWrite(&SmssEvt_InitializeKnownDlls_Start);
  Environment = SmpOpenKnownDllsHandles(
                  &SmpKnownDllsObjectDirectoryName,
                  &SmpKnownDllsPathSuffix,
                  1LL,
                  &SmpKnownDllsObjectDirectory,
                  &SmpKnownDllsFileDirectory);
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2514;
    v6 = SmpOpenKnownDllsHandles;
    v7 = 2516;
    goto LABEL_3;
  }
  v16 = SmpLoadKnownDllsFlags;
  if ( SmpSoftBoot && (SmpLoadKnownDllsFlags & 2) != 0 )
  {
    v16 = SmpLoadKnownDllsFlags | 1;
    SmpLoadKnownDllsFlags |= 1u;
  }
  if ( (v16 & 1) != 0 )
  {
    Environment = SmpInitializeKnownDlls(1u);
    if ( Environment < 0 )
    {
LABEL_36:
      SmpInitProgressByLine = 2545;
      v6 = SmpInitializeKnownDlls;
      v7 = 2547;
      goto LABEL_3;
    }
    v17 = SmpInitializeKnownDllsAsync();
  }
  else
  {
    v17 = SmpInitializeKnownDlls(0);
  }
  Environment = v17;
  if ( v17 < 0 )
    goto LABEL_36;
  Environment = SmpInitializeSessionManagement();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2555;
    v6 = SmpInitializeSessionManagement;
    v7 = 2557;
    goto LABEL_3;
  }
  RtlSetCurrentEnvironment(ObjectAttributes[0], &SmpDefaultEnvironment);
  ObjectAttributes[0] = 0LL;
  Environment = SmpInitializeDosDevices();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2574;
    v6 = SmpInitializeDosDevices;
    v7 = 2576;
    goto LABEL_3;
  }
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[3] = (PWSTR)&v63;
  ObjectAttributes[5] = (PWSTR)SmpPrimarySecurityDescriptor;
  ObjectAttributes[2] = 0LL;
  LODWORD(ObjectAttributes[4]) = 208;
  ObjectAttributes[6] = 0LL;
  Environment = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
  if ( Environment < 0 )
  {
    v13 = NtCreateDirectoryObject;
    v14 = 2604;
    Buffer = (PWSTR)v64;
    SmpInitProgressByLine = 2602;
    goto LABEL_21;
  }
  Environment = SmpCreateProtectedPrefixes();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2617;
    v6 = SmpCreateProtectedPrefixes;
    v7 = 2619;
    goto LABEL_3;
  }
  v18 = 0LL;
  *(_QWORD *)&ReturnLength_8.Length = 0LL;
  if ( SmpHostSmss )
  {
    if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
    {
      *(_DWORD *)&ReturnLength_8.Length = 0;
      v73 = 0LL;
      SystemInformation[0] = 1094930505;
      v19 = -1073741823;
      SystemInformation[1] = 1;
      SystemInformation[2] = 1414546007;
      if ( NtQuerySystemInformation(
             SystemFirmwareTableInformation,
             SystemInformation,
             0x14u,
             (PULONG)&ReturnLength_8.Length) == -1073741789 )
        SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
    }
    else
    {
      PlatformBinary = SmpGetPlatformBinary(&DestinationString, &ReturnLength_8);
      v18 = *(_QWORD *)&ReturnLength_8.Length;
      v19 = PlatformBinary;
    }
  }
  else
  {
    v19 = -1073741823;
  }
  v21 = (__int64 *)SmpSetupExecuteList;
  v22 = SmpSetupExecuteList;
  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
  {
    if ( *(__int64 **)SmpBootExecuteList != &SmpBootExecuteList )
      goto LABEL_65;
    v23 = (const UNICODE_STRING *)(SmpBootExecuteList + 16);
    if ( !RtlEqualUnicodeString(&SmpAutoChkDefaultCommand, (PCUNICODE_STRING)(SmpBootExecuteList + 16), 1u)
      && (!SmpSoftBoot || !RtlPrefixUnicodeString(&SmpAutoChkKeyword, v23, 1u)) )
    {
      goto LABEL_65;
    }
    v21 = (__int64 *)SmpSetupExecuteList;
  }
  if ( v21 != &SmpSetupExecuteList
    && (*(__int64 **)v22 != &SmpSetupExecuteList
     || !SmpSoftBoot
     || (v24 = *(_WORD *)(v22 + 16), ReturnLength_8 = 0LL, v24 < 0x24u)
     || (ReturnLength_8.Length = 36,
         v25 = (unsigned __int16)(v24 - 36),
         v26 = *(_WORD *)(v22 + 18) - v25,
         ReturnLength_8.Buffer = (PWSTR)(*(_QWORD *)(v22 + 24) + 2 * ((unsigned __int64)v25 >> 1)),
         ReturnLength_8.MaximumLength = v26,
         !RtlEqualUnicodeString(&SmpStateMigrationKeyword, &ReturnLength_8, 1u)))
    || v19 >= 0 )
  {
LABEL_65:
    v27 = SmpNtSerializeBoot();
    if ( v27 < 0 )
    {
      SmpInitProgressByLine = 2711;
      SmpInitReturnStatus = v27;
      SmpInitLastCall = (__int64)NtSerializeBoot;
      SmpLogFailure((__int64)"SmpLoadDataFromRegistry", 2713, v27);
    }
  }
  SmpEventWrite(&SmssEvt_RunSecureKernelTrustlets_Start);
  if ( SmpHostSmss )
  {
    v28 = SmpRunSecureKernelTrustlets(&Size);
    v3 = Size;
    if ( v28 < 0 )
    {
      if ( Size )
      {
        SmpInitProgressByLine = 2728;
        SmpInitReturnStatus = v28;
        SmpInitLastCall = (__int64)SmpRunSecureKernelTrustlets;
        SmpLogFailure((__int64)"SmpLoadDataFromRegistry", 2730, v28);
      }
    }
  }
  SmpEventWrite(&SmssEvt_RunSecureKernelTrustlets_Stop);
  if ( !v3 && (__int64 *)SmpPlatformExecuteList != &SmpPlatformExecuteList )
  {
    SmpEventWrite(&SmssEvt_PlatformExecuteList_Start);
    v30 = (__int64 *)SmpPlatformExecuteList;
    do
    {
      v31 = (struct _UNICODE_STRING *)v30;
      if ( SmpHostSmss )
        SmpExecuteCommand((__int64)(v30 + 2), 0, v29, 0, 0LL);
      v30 = (__int64 *)*v30;
      SmpFreeSavedRegistryEntry(v31);
    }
    while ( v30 != &SmpPlatformExecuteList );
    SmpEventWrite(&SmssEvt_PlatformExecuteList_Stop);
  }
  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
  {
    SmpEventWrite(&SmssEvt_BootExecuteList_Start);
    v33 = (__int64 *)SmpBootExecuteList;
    do
    {
      v34 = (struct _UNICODE_STRING *)v33;
      SmpExecuteCommand((__int64)(v33 + 2), 0, v32, 0, 0LL);
      v33 = (__int64 *)*v33;
      SmpFreeSavedRegistryEntry(v34);
    }
    while ( v33 != &SmpBootExecuteList );
    SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
  }
  if ( (__int64 *)SmpBootExecuteNoPnpSyncList != &SmpBootExecuteNoPnpSyncList )
  {
    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
    v36 = (__int64 *)SmpBootExecuteNoPnpSyncList;
    do
    {
      v37 = (struct _UNICODE_STRING *)v36;
      SmpExecuteCommand((__int64)(v36 + 2), 0, v35, 0, 0LL);
      v36 = (__int64 *)*v36;
      SmpFreeSavedRegistryEntry(v37);
    }
    while ( v36 != &SmpBootExecuteNoPnpSyncList );
    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
  }
  if ( EventHandle )
    NtSetEvent(EventHandle, 0LL);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
  if ( SmpSoftBootSystemHiveReady )
    SmpReplaceSystemHiveOnSoftReboot();
  NtInitializeRegistry(0);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
  if ( v19 >= 0 )
  {
    if ( !(unsigned int)RtlQueryPerformanceFrequency(&v57) )
      v57 = 0LL;
    if ( !(unsigned int)RtlQueryPerformanceCounter(&v61) )
      v57 = 0LL;
    if ( (int)SmpExecuteCommand((__int64)&DestinationString, 0, v38, 32, (__int64)v67) < 0 )
    {
      v39 = 1;
    }
    else
    {
      if ( v71 >= 0 )
      {
        v39 = 3;
        NtTerminateProcess(Object, -1073740760);
      }
      else
      {
        v39 = 0;
        NtResumeThread(ThreadHandle, 0LL);
        NtWaitForSingleObject(Object, 0, 0LL);
      }
      NtClose(Object);
      NtClose(ThreadHandle);
    }
    if ( (unsigned int)RtlQueryPerformanceCounter(&v60) )
    {
      v40 = v57;
    }
    else
    {
      v40 = 0LL;
      v57 = 0LL;
    }
    if ( v40 <= 0 )
      v41 = 0LL;
    else
      v41 = 1000 * (v60 - v61) / v40;
    SmpSendPlatformBinaryStatus(v39, v18, v41, &DestinationString);
  }
  v42 = 0;
  if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
  {
    RegistryValues = RtlQueryRegistryValuesEx(
                       0LL,
                       L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
                       &SmpRegistryConfigurationTable2,
                       0LL,
                       0LL);
    if ( RegistryValues >= 0 )
      v42 = 1;
    else
      SmpLogFailure((__int64)"SmpLoadDataFromRegistry", 2930, RegistryValues);
  }
  if ( !SmpMiniNTBoot )
    SmpProcessFileRenames(v42);
  *(_QWORD *)&ReturnLength_8.Length = 0LL;
  Environment = TpAllocWork(&ReturnLength_8, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
  if ( Environment < 0 )
  {
    v6 = TpAllocWork;
    v7 = 2967;
    SmpInitProgressByLine = 2965;
    goto LABEL_3;
  }
  TpPostWork(*(_QWORD *)&ReturnLength_8.Length);
  if ( SmpWaitForPagingFiles )
    TpWaitForWork(*(_QWORD *)&ReturnLength_8.Length, 0LL);
  TpReleaseWork(*(_QWORD *)&ReturnLength_8.Length);
  DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
  Environment = DynamicEnvironmentVariables;
  if ( DynamicEnvironmentVariables >= 0 )
  {
    if ( (__int64 *)SmpSetupExecuteList != &SmpSetupExecuteList )
    {
      SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
      v46 = (__int64 *)SmpSetupExecuteList;
      do
      {
        v47 = (struct _UNICODE_STRING *)v46;
        SmpExecuteCommand((__int64)(v46 + 2), 0, v45, 0, 0LL);
        v46 = (__int64 *)*v46;
        SmpFreeSavedRegistryEntry(v47);
      }
      while ( v46 != &SmpSetupExecuteList );
      SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
    }
    if ( (__int64 *)SmpSetupExecuteNoPnpSyncList != &SmpSetupExecuteNoPnpSyncList )
    {
      SmpEventWrite(&SmssEvt_SetupExecuteNoPnpSyncList_Start);
      v49 = (__int64 *)SmpSetupExecuteNoPnpSyncList;
      do
      {
        v50 = (struct _UNICODE_STRING *)v49;
        SmpExecuteCommand((__int64)(v49 + 2), 0, v48, 0, 0LL);
        v49 = (__int64 *)*v49;
        SmpFreeSavedRegistryEntry(v50);
      }
      while ( v49 != &SmpSetupExecuteNoPnpSyncList );
      SmpEventWrite(&SmssEvt_SetupExecuteNoPnpSyncList_Stop);
    }
    Environment = SmpConfigureSharedSessionData();
    if ( Environment < 0 )
    {
      SmpInitProgressByLine = 3044;
      v6 = SmpConfigureSharedSessionData;
      v7 = 3046;
      goto LABEL_3;
    }
    SmpTranslateSystemPartitionInformation();
    Environment = 0;
  }
  else
  {
    SmpInitProgressByLine = 2988;
    SmpInitReturnStatus = DynamicEnvironmentVariables;
    SmpInitLastCall = (__int64)SmpCreateDynamicEnvironmentVariables;
  }
LABEL_131:
  if ( DestinationString.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Heap )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  if ( ObjectAttributes[0] )
    RtlSetCurrentEnvironment(ObjectAttributes[0], &SmpDefaultEnvironment);
  return (unsigned int)Environment;
}
