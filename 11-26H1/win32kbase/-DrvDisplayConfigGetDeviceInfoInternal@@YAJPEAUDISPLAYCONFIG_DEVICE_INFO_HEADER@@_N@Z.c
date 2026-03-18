/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1400FA910 (DrvDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401AD57C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140027938 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1400293F0 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsDisconnectConnection @ 0x14002A9D0 (UserIsDisconnectConnection.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FB7E0 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FB820 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FBFCC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvIsWddmDriverPresent @ 0x14011FF98 (DrvIsWddmDriverPresent.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x14015863C (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140177A2C (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     UserGetIsSwitchInProgress @ 0x140191AC0 (UserGetIsSwitchInProgress.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1401B9BA0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401E03E0 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1, char a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebp
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 DxgkWin32kInterface; // rax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // esi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // ecx
  int v63; // edx
  int v64; // r8d
  __int64 UserSessionState; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // eax
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  int IsWddmConnectedSession; // eax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  BOOL IsConsoleConnection; // eax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  BOOL IsDisconnectConnection; // eax
  __int64 UserGdiSessionState; // rax
  unsigned int v88; // ecx
  int v89; // edx
  int v90; // r8d
  int v91; // ecx
  int v92; // edx
  int v93; // r8d
  __int64 v94; // rax
  __int64 v95; // rcx
  int v96; // eax
  int v97; // [rsp+50h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, *(int *)a1);
  v4 = *(_DWORD *)a1;
  WdLogGlobalForLineNumber = 17604;
  v9 = 0;
  if ( !DispConfigTypes::AllowInAnySession(v4)
    && (!(unsigned int)UserIsWddmConnectedSession(v6, v5, v7, v8)
     || DispConfigTypes::RequiresUserCritShared(*(_DWORD *)a1) && !(unsigned int)DrvIsWddmDriverPresent()) )
  {
    return 3221225659LL;
  }
  if ( (unsigned int)DispConfigTypes::GetGetterTypeSize(*(unsigned int *)a1) != *((_DWORD *)a1 + 1) )
    return 3221225485LL;
  v13 = (unsigned int *)((char *)a1 + 16);
  if ( *((_DWORD *)a1 + 4) == -1
    || (v14 = DxDdGetDxgkWin32kInterface(v12, v11),
        v15 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, char *))(v14 + 552))(
                (char *)a1 + 8,
                *v13,
                (char *)a1 + 8,
                (char *)a1 + 16),
        v16 = v15,
        v15 >= 0) )
  {
    if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
      && *(_DWORD *)a1 == -46 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v18, v17);
      LOBYTE(v21) = 1;
      v22 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(DxgkWin32kInterface + 248))(
              v21,
              a1);
      v23 = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry2(3LL, a1, v22);
        WdLogGlobalForLineNumber = 17662;
      }
    }
    else
    {
      v24 = *(_DWORD *)a1;
      if ( *(int *)a1 > 100 )
      {
        return (unsigned int)-1073741811;
      }
      else if ( v24 == 100 )
      {
LABEL_54:
        v94 = DxDdGetDxgkWin32kInterface(v18, v17);
        LOBYTE(v95) = 1;
        v96 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v94 + 248))(v95, a1);
        v23 = v96;
        if ( v96 < 0 )
        {
          WdLogSingleEntry2(3LL, a1, v96);
          WdLogGlobalForLineNumber = 17747;
        }
      }
      else
      {
        v17 = 0x140000000uLL;
        switch ( v24 )
        {
          case -45:
          case -42:
          case -37:
          case -36:
          case -34:
          case -33:
          case -26:
          case -24:
          case -22:
          case -14:
          case -13:
          case -12:
          case -10:
          case -5:
          case 2:
          case 3:
          case 4:
          case 6:
          case 7:
          case 9:
          case 11:
          case 12:
          case 15:
            goto LABEL_54;
          case -44:
            if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
              return (unsigned int)-1073741811;
            v28 = DxDdGetDxgkWin32kInterface(v27, v26);
            LOBYTE(v29) = 1;
            v30 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v28 + 248))(v29, a1);
            v23 = v30;
            if ( v30 < 0 )
            {
              WdLogSingleEntry2(3LL, a1, v30);
              WdLogGlobalForLineNumber = 17761;
            }
            return v23;
          case -39:
            UserSessionState = W32GetUserSessionState(v18, 0x40000000u, v19);
            v66 = *(unsigned int *)(UserSessionState + 68696);
            *((_DWORD *)a1 + 5) = v66 ^ (*((_DWORD *)a1 + 5) ^ *(_DWORD *)(UserSessionState + 68696)) & 0xFFFFFFFE;
            v70 = UserRemoteConnectedSessionUsingWddm(v66, v67, v68, v69);
            *((_DWORD *)a1 + 5) = (2 * v70) ^ (*((_DWORD *)a1 + 5) ^ (2 * v70)) & 0xFFFFFFFD;
            v71 = UserRemoteConnectedSessionUsingXddm();
            v72 = (4 * v71) ^ (*((_DWORD *)a1 + 5) ^ (4 * v71)) & 0xFFFFFFFB;
            *((_DWORD *)a1 + 5) = v72;
            IsWddmConnectedSession = UserIsWddmConnectedSession(v72, v73, v74, v75);
            v77 = (8 * IsWddmConnectedSession) ^ (*((_DWORD *)a1 + 5) ^ (8 * IsWddmConnectedSession)) & 0xFFFFFFF7;
            *((_DWORD *)a1 + 5) = v77;
            IsConsoleConnection = UserIsConsoleConnection(v77, v78, v79, v80);
            v82 = (16 * IsConsoleConnection) ^ (*((_DWORD *)a1 + 5) ^ (16 * IsConsoleConnection)) & 0xFFFFFFEF;
            *((_DWORD *)a1 + 5) = v82;
            IsDisconnectConnection = UserIsDisconnectConnection(v82, v83, v84, v85);
            *((_DWORD *)a1 + 5) = (32 * IsDisconnectConnection) ^ (*((_DWORD *)a1 + 5) ^ (32 * IsDisconnectConnection)) & 0xFFFFFFDF;
            UserGdiSessionState = W32GetUserGdiSessionState();
            *((_DWORD *)a1 + 5) = (*(_DWORD *)(UserGdiSessionState + 28) << 6) ^ (*((_DWORD *)a1 + 5) ^ (*(_DWORD *)(UserGdiSessionState + 28) << 6)) & 0xFFFFFFBF;
            v88 = *((_DWORD *)a1 + 5) & 0xFFFFFF7F | ((unsigned __int8)UserGetIsSwitchInProgress() != 0 ? 0x80 : 0);
            *((_DWORD *)a1 + 5) = v88;
            v91 = *(unsigned __int16 *)(W32GetUserSessionState(v88, v89, v90) + 68744);
            *((_WORD *)a1 + 12) = v91;
            *(_QWORD *)((char *)a1 + 28) = *(_QWORD *)(W32GetUserSessionState(v91, v92, v93) + 68688);
            goto LABEL_28;
          case -30:
          case -21:
          case -11:
          case -2:
            return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1);
          case -25:
            if ( *((_DWORD *)a1 + 1) < 0x28u )
              return 3221225507LL;
            v32 = DxDdGetDxgkWin32kInterface(v18, 0x140000000uLL);
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v32 + 776))(
                                   *((_QWORD *)a1 + 1),
                                   *((unsigned int *)a1 + 4),
                                   a1);
          case -20:
            v43 = *(unsigned int *)(W32GetUserSessionState(v18, 0x40000000u, v19) + 68696);
            *((_DWORD *)a1 + 5) = v43;
            *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm(v43, v44, v45, v46);
            *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
            *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession(v48, v47, v49, v50);
            *((_DWORD *)a1 + 9) = UserIsConsoleConnection(v52, v51, v53, v54);
            *((_DWORD *)a1 + 10) = UserIsDisconnectConnection(v56, v55, v57, v58);
            v62 = *(unsigned __int16 *)(W32GetUserSessionState(v60, v59, v61) + 68744);
            *((_WORD *)a1 + 22) = v62;
            *((_QWORD *)a1 + 6) = *(_QWORD *)(W32GetUserSessionState(v62, v63, v64) + 68688);
            goto LABEL_28;
          case -15:
            if ( *((_DWORD *)a1 + 1) < 0x20u )
              return 3221225507LL;
            v97 = 0;
            v42 = DxDdGetDxgkWin32kInterface(v18, 0x140000000uLL);
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v42 + 704))(
                    *((_QWORD *)a1 + 1),
                    *((unsigned int *)a1 + 4),
                    *((unsigned int *)a1 + 5),
                    &v97,
                    *((_QWORD *)a1 + 3));
            *((_DWORD *)a1 + 5) = v97;
            return v23;
          case -9:
            if ( *((_DWORD *)a1 + 1) < 0x18u )
              return 3221225507LL;
            v97 = 0;
            v41 = DxDdGetDxgkWin32kInterface(v18, 0x140000000uLL);
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v41 + 264))(
                    *((_QWORD *)a1 + 1),
                    *((unsigned int *)a1 + 4),
                    0LL,
                    &v97,
                    0LL);
            if ( (v23 & 0x80000000) == 0 )
            {
              LOBYTE(v9) = v97 == 2;
              *((_DWORD *)a1 + 5) = v9;
            }
            return v23;
          case -8:
            if ( *((_DWORD *)a1 + 1) < 0x518u )
              return 3221225507LL;
            v40 = DxDdGetDxgkWin32kInterface(v18, 0x140000000uLL);
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, char *))(v40 + 672))(
                                   *((_QWORD *)a1 + 1),
                                   *((unsigned int *)a1 + 4),
                                   1280LL,
                                   (char *)a1 + 20,
                                   (char *)a1 + 24);
          case -7:
            if ( *((_DWORD *)a1 + 1) < 0x3B0u )
              return 3221225507LL;
            v33 = DxDdGetDxgkWin32kInterface(v18, 0x140000000uLL);
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))(v33 + 264))(
                    *((_QWORD *)a1 + 1),
                    *((unsigned int *)a1 + 4),
                    a1,
                    0LL,
                    0LL);
            if ( a2 )
            {
              if ( DispConfigTypes::RequiresUserCritShared(-7) )
              {
                UserSessionSwitchLeaveCritWithNonPaged(v35, v34, v36, v37);
                GetMonitorBrightnessCaps(a1);
                EnterSharedCrit(1LL, 1LL, v38, v39);
              }
              else
              {
                GetMonitorBrightnessCaps(a1);
              }
            }
            return v23;
          case -3:
            if ( *((_DWORD *)a1 + 1) != 32 )
              return 3221225485LL;
            return (unsigned int)DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
          case 1:
            v25 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v18) + 88) + 1184LL);
            if ( *((_DWORD *)a1 + 1) < 0x54u )
              return 3221225507LL;
            if ( !v25 )
              goto LABEL_29;
            do
            {
              if ( *((_DWORD *)a1 + 2) == *(_DWORD *)(v25 + 240)
                && *((_DWORD *)a1 + 3) == *(_DWORD *)(v25 + 244)
                && *(_DWORD *)(v25 + 248) == *((_DWORD *)a1 + 4) )
              {
                break;
              }
              v25 = *(_QWORD *)(v25 + 128);
            }
            while ( v25 );
            if ( !v25 )
            {
LABEL_29:
              WdLogSingleEntry0(3LL);
              result = 3221226021LL;
              WdLogGlobalForLineNumber = 17699;
              return result;
            }
            *(_OWORD *)((char *)a1 + 20) = *(_OWORD *)(v25 + 64);
            *(_OWORD *)((char *)a1 + 36) = *(_OWORD *)(v25 + 80);
            *(_OWORD *)((char *)a1 + 52) = *(_OWORD *)(v25 + 96);
            *(_OWORD *)((char *)a1 + 68) = *(_OWORD *)(v25 + 112);
LABEL_28:
            v23 = 0;
            break;
          default:
            return (unsigned int)-1073741811;
        }
      }
    }
    return v23;
  }
  else
  {
    if ( *(_DWORD *)a1 == -21 )
    {
      *((_DWORD *)a1 + 506) = 1144084231;
      WdLogSingleEntry5(2LL, *((int *)a1 + 3), *((unsigned int *)a1 + 2), *v13, v15, 1144084231LL);
      WdLogGlobalForLineNumber = 17649;
    }
    return v16;
  }
}
