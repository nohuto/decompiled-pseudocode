/*
 * XREFs of DpiInitializeGlobalState @ 0x14044C9F0
 * Callers:
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14008592C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DpiCreateNtObjectTypes@@YAJXZ @ 0x140085ABC (-DpiCreateNtObjectTypes@@YAJXZ.c)
 *     ?Init@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x14008CA4C (-Init@DISPLAY_MUX_MGR@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiIndirectDisplayInitialStartTracker @ 0x14025062C (DpiIndirectDisplayInitialStartTracker.c)
 *     DpiKsrRestore @ 0x1402525F8 (DpiKsrRestore.c)
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288FF4 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAU.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // di
  int v2; // eax
  int v3; // eax
  int v4; // eax
  NTSTATUS v5; // eax
  int NtObjectTypes; // ebx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v8; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v10; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v13; // rdx
  struct _KMUTANT *Pool2; // rax
  struct _KMUTANT *v15; // rax
  __int64 v16; // rax
  DISPLAY_MUX_MGR *v17; // rbx
  int v19; // [rsp+40h] [rbp-1C8h] BYREF
  int v20; // [rsp+44h] [rbp-1C4h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-1C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-1B8h] BYREF
  int v23; // [rsp+58h] [rbp-1B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-1ACh] BYREF
  int Data; // [rsp+60h] [rbp-1A8h] BYREF
  int v26; // [rsp+64h] [rbp-1A4h] BYREF
  int v27; // [rsp+68h] [rbp-1A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-198h] BYREF
  int v29; // [rsp+80h] [rbp-188h] BYREF
  _QWORD v30[2]; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v31[2]; // [rsp+98h] [rbp-170h] BYREF
  UNICODE_STRING SourceString; // [rsp+A8h] [rbp-160h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-150h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+E8h] [rbp-120h] BYREF
  __int64 v35; // [rsp+100h] [rbp-108h] BYREF
  int v36; // [rsp+108h] [rbp-100h]
  const wchar_t *v37; // [rsp+110h] [rbp-F8h]
  int *v38; // [rsp+118h] [rbp-F0h]
  int v39; // [rsp+120h] [rbp-E8h]
  int *v40; // [rsp+128h] [rbp-E0h]
  int v41; // [rsp+130h] [rbp-D8h]
  __int64 v42; // [rsp+138h] [rbp-D0h]
  int v43; // [rsp+140h] [rbp-C8h]
  const wchar_t *v44; // [rsp+148h] [rbp-C0h]
  int *v45; // [rsp+150h] [rbp-B8h]
  int v46; // [rsp+158h] [rbp-B0h]
  int *v47; // [rsp+160h] [rbp-A8h]
  int v48; // [rsp+168h] [rbp-A0h]
  __int64 v49; // [rsp+170h] [rbp-98h]
  int v50; // [rsp+178h] [rbp-90h]
  const wchar_t *v51; // [rsp+180h] [rbp-88h]
  int *v52; // [rsp+188h] [rbp-80h]
  int v53; // [rsp+190h] [rbp-78h]
  int *v54; // [rsp+198h] [rbp-70h]
  int v55; // [rsp+1A0h] [rbp-68h]
  __int64 v56; // [rsp+1A8h] [rbp-60h]
  int v57; // [rsp+1B0h] [rbp-58h]
  __int64 v58; // [rsp+1B8h] [rbp-50h]
  __int128 v59; // [rsp+1C0h] [rbp-48h]
  __int128 v60; // [rsp+1D0h] [rbp-38h]

  v30[0] = 3932218LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v30[1] = L"Kernel-OneCore-DeviceFamilyID";
  KeyHandle = 0LL;
  Data = 0;
  v26 = 0;
  v24 = 0;
  v23 = 0;
  UnicodeString = 0LL;
  v0 = 0;
  v1 = 0;
  DestinationString = 0LL;
  if ( (int)ZwQueryLicenseValue(v30, &v24, &dword_140169440, 4LL, &v23) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4103;
    dword_140169440 = 3;
  }
  v31[0] = 2490404LL;
  v31[1] = L"Kernel-ProductInfo";
  if ( (int)ZwQueryLicenseValue(v31, &v24, &dword_140169444, 4LL, &v23) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4119;
    dword_140169444 = 0;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_140168DD0 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_140168DD1 = 1;
  if ( (unsigned __int8)ExIsSoftBoot() )
    DpiKsrRestore();
  dword_1401692A4 = 7236;
  v39 = 67108868;
  v46 = 67108868;
  v53 = 67108868;
  v37 = L"MiracastDefaultRtspPort";
  v19 = 0;
  v38 = &dword_1401692A4;
  v40 = &dword_1401692A4;
  v20 = 500000;
  v44 = L"PlatformSupportMiracast";
  v35 = 0LL;
  v45 = &v19;
  v47 = &v19;
  v51 = L"SuspendAdapterTimerPeriod";
  v52 = &v20;
  v54 = &v20;
  v36 = 288;
  v41 = 4;
  v42 = 0LL;
  v43 = 288;
  v48 = 4;
  v49 = 0LL;
  v50 = 288;
  v55 = 4;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v35, 0LL, 0LL);
  if ( (v2 < 0 || !dword_1401692A4) && (dword_1401692A4 = 7236, v2 < 0) || (byte_140168DD7 = 1, !v19) )
    byte_140168DD7 = 0;
  v3 = -v20;
  v20 = 0;
  DueTime.QuadPart = v3;
  v39 = 67108868;
  v46 = 67108868;
  v37 = L"SupportMultipleIntegratedDisplays";
  v53 = 67108868;
  v38 = &v20;
  v19 = 0;
  v40 = &v20;
  v44 = L"ForceBddFallbackOnly";
  v45 = &v19;
  v47 = &v19;
  v51 = L"DisableBgfxRelay";
  v52 = (int *)&v21;
  v54 = (int *)&v21;
  v21 = 0;
  v35 = 0LL;
  v36 = 288;
  v41 = 4;
  v42 = 0LL;
  v43 = 288;
  v48 = 4;
  v49 = 0LL;
  v50 = 288;
  v55 = 4;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v35, 0LL, 0LL) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4239;
    byte_140168DD9 = 0;
    byte_140169450 = 0;
    byte_140168DD4 = 0;
  }
  else
  {
    byte_140168DD9 = v20 != 0;
    byte_140169450 = v19 != 0;
    byte_140168DD4 = v21 != 0;
  }
  v21 = 0;
  v39 = 67108868;
  v46 = 67108868;
  v37 = L"HwSchMode";
  v53 = 67108868;
  v38 = (int *)&v21;
  v19 = 1;
  v40 = (int *)&v21;
  v20 = 0;
  v44 = L"HwSchOverrideBlockList";
  v35 = 0LL;
  v45 = &v19;
  v47 = &v19;
  v51 = L"HwSchTreatExperimentalAsStable";
  v52 = &v20;
  v54 = &v20;
  v36 = 288;
  v41 = 4;
  v42 = 0LL;
  v43 = 288;
  v48 = 4;
  v49 = 0LL;
  v50 = 288;
  v55 = 4;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v4 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v35, 0LL, 0LL);
  if ( v4 >= 0 && v21 < 3 )
  {
    dword_140168DF8 = v21;
    goto LABEL_23;
  }
  dword_140168DF8 = 0;
  if ( v4 >= 0 )
  {
LABEL_23:
    byte_140168DFC = 0;
    byte_140168DFD = v20 != 0;
    if ( !v19 )
      goto LABEL_25;
  }
  byte_140168DFC = 1;
LABEL_25:
  v19 = 0;
  v21 = -1;
  v20 = -1;
  v35 = 0LL;
  v39 = 67108868;
  v46 = 67108868;
  v37 = L"EnableBasicDisplayFallback";
  v53 = 67108868;
  v38 = (int *)&v21;
  v36 = 288;
  v40 = (int *)&v21;
  v44 = L"DisableBasicDisplayFallback";
  v45 = &v20;
  v47 = &v20;
  v51 = L"ForcePreserveBootDisplay";
  v52 = &v19;
  v54 = &v19;
  v41 = 4;
  v42 = 0LL;
  v43 = 288;
  v48 = 4;
  v49 = 0LL;
  v50 = 288;
  v55 = 4;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v35, 0LL, 0LL) >= 0 )
  {
    if ( v21 != 1 && v20 == 1 )
      byte_140168DD2 = 1;
    byte_140168DD3 = v19 == 1;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 != -1073741771 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4359;
    }
  }
  else
  {
    ZwClose(KeyHandle);
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  NtObjectTypes = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  if ( NtObjectTypes < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4384;
LABEL_71:
    if ( qword_140169050 )
      IoFreeWorkItem(qword_140169050);
    if ( v1 == 1 )
      ExDeleteNPagedLookasideList(&stru_140168EC0);
    if ( qword_140169070 )
    {
      ExFreePoolWithTag(qword_140169070, 0);
      qword_140169070 = 0LL;
    }
    if ( v0 == 1 )
      ExDeleteNPagedLookasideList(&Lookaside);
    if ( Mutex )
    {
      ExFreePoolWithTag(Mutex, 0);
      Mutex = 0LL;
    }
    goto LABEL_81;
  }
  Data = 69640;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  NtObjectTypes = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  if ( NtObjectTypes < 0 )
  {
    ZwClose(KeyHandle);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4406;
    goto LABEL_71;
  }
  v26 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  NtObjectTypes = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v26, 4u);
  ZwClose(KeyHandle);
  if ( NtObjectTypes < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4428;
    goto LABEL_71;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v8 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
  {
    NtObjectTypes = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4452;
    goto LABEL_71;
  }
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v10 = 0;
  QuadPart = p_NumberOfBytes->QuadPart;
  if ( p_NumberOfBytes->QuadPart )
  {
    p_BaseAddress = &v8->BaseAddress;
    do
    {
      DpGlobals += QuadPart;
      v13 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
      if ( v13 > *(&DpGlobals + 1) )
        *(&DpGlobals + 1) = v13;
      p_BaseAddress = &v8[++v10].BaseAddress;
      p_NumberOfBytes = p_BaseAddress + 1;
      QuadPart = p_BaseAddress[1].QuadPart;
    }
    while ( QuadPart );
  }
  ExFreePoolWithTag(v8, 0);
  Pool2 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
  Mutex = Pool2;
  if ( !Pool2 )
  {
    NtObjectTypes = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4496;
    goto LABEL_71;
  }
  KeInitializeMutex(Pool2, 0);
  word_140168E20 = 0;
  qword_140168E10 = (__int64)&qword_140168E08;
  qword_140168E08 = (__int64)&qword_140168E08;
  KeInitializeEvent(&stru_140168E28, NotificationEvent, 0);
  byte_140168E22 = 0;
  ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x58uLL, 0x74727044u, 0);
  v0 = 1;
  v15 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
  qword_140169070 = v15;
  if ( !v15 )
  {
    NtObjectTypes = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4542;
    goto LABEL_71;
  }
  KeInitializeMutex(v15, 0);
  dword_140169058 = 0;
  qword_140169068 = (__int64)&qword_140169060;
  qword_140169060 = (__int64)&qword_140169060;
  KeInitializeTimerEx(&stru_140168FD0, SynchronizationTimer);
  KeInitializeDpc(&stru_140169010, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
  qword_140169050 = IoAllocateWorkItem(g_pDriverObject);
  if ( !qword_140169050 )
  {
    NtObjectTypes = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4560;
    goto LABEL_71;
  }
  ExInitializeNPagedLookasideList(&stru_140168EC0, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
  byte_140169220 = 0;
  v1 = 1;
  KeInitializeMutex(&stru_140169228, 0);
  v27 = 2;
  qword_140169268 = (__int64)&qword_140169260;
  qword_140169260 = (__int64)&qword_140169260;
  v29 = 4;
  if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
         9LL,
         4LL,
         &v27,
         &v29) < 0
    || (byte_140168DD6 = 1, v27 == 2) )
  {
    byte_140168DD6 = 0;
  }
  byte_140168DD5 = 0;
  dword_1401691D4 = -1;
  KeInitializeSpinLock(&SpinLock);
  qword_140169288 = (__int64)&qword_140169280;
  qword_140169280 = (__int64)&qword_140169280;
  dword_1401692A0 = 0;
  qword_140169298 = (__int64)&qword_140169290;
  qword_140169290 = (__int64)&qword_140169290;
  NtObjectTypes = IoRegisterPlugPlayNotification(
                    EventCategoryDeviceInterfaceChange,
                    1u,
                    &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                    (PDRIVER_OBJECT)g_pDriverObject,
                    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                    0LL,
                    &qword_140169270);
  if ( NtObjectTypes < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4635;
    qword_140169270 = 0LL;
    goto LABEL_71;
  }
  *(_QWORD *)&SourceString.Length = 8781956LL;
  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  NtObjectTypes = DxgkCreateFeatureDatabase(&SourceString, 0LL, 1u, 0, &qword_140169458);
  if ( NtObjectTypes < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4650;
    goto LABEL_71;
  }
  IoWorkItem = 0LL;
  qword_140168FA8 = (__int64)&qword_140168FA0;
  qword_140168FA0 = (__int64)&qword_140168FA0;
  dword_140168FB0 = 0;
  qword_140168F98 = 0LL;
  dword_140168F60 = 1;
  qword_140168F68 = 0LL;
  dword_140168F70 = 0;
  KeInitializeEvent(&stru_140168F78, SynchronizationEvent, 0);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  byte_140169398 = 0;
  KeInitializeMutex(&stru_1401693A0, 0);
  qword_1401693E0 = (__int64)&qword_1401693D8;
  qword_1401693D8 = &qword_1401693D8;
  DpiIndirectDisplayInitialStartTracker();
  byte_140168DDC = 0;
  qword_140169368 = 1LL;
  dword_14016921C = 0;
  v16 = operator new(0x168uLL, 0x4B677844u, 256LL);
  v17 = (DISPLAY_MUX_MGR *)v16;
  if ( v16 )
  {
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_DWORD *)(v16 + 48) = 0;
    *(_DWORD *)(v16 + 52) = -1;
    *(_DWORD *)(v16 + 56) = 1;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_QWORD *)(v16 + 72) = 0LL;
    *(_QWORD *)(v16 + 88) = 0LL;
    *(_BYTE *)v16 = 0;
    *(_DWORD *)(v16 + 4) = 1;
    *(_BYTE *)(v16 + 8) = 0;
    *(_DWORD *)(v16 + 12) = 1;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_DWORD *)(v16 + 80) = 0;
    *(_BYTE *)(v16 + 84) = 0;
    *(_QWORD *)(v16 + 96) = 0LL;
    *(_QWORD *)(v16 + 104) = 0LL;
    *(_BYTE *)(v16 + 112) = 0;
    *(_OWORD *)(v16 + 116) = 0LL;
    *(_DWORD *)(v16 + 132) = 0;
    *(_QWORD *)(v16 + 136) = 0LL;
    *(_DWORD *)(v16 + 144) = 0;
    *(_BYTE *)(v16 + 148) = 0;
    memset((void *)(v16 + 149), 0, 0xD1uLL);
  }
  else
  {
    v17 = 0LL;
  }
  qword_140169448 = v17;
  if ( !v17 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4692;
    NtObjectTypes = -1073741801;
    goto LABEL_71;
  }
  NtObjectTypes = DISPLAY_MUX_MGR::Init(v17);
  if ( NtObjectTypes < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4699;
    goto LABEL_71;
  }
  if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    KeInitializeMutex(&Object, 0);
  NtObjectTypes = DpiCreateNtObjectTypes();
  if ( NtObjectTypes < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4715;
    goto LABEL_71;
  }
LABEL_81:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)NtObjectTypes;
}
