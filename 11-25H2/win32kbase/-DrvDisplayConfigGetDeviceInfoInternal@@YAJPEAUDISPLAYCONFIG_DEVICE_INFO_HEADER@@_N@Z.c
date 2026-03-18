/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8
 * Callers:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x14008205C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1400F6DC0 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70 (NtUserDisplayConfigGetDeviceInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x14004DA74 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UserIsDisconnectConnection @ 0x14006BBA0 (UserIsDisconnectConnection.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x14006BE78 (DrvIsWddmDriverPresent.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14006BED0 (UserRemoteConnectedSessionUsingWddm.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400C7E18 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1401178EC (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016E3DC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016E4D0 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401B9CA0 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline @ 0x1401B9CF4 (Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1401B9D48 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     UserGetIsSwitchInProgress @ 0x1401C1B30 (UserGetIsSwitchInProgress.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1401CD1E0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1, char a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int *v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 UserSessionState; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  int IsWddmConnectedSession; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  BOOL IsConsoleConnection; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  BOOL IsDisconnectConnection; // eax
  __int64 v44; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // eax
  int v76; // [rsp+50h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, *(int *)a1);
  v4 = *(_DWORD *)a1;
  WdLogGlobalForLineNumber = 17754;
  v7 = 0;
  if ( !DispConfigTypes::AllowInAnySession(v4)
    && (!(unsigned int)UserIsWddmConnectedSession(v6, v5)
     || (unsigned __int8)DispConfigTypes::RequiresUserCritShared(*(unsigned int *)a1)
     && !(unsigned int)DrvIsWddmDriverPresent(v8)) )
  {
    return 3221225659LL;
  }
  if ( (unsigned int)DispConfigTypes::GetGetterTypeSize(*(unsigned int *)a1) != *((_DWORD *)a1 + 1) )
    return 3221225485LL;
  v11 = (unsigned int *)((char *)a1 + 16);
  if ( *((_DWORD *)a1 + 4) == -1
    || (v12 = DxDdGetDxgkWin32kInterface(v10),
        v13 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, char *))(v12 + 552))(
                (char *)a1 + 8,
                *v11,
                (char *)a1 + 8,
                (char *)a1 + 16),
        v14 = v13,
        v13 >= 0) )
  {
    if ( (unsigned int)Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline()
      && *(_DWORD *)a1 == -42 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v15);
      LOBYTE(v17) = 1;
      v18 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(DxgkWin32kInterface + 248))(
              v17,
              a1);
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry2(3LL, a1, v18);
        WdLogGlobalForLineNumber = 17812;
      }
      return v19;
    }
    if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
      && *(_DWORD *)a1 == -46 )
    {
      v22 = DxDdGetDxgkWin32kInterface(v21);
      LOBYTE(v23) = 1;
      v24 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v22 + 248))(v23, a1);
      v19 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry2(3LL, a1, v24);
        WdLogGlobalForLineNumber = 17826;
      }
      return v19;
    }
    v25 = *(unsigned int *)a1;
    if ( (int)v25 <= -10 )
    {
      if ( (_DWORD)v25 == -10 )
        goto LABEL_92;
      if ( (int)v25 > -24 )
      {
        switch ( (_DWORD)v25 )
        {
          case 0xFFFFFFEA:
            goto LABEL_92;
          case 0xFFFFFFEB:
            return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1);
          case 0xFFFFFFEC:
            v55 = *(unsigned int *)(W32GetUserSessionState(v25, v20) + 68704);
            *((_DWORD *)a1 + 5) = v55;
            *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm(v55, v56);
            *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm(v58, v57);
            *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession(v60, v59);
            *((_DWORD *)a1 + 9) = UserIsConsoleConnection(v62, v61);
            *((_DWORD *)a1 + 10) = UserIsDisconnectConnection(v64, v63);
            v67 = *(unsigned __int16 *)(W32GetUserSessionState(v66, v65) + 68752);
            *((_WORD *)a1 + 22) = v67;
            *((_QWORD *)a1 + 6) = *(_QWORD *)(W32GetUserSessionState(v67, v68) + 68696);
            return 0;
          case 0xFFFFFFF1:
            if ( *((_DWORD *)a1 + 1) < 0x20u )
              return 3221225507LL;
            v76 = 0;
            v54 = DxDdGetDxgkWin32kInterface(v25);
            v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v54 + 704))(
                    *((_QWORD *)a1 + 1),
                    *((unsigned int *)a1 + 4),
                    *((unsigned int *)a1 + 5),
                    &v76,
                    *((_QWORD *)a1 + 3));
            *((_DWORD *)a1 + 5) = v76;
            return v19;
        }
        if ( (unsigned int)(v25 + 14) <= 2 )
          goto LABEL_92;
        if ( (_DWORD)v25 == -11 )
          return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1);
      }
      else
      {
        if ( (_DWORD)v25 == -24 )
          goto LABEL_92;
        if ( (_DWORD)v25 != -44 )
        {
          if ( (_DWORD)v25 != -39 )
          {
            if ( (_DWORD)v25 != -35 && (int)v25 > -38 && (int)v25 < -32 )
              goto LABEL_92;
            if ( (_DWORD)v25 != -30 )
            {
              if ( (_DWORD)v25 != -26 )
              {
                if ( (_DWORD)v25 == -25 )
                {
                  if ( *((_DWORD *)a1 + 1) >= 0x28u )
                  {
                    v26 = DxDdGetDxgkWin32kInterface(v25);
                    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v26 + 776))(
                                           *((_QWORD *)a1 + 1),
                                           *((unsigned int *)a1 + 4),
                                           a1);
                  }
                  return 3221225507LL;
                }
                return (unsigned int)-1073741811;
              }
LABEL_92:
              v73 = DxDdGetDxgkWin32kInterface(v25);
              LOBYTE(v74) = 1;
              v75 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v73 + 248))(v74, a1);
              v19 = v75;
              if ( v75 < 0 )
              {
                WdLogSingleEntry2(3LL, a1, v75);
                WdLogGlobalForLineNumber = 17909;
              }
              return v19;
            }
            return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1);
          }
          UserSessionState = W32GetUserSessionState(v25, v20);
          v29 = *(unsigned int *)(UserSessionState + 68704);
          *((_DWORD *)a1 + 5) = v29 ^ (*((_DWORD *)a1 + 5) ^ *(_DWORD *)(UserSessionState + 68704)) & 0xFFFFFFFE;
          v31 = UserRemoteConnectedSessionUsingWddm(v29, v30);
          v32 = (2 * v31) ^ (*((_DWORD *)a1 + 5) ^ (2 * v31)) & 0xFFFFFFFD;
          *((_DWORD *)a1 + 5) = v32;
          v34 = UserRemoteConnectedSessionUsingXddm(v32, v33);
          v35 = (4 * v34) ^ (*((_DWORD *)a1 + 5) ^ (4 * v34)) & 0xFFFFFFFB;
          *((_DWORD *)a1 + 5) = v35;
          IsWddmConnectedSession = UserIsWddmConnectedSession(v35, v36);
          v38 = (8 * IsWddmConnectedSession) ^ (*((_DWORD *)a1 + 5) ^ (8 * IsWddmConnectedSession)) & 0xFFFFFFF7;
          *((_DWORD *)a1 + 5) = v38;
          IsConsoleConnection = UserIsConsoleConnection(v38, v39);
          v41 = (16 * IsConsoleConnection) ^ (*((_DWORD *)a1 + 5) ^ (16 * IsConsoleConnection)) & 0xFFFFFFEF;
          *((_DWORD *)a1 + 5) = v41;
          IsDisconnectConnection = UserIsDisconnectConnection(v41, v42);
          v44 = (32 * IsDisconnectConnection) ^ (*((_DWORD *)a1 + 5) ^ (32 * IsDisconnectConnection)) & 0xFFFFFFDF;
          *((_DWORD *)a1 + 5) = v44;
          UserGdiSessionState = W32GetUserGdiSessionState(v44);
          *((_DWORD *)a1 + 5) = (*(_DWORD *)(UserGdiSessionState + 28) << 6) ^ (*((_DWORD *)a1 + 5) ^ (*(_DWORD *)(UserGdiSessionState + 28) << 6)) & 0xFFFFFFBF;
          v46 = *((_DWORD *)a1 + 5) & 0xFFFFFF7F | ((unsigned __int8)UserGetIsSwitchInProgress() != 0 ? 0x80 : 0);
          *((_DWORD *)a1 + 5) = v46;
          v48 = *(unsigned __int16 *)(W32GetUserSessionState(v46, v47) + 68752);
          *((_WORD *)a1 + 12) = v48;
          *(_QWORD *)((char *)a1 + 28) = *(_QWORD *)(W32GetUserSessionState(v48, v49) + 68696);
          return 0;
        }
        if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        {
          v51 = DxDdGetDxgkWin32kInterface(v50);
          LOBYTE(v52) = 1;
          v53 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v51 + 248))(v52, a1);
          v19 = v53;
          if ( v53 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v53);
            WdLogGlobalForLineNumber = 17923;
          }
          return v19;
        }
      }
      return (unsigned int)-1073741811;
    }
    if ( (int)v25 > 100 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)v25 == 100 )
      goto LABEL_92;
    if ( (int)v25 > 3 )
    {
      v25 = (unsigned int)(v25 - 4);
      if ( !(_DWORD)v25 )
        goto LABEL_92;
      v25 = (unsigned int)(v25 - 2);
      if ( !(_DWORD)v25 )
        goto LABEL_92;
      v25 = (unsigned int)(v25 - 1);
      if ( !(_DWORD)v25 )
        goto LABEL_92;
      v25 = (unsigned int)(v25 - 2);
      if ( !(_DWORD)v25 )
        goto LABEL_92;
      v25 = (unsigned int)(v25 - 2);
      if ( !(_DWORD)v25 )
        goto LABEL_92;
      v25 = (unsigned int)(v25 - 1);
      if ( !(_DWORD)v25 || (_DWORD)v25 == 3 )
        goto LABEL_92;
      return (unsigned int)-1073741811;
    }
    switch ( (_DWORD)v25 )
    {
      case 3:
        goto LABEL_92;
      case 0xFFFFFFF7:
        if ( *((_DWORD *)a1 + 1) >= 0x18u )
        {
          v76 = 0;
          v72 = DxDdGetDxgkWin32kInterface(v25);
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v72 + 264))(
                  *((_QWORD *)a1 + 1),
                  *((unsigned int *)a1 + 4),
                  0LL,
                  &v76,
                  0LL);
          if ( (v19 & 0x80000000) == 0 )
          {
            LOBYTE(v7) = v76 == 2;
            *((_DWORD *)a1 + 5) = v7;
          }
          return v19;
        }
        return 3221225507LL;
      case 0xFFFFFFF8:
        if ( *((_DWORD *)a1 + 1) >= 0x518u )
        {
          v71 = DxDdGetDxgkWin32kInterface(v25);
          return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, char *))(v71 + 672))(
                                 *((_QWORD *)a1 + 1),
                                 *((unsigned int *)a1 + 4),
                                 1280LL,
                                 (char *)a1 + 20,
                                 (char *)a1 + 24);
        }
        return 3221225507LL;
      case 0xFFFFFFF9:
        if ( *((_DWORD *)a1 + 1) >= 0x3ACu )
        {
          v70 = DxDdGetDxgkWin32kInterface(v25);
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))(v70 + 264))(
                  *((_QWORD *)a1 + 1),
                  *((unsigned int *)a1 + 4),
                  a1,
                  0LL,
                  0LL);
          if ( a2 )
            GetMonitorBrightnessCaps(a1);
          return v19;
        }
        return 3221225507LL;
      case 0xFFFFFFFB:
        goto LABEL_92;
    }
    if ( (_DWORD)v25 != -3 )
    {
      switch ( (_DWORD)v25 )
      {
        case 0xFFFFFFFE:
          return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1);
        case 1:
          v69 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v25) + 88) + 1096LL);
          if ( *((_DWORD *)a1 + 1) < 0x54u )
            return 3221225507LL;
          if ( !v69 )
            goto LABEL_71;
          do
          {
            if ( *((_DWORD *)a1 + 2) == *(_DWORD *)(v69 + 240)
              && *((_DWORD *)a1 + 3) == *(_DWORD *)(v69 + 244)
              && *(_DWORD *)(v69 + 248) == *((_DWORD *)a1 + 4) )
            {
              break;
            }
            v69 = *(_QWORD *)(v69 + 128);
          }
          while ( v69 );
          if ( !v69 )
          {
LABEL_71:
            WdLogSingleEntry0(3LL);
            result = 3221226021LL;
            WdLogGlobalForLineNumber = 17863;
            return result;
          }
          *(_OWORD *)((char *)a1 + 20) = *(_OWORD *)(v69 + 64);
          *(_OWORD *)((char *)a1 + 36) = *(_OWORD *)(v69 + 80);
          *(_OWORD *)((char *)a1 + 52) = *(_OWORD *)(v69 + 96);
          *(_OWORD *)((char *)a1 + 68) = *(_OWORD *)(v69 + 112);
          return 0;
        case 2:
          goto LABEL_92;
      }
      return (unsigned int)-1073741811;
    }
    if ( *((_DWORD *)a1 + 1) == 32 )
      return (unsigned int)DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 == -21 )
  {
    *((_DWORD *)a1 + 506) = 1144084231;
    WdLogSingleEntry5(2LL, *((int *)a1 + 3), *((unsigned int *)a1 + 2), *v11, v13, 1144084231LL);
    WdLogGlobalForLineNumber = 17799;
  }
  return v14;
}
