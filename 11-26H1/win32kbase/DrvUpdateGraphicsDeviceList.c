/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x140029C20
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x14000A35C (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x14000A7F4 (DrvInitConsole.c)
 *     DrvSetGraphicsDevices @ 0x14018F7D0 (DrvSetGraphicsDevices.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D55B8 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserIsDisconnectConnection @ 0x14002A9D0 (UserIsDisconnectConnection.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x14002AA00 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14002AA74 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14002BBDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14002BC50 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14002CB60 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140047270 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14016D19C (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x14016E200 (bSetDeviceSessionUsage.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x14017C770 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ @ 0x14018B118 (-VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ.c)
 *     ?DrvUpdateRemoteDriverFlags@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1401915AC (-DrvUpdateRemoteDriverFlags@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x14019903C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401A5664 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     wcsncmp @ 0x1401C754C (wcsncmp.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _BOOL8 IsConsoleConnection; // r13
  __int64 v6; // r14
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 *v11; // r12
  unsigned int *v12; // r9
  unsigned int *v13; // r8
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r8d
  int v29; // r9d
  unsigned int v30; // edi
  __int64 result; // rax
  const wchar_t *v32; // r9
  int v33; // eax
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v38; // rcx
  bool v39; // zf
  PDEVICE_OBJECT v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  NTSTATUS Status; // ebx
  struct _DEVICE_OBJECT *v46; // r15
  PIRP v47; // rdi
  __int64 v48; // rcx
  struct _DEVICE_OBJECT *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  struct _DEVICE_OBJECT *v56; // rbx
  __int64 v57; // rax
  void *RegistryHandleFromDeviceMap; // rax
  __int64 DxgkWin32kInterface; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned int v63; // eax
  __int64 v64; // rcx
  wchar_t *v65; // rcx
  int PruneFlag; // eax
  unsigned int v67; // edx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // rax
  __int64 v73; // rcx
  __int64 SessionState; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  struct _FILE_OBJECT *v79; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  void *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // eax
  unsigned int v86; // eax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v88; // [rsp+50h] [rbp-B0h]
  NTSTATUS updated; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v90[4]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v91; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v92; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v93; // [rsp+68h] [rbp-98h]
  void *DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  int v95; // [rsp+78h] [rbp-88h]
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-80h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-78h] BYREF
  __int128 Event; // [rsp+90h] [rbp-70h] BYREF
  __int128 Event_16; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int128 OutputBuffer; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-38h]
  __int64 v103; // [rsp+D8h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+100h] [rbp+0h] BYREF
  __int64 v107; // [rsp+138h] [rbp+38h]
  int v108; // [rsp+140h] [rbp+40h]
  __int64 v109; // [rsp+148h] [rbp+48h]
  __int128 v110; // [rsp+150h] [rbp+50h]
  __int128 v111; // [rsp+160h] [rbp+60h]

  v4 = (int)a1;
  v91 = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  IsConsoleConnection = UserIsConsoleConnection(a1, a2, a3, a4);
  P = 0LL;
  v103 = 0LL;
  v6 = 0LL;
  updated = 0;
  DeviceRegKey = 0LL;
  OutputBuffer = 0LL;
  v95 = 1;
  v102 = 0LL;
  v93 = v4;
  v7 = v4;
  WdLogSingleEntry2(4LL, v4, IsConsoleConnection);
  v8 = 0;
  WdLogGlobalForLineNumber = 9083;
  v88 = 0;
  v10 = *(_QWORD *)(W32GetSessionState(v9) + 88);
  v11 = (__int64 *)(v10 + 1192);
  if ( IsConsoleConnection )
  {
    v12 = (unsigned int *)(v10 + 1332);
    v13 = (unsigned int *)(v10 + 1328);
    v14 = (__int64 *)(v10 + 1296);
    v15 = (__int64 *)(v10 + 1280);
    v16 = (_DWORD *)(v10 + 1268);
  }
  else
  {
    v12 = (unsigned int *)(v10 + 1340);
    v13 = (unsigned int *)(v10 + 1336);
    v14 = (__int64 *)(v10 + 1288);
    v15 = (__int64 *)(v10 + 1272);
    v16 = (_DWORD *)(v10 + 1264);
  }
  v17 = *v15;
  v18 = *v14;
  v19 = *v13;
  v20 = *v12;
  *(_DWORD *)(v10 + 1172) = *v16;
  *(_QWORD *)(v10 + 1184) = v17;
  *v11 = v18;
  *(_DWORD *)(v10 + 1176) = v19;
  *(_DWORD *)(v10 + 1180) = v20;
  if ( IsConsoleConnection )
  {
    v92 = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v91;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultData = &v92;
    v107 = 0LL;
    QueryTable.DefaultLength = 4;
    v108 = 0;
    v109 = 0LL;
    v110 = 0LL;
    v111 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)UserIsWddmConnectedSession(v17, v18, v19, v20) )
  {
    v92 = 0;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    v60 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(DxgkWin32kInterface + 768))(&v92, &v91);
    updated = v60;
    if ( v60 < 0 )
    {
      WdLogSingleEntry1(2LL, v60);
      v91 = *(_DWORD *)(v10 + 1172);
      WdLogGlobalForLineNumber = 9145;
    }
    v63 = *(_DWORD *)(v10 + 1172);
    v64 = v92;
    if ( v92 > v63 )
    {
      *(_DWORD *)(v10 + 1172) = v92;
      v63 = v64;
    }
    if ( v91 >= v63 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v64, v61, v62);
    goto LABEL_5;
  }
  if ( !(unsigned int)UserIsDisconnectConnection() )
    v91 = *(_DWORD *)(v10 + 2936) - 1;
  if ( *(_DWORD *)(v10 + 3000) )
  {
    updated = DrvUpdateRemoteAdapterInfo(0LL);
    if ( updated < 0 )
      return 0LL;
  }
LABEL_5:
  while ( !(unsigned int)UserIsDisconnectConnection() && *(_DWORD *)(v10 + 1172) <= v91 )
  {
    if ( !v7 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 9204;
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession(v22, v21, v23, v24) )
    {
      if ( IsConsoleConnection )
      {
        v33 = StringCchPrintfW(
                (unsigned __int16 *)&QueryTable,
                0x32uLL,
                L"\\Device\\Video%d",
                *(unsigned int *)(v10 + 1172));
        goto LABEL_19;
      }
      v32 = L"RemoteVideo";
    }
    else
    {
      v32 = *(const wchar_t **)(v10 + 2992);
    }
    LODWORD(Environment) = *(_DWORD *)(v10 + 1172);
    v33 = StringCchPrintfW((unsigned __int16 *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", v32, Environment);
LABEL_19:
    if ( v33 < 0 )
      return 0LL;
    v34 = *(_QWORD *)(v10 + 1184);
    v35 = (__int64 *)(v10 + 1296);
    if ( !IsConsoleConnection )
      v35 = (__int64 *)(v10 + 1288);
    v36 = *v35;
    while ( v34 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, (const wchar_t *)v34, 0x40uLL) )
        goto LABEL_40;
      if ( v34 == v36 )
        break;
      v34 = *(_QWORD *)(v34 + 128);
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    updated = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      if ( IsConsoleConnection )
        goto LABEL_78;
      if ( *(_DWORD *)(W32GetUserSessionState(v38, v21, v23, v24) + 68696) || *(_DWORD *)(v10 + 2936) != 1 )
      {
        DeviceObjectPointer = updated;
LABEL_78:
        WdLogSingleEntry1(5LL, DeviceObjectPointer);
        WdLogGlobalForLineNumber = 9366;
LABEL_40:
        ++*(_DWORD *)(v10 + 1172);
LABEL_41:
        v8 = v88;
LABEL_42:
        v7 = v93;
        continue;
      }
      v79 = *(struct _FILE_OBJECT **)(v10 + 2944);
      FileObject = v79;
      if ( !v79 || (DeviceObject = IoGetRelatedDeviceObject(v79), !FileObject) || !DeviceObject )
      {
        v8 = v88;
        updated = -1073741772;
        goto LABEL_103;
      }
      updated = 0;
      FileObject = 0LL;
    }
    v39 = v6 == 0;
    if ( !v6 )
    {
      v6 = PALLOCMEM(304LL, 1986291527LL);
      v39 = v6 == 0;
    }
    v8 = v88;
    v7 = v93;
    if ( !v39 )
    {
      v40 = DeviceObject;
      *(_QWORD *)(v6 + 136) = DeviceObject;
      v42 = *(unsigned __int16 *)(W32GetUserSessionState(v40, v21, v23, v24) + 68744);
      *(_WORD *)(v6 + 216) = v42;
      *(_QWORD *)(v6 + 264) = 0LL;
      if ( !IsConsoleConnection )
        *(_DWORD *)(v6 + 160) |= 0x4000000u;
      *(_QWORD *)(v6 + 224) = FileObject;
      if ( !IsConsoleConnection && !*(_DWORD *)(W32GetUserSessionState(v42, v41, v43, v44) + 68696)
        || (*(_DWORD *)(v6 + 252) = 0, !IsConsoleConnection) )
      {
        if ( !*(_DWORD *)(W32GetUserSessionState(v42, v41, v43, v44) + 68696) )
        {
          *(_QWORD *)(v6 + 240) = 0xFFFFFFFFLL;
          *(_QWORD *)(v6 + 232) = 0LL;
          *(_DWORD *)(v6 + 248) = *(_DWORD *)(v10 + 1172);
          goto LABEL_64;
        }
      }
      v103 = 0LL;
      *(_QWORD *)&OutputBuffer = v6;
      *((_QWORD *)&OutputBuffer + 1) = VideoPortCallout;
      Status = -1073741822;
      v102 = 0LL;
      v46 = *(struct _DEVICE_OBJECT **)(v6 + 136);
      *(_QWORD *)&Event_16 = 0LL;
      IoStatusBlock = 0LL;
      Event = 0LL;
      if ( v46 )
      {
        KeInitializeEvent((PRKEVENT)&Event, SynchronizationEvent, 0);
        v47 = IoBuildDeviceIoControlRequest(
                0x23201Fu,
                v46,
                &OutputBuffer,
                0x28u,
                &OutputBuffer,
                0x28u,
                1u,
                (PKEVENT)&Event,
                &IoStatusBlock);
        if ( v47 )
        {
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
          {
            CurrentStackLocation = v47->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(*(_QWORD *)(W32GetSessionState(v48) + 88) + 2944LL);
          }
          Status = IofCallDriver(v46, v47);
          if ( Status == 259 )
          {
            while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
              ;
            Status = IoStatusBlock.Status;
          }
        }
        updated = Status;
        if ( Status >= 0 )
        {
          if ( (_DWORD)v102 )
            *(_DWORD *)(v6 + 160) |= 0x40000000u;
          if ( (v103 & 0xC0000001) != 0 )
          {
            updated = -1073741637;
            WdLogSingleEntry2(5LL, (unsigned int)v103, -1073741637LL);
            WdLogGlobalForLineNumber = 9447;
            goto LABEL_39;
          }
          if ( (v103 & 0x20000000) != 0 )
            *(_DWORD *)(v6 + 160) |= 0x100000u;
          v49 = *(struct _DEVICE_OBJECT **)(v6 + 136);
          *(_QWORD *)(v6 + 144) = *((_QWORD *)&v102 + 1);
          *(_DWORD *)(v6 + 248) = 0;
          Event = 0LL;
          Event_16 = 0LL;
          updated = GreDeviceIoControlImpl(v49, 0x232033u, 0LL, 0, &Event, 0x20u, &v92, 1u, 1);
          if ( updated >= 0 )
          {
            if ( (_DWORD)Event != 2 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 9494;
            }
            v54 = *(_QWORD *)(W32GetUserSessionState(v51, v50, v52, v53) + 68688);
            if ( v54 == *((_QWORD *)&Event_16 + 1) )
            {
              v55 = *((_QWORD *)&Event + 1);
              if ( *((_QWORD *)&Event + 1) )
              {
                *(_DWORD *)(v6 + 160) |= 0x800000u;
                *(_QWORD *)(v6 + 232) = v55;
                *(_DWORD *)(v6 + 248) = DWORD1(Event);
                *(_QWORD *)(v6 + 240) = Event_16;
                goto LABEL_64;
              }
            }
LABEL_39:
            DrvCleanupOneGraphicsDevice((PVOID)v6);
            v6 = 0LL;
            goto LABEL_40;
          }
          if ( !IsConsoleConnection )
            goto LABEL_39;
LABEL_64:
          updated = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
          if ( updated >= 0 )
          {
            v56 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
            ExFreePoolWithTag(P, 0);
            updated = IoOpenDeviceRegistryKey(v56, 2u, 0x2000000u, &DeviceRegKey);
            if ( updated >= 0 )
            {
              DrvGetDeviceConfigurationInformation((PVOID)v6, (PCWSTR)DeviceRegKey, 1);
              ZwClose(DeviceRegKey);
            }
            ObfDereferenceObject(v56);
          }
          swprintf_s((wchar_t *)v6, 0x20uLL, (const wchar_t *)&QueryTable);
          ++*(_DWORD *)(v10 + 1172);
          if ( updated >= 0
            || (v81 = (void *)DrvGetRegistryHandleFromDeviceMap(v6, 0LL, 0LL, 0LL, 0, &updated),
                DeviceRegKey = v81,
                updated >= 0)
            && (DrvGetDeviceConfigurationInformation((PVOID)v6, (PCWSTR)v81, 0), ZwClose(DeviceRegKey), updated >= 0) )
          {
            if ( !*(_QWORD *)(v6 + 208) )
            {
              v57 = PALLOCNOZ(0x20u, 0x73726447u);
              *(_QWORD *)(v6 + 208) = v57;
              if ( v57 )
              {
                RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(v6, 0LL, 0LL, v57, 16, &updated);
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
          v65 = (wchar_t *)(v6 + 64);
          if ( (*(_DWORD *)(v6 + 160) & 8) != 0 )
          {
            ++*(_DWORD *)(v10 + 1180);
            swprintf_s(v65, 0x20uLL, L"\\\\.\\DISPLAYV%d");
          }
          else
          {
            ++*(_DWORD *)(v10 + 1176);
            swprintf_s(v65, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v6);
          v67 = *(_DWORD *)(v6 + 160) & 0xFFF7FFFF;
          if ( !PruneFlag )
            v67 = *(_DWORD *)(v6 + 160) | 0x80000;
          *(_DWORD *)(v6 + 160) = v67;
          if ( (unsigned int)bSetDeviceSessionUsage(v6, 1LL) )
          {
            if ( !IsConsoleConnection )
              goto LABEL_105;
          }
          else
          {
            if ( IsConsoleConnection || *(_DWORD *)(W32GetUserSessionState(v69, v68, v70, v71) + 68696) )
            {
              DrvCleanupOneGraphicsDevice((PVOID)v6);
              v6 = 0LL;
              goto LABEL_41;
            }
LABEL_105:
            if ( !*(_DWORD *)(W32GetUserSessionState(v69, v68, v70, v71) + 68696) )
            {
              v82 = *(_QWORD *)(W32GetSessionState(v76) + 88);
              *(_QWORD *)(v6 + 272) = 0LL;
              if ( *(_DWORD *)(v82 + 3000) )
                v83 = *(_QWORD *)(v82 + 3004);
              else
                v83 = 0LL;
              *(_QWORD *)(v6 + 288) = v83;
              *(_QWORD *)(v6 + 296) = 0LL;
              v90[0] = 0;
              v84 = DxDdGetDxgkWin32kInterface();
              if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, _BYTE *))(v84 + 392))(
                     v6 + 272,
                     v6 + 288,
                     v6 + 296,
                     v6 + 280,
                     v90) >= 0 )
              {
                v85 = *(_DWORD *)(v6 + 164);
                if ( v90[0] )
                  v86 = v85 | 4;
                else
                  v86 = v85 & 0xFFFFFFFB;
                *(_DWORD *)(v6 + 164) = v86;
                DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v6);
              }
              v11 = (__int64 *)(v10 + 1192);
            }
            if ( !*(_DWORD *)(W32GetUserSessionState(v76, v75, v77, v78) + 68696) && updated < 0 )
            {
              DrvCleanupOneGraphicsDevice((PVOID)v6);
              --*(_DWORD *)(v10 + 1176);
              v8 = v88;
              v95 = 0;
LABEL_102:
              v6 = 0LL;
              goto LABEL_42;
            }
          }
          v72 = (__int64 *)(v10 + 1192);
          if ( *(_QWORD *)(v10 + 1184) )
          {
            *(_QWORD *)(*v72 + 128) = v6;
            v72 = v11;
          }
          else
          {
            *(_QWORD *)(v10 + 1184) = v6;
          }
          *v72 = v6;
          if ( (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
            DrvAddAdapterLuid(*(struct _LUID *)(v6 + 240));
          v8 = 1;
          v88 = 1;
          goto LABEL_102;
        }
      }
      else
      {
        Status = -1073741816;
        updated = -1073741816;
      }
      WdLogSingleEntry1(5LL, Status);
      WdLogGlobalForLineNumber = 9427;
      goto LABEL_39;
    }
  }
  if ( !IsConsoleConnection )
  {
LABEL_103:
    if ( !*(_DWORD *)(W32GetUserSessionState(v22, v21, v23, v24) + 68696) )
    {
      SessionState = W32GetSessionState(v73);
      DrvUpdateRemoteDriverFlags((struct tagREMOTE_CONTEXT *)(*(_QWORD *)(SessionState + 88) + 2936LL));
    }
  }
  if ( (unsigned int)DrvSetDisconnectedGraphicsDevice(IsConsoleConnection) )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 9807;
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 9810;
  }
  if ( v8 )
    DrvSortGraphicsDeviceList();
  v25 = *(_DWORD *)(v10 + 1172);
  v26 = *(_QWORD *)(v10 + 1184);
  v27 = *(_QWORD *)(v10 + 1192);
  v28 = *(_DWORD *)(v10 + 1176);
  v29 = *(_DWORD *)(v10 + 1180);
  if ( IsConsoleConnection )
  {
    *(_DWORD *)(v10 + 1268) = v25;
    *(_QWORD *)(v10 + 1280) = v26;
    *(_QWORD *)(v10 + 1296) = v27;
    *(_DWORD *)(v10 + 1328) = v28;
    *(_DWORD *)(v10 + 1332) = v29;
  }
  else
  {
    *(_DWORD *)(v10 + 1264) = v25;
    *(_QWORD *)(v10 + 1272) = v26;
    *(_QWORD *)(v10 + 1288) = v27;
    *(_DWORD *)(v10 + 1336) = v28;
    *(_DWORD *)(v10 + 1340) = v29;
    if ( !(unsigned int)VerifyRemoteVidPnSourceIdsAreValid() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9834;
    }
  }
  Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck();
  v30 = v95;
  WdLogSingleEntry1(5LL, v95);
  result = v30;
  WdLogGlobalForLineNumber = 9860;
  return result;
}
