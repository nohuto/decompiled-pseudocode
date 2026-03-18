/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x14006ADB0
 * Callers:
 *     DrvSetGraphicsDevices @ 0x14006A580 (DrvSetGraphicsDevices.c)
 *     UpdateGraphicsDeviceList @ 0x14006A7C8 (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x14017CE9C (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AFF08 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140048BFC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14006A82C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     UserIsDisconnectConnection @ 0x14006BBA0 (UserIsDisconnectConnection.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14006BF78 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14006C22C (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x14006C3B0 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14006C574 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14006D470 (DrvCleanupOneGraphicsDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1401413F4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvUpdateRemoteDriverFlags@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x14015379C (-DrvUpdateRemoteDriverFlags@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ @ 0x140155768 (-VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x14015A010 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140160728 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     wcsncmp @ 0x1401A33BC (wcsncmp.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BOOL8 IsConsoleConnection; // r12
  int v4; // r13d
  __int64 v5; // rsi
  __int64 v6; // r14
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  const wchar_t *v17; // r9
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // r9d
  __int64 result; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v28; // rcx
  bool v29; // zf
  PDEVICE_OBJECT v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  NTSTATUS Status; // ebx
  struct _DEVICE_OBJECT *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  PIRP v37; // r14
  __int64 v38; // rcx
  struct _DEVICE_OBJECT *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 UserSessionState; // rax
  __int64 v43; // rax
  struct _DEVICE_OBJECT *v44; // rbx
  wchar_t *v45; // rax
  HANDLE RegistryHandleFromDeviceMap; // rax
  __int64 v47; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // eax
  __int64 v53; // rcx
  wchar_t *v54; // rcx
  int PruneFlag; // eax
  unsigned int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 SessionState; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  struct _FILE_OBJECT *v64; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  HANDLE v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  unsigned int v71; // eax
  PVOID Environment; // [rsp+28h] [rbp-E0h]
  char v73; // [rsp+58h] [rbp-B0h]
  NTSTATUS updated; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v75; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+68h] [rbp-A0h]
  __int64 v77; // [rsp+70h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v79; // [rsp+80h] [rbp-88h] BYREF
  unsigned int Information; // [rsp+84h] [rbp-84h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp-80h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-78h] BYREF
  __int64 v83; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  __int128 OutputBuffer; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v86; // [rsp+B8h] [rbp-50h]
  __int64 v87; // [rsp+C8h] [rbp-40h]
  __int128 v88; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v89; // [rsp+E0h] [rbp-28h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-18h] BYREF
  struct _KEVENT Event; // [rsp+100h] [rbp-8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+128h] [rbp+20h] BYREF
  __int64 v94; // [rsp+160h] [rbp+58h]
  int v95; // [rsp+168h] [rbp+60h]
  __int64 v96; // [rsp+170h] [rbp+68h]
  __int128 v97; // [rsp+178h] [rbp+70h]
  __int128 v98; // [rsp+188h] [rbp+80h]
  wchar_t Str1[56]; // [rsp+198h] [rbp+90h] BYREF

  v2 = (int)a1;
  LODWORD(v77) = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  IsConsoleConnection = UserIsConsoleConnection(a1, a2);
  P = 0LL;
  v87 = 0LL;
  v4 = 1;
  updated = 0;
  v5 = 0LL;
  DeviceRegKey = 0LL;
  OutputBuffer = 0LL;
  Information = 0;
  v86 = 0LL;
  v76 = v2;
  v6 = v2;
  WdLogSingleEntry2(4LL, v2, IsConsoleConnection);
  v7 = 0;
  WdLogGlobalForLineNumber = 9295;
  v73 = 0;
  v9 = *(_QWORD *)(W32GetSessionState(v8) + 88);
  if ( IsConsoleConnection )
  {
    v10 = *(_DWORD *)(v9 + 1244);
    v11 = *(_DWORD *)(v9 + 1240);
    v12 = *(_QWORD *)(v9 + 1208);
    v13 = *(_QWORD *)(v9 + 1192);
    v14 = *(_DWORD *)(v9 + 1180);
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 1252);
    v11 = *(_DWORD *)(v9 + 1248);
    v12 = *(_QWORD *)(v9 + 1200);
    v13 = *(_QWORD *)(v9 + 1184);
    v14 = *(_DWORD *)(v9 + 1176);
  }
  *(_DWORD *)(v9 + 1084) = v14;
  *(_QWORD *)(v9 + 1096) = v13;
  *(_QWORD *)(v9 + 1104) = v12;
  *(_DWORD *)(v9 + 1088) = v11;
  *(_DWORD *)(v9 + 1092) = v10;
  if ( IsConsoleConnection )
  {
    LODWORD(v83) = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v77;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultData = &v83;
    v94 = 0LL;
    QueryTable.DefaultLength = 4;
    v95 = 0;
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v79 = 0;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v47);
    v49 = (*(__int64 (__fastcall **)(unsigned int *, __int64 *))(DxgkWin32kInterface + 768))(&v79, &v77);
    updated = v49;
    if ( v49 < 0 )
    {
      WdLogSingleEntry1(2LL, v49);
      LODWORD(v77) = *(_DWORD *)(v9 + 1084);
      WdLogGlobalForLineNumber = 9357;
    }
    v52 = *(_DWORD *)(v9 + 1084);
    v53 = v79;
    if ( v79 > v52 )
    {
      *(_DWORD *)(v9 + 1084) = v79;
      v52 = v53;
    }
    if ( (unsigned int)v77 >= v52 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v50, v51);
    goto LABEL_5;
  }
  if ( !(unsigned int)UserIsDisconnectConnection() )
    LODWORD(v77) = *(_DWORD *)(v9 + 2856) - 1;
  if ( *(_DWORD *)(v9 + 2920) )
  {
    updated = DrvUpdateRemoteAdapterInfo(0LL);
    if ( updated < 0 )
      return 0LL;
  }
LABEL_5:
  while ( !(unsigned int)UserIsDisconnectConnection() && *(_DWORD *)(v9 + 1084) <= (unsigned int)v77 )
  {
    if ( !v6 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 9416;
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( IsConsoleConnection )
      {
        v18 = StringCchPrintfW(Str1, 50LL, L"\\Device\\Video%d", *(unsigned int *)(v9 + 1084));
        goto LABEL_11;
      }
      v17 = L"RemoteVideo";
    }
    else
    {
      v17 = *(const wchar_t **)(v9 + 2912);
    }
    LODWORD(Environment) = *(_DWORD *)(v9 + 1084);
    v18 = StringCchPrintfW(Str1, 50LL, L"\\Device\\%s%d", v17, Environment);
LABEL_11:
    if ( v18 < 0 )
      return 0LL;
    v19 = *(_QWORD *)(v9 + 1096);
    if ( IsConsoleConnection )
      v20 = *(_QWORD *)(v9 + 1208);
    else
      v20 = *(_QWORD *)(v9 + 1200);
    while ( v19 )
    {
      if ( !wcsncmp(Str1, (const wchar_t *)v19, 0x40uLL) )
        goto LABEL_41;
      if ( v19 == v20 )
        break;
      v19 = *(_QWORD *)(v19 + 128);
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, Str1);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    updated = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      if ( IsConsoleConnection )
        goto LABEL_79;
      if ( *(_DWORD *)(W32GetUserSessionState(v28, v15) + 68704) || *(_DWORD *)(v9 + 2856) != 1 )
      {
        DeviceObjectPointer = updated;
LABEL_79:
        WdLogSingleEntry1(5LL, DeviceObjectPointer);
        WdLogGlobalForLineNumber = 9578;
LABEL_41:
        ++*(_DWORD *)(v9 + 1084);
LABEL_42:
        v7 = v73;
LABEL_43:
        v6 = v76;
        continue;
      }
      v64 = *(struct _FILE_OBJECT **)(v9 + 2864);
      FileObject = v64;
      if ( !v64 || (DeviceObject = IoGetRelatedDeviceObject(v64), !FileObject) || !DeviceObject )
      {
        v7 = v73;
        updated = -1073741772;
        goto LABEL_106;
      }
      updated = 0;
      FileObject = 0LL;
    }
    v29 = v5 == 0;
    if ( !v5 )
    {
      v5 = PALLOCMEM(304LL, 1986291527LL);
      v29 = v5 == 0;
    }
    v7 = v73;
    v6 = v76;
    if ( !v29 )
    {
      v30 = DeviceObject;
      *(_QWORD *)(v5 + 136) = DeviceObject;
      v32 = *(unsigned __int16 *)(W32GetUserSessionState(v30, v15) + 68752);
      *(_WORD *)(v5 + 216) = v32;
      *(_QWORD *)(v5 + 264) = 0LL;
      if ( !IsConsoleConnection )
        *(_DWORD *)(v5 + 160) |= 0x4000000u;
      *(_QWORD *)(v5 + 224) = FileObject;
      if ( !IsConsoleConnection && !*(_DWORD *)(W32GetUserSessionState(v32, v31) + 68704)
        || (*(_DWORD *)(v5 + 252) = 0, !IsConsoleConnection) )
      {
        if ( !*(_DWORD *)(W32GetUserSessionState(v32, v31) + 68704) )
        {
          *(_QWORD *)(v5 + 240) = 0xFFFFFFFFLL;
          *(_QWORD *)(v5 + 232) = 0LL;
          *(_DWORD *)(v5 + 248) = *(_DWORD *)(v9 + 1084);
          goto LABEL_67;
        }
      }
      v87 = 0LL;
      *(_QWORD *)&OutputBuffer = v5;
      *((_QWORD *)&OutputBuffer + 1) = VideoPortCallout;
      Status = -1073741822;
      v86 = 0LL;
      v34 = *(struct _DEVICE_OBJECT **)(v5 + 136);
      IoStatusBlock = 0LL;
      memset(&Event, 0, sizeof(Event));
      if ( v34 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v37 = IoBuildDeviceIoControlRequest(
                0x23201Fu,
                v34,
                &OutputBuffer,
                0x28u,
                &OutputBuffer,
                0x28u,
                1u,
                &Event,
                &IoStatusBlock);
        if ( v37 )
        {
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v36, v35) )
          {
            CurrentStackLocation = v37->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(*(_QWORD *)(W32GetSessionState(v38) + 88) + 2864LL);
          }
          Status = IofCallDriver(v34, v37);
          if ( Status == 259 )
          {
            while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
              ;
            Status = IoStatusBlock.Status;
          }
          Information = IoStatusBlock.Information;
        }
        updated = Status;
        if ( Status >= 0 )
        {
          if ( (_DWORD)v86 )
            *(_DWORD *)(v5 + 160) |= 0x40000000u;
          if ( (v87 & 0xC0000001) != 0 )
          {
            updated = -1073741637;
            WdLogSingleEntry2(5LL, (unsigned int)v87, -1073741637LL);
            WdLogGlobalForLineNumber = 9659;
            goto LABEL_40;
          }
          if ( (v87 & 0x20000000) != 0 )
            *(_DWORD *)(v5 + 160) |= 0x100000u;
          v39 = *(struct _DEVICE_OBJECT **)(v5 + 136);
          *(_QWORD *)(v5 + 144) = *((_QWORD *)&v86 + 1);
          *(_DWORD *)(v5 + 248) = 0;
          v88 = 0LL;
          v89 = 0LL;
          updated = GreDeviceIoControlImpl(v39, 0x232033u, 0LL, 0, &v88, 0x20u, &Information, 1u, 1);
          if ( updated >= 0 )
          {
            if ( (_DWORD)v88 != 2 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 9706;
            }
            UserSessionState = W32GetUserSessionState(v41, v40);
            if ( *(_QWORD *)(UserSessionState + 68696) == *((_QWORD *)&v89 + 1) )
            {
              v43 = *((_QWORD *)&v88 + 1);
              if ( *((_QWORD *)&v88 + 1) )
              {
                *(_DWORD *)(v5 + 160) |= 0x800000u;
                *(_QWORD *)(v5 + 232) = v43;
                *(_DWORD *)(v5 + 248) = DWORD1(v88);
                *(_QWORD *)(v5 + 240) = v89;
                goto LABEL_67;
              }
            }
LABEL_40:
            DrvCleanupOneGraphicsDevice((PVOID)v5);
            v5 = 0LL;
            goto LABEL_41;
          }
          if ( !IsConsoleConnection )
            goto LABEL_40;
LABEL_67:
          updated = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
          if ( updated >= 0 )
          {
            v44 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
            ExFreePoolWithTag(P, 0);
            updated = IoOpenDeviceRegistryKey(v44, 2u, 0x2000000u, &DeviceRegKey);
            if ( updated >= 0 )
            {
              DrvGetDeviceConfigurationInformation((PVOID)v5, (PCWSTR)DeviceRegKey, 1);
              ZwClose(DeviceRegKey);
            }
            ObfDereferenceObject(v44);
          }
          swprintf_s((wchar_t *)v5, 0x20uLL, Str1);
          ++*(_DWORD *)(v9 + 1084);
          if ( updated >= 0
            || (v66 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v5, 0, 0LL, 0LL, 0, &updated),
                DeviceRegKey = v66,
                updated >= 0)
            && (DrvGetDeviceConfigurationInformation((PVOID)v5, (PCWSTR)v66, 0), ZwClose(DeviceRegKey), updated >= 0) )
          {
            if ( !*(_QWORD *)(v5 + 208) )
            {
              v45 = (wchar_t *)PALLOCNOZ(32LL, 1936876615LL);
              *(_QWORD *)(v5 + 208) = v45;
              if ( v45 )
              {
                RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                                (unsigned __int16 *)v5,
                                                0,
                                                0LL,
                                                v45,
                                                0x10u,
                                                &updated);
                DeviceRegKey = RegistryHandleFromDeviceMap;
                if ( RegistryHandleFromDeviceMap )
                  ZwClose(RegistryHandleFromDeviceMap);
              }
              else
              {
                updated = -1073741670;
              }
            }
          }
          v54 = (wchar_t *)(v5 + 64);
          if ( (*(_DWORD *)(v5 + 160) & 8) != 0 )
          {
            ++*(_DWORD *)(v9 + 1092);
            swprintf_s(v54, 0x20uLL, L"\\\\.\\DISPLAYV%d");
          }
          else
          {
            ++*(_DWORD *)(v9 + 1088);
            swprintf_s(v54, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v5);
          v56 = *(_DWORD *)(v5 + 160) & 0xFFF7FFFF;
          if ( !PruneFlag )
            v56 = *(_DWORD *)(v5 + 160) | 0x80000;
          *(_DWORD *)(v5 + 160) = v56;
          if ( (unsigned int)bSetDeviceSessionUsage(v5, 1LL) )
          {
            if ( !IsConsoleConnection )
              goto LABEL_108;
          }
          else
          {
            if ( IsConsoleConnection || *(_DWORD *)(W32GetUserSessionState(v58, v57) + 68704) )
            {
              DrvCleanupOneGraphicsDevice((PVOID)v5);
              v5 = 0LL;
              goto LABEL_42;
            }
LABEL_108:
            if ( !*(_DWORD *)(W32GetUserSessionState(v58, v57) + 68704) )
            {
              v67 = *(_QWORD *)(W32GetSessionState(v63) + 88);
              *(_QWORD *)(v5 + 272) = 0LL;
              v68 = *(_DWORD *)(v67 + 2920) ? *(_QWORD *)(v67 + 2924) : 0LL;
              *(_QWORD *)(v5 + 288) = v68;
              *(_QWORD *)(v5 + 296) = 0LL;
              LOBYTE(v75) = 0;
              v69 = DxDdGetDxgkWin32kInterface(0LL);
              if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(v69 + 392))(
                     v5 + 272,
                     v5 + 288,
                     v5 + 296,
                     v5 + 280,
                     &v75) >= 0 )
              {
                v70 = *(_DWORD *)(v5 + 164);
                if ( (_BYTE)v75 )
                  v71 = v70 | 4;
                else
                  v71 = v70 & 0xFFFFFFFB;
                *(_DWORD *)(v5 + 164) = v71;
                DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v5);
              }
            }
            if ( !*(_DWORD *)(W32GetUserSessionState(v63, v62) + 68704) && updated < 0 )
            {
              DrvCleanupOneGraphicsDevice((PVOID)v5);
              --*(_DWORD *)(v9 + 1088);
              v4 = 0;
              v7 = v73;
LABEL_103:
              v5 = 0LL;
              goto LABEL_43;
            }
          }
          v59 = v9 + 1104;
          if ( *(_QWORD *)(v9 + 1096) )
          {
            *(_QWORD *)(*(_QWORD *)v59 + 128LL) = v5;
            v59 = v9 + 1104;
          }
          else
          {
            *(_QWORD *)(v9 + 1096) = v5;
          }
          *(_QWORD *)v59 = v5;
          if ( (*(_DWORD *)(v5 + 160) & 0x800000) != 0 )
            DrvAddAdapterLuid(*(struct _LUID *)(v5 + 240));
          v7 = 1;
          v73 = 1;
          goto LABEL_103;
        }
      }
      else
      {
        Status = -1073741816;
        updated = -1073741816;
      }
      WdLogSingleEntry1(5LL, Status);
      WdLogGlobalForLineNumber = 9639;
      goto LABEL_40;
    }
  }
  if ( !IsConsoleConnection )
  {
LABEL_106:
    if ( !*(_DWORD *)(W32GetUserSessionState(v16, v15) + 68704) )
    {
      SessionState = W32GetSessionState(v60);
      DrvUpdateRemoteDriverFlags((struct tagREMOTE_CONTEXT *)(*(_QWORD *)(SessionState + 88) + 2856LL));
    }
  }
  if ( (unsigned int)DrvSetDisconnectedGraphicsDevice(IsConsoleConnection) )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 10019;
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 10022;
  }
  if ( v7 )
    DrvSortGraphicsDeviceList();
  v21 = *(_DWORD *)(v9 + 1084);
  v22 = *(_QWORD *)(v9 + 1096);
  v23 = *(_QWORD *)(v9 + 1104);
  v24 = *(_DWORD *)(v9 + 1088);
  v25 = *(_DWORD *)(v9 + 1092);
  if ( IsConsoleConnection )
  {
    *(_DWORD *)(v9 + 1180) = v21;
    *(_QWORD *)(v9 + 1192) = v22;
    *(_QWORD *)(v9 + 1208) = v23;
    *(_DWORD *)(v9 + 1240) = v24;
    *(_DWORD *)(v9 + 1244) = v25;
  }
  else
  {
    *(_DWORD *)(v9 + 1176) = v21;
    *(_QWORD *)(v9 + 1184) = v22;
    *(_QWORD *)(v9 + 1200) = v23;
    *(_DWORD *)(v9 + 1248) = v24;
    *(_DWORD *)(v9 + 1252) = v25;
    if ( !(unsigned int)VerifyRemoteVidPnSourceIdsAreValid() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10046;
    }
  }
  v76 = (unsigned int)Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState;
  if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
  {
    LODWORD(v76) = Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
      v76,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v76,
      3LL,
      &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
  }
  WdLogSingleEntry1(5LL, v4);
  result = (unsigned int)v4;
  WdLogGlobalForLineNumber = 10072;
  return result;
}
