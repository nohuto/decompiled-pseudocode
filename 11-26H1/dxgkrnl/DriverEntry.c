/*
 * XREFs of DriverEntry @ 0x14044C078
 * Callers:
 *     GsDriverEntry @ 0x14044C010 (GsDriverEntry.c)
 * Callees:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x140005854 (-MonitorCleanupGlobal@@YAJXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McGenEventRegister_EtwRegister @ 0x14006D930 (McGenEventRegister_EtwRegister.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x14007A494 (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1400A5498 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     ?TdrInit@@YAXXZ @ 0x1401D9344 (-TdrInit@@YAXXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401DC798 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401DCC9C (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?DxgkInitTest@@YAXXZ @ 0x140209854 (-DxgkInitTest@@YAXXZ.c)
 *     DxgkCleanupPower @ 0x14023F2D8 (DxgkCleanupPower.c)
 *     DxgkInitialPower @ 0x14023F3A4 (DxgkInitialPower.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x14026BA04 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?MonitorInitializeGlobal@@YAJXZ @ 0x14026F480 (-MonitorInitializeGlobal@@YAJXZ.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x140287F2C (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x14041BEF4 (-DxgDbgInit@@YAXXZ.c)
 *     WdmlibIoCreateDeviceSecure @ 0x140430D40 (WdmlibIoCreateDeviceSecure.c)
 *     wil_InitializeFeatureStaging @ 0x14044C810 (wil_InitializeFeatureStaging.c)
 *     DpiInitializeGlobalState @ 0x14044C9F0 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  int v5; // eax
  __int64 v6; // rdi
  const wchar_t *v7; // r9
  NTSTATUS v8; // eax
  int ProcessNotifyRoutineEx2; // eax
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  BOOLEAN Size; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  char v27; // [rsp+60h] [rbp-A0h]
  _QWORD v28[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+A8h] [rbp-58h]
  const wchar_t *v33; // [rsp+B0h] [rbp-50h]
  unsigned __int8 *v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int128 v42; // [rsp+100h] [rbp+0h]
  __int64 SystemInformation; // [rsp+130h] [rbp+30h] BYREF

  g_pDriverObject = (PDEVICE_OBJECT)DriverObject;
  g_RegistryPath.Buffer = (wchar_t *)operator new[](RegistryPath->MaximumLength, 0x4B677844u, 256LL);
  if ( !g_RegistryPath.Buffer )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 298;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate registry path buffer.",
      298LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801;
  }
  g_RegistryPath.MaximumLength = RegistryPath->MaximumLength;
  RtlCopyUnicodeString(&g_RegistryPath, RegistryPath);
  v5 = PsTlsAlloc(DxgkThreadPsTslCallback, 0LL, &g_DxgkThreadTlsId);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v7 = L"Failed to allocate a PsTls slot for DxgkThread, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 311;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
    return v6;
  }
  v8 = ExInitializeLookasideListEx(&g_DxgkThreadLookasideList, 0LL, 0LL, (POOL_TYPE)512, 0, 0x40uLL, 0x54677844u, 0);
  v6 = v8;
  if ( v8 < 0 )
  {
    PsTlsFree(g_DxgkThreadTlsId);
    WdLogSingleEntry1(2LL);
    v7 = L"Failed to initialize the lookaside list for DXGTHREAD, returning 0x%I64x";
    WdLogGlobalForLineNumber = 326;
    goto LABEL_5;
  }
  ProcessNotifyRoutineEx2 = PsSetCreateProcessNotifyRoutineEx2(0LL, DxgkProcessNotify, 0LL);
  if ( ProcessNotifyRoutineEx2 < 0 )
  {
    v10 = ProcessNotifyRoutineEx2;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 337;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PsSetCreateProcessNotifyRoutineEx failed 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v11 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v11 = 0;
  }
  g_OSTestSigningEnabled = v11;
  v31 = 0LL;
  v32 = 288;
  v35 = 67108868;
  v33 = L"IsInternalRelease";
  v37 = 4;
  v34 = &g_IsInternalRelease;
  v36 = &g_IsInternalRelease;
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v31, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  wil_InitializeFeatureStaging();
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  WdInitialize();
  result = DXGGLOBAL::CreateGlobal(v13, v12);
  if ( result >= 0 )
  {
    result = DpiInitializeGlobalState();
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal();
      if ( result >= 0 )
      {
        DxgkInitializeTelemetry();
        Size = 0;
        v14 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
        if ( v14 < 0 )
        {
          v16 = v14;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 447;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"ExSubscribeWnfStateChange failed, returing 0x%I64x",
            v16,
            0LL,
            0LL,
            0LL,
            0LL);
          gScreenStudyEventSubscription = 0LL;
        }
        bTracingEnabled = 0;
        McGenEventRegister_EtwRegister(
          &DxgkControlGuid,
          v15,
          &DxgkControlGuid_Context,
          (ULONGLONG *)&DxgkControlGuid_Context);
        v25 = -1;
        v26 = 0LL;
        if ( (qword_1401664C0 & 2) != 0 )
        {
          v27 = 1;
          v25 = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerEnter);
        }
        else
        {
          v27 = 0;
        }
        DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 0);
        v28[0] = &DxgkControlGuid;
        v28[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v28);
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)DxgkShutdown;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        DefaultSDDLString = 0LL;
        RtlInitUnicodeString(&DefaultSDDLString, L"D:P(A;;GRGW;;;S-1-5-83-0)");
        LODWORD(v6) = WdmlibIoCreateDeviceSecure(
                        DriverObject,
                        0,
                        &DestinationString,
                        0x22u,
                        0x100u,
                        Size,
                        &DefaultSDDLString,
                        &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                        &g_pDeviceObject);
        if ( (int)v6 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 500;
LABEL_33:
          DxgkCleanupPower();
          MonitorCleanupGlobal();
          if ( g_pDeviceObject )
          {
            IoDeleteDevice(g_pDeviceObject);
            g_pDeviceObject = 0LL;
          }
          if ( g_RegistryPath.Buffer )
          {
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(g_RegistryPath.Buffer);
            g_RegistryPath = 0LL;
          }
          DXGGLOBAL::DestroyGlobal();
          PsTlsFree(g_DxgkThreadTlsId);
          ExDeleteLookasideListEx(&g_DxgkThreadLookasideList);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
          if ( v27 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
          }
          return v6;
        }
        LODWORD(v6) = DxgkInitialPower();
        if ( (int)v6 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 513;
          goto LABEL_33;
        }
        LODWORD(v6) = MonitorInitializeGlobal(v19, v18);
        if ( (int)v6 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 526;
          goto LABEL_33;
        }
        SysMmInitializeGlobal();
        DxgkInitTest();
        DxgDbgInit();
        TdrInit();
        v20 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
        v6 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 559;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not register session change callout with session manager, returning 0x%I64x.",
            v6,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_33;
        }
        v21 = IoRegisterShutdownNotification(g_pDeviceObject);
        v6 = v21;
        if ( v21 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 569;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not register for shutdown notification, returning 0x%I64x.",
            v6,
            0LL,
            0LL,
            0LL,
            0LL);
          SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
          goto LABEL_33;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
        return 0;
      }
    }
  }
  return result;
}
