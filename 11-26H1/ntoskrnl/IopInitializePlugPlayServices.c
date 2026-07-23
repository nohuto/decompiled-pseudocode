/*
 * XREFs of IopInitializePlugPlayServices @ 0x140CC5E70
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x14048D948 (PnpDiagnosticTrace.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PnpGetRegistryDword @ 0x1404EE1C8 (PnpGetRegistryDword.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     McGenEventRegister_EtwRegister @ 0x1405B5AA8 (McGenEventRegister_EtwRegister.c)
 *     PiDmaGuardInitialize @ 0x1405DF48C (PiDmaGuardInitialize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x14077E5F0 (TlgRegisterAggregateProvider.c)
 *     ArbLibraryInitialize @ 0x14078BA00 (ArbLibraryInitialize.c)
 *     IoDeleteDriver @ 0x140798F00 (IoDeleteDriver.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14079E760 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x14079E820 (PipUpdateSetupInProgress.c)
 *     PipUpdateSetupInProgressNotify @ 0x14079E948 (PipUpdateSetupInProgressNotify.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A811C (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A815C (PnpCopyDeviceInstancePath.c)
 *     IopMemInitialize @ 0x1407A94C8 (IopMemInitialize.c)
 *     IopPortInitialize @ 0x1407A9964 (IopPortInitialize.c)
 *     IopDmaInitialize @ 0x1407A9A98 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x1407A9BB8 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x1407A9C98 (IopBusNumberInitialize.c)
 *     PiPnpRtlInit @ 0x1407A9F14 (PiPnpRtlInit.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x1407AA690 (PiDcHandleSystemFirmwareUpdate.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x140857508 (CmRegisterSystemHiveLimitCallback.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1409ABBD8 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PnpLogEvent @ 0x140A37B48 (PnpLogEvent.c)
 *     _CmAddDeviceToContainer @ 0x140AE600C (_CmAddDeviceToContainer.c)
 *     _CmCreateDevice @ 0x140AF540C (_CmCreateDevice.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 *     PipAllocateDeviceNode @ 0x140B15754 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B2BAF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140CBB96C (ArbInitializeOsInaccessibleRange.c)
 *     PiInitCacheGroupInformation @ 0x140CC7034 (PiInitCacheGroupInformation.c)
 *     PiInitFirmwareResources @ 0x140CC7118 (PiInitFirmwareResources.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC7408 (PipCheckSystemFirmwareUpdated.c)
 *     PipHardwareConfigInit @ 0x140CC7CBC (PipHardwareConfigInit.c)
 *     PipInitDeviceOverrideCache @ 0x140CC8264 (PipInitDeviceOverrideCache.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 *     PipResetDevices @ 0x140CC9164 (PipResetDevices.c)
 *     PiDeviceDependencyInit @ 0x140CC9B0C (PiDeviceDependencyInit.c)
 *     PnpInitializeNotification @ 0x140CCA0C4 (PnpInitializeNotification.c)
 *     IopInitializeResourceMap @ 0x140CCA408 (IopInitializeResourceMap.c)
 *     PnpOpenCCSPnpRegKey @ 0x140CCA7CC (PnpOpenCCSPnpRegKey.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140CCA868 (PnpQueryWatchdogTimeoutConfiguration.c)
 *     PnpBusTypeGuidInitialize @ 0x140CCAE98 (PnpBusTypeGuidInitialize.c)
 *     PiUEventInit @ 0x140CCAF2C (PiUEventInit.c)
 *     PiUEventProcessRegistry @ 0x140CCB108 (PiUEventProcessRegistry.c)
 *     PpInitializeBootDDB @ 0x140CCB264 (PpInitializeBootDDB.c)
 *     PiDmInit @ 0x140CCB750 (PiDmInit.c)
 *     PiDcInit @ 0x140CCB840 (PiDcInit.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CCB8D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140CCBF94 (PiAuCreateUserSids.c)
 *     PiAuFreeUserSids @ 0x140CCC1BC (PiAuFreeUserSids.c)
 *     PiDqInit @ 0x140CCC488 (PiDqInit.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 *     PnpInitializeDeviceEvents @ 0x140CCC8EC (PnpInitializeDeviceEvents.c)
 *     PiSwInit @ 0x140CCC9EC (PiSwInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x140CCD550 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140CCD5FC (PipProcessPendingServices.c)
 *     PiCslInitialize @ 0x140CCD6B0 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140CCD930 (PiKsrNotifyInitialize.c)
 */

