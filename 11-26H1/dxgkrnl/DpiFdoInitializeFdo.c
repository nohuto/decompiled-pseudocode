/*
 * XREFs of DpiFdoInitializeFdo @ 0x140243960
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline @ 0x140086DB4 (Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x14008BC58 (-DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?ShouldHideMuxFromDriver@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x14008F6BC (-ShouldHideMuxFromDriver@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     DpiDxgkDdiDisplayMuxGetDriverSupportLevel @ 0x140093A98 (DpiDxgkDdiDisplayMuxGetDriverSupportLevel.c)
 *     DpiDxgkDdiDisplayMuxReportPresence @ 0x140094184 (DpiDxgkDdiDisplayMuxReportPresence.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 *     DpiInitializeBlockList @ 0x14023BDD8 (DpiInitializeBlockList.c)
 *     ?DpiBrightnessInitialize@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E3A0 (-DpiBrightnessInitialize@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiRequestIoPowerState @ 0x1403BE7FC (DpiRequestIoPowerState.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1403D0590 (DpiGetDevicePropertyDataBoolean.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1403F928C (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x140411AC4 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x14041357C (DpiGetDevicePropertyString.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x14041978C (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiQueryBusInterface @ 0x140423E24 (DpiQueryBusInterface.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  char v3; // r12
  char v4; // si
  char v5; // r15
  int v6; // eax
  size_t v7; // rdi
  void *Pool2; // rax
  int DevicePropertyString; // edi
  int v10; // r8d
  __int64 v11; // rcx
  struct _DEVICE_OBJECT *v12; // rcx
  int MiniportInterface; // eax
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 v15; // rax
  struct _UNICODE_STRING *v16; // rcx
  __int64 v17; // rax
  struct _UNICODE_STRING *v18; // rcx
  int v19; // edi
  _OWORD *v20; // rsi
  __int64 v21; // rax
  _WORD *v22; // rsi
  int v23; // eax
  bool v24; // di
  __int64 v25; // rdx
  _OWORD *v26; // rsi
  size_t v27; // r8
  void *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void (__fastcall *v38)(_QWORD); // rax
  void (__fastcall *v39)(_QWORD); // rax
  struct SYSMM_ADAPTER *v40; // rcx
  __int64 Size; // [rsp+28h] [rbp-E0h]
  __int64 Sizea; // [rsp+28h] [rbp-E0h]
  int Data; // [rsp+48h] [rbp-C0h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Type[2]; // [rsp+50h] [rbp-B8h] BYREF
  PVOID SymbolicLinkName[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  void *ThreadHandle; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  int v51; // [rsp+90h] [rbp-78h]
  const wchar_t *v52; // [rsp+98h] [rbp-70h]
  ULONG *v53; // [rsp+A0h] [rbp-68h]
  int v54; // [rsp+A8h] [rbp-60h]
  ULONG *v55; // [rsp+B0h] [rbp-58h]
  int v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C0h] [rbp-48h]
  int v58; // [rsp+C8h] [rbp-40h]
  const wchar_t *v59; // [rsp+D0h] [rbp-38h]
  unsigned int *v60; // [rsp+D8h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-28h]
  unsigned int *v62; // [rsp+E8h] [rbp-20h]
  int v63; // [rsp+F0h] [rbp-18h]
  __int64 v64; // [rsp+F8h] [rbp-10h]
  int v65; // [rsp+100h] [rbp-8h]
  const wchar_t *v66; // [rsp+108h] [rbp+0h]
  int *v67; // [rsp+110h] [rbp+8h]
  int v68; // [rsp+118h] [rbp+10h]
  int *v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+128h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+28h]
  int v72; // [rsp+138h] [rbp+30h]
  const wchar_t *v73; // [rsp+140h] [rbp+38h]
  int *v74; // [rsp+148h] [rbp+40h]
  int v75; // [rsp+150h] [rbp+48h]
  int *v76; // [rsp+158h] [rbp+50h]
  int v77; // [rsp+160h] [rbp+58h]
  __int64 v78; // [rsp+168h] [rbp+60h]
  int v79; // [rsp+170h] [rbp+68h]
  const wchar_t *v80; // [rsp+178h] [rbp+70h]
  __int64 *v81; // [rsp+180h] [rbp+78h]
  int v82; // [rsp+188h] [rbp+80h]
  __int64 v83; // [rsp+190h] [rbp+88h]
  int v84; // [rsp+198h] [rbp+90h]
  __int64 v85; // [rsp+1A0h] [rbp+98h]
  int v86; // [rsp+1A8h] [rbp+A0h]
  __int64 v87; // [rsp+1B0h] [rbp+A8h]
  __int128 v88; // [rsp+1B8h] [rbp+B0h]
  __int128 v89; // [rsp+1C8h] [rbp+C0h]

  DeviceExtension = (char *)a1->DeviceExtension;
  RequiredSize = 0;
  Type[0] = 0;
  ThreadHandle = 0LL;
  v3 = 0;
  *(_OWORD *)&SymbolicLinkName[1] = 0LL;
  *((_QWORD *)DeviceExtension + 14) = DpiFdoDispatchInternalIoctl;
  *((_QWORD *)DeviceExtension + 18) = DpiFdoDispatchSystemControl;
  v4 = 0;
  v5 = 0;
  *((_QWORD *)DeviceExtension + 44) = &DpiFdoHandleQueryInterface;
  *((_QWORD *)DeviceExtension + 43) = &DpiFdoHandleQueryDeviceRelations;
  LODWORD(v48) = 0;
  v50 = 0LL;
  v52 = L"GpuVirtualizationFlags";
  v51 = 288;
  Type[1] = g_VgpuReplaceWarp != 0 ? 8 : 0;
  v53 = &Type[1];
  v54 = 67108868;
  v55 = &Type[1];
  v56 = 4;
  v59 = L"DisableVaBackedVm";
  v60 = &g_VgpuDisableVaBackedVm;
  v62 = &g_VgpuDisableVaBackedVm;
  v66 = L"VirtualGpuOnly";
  v67 = &g_VirtualGpuOnly;
  v69 = &g_VirtualGpuOnly;
  v73 = L"LimitNumberOfVfs";
  v74 = &g_LimitNumberOfVfs;
  v76 = &g_LimitNumberOfVfs;
  v80 = L"DisableVersionMismatchCheck";
  v81 = &v48;
  v57 = 0LL;
  v58 = 288;
  v61 = 67108868;
  v63 = 4;
  v64 = 0LL;
  v65 = 288;
  v68 = 67108868;
  v70 = 4;
  v71 = 0LL;
  v72 = 288;
  v75 = 67108868;
  v77 = 4;
  v78 = 0LL;
  v79 = 288;
  v82 = 67108868;
  v83 = 0LL;
  v84 = 0;
  v85 = 0LL;
  v86 = 0;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v50, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = Type[1] & 1;
  g_VgpuReplaceWarp = (Type[1] >> 3) & 1;
  v6 = *((_DWORD *)DeviceExtension + 126);
  g_ForceSecureVirtualMachine = (Type[1] >> 2) & 1;
  if ( v6 )
  {
    v7 = (unsigned int)(8 * v6);
    Pool2 = (void *)ExAllocatePool2(64LL, v7, 1953656900LL);
    *((_QWORD *)DeviceExtension + 354) = Pool2;
    if ( !Pool2 )
    {
      DevicePropertyString = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 9862;
      goto LABEL_160;
    }
    memset(Pool2, 0, v7);
    **((_QWORD **)DeviceExtension + 354) = a1;
    *((_DWORD *)DeviceExtension + 710) = 1;
  }
  *((_DWORD *)DeviceExtension + 905) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           *((PDEVICE_OBJECT *)DeviceExtension + 19),
                           DevicePropertyDeviceDescription,
                           (__int64)&RequiredSize);
  if ( DevicePropertyString < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9889;
LABEL_41:
    v4 = 0;
    goto LABEL_160;
  }
  DpiGetDevicePropertyDataString(
    *((PDEVICE_OBJECT *)DeviceExtension + 19),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    (__int64)(DeviceExtension + 4968),
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *((PDEVICE_OBJECT *)DeviceExtension + 19),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    DeviceExtension + 4976,
    &RequiredSize,
    Type);
  IoGetDevicePropertyData(
    *((PDEVICE_OBJECT *)DeviceExtension + 19),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    DeviceExtension + 4984,
    &RequiredSize,
    Type);
  if ( !(_DWORD)v48 )
  {
    DevicePropertyString = DpiFdoValidateKmdAndPnpVersionMatch(DeviceExtension);
    if ( DevicePropertyString < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9936;
      goto LABEL_41;
    }
  }
  v11 = *((_QWORD *)DeviceExtension + 19);
  LOBYTE(Data) = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v11, &DEVPKEY_Device_InstallInProgress, &Data) >= 0 && (_BYTE)Data )
  {
    v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    LOBYTE(Data) = 0;
    IoSetDevicePropertyData(v12, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &Data);
  }
  if ( DeviceExtension[1153] )
  {
    if ( DeviceExtension[480] )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (__int64)a1,
                            (__int64)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1,
                            Size,
                            (__int64)(DeviceExtension + 944));
      DevicePropertyString = MiniportInterface;
      if ( MiniportInterface < 0
        || !*((_QWORD *)DeviceExtension + 122)
        || !*((_QWORD *)DeviceExtension + 123)
        || !*((_QWORD *)DeviceExtension + 124) )
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, MiniportInterface);
        WdLogGlobalForLineNumber = 9989;
        goto LABEL_157;
      }
    }
  }
  v3 = 1;
  if ( DeviceExtension[1158] )
  {
    v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    LOBYTE(Data) = 0;
    if ( IoGetDevicePropertyData(v14, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, Type) >= 0
      && Type[0] == 17
      && RequiredSize == 1
      && (_BYTE)Data == 0xFF )
    {
      DeviceExtension[1159] = 1;
    }
  }
  DevicePropertyString = IoRegisterDeviceInterface(
                           *((PDEVICE_OBJECT *)DeviceExtension + 19),
                           &GUID_COMPUTE_DEVICE_ARRIVAL,
                           0LL,
                           (PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( DevicePropertyString < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10028;
    goto LABEL_41;
  }
  v4 = 1;
  v15 = ExAllocatePool2(64LL, WORD1(SymbolicLinkName[1]), 1953656900LL);
  v16 = (struct _UNICODE_STRING *)(DeviceExtension + 2848);
  *((_QWORD *)DeviceExtension + 357) = v15;
  if ( !v15 )
  {
    DevicePropertyString = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 10049;
    goto LABEL_160;
  }
  *((_WORD *)DeviceExtension + 1425) = WORD1(SymbolicLinkName[1]);
  v16->Length = (unsigned __int16)SymbolicLinkName[1];
  RtlCopyUnicodeString(v16, (PCUNICODE_STRING)&SymbolicLinkName[1]);
  RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( !DeviceExtension[2722] )
  {
    DevicePropertyString = IoRegisterDeviceInterface(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             &GUID_DISPLAY_DEVICE_ARRIVAL,
                             0LL,
                             (PUNICODE_STRING)&SymbolicLinkName[1]);
    if ( DevicePropertyString < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 10079;
      goto LABEL_41;
    }
    v17 = ExAllocatePool2(64LL, WORD1(SymbolicLinkName[1]), 1953656900LL);
    v18 = (struct _UNICODE_STRING *)(DeviceExtension + 2864);
    *((_QWORD *)DeviceExtension + 359) = v17;
    if ( !v17 )
    {
      DevicePropertyString = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 10100;
      goto LABEL_160;
    }
    *((_WORD *)DeviceExtension + 1433) = WORD1(SymbolicLinkName[1]);
    v18->Length = (unsigned __int16)SymbolicLinkName[1];
    RtlCopyUnicodeString(v18, (PCUNICODE_STRING)&SymbolicLinkName[1]);
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  }
  DeviceExtension[482] = 0;
  DeviceExtension[484] = 0;
  *((_QWORD *)DeviceExtension + 61) = 0LL;
  if ( !DeviceExtension[480] )
  {
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 4072), SynchronizationEvent, 0);
    *((_QWORD *)DeviceExtension + 514) = DeviceExtension + 4104;
    *((_QWORD *)DeviceExtension + 513) = DeviceExtension + 4104;
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 528);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 4240), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 4264), NotificationEvent, 1u);
    DeviceExtension[484] = 1;
    *((_QWORD *)DeviceExtension + 536) = 0LL;
    *((_DWORD *)DeviceExtension + 1058) = 0;
    memset(DeviceExtension + 4128, 0, 0x60uLL);
    *((_DWORD *)DeviceExtension + 1036) = 1953656900;
    *((_DWORD *)DeviceExtension + 1037) = 11;
    *((_DWORD *)DeviceExtension + 1042) = 64;
    KeInitializeTimer((PKTIMER)(DeviceExtension + 4304));
    KeInitializeDpc((PRKDPC)(DeviceExtension + 4368), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, DeviceExtension);
    DevicePropertyString = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, a1);
    if ( DevicePropertyString < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 10178;
      goto LABEL_41;
    }
    SymbolicLinkName[0] = 0LL;
    DevicePropertyString = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, SymbolicLinkName, 0LL);
    *((PVOID *)DeviceExtension + 508) = SymbolicLinkName[0];
    ZwClose(ThreadHandle);
    if ( DevicePropertyString < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 10200;
      goto LABEL_41;
    }
  }
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 3832), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 451) = DeviceExtension + 3600;
  *((_QWORD *)DeviceExtension + 450) = DeviceExtension + 3600;
  ExInitializeResourceLite((PERESOURCE)(DeviceExtension + 3440));
  *((_QWORD *)DeviceExtension + 455) = DeviceExtension + 3632;
  *((_QWORD *)DeviceExtension + 454) = DeviceExtension + 3632;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 453);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 457);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 3664), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 684) = DeviceExtension + 5464;
  *((_QWORD *)DeviceExtension + 683) = DeviceExtension + 5464;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 685);
  IoCsqInitialize(
    (PIO_CSQ)(DeviceExtension + 5400),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *((_QWORD *)DeviceExtension + 694) = 0LL;
  *((_QWORD *)DeviceExtension + 695) = 0LL;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 232, NotificationEvent, 0);
  *((_DWORD *)DeviceExtension + 1386) = 1;
  *((_DWORD *)DeviceExtension + 1378) = 0;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 3544), 0);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 3720), 0);
  *((_QWORD *)DeviceExtension + 474) = DeviceExtension + 3784;
  *((_QWORD *)DeviceExtension + 473) = DeviceExtension + 3784;
  *((_QWORD *)DeviceExtension + 477) = DeviceExtension + 3808;
  *((_QWORD *)DeviceExtension + 476) = DeviceExtension + 3808;
  *((_QWORD *)DeviceExtension + 464) = DeviceExtension + 3704;
  *((_QWORD *)DeviceExtension + 463) = DeviceExtension + 3704;
  ExInitializeResourceLite((PERESOURCE)(DeviceExtension + 3928));
  DevicePropertyString = DpiFdoInitializeAdapterUniqueString(a1);
  v4 = 0;
  if ( DevicePropertyString < 0 )
  {
LABEL_159:
    ExDeleteResourceLite((PERESOURCE)(DeviceExtension + 3928));
    ExDeleteResourceLite((PERESOURCE)(DeviceExtension + 3440));
    goto LABEL_160;
  }
  v5 = 1;
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 19), (__int64)(DeviceExtension + 2992));
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 19), (__int64)(DeviceExtension + 3040));
  v19 = 0;
  v20 = DeviceExtension + 3096;
  if ( (unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline() )
  {
    v19 = DpiQueryMiniportInterface(
            (__int64)a1,
            (__int64)&GUID_DEVINTERFACE_I2C_VERSION_2,
            56,
            2,
            Sizea,
            (__int64)(DeviceExtension + 3096));
    if ( v19 >= 0 )
    {
      if ( *(_WORD *)v20 != 56
        || *((_WORD *)DeviceExtension + 1549) != 2
        || !*((_QWORD *)DeviceExtension + 391)
        || !*((_QWORD *)DeviceExtension + 392)
        || !*((_QWORD *)DeviceExtension + 393) )
      {
        DevicePropertyString = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10319;
        *v20 = 0LL;
        *(_OWORD *)(DeviceExtension + 3112) = 0LL;
        *(_OWORD *)(DeviceExtension + 3128) = 0LL;
        *((_QWORD *)DeviceExtension + 393) = 0LL;
LABEL_55:
        v4 = 0;
        goto LABEL_159;
      }
      *((_DWORD *)DeviceExtension + 772) = 2;
    }
  }
  if ( !(unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline() || v19 < 0 )
  {
    DpiQueryMiniportInterface(
      (__int64)a1,
      (__int64)&GUID_DEVINTERFACE_I2C,
      48,
      1,
      Sizea,
      (__int64)(DeviceExtension + 3096));
    *((_DWORD *)DeviceExtension + 772) = 1;
  }
  v21 = *((_QWORD *)DeviceExtension + 5);
  *((_DWORD *)DeviceExtension + 1506) = 1;
  if ( !*(_BYTE *)(v21 + 133) && !DeviceExtension[1158] )
  {
    v22 = DeviceExtension + 5896;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_WDDM_INTERFACE_DISPLAYMUX_2,
                128,
                2,
                Sizea,
                (__int64)(DeviceExtension + 5896)) >= 0 )
    {
      if ( *v22 != 128
        || *((_WORD *)DeviceExtension + 2949) != 2
        || !*((_QWORD *)DeviceExtension + 741)
        || !*((_QWORD *)DeviceExtension + 742)
        || !*((_QWORD *)DeviceExtension + 743)
        || !*((_QWORD *)DeviceExtension + 744)
        || !*((_QWORD *)DeviceExtension + 745)
        || !*((_QWORD *)DeviceExtension + 746)
        || !*((_QWORD *)DeviceExtension + 747)
        || !*((_QWORD *)DeviceExtension + 748)
        || !*((_QWORD *)DeviceExtension + 749)
        || !*((_QWORD *)DeviceExtension + 750)
        || !*((_QWORD *)DeviceExtension + 751)
        || !*((_QWORD *)DeviceExtension + 752) )
      {
        DevicePropertyString = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10398;
LABEL_87:
        v27 = 128LL;
LABEL_88:
        v28 = v22;
LABEL_89:
        memset(v28, 0, v27);
        goto LABEL_55;
      }
      LODWORD(SymbolicLinkName[0]) = 0;
      if ( (int)DpiDxgkDdiDisplayMuxGetDriverSupportLevel((__int64)DeviceExtension, SymbolicLinkName) < 0 )
      {
        *((_DWORD *)DeviceExtension + 1506) = 1;
      }
      else
      {
        v23 = (int)SymbolicLinkName[0];
        *((_DWORD *)DeviceExtension + 1506) = SymbolicLinkName[0];
        if ( v23 != 1 )
        {
          v24 = DISPLAY_MUX_MGR::DisplayMuxPresent(qword_140169448);
          if ( DISPLAY_MUX_MGR::ShouldHideMuxFromDriver(qword_140169448) )
          {
            WdLogSingleEntry0(4LL);
            WdLogGlobalForLineNumber = 10426;
            v24 = 0;
          }
          LOBYTE(v25) = v24;
          DpiDxgkDdiDisplayMuxReportPresence((__int64)DeviceExtension, v25);
          DeviceExtension[6393] = v24;
        }
      }
    }
  }
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v26 = DeviceExtension + 6400;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_WDDM_INTERFACE_DISPLAY_CORE,
                40,
                1,
                Sizea,
                (__int64)(DeviceExtension + 6400)) >= 0
      && (*(_WORD *)v26 != 40 || *((_WORD *)DeviceExtension + 3201) != 1 || !*((_QWORD *)DeviceExtension + 804)) )
    {
      DevicePropertyString = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 10464;
      *v26 = 0LL;
      *((_OWORD *)DeviceExtension + 401) = 0LL;
      *((_QWORD *)DeviceExtension + 804) = 0LL;
      goto LABEL_55;
    }
  }
  v29 = *((_QWORD *)DeviceExtension + 5);
  *((_DWORD *)DeviceExtension + 788) = 0;
  if ( !*(_BYTE *)(v29 + 133) || DeviceExtension[1158] )
  {
    v22 = DeviceExtension + 3160;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_3,
                128,
                4,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      if ( *v22 != 128
        || (v30 = 4, *((_WORD *)DeviceExtension + 1581) != 4)
        || !*((_QWORD *)DeviceExtension + 399)
        || !*((_QWORD *)DeviceExtension + 400)
        || !*((_QWORD *)DeviceExtension + 401)
        || !*((_QWORD *)DeviceExtension + 402)
        || !*((_QWORD *)DeviceExtension + 403)
        || !*((_QWORD *)DeviceExtension + 404)
        || !*((_QWORD *)DeviceExtension + 405)
        || !*((_QWORD *)DeviceExtension + 406)
        || !*((_QWORD *)DeviceExtension + 407)
        || !*((_QWORD *)DeviceExtension + 408)
        || !*((_QWORD *)DeviceExtension + 409)
        || !*((_QWORD *)DeviceExtension + 410) )
      {
        DevicePropertyString = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10513;
        goto LABEL_87;
      }
      goto LABEL_135;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_2,
                112,
                3,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      if ( *v22 != 112
        || (v30 = 3, *((_WORD *)DeviceExtension + 1581) != 3)
        || !*((_QWORD *)DeviceExtension + 399)
        || !*((_QWORD *)DeviceExtension + 400)
        || !*((_QWORD *)DeviceExtension + 401)
        || !*((_QWORD *)DeviceExtension + 402)
        || !*((_QWORD *)DeviceExtension + 403)
        || !*((_QWORD *)DeviceExtension + 404)
        || !*((_QWORD *)DeviceExtension + 405)
        || !*((_QWORD *)DeviceExtension + 406)
        || !*((_QWORD *)DeviceExtension + 407)
        || !*((_QWORD *)DeviceExtension + 408) )
      {
        DevicePropertyString = -1073741811;
        WdLogSingleEntry1(2LL);
        v27 = 112LL;
        WdLogGlobalForLineNumber = 10564;
        goto LABEL_88;
      }
      goto LABEL_135;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_2_JTP,
                120,
                2,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      v30 = 2;
      if ( *v22 != 120
        || *((_WORD *)DeviceExtension + 1581) != 2
        || !*((_QWORD *)DeviceExtension + 399)
        || !*((_QWORD *)DeviceExtension + 400)
        || !*((_QWORD *)DeviceExtension + 401)
        || !*((_QWORD *)DeviceExtension + 402)
        || !*((_QWORD *)DeviceExtension + 403)
        || !*((_QWORD *)DeviceExtension + 404)
        || !*((_QWORD *)DeviceExtension + 405)
        || !*((_QWORD *)DeviceExtension + 406)
        || !*((_QWORD *)DeviceExtension + 407)
        || !*((_QWORD *)DeviceExtension + 409) )
      {
        DevicePropertyString = -1073741811;
        WdLogSingleEntry1(2LL);
        v27 = 120LL;
        WdLogGlobalForLineNumber = 10617;
        goto LABEL_88;
      }
LABEL_135:
      *((_DWORD *)DeviceExtension + 788) = v30;
      goto LABEL_139;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM,
                104,
                1,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
      *((_DWORD *)DeviceExtension + 788) = 1;
  }
LABEL_139:
  *((_DWORD *)DeviceExtension + 840) = -1;
  if ( byte_140168DD7
    && *(_DWORD *)(*((_QWORD *)a1->DeviceExtension + 5) + 28LL) >= 0x4000u
    && (!*(_BYTE *)(*((_QWORD *)DeviceExtension + 5) + 133LL) || DeviceExtension[1158]) )
  {
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                64,
                1,
                Sizea,
                (__int64)(DeviceExtension + 3288)) < 0 )
    {
      memset(DeviceExtension + 3288, 0, 0x40uLL);
    }
    else if ( *((_WORD *)DeviceExtension + 1644) < 0x40u
           || *((_WORD *)DeviceExtension + 1645) != 1
           || !*((_QWORD *)DeviceExtension + 415)
           || !*((_QWORD *)DeviceExtension + 416)
           || !*((_QWORD *)DeviceExtension + 417)
           || !*((_QWORD *)DeviceExtension + 418) )
    {
      DevicePropertyString = -1073741811;
      WdLogSingleEntry1(2LL);
      v28 = DeviceExtension + 3288;
      WdLogGlobalForLineNumber = 10694;
      v27 = 64LL;
      goto LABEL_89;
    }
  }
  if ( DeviceExtension[1159] )
    *((_QWORD *)DeviceExtension + 15) = DpiFdoDispatchIoctl;
  if ( DeviceExtension[1158] )
  {
    *((_QWORD *)DeviceExtension + 13) = &DpiFdoDispatchCreate;
    *((_QWORD *)DeviceExtension + 12) = &DpiFdoDispatchCleanupAndClose;
  }
  DpiBrightnessInitialize(a1);
  DevicePropertyString = DpiInitializeBlockList((__int64)a1);
LABEL_157:
  v5 = v3;
  if ( DevicePropertyString >= 0 )
    return (unsigned int)DevicePropertyString;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_159;
LABEL_160:
  if ( *((_QWORD *)DeviceExtension + 508) )
    DpiRequestIoPowerState((_DWORD)a1, 7, v10, 0, 0LL);
  if ( v4 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 306);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 307);
  }
  v31 = (void *)*((_QWORD *)DeviceExtension + 429);
  *((_DWORD *)DeviceExtension + 854) = 0;
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *((_QWORD *)DeviceExtension + 429) = 0LL;
  }
  v32 = (void *)*((_QWORD *)DeviceExtension + 428);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *((_QWORD *)DeviceExtension + 428) = 0LL;
  }
  v33 = (void *)*((_QWORD *)DeviceExtension + 620);
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    *((_QWORD *)DeviceExtension + 620) = 0LL;
  }
  v34 = (void *)*((_QWORD *)DeviceExtension + 621);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *((_QWORD *)DeviceExtension + 621) = 0LL;
  }
  v35 = (void *)*((_QWORD *)DeviceExtension + 354);
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0);
    *((_QWORD *)DeviceExtension + 354) = 0LL;
  }
  v36 = (void *)*((_QWORD *)DeviceExtension + 357);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *((_QWORD *)DeviceExtension + 357) = 0LL;
  }
  v37 = (void *)*((_QWORD *)DeviceExtension + 359);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *((_QWORD *)DeviceExtension + 359) = 0LL;
  }
  v38 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 377);
  if ( v38 )
  {
    v38(*((_QWORD *)DeviceExtension + 375));
    *((_OWORD *)DeviceExtension + 187) = 0LL;
    *((_OWORD *)DeviceExtension + 188) = 0LL;
    *((_OWORD *)DeviceExtension + 189) = 0LL;
  }
  v39 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 383);
  if ( v39 )
  {
    v39(*((_QWORD *)DeviceExtension + 381));
    *((_OWORD *)DeviceExtension + 190) = 0LL;
    *((_OWORD *)DeviceExtension + 191) = 0LL;
    *((_OWORD *)DeviceExtension + 192) = 0LL;
  }
  v40 = (struct SYSMM_ADAPTER *)*((_QWORD *)DeviceExtension + 728);
  if ( v40 )
    SysMmDestroyAdapter(v40);
  return (unsigned int)DevicePropertyString;
}
