/*
 * XREFs of xxxRemoteConnect @ 0x14007DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14007CD00 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     SetConsoleSwitchInProgress @ 0x14007E740 (SetConsoleSwitchInProgress.c)
 *     PopulateUMKMHandlePair @ 0x14007E810 (PopulateUMKMHandlePair.c)
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     SetConnectedState @ 0x14007F120 (SetConnectedState.c)
 *     UserNotifyDisplayChange @ 0x14007F1A0 (UserNotifyDisplayChange.c)
 *     InitLoadResources @ 0x140080CE4 (InitLoadResources.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     GreMultiUserInitSession @ 0x1400FC220 (GreMultiUserInitSession.c)
 *     SetProtocolType @ 0x14017D3E0 (SetProtocolType.c)
 *     SetConnectCompletedState @ 0x140186370 (SetConnectCompletedState.c)
 *     CleanupRemoteHandles @ 0x1401899E0 (CleanupRemoteHandles.c)
 *     DrvEscapeRemoteDrivers @ 0x1401973A0 (DrvEscapeRemoteDrivers.c)
 *     GreDxgkSessionConnected @ 0x1401A5C78 (GreDxgkSessionConnected.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 *     ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x1401C4624 (--4-$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z.c)
 *     LW_BrushInit @ 0x1401C4FFC (LW_BrushInit.c)
 *     wcschr @ 0x1401C73A4 (wcschr.c)
 *     GreDrvConnect @ 0x1401FACD0 (GreDrvConnect.c)
 *     xxxRemoteConsoleShadowStart @ 0x1402495E8 (xxxRemoteConsoleShadowStart.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall xxxRemoteConnect(
        __int64 a1,
        int a2,
        unsigned __int16 *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v7; // r15
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  __int64 UserSessionState; // rdi
  int v14; // r8d
  int v15; // ecx
  char v16; // bl
  bool v17; // si
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 result; // rax
  NTSTATUS v28; // esi
  int v29; // ebx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // ebx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rbx
  wchar_t *v42; // rax
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rdx
  void *v48; // rcx
  int v49; // edx
  struct _FILE_OBJECT *v50; // rcx
  int v51; // r8d
  void *v52; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // eax
  __int64 v60; // rcx
  char v61; // si
  bool v62; // r14
  char v63; // bl
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  __int64 v70; // rcx
  unsigned int CurrentWin32kSessionId; // eax
  int (*v72)(void); // rax
  __int64 v73; // rcx
  void (*v74)(void); // rax
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  __int64 v78; // rbx
  unsigned __int16 v79; // di
  __int64 v80; // rax
  void *v81; // r14
  __int64 v82; // rbx
  NTSTATUS v83; // eax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rdx
  int v90; // r13d
  __int64 (*v91)(void); // rax
  __int64 v92; // rax
  int v93; // r8d
  int v94; // edx
  NTSTATUS v95; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  void *v97; // rcx
  struct _DEVICE_OBJECT *v98; // rbx
  NTSTATUS v99; // eax
  int (*v100)(void); // rax
  __int64 v101; // rcx
  int v102; // edx
  int v103; // ecx
  int v104; // r8d
  __int64 v105; // rax
  __int64 v106; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v107; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v108; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  ULONG Length; // [rsp+78h] [rbp-88h] BYREF
  ULONG Value; // [rsp+7Ch] [rbp-84h] BYREF
  int v112; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING String; // [rsp+98h] [rbp-68h] BYREF
  WCHAR SourceString[40]; // [rsp+B0h] [rbp-50h] BYREF

  LODWORD(Object) = a2;
  v107 = a4;
  Value = 0;
  v7 = *(_QWORD *)(W32GetSessionState(a1) + 88) + 2936LL;
  UserSessionState = W32GetUserSessionState(v9, v8, v10);
  if ( *(_DWORD *)a1 )
  {
    v91 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48) + 512LL);
    if ( v91 )
    {
      result = v91();
      if ( (int)result >= 0 )
        return xxxRemoteConsoleShadowStart(a1, a3, a4);
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    v15 = (int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v92 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v14);
      LOBYTE(v93) = v17;
      LOBYTE(v94) = v16;
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v94,
        v93,
        *(_QWORD *)(v92 + 69136),
        4,
        14,
        10,
        (__int64)&WPP_5b043743b4cf3d9171b2537976d336f9_Traceguids,
        (__int64)a3);
    }
    v18 = W32GetUserSessionState(v15, v11, v14);
    *(_DWORD *)(v18 + 68928) |= 8u;
    v19 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
    if ( PsGetCurrentProcess(v20) != v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
    if ( *(_DWORD *)(UserSessionState + 68844) )
      return 3221225473LL;
    SetConsoleSwitchInProgress(1LL);
    *(_QWORD *)(UserSessionState + 68920) = UserSessionState + 68944;
    result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 48), UserSessionState + 68632);
    if ( (int)result >= 0 )
    {
      result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 56), UserSessionState + 68648);
      v28 = result;
      if ( (int)result >= 0 )
      {
        *(_DWORD *)(UserSessionState + 68624) = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(UserSessionState + 68628) = *(_DWORD *)(a1 + 24);
        *(_QWORD *)(UserSessionState + 68616) = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(UserSessionState + 68664) = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(UserSessionState + 68680) = *(_QWORD *)(a1 + 64);
        SetProtocolType(*(unsigned __int16 *)(a1 + 264));
        *(_WORD *)(UserSessionState + 69040) = *(_WORD *)(a1 + 264);
        *(_QWORD *)(UserSessionState + 68832) = *(_QWORD *)(a1 + 268);
        *(_DWORD *)(UserSessionState + 68840) = *(_DWORD *)(a1 + 276);
        v29 = *(_DWORD *)(a1 + 240);
        *(_DWORD *)(W32GetUserSessionState(v31, v30, v32) + 16264) = v29;
        v33 = *(_DWORD *)(a1 + 244);
        *(_DWORD *)(W32GetUserSessionState(v35, v34, v36) + 14028) = v33;
        *(_QWORD *)(UserSessionState + 68688) = *(_QWORD *)(a1 + 304);
        *(_DWORD *)(UserSessionState + 68696) = *(_DWORD *)(a1 + 312);
        *(_DWORD *)(UserSessionState + 68740) = *(_DWORD *)(UserSessionState + 68624);
        *(_OWORD *)(UserSessionState + 68700) = *(_OWORD *)(a1 + 162);
        *(_OWORD *)(UserSessionState + 68716) = *(_OWORD *)(a1 + 178);
        *(_QWORD *)(UserSessionState + 68732) = *(_QWORD *)(a1 + 194);
        v40 = W32GetUserSessionState(v38, v37, v39);
        *(_OWORD *)(v40 + 63552) = *(_OWORD *)(a1 + 202);
        v41 = v40 + 64112;
        *(_WORD *)(v40 + 63568) = *(_WORD *)(a1 + 218);
        *(_OWORD *)(v40 + 63572) = *(_OWORD *)(a1 + 220);
        *(_DWORD *)(v40 + 63588) = *(_DWORD *)(a1 + 236);
        memset((void *)(v40 + 64112), 0, 0x40uLL);
        *(_OWORD *)v41 = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v41 + 16) = *(_OWORD *)(a1 + 96);
        *(_OWORD *)(v41 + 32) = *(_OWORD *)(a1 + 112);
        *(_OWORD *)(v41 + 48) = *(_OWORD *)(a1 + 128);
        v42 = wcschr((const wchar_t *)v41, 0x23u);
        if ( v42 )
          *v42 = 0;
        v112 = *(_DWORD *)(UserSessionState + 68608);
        *(_DWORD *)(UserSessionState + 68608) = *(_DWORD *)(a1 + 292);
        *(_DWORD *)(v7 + 64) = *(_DWORD *)(a1 + 292);
        if ( *(_DWORD *)(a1 + 292) )
          *(_QWORD *)(v7 + 68) = *(_QWORD *)(a1 + 296);
        SetConnectedState(1LL, *(unsigned int *)(UserSessionState + 68752));
        if ( (unsigned int)IsRemoteConnection() )
        {
          Length = 0;
          String = 0LL;
          DestinationString = 0LL;
          LODWORD(v108) = *(_DWORD *)(W32GetUserSessionState(v44, v43, v45) + 62776);
          while ( 1 )
          {
            v81 = (void *)OpenCacheKeyEx(0LL);
            if ( !v81 )
              goto LABEL_60;
            Length = 92;
            v82 = Win32AllocPoolWithQuotaZInitImpl(v44, 0x5CuLL, 0x72707355u);
            if ( !v82 )
              goto LABEL_59;
            RtlInitUnicodeString(&DestinationString, L"CursorBlinkEnable");
            v83 = ZwQueryValueKey(v81, &DestinationString, KeyValuePartialInformation, (PVOID)v82, Length, &Length);
            v87 = 0;
            if ( v83 != -2147483643 )
              v87 = v83;
            if ( v87 >= 0 )
              break;
            if ( !(_DWORD)v108 )
            {
              GreDeleteFastMutex((char *)v82, v84, v85, v86);
LABEL_59:
              ZwClose(v81);
LABEL_60:
              v88 = W32GetUserSessionState(v44, v43, v45);
              *(_DWORD *)(*(_QWORD *)(v88 + 19904) + 2236LL) &= ~4u;
              goto LABEL_19;
            }
            GreDeleteFastMutex((char *)v82, v84, v85, v86);
            ZwClose(v81);
          }
          v89 = 40LL;
          v90 = 40;
          if ( *(_DWORD *)(v82 + 8) >> 1 < 0x28u )
            v90 = *(_DWORD *)(v82 + 8) >> 1;
          if ( *(_DWORD *)(v82 + 8) < 2u )
          {
            SourceString[0] = 0;
          }
          else
          {
            *(_WORD *)(v82 + 2LL * (unsigned int)(v90 - 1) + 12) = 0;
            RtlStringCchCopyW(SourceString, 0x28uLL, (const unsigned __int16 *)(v82 + 12));
          }
          GreDeleteFastMutex((char *)v82, v89, v85, v86);
          ZwClose(v81);
          if ( !v90 )
            goto LABEL_60;
          RtlInitUnicodeString(&String, SourceString);
          RtlUnicodeStringToInteger(&String, 0xAu, &Value);
          if ( !Value )
            goto LABEL_60;
        }
        v46 = W32GetUserSessionState(v44, v43, v45);
        *(_DWORD *)(*(_QWORD *)(v46 + 19904) + 2236LL) |= 4u;
LABEL_19:
        v47 = *(_QWORD *)(UserSessionState + 68904);
        if ( !v47 && (v48 = *(void **)(UserSessionState + 68616)) != 0LL )
        {
          v108 = 0LL;
          v95 = ObReferenceObjectByHandle(v48, 0, 0LL, 0, &v108, 0LL);
          v50 = (struct _FILE_OBJECT *)v108;
          v28 = v95;
          if ( v95 < 0 )
            goto LABEL_40;
          *(_QWORD *)(UserSessionState + 68904) = v108;
          RelatedDeviceObject = IoGetRelatedDeviceObject(v50);
          v97 = *(void **)(UserSessionState + 68680);
          v98 = RelatedDeviceObject;
          v108 = 0LL;
          v99 = ObReferenceObjectByHandle(v97, 0, 0LL, 0, &v108, 0LL);
          v50 = (struct _FILE_OBJECT *)v108;
          v28 = v99;
          *(_QWORD *)(UserSessionState + 68912) = v108;
          if ( v99 < 0 )
            goto LABEL_40;
          if ( !(unsigned int)GreMultiUserInitSession(
                                v7,
                                *(_QWORD *)(UserSessionState + 68680),
                                *(_QWORD *)(UserSessionState + 68920),
                                *(_DWORD *)(UserSessionState + 68624),
                                *(_DWORD *)(UserSessionState + 68628),
                                *(_QWORD *)(UserSessionState + 68904),
                                (__int64)v50,
                                (int)Object,
                                a3,
                                19,
                                (unsigned __int16 *)(UserSessionState + 68700)) )
            goto LABEL_23;
          if ( (unsigned int)IsRemoteConnection() )
          {
            v28 = GreDeviceIoControlImpl(v98, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)&Object, 0, 1);
            if ( v28 < 0 )
              goto LABEL_40;
            v28 = GreDrvConnect(v7);
          }
          if ( v28 < 0 )
          {
LABEL_40:
            v53 = v107;
LABEL_30:
            v55 = W32GetUserSessionState((_DWORD)v50, v49, v51);
            KeSetEvent(*(PRKEVENT *)(v55 + 68376), 1, 0);
            if ( v28 )
            {
              if ( v28 < 0 )
              {
                v59 = v112;
                *(_DWORD *)(UserSessionState + 68608) = v112;
                *(_DWORD *)(v7 + 64) = v59;
                CleanupRemoteHandles(v7);
              }
            }
            else
            {
              if ( !*(_WORD *)(W32GetUserSessionState(v57, v56, v58) + 68744) )
              {
                CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v70);
                RtlSetActiveConsoleId(CurrentWin32kSessionId);
              }
              v72 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v70) + 48) + 544LL);
              if ( v72 )
              {
                if ( v72() >= 0 )
                {
                  v74 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v73) + 48) + 552LL);
                  if ( v74 )
                    v74();
                }
              }
              if ( (unsigned int)IsRemoteConnection() )
              {
                v78 = *(_QWORD *)(v7 + 40);
                v79 = *(_WORD *)(UserSessionState + 68744);
                v80 = W32GetUserSessionState(v76, v75, v77);
                DrvEscapeRemoteDrivers(*(_QWORD *)(*(_QWORD *)(v80 + 56968) + 16LL), v79, v78, 6, 0LL, 0);
              }
              SetConnectCompletedState(1LL);
            }
            SetConsoleSwitchInProgress(0LL);
            DispBrokerAsyncSessionStateChanged(v53);
            UserNotifyDisplayChange();
            return (unsigned int)v28;
          }
        }
        else if ( !*(_QWORD *)(UserSessionState + 68616)
               && !(unsigned int)GreMultiUserInitSession(
                                   v7,
                                   *(_QWORD *)(UserSessionState + 68680),
                                   *(_QWORD *)(UserSessionState + 68920),
                                   *(_DWORD *)(UserSessionState + 68624),
                                   *(_DWORD *)(UserSessionState + 68628),
                                   v47,
                                   *(_QWORD *)(UserSessionState + 68912),
                                   (int)Object,
                                   a3,
                                   19,
                                   (unsigned __int16 *)(UserSessionState + 68700)) )
        {
LABEL_23:
          v28 = -1073741823;
          goto LABEL_40;
        }
        v52 = *(void **)(UserSessionState + 68664);
        if ( !v52
          || (Object = 0LL,
              v28 = ObReferenceObjectByHandle(v52, 0, 0LL, 0, &Object, 0LL),
              *(_QWORD *)(UserSessionState + 68672) = Object,
              v28 >= 0) )
        {
          if ( *(_DWORD *)(UserSessionState + 68604) && !*(_DWORD *)(W32GetUserGdiSessionState() + 32) )
          {
            v53 = v107;
            if ( InitVideo((__int64)v107) )
            {
              v100 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v54) + 48) + 528LL);
              if ( (!v100 || v100() < 0 || (unsigned int)LW_BrushInit())
                && (InitLoadResources(0LL),
                    v107 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Win32AllocPoolZInitImpl(64LL, 0x40uLL, 0x744B7355u),
                    SGRDPgptmrWD<_KTIMER *>::operator=(v101, &v107),
                    *(_QWORD *)(W32GetUserSessionState(v103, v102, v104) + 68936)) )
              {
                v105 = W32GetUserSessionState((_DWORD)v50, v49, v51);
                KeInitializeTimerEx(*(PKTIMER *)(v105 + 68936), SynchronizationTimer);
                LOBYTE(v106) = (unsigned int)IsRemoteConnection() == 0;
                GreDxgkSessionConnected(v106);
                *(_DWORD *)(W32GetUserGdiSessionState() + 32) = 1;
              }
              else
              {
                v28 = -1073741801;
              }
            }
            else
            {
              SetConnectedState(0LL, 0LL);
              v28 = -1073741823;
            }
            goto LABEL_30;
          }
          LOBYTE(v60) = (unsigned int)IsRemoteConnection() == 0;
          GreDxgkSessionConnected(v60);
          LODWORD(v50) = (_DWORD)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
            || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v61 = 0;
          }
          v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v63 = W32GetCurrentWin32kSessionId((__int64)WPP_GLOBAL_Control);
            v67 = W32GetUserSessionState(v65, v64, v66);
            LOBYTE(v68) = v62;
            LOBYTE(v69) = v61;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v69,
              v68,
              *(_QWORD *)(v67 + 69136),
              4,
              14,
              11,
              (__int64)&WPP_5b043743b4cf3d9171b2537976d336f9_Traceguids,
              v63);
          }
          v28 = 0;
        }
        goto LABEL_40;
      }
    }
  }
  return result;
}
