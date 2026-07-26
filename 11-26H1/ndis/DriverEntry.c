/*
 * XREFs of DriverEntry @ 0x14018E240
 * Callers:
 *     GsDriverEntry @ 0x14018E010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     NdisAllocatePacketPoolEx @ 0x14002BE50 (NdisAllocatePacketPoolEx.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     NdisAllocateNetBufferPool @ 0x14005AEA0 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x14005B160 (NdisAllocateNetBufferListPool.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x14008E0B0 (-ndisVerifierInitialization@@YAEXZ.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline @ 0x14009764C (Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline.c)
 *     McGenEventRegister_EtwRegister @ 0x1400977D4 (McGenEventRegister_EtwRegister.c)
 *     NdisDllInitialize @ 0x140097800 (NdisDllInitialize.c)
 *     ?ndisInitializeGlobalTriageData@@YAXXZ @ 0x14009AF20 (-ndisInitializeGlobalTriageData@@YAXXZ.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x14009B014 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1400A7440 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400C7EE0 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1400C8904 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400C9AC0 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400CC7D8 (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DF8D4 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E76FC (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1400E7DE0 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?InitializeBase@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ @ 0x140138C30 (-InitializeBase@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14013A1BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x14013BA78 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisInitializeStackTraces@@YAXXZ @ 0x140147F94 (-ndisInitializeStackTraces@@YAXXZ.c)
 *     ??0KLoader@@QEAA@XZ @ 0x140148034 (--0KLoader@@QEAA@XZ.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x14014A32C (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x140152938 (TlgRegisterAggregateProviderEx.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140168A60 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016FF50 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x14018E078 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     wil_InitializeFeatureStaging @ 0x14018EC8C (wil_InitializeFeatureStaging.c)
 *     ?ndisMiniportFdoInitializeSubsystem@@YAJXZ @ 0x14018F020 (-ndisMiniportFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018F098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14018F23C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x14018FA4C (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x14018FBAC (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z @ 0x1401901C8 (-ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z.c)
 *     ?ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z @ 0x1401904D4 (-ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1401905D0 (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisInitializePerProcRcvTracker@@YAXXZ @ 0x14019072C (-ndisInitializePerProcRcvTracker@@YAXXZ.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1401907A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 *     ?ndisVBusNmrInitializeClient@@YAJXZ @ 0x140190C44 (-ndisVBusNmrInitializeClient@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x140190D24 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x140191714 (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x140191868 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x140191B38 (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // eax
  NTSTATUS v7; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int8 (*v9)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 (*v12)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  char *v13; // rbx
  __int64 v14; // rsi
  NTSTATUS v15; // eax
  int v16; // eax
  SIZE_T v17; // rax
  SIZE_T v18; // rax
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // r9
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // r9
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // r8
  unsigned __int8 v30; // r9
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int8 (*v37)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  struct _DRIVER_OBJECT *v38; // rcx
  unsigned __int8 (*v39)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 (*v40)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  void *v41; // rcx
  unsigned __int8 Handle; // [rsp+20h] [rbp-B9h]
  unsigned __int8 Handlea; // [rsp+20h] [rbp-B9h]
  unsigned __int8 Handleb; // [rsp+20h] [rbp-B9h]
  unsigned __int8 Handlec; // [rsp+20h] [rbp-B9h]
  __int64 Tag; // [rsp+28h] [rbp-B1h]
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+40h] [rbp-99h] BYREF
  int Status; // [rsp+58h] [rbp-81h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+70h] [rbp-69h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-39h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  _OWORD OutputBuffer[2]; // [rsp+D8h] [rbp-1h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  ndisWppInitTracingEx(DriverObject, RegistryPath);
  traceInited = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      10,
      (struct _GUID *)&WPP_4569b34cddb434e75d3126ba0c358221_Traceguids);
  }
  McGenEventRegister_EtwRegister(
    (const GUID *)&NDIS_PROVIDER_ID,
    v4,
    NDIS_PROVIDER_ID_Context,
    NDIS_PROVIDER_ID_Context);
  McGenEventRegister_EtwRegister(
    &SLEEPSTUDY_ETW_PROVIDER,
    v5,
    SLEEPSTUDY_ETW_PROVIDER_Context,
    SLEEPSTUDY_ETW_PROVIDER_Context);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14011C6F8, 0LL, 0LL);
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  v6 = TlgRegisterAggregateProviderEx();
  if ( v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_4569b34cddb434e75d3126ba0c358221_Traceguids,
      v6);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePool2(258LL, RegistryPath->Length + 2LL, 538985550LL);
  if ( !ndisRegistryPath.Buffer )
    return -1073741670;
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  wil_InitializeFeatureStaging();
  IsEnabledDeviceUsageNoInline = Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline();
  ndisEtwRundownEnabled = 1;
  g_featureNVBugFixes2507 = IsEnabledDeviceUsageNoInline != 0;
  NdisDllInitialize();
  qword_14011EA58 = (__int64)&qword_14011EA50;
  qword_14011EA50 = (__int64)&qword_14011EA50;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&stru_14011EA48);
  memset(&Parameters, 0, sizeof(Parameters));
  KnobNamespace::KnobNamespace(
    &stru_14011E830,
    (struct _DRIVER_OBJECT *)ndisDriverObject,
    (struct _CONFIG_KNOB_NAMESPACE *)&Parameters);
  ndisNblTrackerInitialize();
  ndisRegisterKnobs(&stru_1400F7040, 17LL, v9, 0LL);
  v7 = ndisFdoInitializeSubsystem();
  if ( v7 >= 0 )
  {
    v7 = ndisLwmInitializeSubsystem();
    if ( v7 >= 0 )
    {
      v7 = ndisStackExpansionInitializeSubsystem(v11, v10, v12);
      if ( v7 >= 0 )
      {
        DriverObject->DriverUnload = 0LL;
        KeInitializeSpinLock(&ndisGlobalLock);
        KeInitializeSpinLock(&ndisMiniDriverListLock);
        KeInitializeSpinLock(&ndisProtocolListLock);
        KeInitializeSpinLock(&ndisMiniportListLock);
        KeInitializeSpinLock(&ndisGlobalPacketPoolListLock);
        KeInitializeSpinLock(&ndisGlobalOpenListLock);
        KeInitializeSpinLock(&ndisGlobalFilterListLock);
        KeInitializeSpinLock(&ndisFilterDriverListLock);
        KeInitializeSpinLock(&ndisAbortedRequestsListLock);
        KeInitializeSpinLock(&ndisGlobalTimerListLock);
        ndisDmaAlignment = 8;
        ndisTimeIncrement = KeQueryTimeIncrement();
        ExInitializeResourceLite(&SharedMemoryResource);
        ndisReadRegistry();
        ndisFlags &= ~0x400u;
        KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
        PoolAgingTicks.HighPart = 0;
        PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
        *((_QWORD *)ndisDriverObject + 10) = &unk_1400F53A0;
        ndisInitializeStackTraces();
        ndisWorkItemLog = (struct NDIS_EVENT_LOG_HANDLE__ *)ndisAllocateEventLog(0, 7);
        imp_WppRecorderIsDefaultLogAvailable(WPP_GLOBAL_Control);
        if ( (ndisFlags & 0x100) == 0 )
          ndisVerifierInitialization();
        v13 = (char *)&ndisAbortedRequests;
        v14 = 16LL;
        do
        {
          memset(v13, 0, 0xB0uLL);
          v13 += 248;
          --v14;
        }
        while ( v14 );
        RtlInitUnicodeString(&DestinationString, L"\\CallBack\\NdisBindUnbind");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v15 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
        if ( v15 < 0 )
          DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v15);
        if ( PoRegisterPowerSettingCallback(
               0LL,
               &GUID_ACDC_POWER_SOURCE,
               (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
               0LL,
               &ndisPowerStateCallbackHandle) < 0 )
          DbgPrint("Ndis: failed to register a power state Callback routine\n");
        if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) < 0 )
          goto LABEL_26;
        if ( LOBYTE(OutputBuffer[0]) )
        {
          if ( LOBYTE(OutputBuffer[0]) != 1 )
            goto LABEL_25;
        }
        else if ( BYTE1(OutputBuffer[0]) )
        {
LABEL_25:
          ndisAcOnLine = 0;
LABEL_26:
          ndisAoAcInitializeSubsystem();
          KeInitializeSpinLock(&qword_14011E888);
          qword_14011F208 = (__int64)&qword_14011F200;
          qword_14011F200 = (__int64)&qword_14011F200;
          ndisInitializeNblPoolGlobal();
          qword_14011ECB0 = (__int64)&ndisGlobalPacketPoolList;
          ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
          qword_14011D2C8 = (__int64)&ndisGlobalTimerList;
          ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
          KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
          KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
          ndisPcwInitialize();
          KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&WPP_MAIN_CB.Dpc.DeferredContext);
          *(_QWORD *)&Parameters.DataSize = 0LL;
          WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Dpc.SystemArgument1;
          WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
          Parameters.PoolTag = 1684948046;
          Parameters.Header = (_NDIS_OBJECT_HEADER)1311104;
          *(_DWORD *)&Parameters.ProtocolId = 256;
          ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, &Parameters);
          if ( !ndisNetBufferListPool )
            DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
          *(_QWORD *)&Parameters.PoolTag = 0LL;
          Parameters.Header = (_NDIS_OBJECT_HEADER)1048960;
          *(_DWORD *)&Parameters.ProtocolId = 1684948046;
          ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, (PNET_BUFFER_POOL_PARAMETERS)&Parameters);
          if ( !ndisNetBufferPool )
            DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
          v16 = ndisInitializePeriodicReceives();
          if ( v16 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Tag) = v16;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              1u,
              1u,
              0xCu,
              (struct _GUID *)&WPP_4569b34cddb434e75d3126ba0c358221_Traceguids,
              Tag);
          }
          ndisInitializePerProcRcvTracker();
          Status = 0;
          NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
          NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
          v17 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
          ExInitializeNPagedLookasideList(
            &ndisRcv100BytesLL,
            0LL,
            0LL,
            0x200u,
            ((v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
            0x7254444Eu,
            0);
          v18 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
          ExInitializeNPagedLookasideList(
            &ndisRcv1514BytesLL,
            0LL,
            0LL,
            0x200u,
            ((v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
            0x7254444Eu,
            0);
          AllUsersAclRead = ndisCreateAcl(v20, v19, v21, v22, Handle, 1, 0x80000001);
          AllUsersAclWrite = ndisCreateAcl(v24, v23, v25, v26, Handlea, 1, 0x40000002u);
          AllUsersAclReadWrite = ndisCreateAcl(v28, v27, v29, v30, Handleb, 1, 0xC0000013);
          AdminsAcl = ndisCreateAcl(v32, v31, v33, v34, Handlec, 0, 0xC0000013);
          ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
          ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
          ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
          ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
          IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
          ndisCpuInitializeSubsystemPhase2();
          v7 = ndisBindInitialize();
          if ( v7 >= 0 )
          {
            ndisIfInitializePhase1();
            v7 = ndisPDInitialize();
            if ( v7 >= 0 )
            {
              ndisVBusNmrInitializeClient();
              ndisMiniportFdoInitializeSubsystem();
              *(_QWORD *)&Info.Version = 512LL;
              Info.Name = (PCUNICODE_STRING)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Name;
              *(_QWORD *)&Info.CounterCount = 10LL;
              Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Descriptors;
              v52 = 0LL;
              Info.Callback = (PPCW_CALLBACK)ndisNdkPcwProviderCallback;
              Info.CallbackContext = 0LL;
              PcwRegister(&ndisNetworkDirectCounterSet, &Info);
              qword_14011F750 = 0LL;
              qword_14011F758 = (__int64 (__fastcall *)(_QWORD))ndisPktMonComponentNotify;
              KeInitializeMutex(&PktMonCompMutex, 0);
              qword_14011F7E8 = &PktMonCompList;
              PktMonCompList = (__int64)&PktMonCompList;
              PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
              qword_14011F748 = (__int64)ndisPktMonRegisterComponentsCallback;
              NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
              ndisRegisterPDCounterSets();
              word_14011CC4E = *(_WORD *)ndisNblTrackerMode;
              word_14011CC50 = ndisMaxNumberOfProcessors;
              qword_14011CC58 = (__int64)&qword_14011F210;
              NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
              ndisDoesSystemSupportSriov();
              ndisReinitializeHistograms();
              ndisInitializeDmaSubsystem(v36, v35, v37);
              qword_14011EA40 = (struct KPushLockBase *)KLoader::KLoader((KLoader *)&unk_14011EA28);
              ndisLoaderDeviceObject = ndisKLoaderCreateControlDeviceObject(v38);
              ndisRegisterKnobs(&stru_1400F6E90, 2LL, v39, 0LL);
              ndisRegisterKnobs(&stru_1400F6E30, 1LL, v40, 0LL);
              KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::InitializeBase((struct _KEVENT *)&WPP_MAIN_CB.SecurityDescriptor);
              KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&WPP_MAIN_CB.ActiveThreadCount);
              ndisMpHookNmrInitializeClient();
              KeInitializeSpinLock(&qword_14011E7D0);
              ndisInitializeThreadMonitorSubsystem();
              if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
                ndisInitializeGlobalTriageData(v41);
            }
          }
          return v7;
        }
        ndisAcOnLine = 1;
        goto LABEL_26;
      }
    }
  }
  return v7;
}
