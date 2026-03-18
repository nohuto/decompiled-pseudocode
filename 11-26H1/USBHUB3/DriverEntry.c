/*
 * XREFs of DriverEntry @ 0x14009603C
 * Callers:
 *     FxDriverEntryWorker @ 0x140042E14 (FxDriverEntryWorker.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1400019B4 (McGenEventRegister_EtwRegister.c)
 *     RtlStringCchPrintfA @ 0x140002460 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBREG_QueryGlobalUsbLtmSettings @ 0x140035164 (HUBREG_QueryGlobalUsbLtmSettings.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x140043224 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     WppCleanupKm @ 0x140079F2C (WppCleanupKm.c)
 *     WppInitKm @ 0x140079FE0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x14007A0C0 (WppLoadTracingSupport.c)
 *     HUBREG_QueryGlobalHubValues @ 0x14008936C (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x140089840 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 *     HUBUTIL_GetAcpiVersion @ 0x140093AB4 (HUBUTIL_GetAcpiVersion.c)
 *     TlgRegisterAggregateProvider @ 0x140094C2C (TlgRegisterAggregateProvider.c)
 *     wil_InitializeFeatureStaging @ 0x1400966B8 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int8 *v13; // rsi
  int AcpiVersion; // eax
  __int64 v16; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int128 v22; // [rsp+78h] [rbp-88h]
  void *v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v25[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B4h] [rbp-4Ch]
  __int128 v29; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-28h]
  char pszDest[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-8h]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+100h] [rbp+0h] BYREF

  g_Usbhub3DriverObject = (__int64)DriverObject;
  HIDWORD(v25[0]) = 0;
  v26 = 0LL;
  v27 = 0;
  DWORD1(v19) = 0;
  v20 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  v33 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  wil_InitializeFeatureStaging();
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = 512;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  LODWORD(v29) = 16;
  *((_QWORD *)&v29 + 1) = 0x200000002LL;
  BYTE4(v29) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v29);
  v25[0] = 32LL;
  v25[1] = HUBFDO_EvtDeviceAdd;
  v23 = off_14006D2C0;
  *((_QWORD *)&v19 + 1) = DriverCleanup;
  v26 = 0LL;
  v27 = 0;
  v28 = 1999849557;
  *(_QWORD *)&v19 = 56LL;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, __int128 *, _QWORD *, unsigned __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         &v19,
         v25,
         &v17);
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v17,
           off_14006D2C0);
    *(_QWORD *)&v30 = 56LL;
    HIDWORD(v31) = 16;
    pszDest[0] = 0;
    v6 = v5;
    *(_QWORD *)&v31 = 0LL;
    BYTE8(v31) = 0;
    v33 = 0x200000002LL;
    *((_QWORD *)&v30 + 1) = 0x20000000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v7 = (__int64 *)(v6 + 64);
    v4 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v30, v6 + 64);
    if ( v4 >= 0 )
    {
      v23 = 0LL;
      v20 = 0LL;
      v21 = 0x100000001LL;
      v22 = v17;
      v19 = 0LL;
      LODWORD(v19) = 56;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             &v19,
             v6 + 32);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(v6 + 24) = v6 + 16;
        *(_QWORD *)(v6 + 16) = v6 + 16;
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               &v19,
               v6 + 56);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(v6 + 48) = v6 + 40;
          *(_QWORD *)(v6 + 40) = v6 + 40;
          McGenEventRegister_EtwRegister(v9, v8, &MS_USBHUB3_ETW_PROVIDER_Context, &MS_USBHUB3_ETW_PROVIDER_Context);
          v10 = SleepstudyHelper_Initialize(v6 + 96, DriverObject);
          if ( v10 < 0 )
          {
            *(_BYTE *)(v6 + 92) = 0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v16) = v10;
              WPP_RECORDER_SF_d(*v7, 4u, 2u, 0xAu, (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids, v16);
            }
          }
          else
          {
            *(_BYTE *)(v6 + 92) = 1;
          }
          InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
          EtwSetInformation(
            MS_USBHUB3_ETW_PROVIDER_Context,
            EventProviderSetTraits,
            &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
            (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
          HUBREG_QueryGlobalHubValues(v6);
          HUBREG_QueryGlobalUsb20HardwareLpmSettings(v6);
          HUBREG_QueryGlobalUsbLtmSettings(v6);
          RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
          WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
          g_IoGetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
          g_IoSetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
          v24 = 0LL;
          if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
          {
            ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
              L"USBHUB:GLOBAL_FLAGS",
              L"USBHUB",
              &v24);
            if ( (v24 & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v6 + 4), 0x20000u);
          }
          imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &g_Usbhub3_WppTriage_Info);
          qword_140070710 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
          dword_1400706E0 = g_Usbhub3_WppTriage_Info;
          dword_1400706E4 = dword_140070D68;
          dword_1400706E8 = dword_140070D6C;
          dword_1400706EC = dword_140070D64;
          dword_1400706F0 = dword_140070D70;
          v12 = TlgRegisterAggregateProvider(v11);
          if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v12;
            WPP_RECORDER_SF_d(*v7, 2u, 2u, 0xBu, (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids, v16);
          }
          v13 = (unsigned __int8 *)(v6 + 104);
          AcpiVersion = HUBUTIL_GetAcpiVersion((_WORD *)(v6 + 104));
          v4 = AcpiVersion;
          if ( AcpiVersion >= 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v16) = *(unsigned __int8 *)(v6 + 105);
              WPP_RECORDER_SF_dD(
                *v7,
                4u,
                2u,
                0xDu,
                (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids,
                v16,
                *v13);
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v16) = AcpiVersion;
              WPP_RECORDER_SF_d(*v7, 2u, 2u, 0xCu, (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids, v16);
            }
            v4 = 0;
            *(_WORD *)v13 = 0;
          }
          if ( v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = *(_DWORD *)(v6 + 4);
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v6 + 64),
              4u,
              2u,
              0xEu,
              (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids,
              v16);
          }
        }
      }
    }
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
    }
    if ( g_wil_details_featureUsageProvider )
    {
      RtlUnregisterFeatureUsageProvider();
      g_wil_details_featureUsageProvider = 0LL;
    }
    LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
  }
  return v4;
}