int __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi
  int result; // eax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // ax
  __int16 v19; // cx
  HANDLE v20; // rbx
  KSPIN_LOCK *v21; // rbx
  unsigned __int16 *v22; // rax
  __int64 *v23; // r14
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v25; // si
  KSPIN_LOCK *v26; // rbx
  unsigned __int16 *v27; // rax
  __int64 *v28; // r14
  int v29; // eax
  unsigned __int16 v30; // si
  KSPIN_LOCK *v31; // rbx
  unsigned __int16 *v32; // rax
  __int64 *v33; // r14
  int v34; // eax
  unsigned __int16 v35; // si
  struct _DEVICE_OBJECT *v36; // rsi
  PDEVICE_OBJECT v37; // rcx
  PDEVICE_OBJECT v38; // rbx
  NTSTATUS v39; // eax
  int v40; // ebx
  __int64 v41; // rcx
  _BYTE v42[8]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v44; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v47; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING GuidString; // [rsp+80h] [rbp-80h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp-70h] BYREF
  int v51; // [rsp+94h] [rbp-6Ch] BYREF
  void *v52; // [rsp+98h] [rbp-68h] BYREF
  PVOID v53; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v54; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v55; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v56; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v57; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v60[64]; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  __int64 v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  unsigned __int64 retaddr; // [rsp+1B8h] [rbp+B8h]

  v55 = 0LL;
  Handle = 0LL;
  v52 = 0LL;
  *(_DWORD *)(&v47.MaximumLength + 1) = 0;
  DeviceObject = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v44 = 0LL;
  P = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&v56.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  v42[0] = 0;
  DestinationString = 0LL;
  v57 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return -1073741584;
    v39 = McGenEventRegister_EtwRegister(
            (const GUID *)MS_KernelPnP_Provider,
            a2,
            MS_KernelPnP_Provider_Context,
            MS_KernelPnP_Provider_Context);
    PnpEtwHandle = MS_KernelPnP_Provider_Context[0];
    v40 = 0;
    if ( v39 < 0 )
      v40 = v39;
    result = EtwRegister(
               &MS_KernelPnP_Rundown_Provider,
               (PETWENABLECALLBACK)PnpDiagRundownRegisterCallback,
               0LL,
               &PnpRundownEtwHandle);
    if ( result >= 0 )
    {
      result = v40;
      if ( v40 >= 0 )
      {
        TlgRegisterAggregateProvider((__int64)&dword_140E06E48);
        TlgRegisterAggregateProvider((__int64)&dword_140E06E80);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06EB8, 0LL, 0LL);
        result = PiDcInit(1LL);
        if ( result >= 0 )
        {
          result = PiUEventInit(1LL);
          if ( result >= 0 )
          {
            v41 = *(_QWORD *)(a1 + 240);
            *(_QWORD *)&UserData.Size = 80LL;
            v63 = 8LL;
            UserData.Ptr = v41 + 136;
            v62 = v41 + 3864;
            PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 2u, &UserData);
            result = PiPnpRtlInit(1u);
            if ( result >= 0 )
            {
              result = PiCslInitialize();
              if ( result >= 0 )
              {
                CachedContextBaseKey = PiDmaGuardInitialize(1);
                if ( CachedContextBaseKey < 0 )
                  return CachedContextBaseKey;
                DeviceObject = 0LL;
                if ( (int)KsrGetFirmwareInformation(&DeviceObject) < 0 )
                {
                  PnpKsrEnabled = 0;
                }
                else
                {
                  PnpKsrEnabled = 1;
                  result = PiKsrNotifyInitialize();
                  if ( result < 0 )
                    return result;
                }
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0xAu, 0, 0LL, 0LL, 0LL, 0LL);
                LOWORD(PnpShutdownEvent.Header.Lock) = 0;
                PnpShutdownEvent.Header.WaitListHead.Blink = &PnpShutdownEvent.Header.WaitListHead;
                PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
                PnpShutdownEvent.Header.Size = 6;
                PnpShutdownEvent.Header.SignalState = 0;
                if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
                  PpInitializeBootDDB(a1, 1LL);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_140E663AC = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (struct _LIST_ENTRY *)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.SavedApcStateFill[32];
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v44) >= 0 )
      {
        v3 = (unsigned int *)v44;
        if ( v44 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v4 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[2]));
              RtlInitUnicodeString(&v57, (PCWSTR)((char *)v4 + v4[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v57, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v4, 0);
            }
          }
          ExFreePoolWithTag(v3, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140F843E8 = 0LL;
    qword_140F843A8 = (__int64)&PnpDeviceCompletionQueue;
    *(_QWORD *)&PnpDeviceCompletionQueue = &PnpDeviceCompletionQueue;
    Semaphore.Header.WaitListHead.Blink = &Semaphore.Header.WaitListHead;
    Semaphore.Header.WaitListHead.Flink = &Semaphore.Header.WaitListHead;
    qword_140F843C0 = (__int64)&qword_140F843B8;
    qword_140F843B8 = (__int64)&qword_140F843B8;
    dword_140F843B0 = 0;
    Semaphore.Header.Type = 5;
    Semaphore.Header.Size = 8;
    Semaphore.Header.SignalState = 0;
    Semaphore.Limit = 0x7FFFFFFF;
    PiInitFirmwareResources(a1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
      PpInitializeBootDDB(a1, 0LL);
    PipInitDeviceOverrideCache();
    LOWORD(PnpSystemDeviceEnumerationComplete.Header.Lock) = 0;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Blink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Flink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.Size = 6;
    PnpSystemDeviceEnumerationComplete.Header.SignalState = 0;
    result = PiInitCacheGroupInformation();
    if ( result >= 0 )
    {
      PpRegistrySemaphore.Header.Type = 5;
      PpRegistrySemaphore.Header.WaitListHead.Blink = &PpRegistrySemaphore.Header.WaitListHead;
      PpRegistrySemaphore.Header.WaitListHead.Flink = &PpRegistrySemaphore.Header.WaitListHead;
      v6 = &IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v6[1] = v6;
        *v6 = v6;
        v6 += 2;
      }
      while ( (__int64)v6 < (__int64)&PiDDBLock );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64)&IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange(dword_140E2D878);
      CachedContextBaseKey = ArbLibraryInitialize();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopPortInitialize(v8, v7);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopMemInitialize(v11, v10);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopDmaInitialize(v13, v12);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopIrqInitialize(v15, v14);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopBusNumberInitialize(v17, v16);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiPnpRtlInit(0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipMigratePnpState();
      CachedContextBaseKey = PiDmInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v52);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v47.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v47.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v52, &v47, 0xF003Fu, 0, 0LL) < 0 )
        goto LABEL_45;
      if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v53) >= 0 )
      {
        if ( *((_DWORD *)v53 + 1) == 4 && *((_DWORD *)v53 + 3) == 4 )
          PnpBootOptions = *(_DWORD *)((char *)v53 + *((unsigned int *)v53 + 2));
        ExFreePoolWithTag(v53, 0);
      }
      if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v54) >= 0 )
      {
        if ( *((_DWORD *)v54 + 1) == 4 && *((_DWORD *)v54 + 3) == 4 )
          PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v54 + *((unsigned int *)v54 + 2));
        ExFreePoolWithTag(v54, 0);
      }
      LODWORD(v44) = 0;
      if ( (int)PnpGetRegistryDword(Handle, (__int64)L"DmaGuardTestMode", &v44) >= 0 && (_DWORD)v44 == 1 )
        PipDmaGuardTestMode = 1;
      PiUEventProcessRegistry(Handle);
      LODWORD(v44) = 0;
      if ( (int)PnpGetRegistryDword(Handle, (__int64)L"KEventNotificationLong", &v44) < 0 )
      {
        v18 = 5000;
      }
      else
      {
        v18 = (__int16)v44;
        v19 = 100;
        if ( (unsigned int)v44 < 0x64 || (v19 = -5536, (unsigned int)v44 > 0xEA60) )
        {
          PiNotifyLongRunningMs = v19;
LABEL_44:
          qword_140F85010 = (__int64)PipUpdateAsyncOptionsCallback;
          qword_140F85018 = (__int64)Handle;
          *(_QWORD *)PnpAsyncOptionsWorkItem = 0LL;
          PipUpdateAsyncOptionsCallback(Handle);
          Handle = 0LL;
LABEL_45:
          *(_DWORD *)&v47.Length = 4063292;
          v47.Buffer = L"\\Registry\\Machine\\System\\Setup";
          if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v47, 0x20019u) >= 0 )
          {
            PipUpdateSetupInProgress(Handle);
            if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupUpgradeInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupRollbackActiveInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
            {
              qword_140F85050 = (__int64)PipUpdateSetupInProgressCallback;
              qword_140F85058 = (__int64)Handle;
              *(_QWORD *)PnpSetupWorkItem = 0LL;
              PipUpdateSetupInProgressNotify(Handle, 0);
            }
            else
            {
              ZwClose(Handle);
            }
            Handle = 0LL;
          }
          CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2568LL));
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          PipCheckSystemFirmwareUpdated(v42);
          CachedContextBaseKey = PiDcInit(0LL);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          memset_0(v60, 0, sizeof(v60));
          CachedContextBaseKey = PiAuCreateUserSids(v60);
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = PiAuCreateStandardSecurityObject(v60);
            if ( CachedContextBaseKey >= 0 )
              CachedContextBaseKey = PiAuCreateLocalSystemSecurityObject(v60);
          }
          PiAuFreeUserSids(v60);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PiDqInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PpDevCfgInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          PipResetDevices();
          CachedContextBaseKey = CmCreateDevice(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"HTREE\\ROOT\\0",
                                   983103,
                                   &v55,
                                   0LL,
                                   0);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          v20 = v55;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v55,
            0x25u,
            1,
            (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
            78,
            0);
          v51 = 0;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v20,
            0xBu,
            4,
            (__int64)&v51,
            4,
            0);
          ZwClose(v20);
          qword_140F84438 = (__int64)&IopPendingEjects;
          IopPendingEjects = (__int64)&IopPendingEjects;
          qword_140F84428 = (__int64)&IopPendingSurpriseRemovals;
          IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
          if ( (unsigned __int64)&IopDeviceTreeLock < 0xFFFF800000000000uLL
            || MmDeterminePoolType((unsigned __int64)&IopDeviceTreeLock) == 256 )
          {
            ExpTraceLogBadResourceAddress((unsigned __int64)&IopDeviceTreeLock, retaddr);
          }
          memset_0(&IopDeviceTreeLock.OwnerTable, 0, 0x50uLL);
          IopDeviceTreeLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&IopDeviceTreeLock;
          IopDeviceTreeLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&IopDeviceTreeLock;
          IopDeviceTreeLock.SharedWaiters = 0LL;
          IopDeviceTreeLock.ExclusiveWaiters = 0LL;
          IopDeviceTreeLock.SpinLock = 0LL;
          if ( (NtGlobalFlag & 0x2000) != 0 )
          {
            v21 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
            if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
              && (v22 = (unsigned __int16 *)RtlStdLogStackTrace(
                                              *(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags,
                                              1),
                  (v23 = (__int64 *)v22) != 0LL) )
            {
              RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v21, v22);
              v25 = RecordedStackTraceIndex;
              if ( !RecordedStackTraceIndex )
                RtlStdReleaseStackTrace((__int64)v21, v23);
            }
            else
            {
              v25 = 0;
            }
            IopDeviceTreeLock.CreatorBackTraceIndex = v25;
          }
          else
          {
            IopDeviceTreeLock.CreatorBackTraceIndex = 0LL;
          }
          HIDWORD(IopDeviceTreeLock.Reserved2) = -1;
          ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&IopDeviceTreeLock);
          __incgsdword(0x9098u);
          if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
            PerfLogExecutiveResourceInitialize(65544, (__int64)&IopDeviceTreeLock, 0, 0);
          if ( (unsigned __int64)&IopSurpriseRemoveListLock < 0xFFFF800000000000uLL
            || MmDeterminePoolType((unsigned __int64)&IopSurpriseRemoveListLock) == 256 )
          {
            ExpTraceLogBadResourceAddress((unsigned __int64)&IopSurpriseRemoveListLock, retaddr);
          }
          memset_0(&IopSurpriseRemoveListLock.OwnerTable, 0, 0x50uLL);
          IopSurpriseRemoveListLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&IopSurpriseRemoveListLock;
          IopSurpriseRemoveListLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&IopSurpriseRemoveListLock;
          IopSurpriseRemoveListLock.SharedWaiters = 0LL;
          IopSurpriseRemoveListLock.ExclusiveWaiters = 0LL;
          IopSurpriseRemoveListLock.SpinLock = 0LL;
          if ( (NtGlobalFlag & 0x2000) != 0 )
          {
            v26 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
            if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
              && (v27 = (unsigned __int16 *)RtlStdLogStackTrace(
                                              *(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags,
                                              1),
                  (v28 = (__int64 *)v27) != 0LL) )
            {
              v29 = RtlpStdGetRecordedStackTraceIndex(v26, v27);
              v30 = v29;
              if ( !v29 )
                RtlStdReleaseStackTrace((__int64)v26, v28);
            }
            else
            {
              v30 = 0;
            }
            IopSurpriseRemoveListLock.CreatorBackTraceIndex = v30;
          }
          else
          {
            IopSurpriseRemoveListLock.CreatorBackTraceIndex = 0LL;
          }
          HIDWORD(IopSurpriseRemoveListLock.Reserved2) = -1;
          ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&IopSurpriseRemoveListLock);
          __incgsdword(0x9098u);
          if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
            PerfLogExecutiveResourceInitialize(65544, (__int64)&IopSurpriseRemoveListLock, 0, 0);
          if ( (unsigned __int64)&PiEngineLock < 0xFFFF800000000000uLL
            || MmDeterminePoolType((unsigned __int64)&PiEngineLock) == 256 )
          {
            ExpTraceLogBadResourceAddress((unsigned __int64)&PiEngineLock, retaddr);
          }
          memset_0(&PiEngineLock.OwnerTable, 0, 0x50uLL);
          PiEngineLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PiEngineLock;
          PiEngineLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PiEngineLock;
          PiEngineLock.SharedWaiters = 0LL;
          PiEngineLock.ExclusiveWaiters = 0LL;
          PiEngineLock.SpinLock = 0LL;
          if ( (NtGlobalFlag & 0x2000) != 0 )
          {
            v31 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
            if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
              && (v32 = (unsigned __int16 *)RtlStdLogStackTrace(
                                              *(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags,
                                              1),
                  (v33 = (__int64 *)v32) != 0LL) )
            {
              v34 = RtlpStdGetRecordedStackTraceIndex(v31, v32);
              v35 = v34;
              if ( !v34 )
                RtlStdReleaseStackTrace((__int64)v31, v33);
            }
            else
            {
              v35 = 0;
            }
            PiEngineLock.CreatorBackTraceIndex = v35;
          }
          else
          {
            PiEngineLock.CreatorBackTraceIndex = 0LL;
          }
          HIDWORD(PiEngineLock.Reserved2) = -1;
          ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&PiEngineLock);
          __incgsdword(0x9098u);
          if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
            PerfLogExecutiveResourceInitialize(65544, (__int64)&PiEngineLock, 0, 0);
          PnpSpinLock = 0LL;
          PiResourceListLock.Event.Header.WaitListHead.Blink = &PiResourceListLock.Event.Header.WaitListHead;
          PiResourceListLock.Event.Header.WaitListHead.Flink = &PiResourceListLock.Event.Header.WaitListHead;
          PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Blink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
          PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Flink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
          PiResourceListLock.Count = 1;
          PiResourceListLock.Owner = 0LL;
          PiResourceListLock.Contention = 0;
          LOWORD(PiResourceListLock.Event.Header.Lock) = 1;
          PiResourceListLock.Event.Header.Size = 6;
          PiResourceListLock.Event.Header.SignalState = 0;
          PnpRebuildPowerRelationsQueueLock.Count = 1;
          PnpRebuildPowerRelationsQueueLock.Owner = 0LL;
          PnpRebuildPowerRelationsQueueLock.Contention = 0;
          LOWORD(PnpRebuildPowerRelationsQueueLock.Event.Header.Lock) = 1;
          PnpRebuildPowerRelationsQueueLock.Event.Header.Size = 6;
          PnpRebuildPowerRelationsQueueLock.Event.Header.SignalState = 0;
          CachedContextBaseKey = PiDeviceDependencyInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
          PnpEnumerationInProgress = 0;
          PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
          PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
          qword_140F82E08 = (__int64)&PnpEnumerationRequestList;
          PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
          qword_140F82D28 = (__int64)&PiProfileDeviceListHead;
          PiProfileDeviceListHead = (__int64)&PiProfileDeviceListHead;
          PiProfileDeviceListLock.Event.Header.WaitListHead.Blink = &PiProfileDeviceListLock.Event.Header.WaitListHead;
          PiProfileDeviceListLock.Event.Header.WaitListHead.Flink = &PiProfileDeviceListLock.Event.Header.WaitListHead;
          PiProfileChangeSemaphore.Header.WaitListHead.Blink = &PiProfileChangeSemaphore.Header.WaitListHead;
          PiProfileChangeSemaphore.Header.WaitListHead.Flink = &PiProfileChangeSemaphore.Header.WaitListHead;
          IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
          IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
          v47.Buffer = L"\\Driver\\PnpManager";
          LOWORD(PnpEnumerationLock.Header.Lock) = 0;
          PnpEnumerationLock.Header.Size = 6;
          PnpEnumerationLock.Header.SignalState = 1;
          PiProfileDeviceListLock.Count = 1;
          PiProfileDeviceListLock.Owner = 0LL;
          PiProfileDeviceListLock.Contention = 0;
          LOWORD(PiProfileDeviceListLock.Event.Header.Lock) = 1;
          PiProfileDeviceListLock.Event.Header.Size = 6;
          PiProfileDeviceListLock.Event.Header.SignalState = 0;
          PiProfileDeviceCount = 0;
          PiProfileChangeSemaphore.Header.Type = 5;
          PiProfileChangeSemaphore.Header.Size = 8;
          PiProfileChangeSemaphore.Header.SignalState = 1;
          PiProfileChangeSemaphore.Limit = 1;
          IopWarmEjectPdo = 0LL;
          LOWORD(IopWarmEjectLock.Header.Lock) = 1;
          IopWarmEjectLock.Header.Size = 6;
          IopWarmEjectLock.Header.SignalState = 1;
          *(_DWORD *)&v47.Length = 2490404;
          CachedContextBaseKey = IoCreateDriver(&v47, PipPnPDriverEntry);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          v36 = DeviceObject;
          v37 = DeviceObject;
          DeviceObject->Flags |= 0x1000u;
          CachedContextBaseKey = PipAllocateDeviceNode((__int64)v37, (__int64)&IopRootDeviceNode);
          if ( IopRootDeviceNode )
          {
            PipSetDevNodeFlags((__int64)IopRootDeviceNode, 0x131u);
            PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 0xAu);
            *((_DWORD *)IopRootDeviceNode + 165) = -2;
            CachedContextBaseKey = PnpAllocateDeviceInstancePath((__int64)IopRootDeviceNode, 26);
            if ( CachedContextBaseKey >= 0 )
            {
              v56.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
              *(_DWORD *)&v56.Length = 1703960;
              PnpCopyDeviceInstancePath((__int64)IopRootDeviceNode, &v56);
              CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                       *((_QWORD *)IopRootDeviceNode + 4),
                                       (__int64)IopRootDeviceNode + 40);
              if ( CachedContextBaseKey >= 0 )
              {
                *(_DWORD *)&GuidString.Length = 5111884;
                GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
                RtlGUIDFromString(&GuidString, (GUID *)((char *)IopRootDeviceNode + 664));
                PnpQueryAndSaveDeviceNodeCapabilities((__int64)IopRootDeviceNode);
                PipSetDevNodeState((__int64)IopRootDeviceNode, 778);
                goto LABEL_120;
              }
            }
          }
          else
          {
            IoDeleteDevice(v36);
            IoDeleteDriver((char *)PnpDriverObject);
            if ( CachedContextBaseKey >= 0 )
            {
LABEL_120:
              CachedContextBaseKey = CmAddDeviceToContainer(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"HTREE\\ROOT\\0",
                                       0LL);
              if ( CachedContextBaseKey >= 0 )
              {
                if ( v42[0] )
                  PiDcHandleSystemFirmwareUpdate();
                DeviceObject = 0LL;
                if ( (int)PnpOpenCCSPnpRegKey(&DeviceObject) >= 0 )
                {
                  v38 = DeviceObject;
                  LODWORD(v44) = 0;
                  if ( (int)PnpGetRegistryDword(DeviceObject, (__int64)L"WatchdogBugcheckEnabled", &v44) < 0 )
                    PnpWatchdogBugcheckConfig = 2;
                  else
                    PnpWatchdogBugcheckConfig = (_DWORD)v44 != 0;
                  PnpQueryWatchdogTimeoutConfiguration(v38);
                  ZwClose(v38);
                }
                CachedContextBaseKey = PnpInitializeDeviceEvents();
                if ( CachedContextBaseKey >= 0 )
                {
                  PnpInitializeNotification();
                  CachedContextBaseKey = PnpBusTypeGuidInitialize();
                  if ( CachedContextBaseKey >= 0 )
                  {
                    LOWORD(PnpReplaceEvent.Header.Lock) = 1;
                    PnpReplaceEvent.Header.WaitListHead.Blink = &PnpReplaceEvent.Header.WaitListHead;
                    PnpReplaceEvent.Header.WaitListHead.Flink = &PnpReplaceEvent.Header.WaitListHead;
                    PnpReplaceEvent.Header.Size = 6;
                    PnpReplaceEvent.Header.SignalState = 1;
                    CachedContextBaseKey = PiSwInit();
                    if ( CachedContextBaseKey >= 0 )
                    {
                      CachedContextBaseKey = PiUEventInit(0LL);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        *(_QWORD *)&GuidString.Length = 2359330LL;
                        GuidString.Buffer = L"\\Driver\\DeviceApi";
                        CachedContextBaseKey = IoCreateDriver(&GuidString, PiDaDriverEntry);
                        if ( CachedContextBaseKey >= 0 )
                        {
                          CachedContextBaseKey = PiDmaGuardInitialize(0);
                          if ( CachedContextBaseKey >= 0 )
                          {
                            IoInvalidateBusRelationsLock = 0LL;
                            IoInvalidateBusRelationsMutex.Event.Header.WaitListHead.Blink = &IoInvalidateBusRelationsMutex.Event.Header.WaitListHead;
                            IoInvalidateBusRelationsMutex.Event.Header.WaitListHead.Flink = &IoInvalidateBusRelationsMutex.Event.Header.WaitListHead;
                            qword_140F84EA8 = (__int64)&IoInvalidateBusRelationsQueue;
                            IoInvalidateBusRelationsQueue = (__int64)&IoInvalidateBusRelationsQueue;
                            IoInvalidateBusRelationsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IoInvalidateBusRelationsWorker;
                            IoInvalidateBusRelationsMutex.Count = 1;
                            IoInvalidateBusRelationsMutex.Owner = 0LL;
                            IoInvalidateBusRelationsMutex.Contention = 0;
                            LOWORD(IoInvalidateBusRelationsMutex.Event.Header.Lock) = 1;
                            IoInvalidateBusRelationsMutex.Event.Header.Size = 6;
                            IoInvalidateBusRelationsMutex.Event.Header.SignalState = 0;
                            IoInvalidateBusRelationsWorkItem.Parameter = 0LL;
                            IoInvalidateBusRelationsWorkItem.List.Flink = 0LL;
                            if ( (int)PipProcessPendingServices() >= 0 )
                              PipProcessPendingOsExtensionResources();
                            PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0xAu, 0, 0LL, 0LL, 0LL, 0LL);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          return CachedContextBaseKey;
        }
      }
      PiNotifyLongRunningMs = v18;
      goto LABEL_44;
    }
  }
  return result;
}
