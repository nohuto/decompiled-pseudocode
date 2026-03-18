/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     GetPathsModality @ 0x14002D62C (GetPathsModality.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     DrvIsWddmDriverPresent @ 0x14011FF98 (DrvIsWddmDriverPresent.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401E0030 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401E03E0 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401F76A0 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 DxgkWin32kInterface; // rax
  unsigned int *v8; // r14
  unsigned int *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v21; // r8d
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // r10d
  PVOID v54; // rsi
  int PathsModality; // eax
  int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // eax
  int v69; // eax
  PVOID v70; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent((__int64)a1) )
    return 3221225659LL;
  if ( (unsigned int)DispConfigTypes::GetSetterTypeSize(*a1) != a1[1] )
    return 3221225485LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v6, v5);
  v8 = (unsigned int *)(a1 + 4);
  v9 = (unsigned int *)(a1 + 2);
  result = (*(__int64 (__fastcall **)(int *, _QWORD, int *, int *))(DxgkWin32kInterface + 552))(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result < 0 )
    return result;
  v11 = *a1;
  if ( (int)v11 <= -16 )
  {
    switch ( (_DWORD)v11 )
    {
      case 0xFFFFFFF0:
        if ( a1[1] == 68 )
        {
          v34 = DxDdGetDxgkWin32kInterface(v10, v11);
          v35 = (*(__int64 (__fastcall **)(_QWORD, int *))(v34 + 248))(0LL, a1);
          v14 = v35;
          if ( v35 >= 0 )
          {
            if ( v35 == 259 )
            {
              if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
                return 0;
              }
              else
              {
                v37 = xxxUserSetDisplayConfig(0, 0LL, 0x98Fu, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
                v14 = v37;
                if ( v37 < 0 )
                {
                  WdLogSingleEntry1(3LL, v37);
                  WdLogGlobalForLineNumber = 18311;
                }
              }
            }
            else if ( v35 == 255 )
            {
              LOBYTE(v36) = 1;
              GreIncrementDisplaySettingsUniqueness(v36);
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, a1, v35);
            WdLogGlobalForLineNumber = 18284;
          }
          return v14;
        }
        return 3221225485LL;
      case 0xFFFFFFD5:
        if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        {
          v14 = -1073741811;
          WdLogSingleEntry5(2LL, -1073741811LL, *a1, a1[3], *v9, *v8);
          WdLogGlobalForLineNumber = 18390;
          return v14;
        }
        if ( a1[1] == 24 )
        {
          v32 = DxDdGetDxgkWin32kInterface(v31, v30);
          v33 = (*(__int64 (__fastcall **)(_QWORD, int *))(v32 + 248))(0LL, a1);
          v14 = v33;
          if ( v33 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v33);
            WdLogGlobalForLineNumber = 18378;
          }
          return v14;
        }
        return 3221225485LL;
      case 0xFFFFFFD7:
        if ( a1[1] == 24 )
        {
          v28 = DxDdGetDxgkWin32kInterface(v10, v11);
          v29 = (*(__int64 (__fastcall **)(_QWORD, int *))(v28 + 248))(0LL, a1);
          v14 = v29;
          if ( v29 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v29);
            WdLogGlobalForLineNumber = 18548;
          }
          return v14;
        }
        return 3221225485LL;
      case 0xFFFFFFD8:
        if ( a1[1] == 24 )
        {
          v26 = DxDdGetDxgkWin32kInterface(v10, v11);
          v27 = (*(__int64 (__fastcall **)(_QWORD, int *))(v26 + 248))(0LL, a1);
          v14 = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v27);
            WdLogGlobalForLineNumber = 18530;
          }
          return v14;
        }
        return 3221225485LL;
      case 0xFFFFFFDA:
        if ( a1[1] == 28 )
        {
          v24 = DxDdGetDxgkWin32kInterface(v10, v11);
          v25 = (*(__int64 (__fastcall **)(_QWORD, int *))(v24 + 248))(0LL, a1);
          v14 = v25;
          if ( v25 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v25);
            WdLogGlobalForLineNumber = 18512;
          }
          return v14;
        }
        return 3221225485LL;
      case 0xFFFFFFDD:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
          v22 = DxDdGetDxgkWin32kInterface(v10, v11);
          v23 = (*(__int64 (__fastcall **)(_QWORD, int *))(v22 + 248))(0LL, a1);
          v14 = v23;
          if ( v23 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v23);
            WdLogGlobalForLineNumber = 18494;
          }
          return v14;
        }
        break;
      case 0xFFFFFFE5:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
          v19 = DxDdGetDxgkWin32kInterface(v10, v11);
          v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v19 + 248))(0LL, a1);
          if ( v14 == -1073741802 )
          {
            IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
            v21 = 2191;
            if ( !IsEnabledDeviceUsageNoInline )
              v21 = 2447;
            v14 = xxxUserSetDisplayConfig(0, 0LL, v21, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          }
          if ( (v14 & 0x80000000) != 0 )
          {
            WdLogSingleEntry2(3LL, a1, (int)v14);
            WdLogGlobalForLineNumber = 18476;
          }
          return v14;
        }
        break;
      default:
        switch ( (_DWORD)v11 )
        {
          case 0xFFFFFFE9:
            if ( a1[1] == 48 )
            {
              v17 = DxDdGetDxgkWin32kInterface(v10, v11);
              v18 = (*(__int64 (__fastcall **)(_QWORD, int *))(v17 + 248))(0LL, a1);
              v14 = v18;
              if ( v18 < 0 )
              {
                WdLogSingleEntry2(3LL, a1, v18);
                WdLogGlobalForLineNumber = 18408;
              }
              return v14;
            }
            break;
          case 0xFFFFFFED:
            if ( a1[1] == 24 )
            {
              v15 = DxDdGetDxgkWin32kInterface(v10, v11);
              v16 = (*(__int64 (__fastcall **)(_QWORD, int *))(v15 + 248))(0LL, a1);
              v14 = v16;
              if ( v16 < 0 )
              {
                WdLogSingleEntry2(3LL, a1, v16);
                WdLogGlobalForLineNumber = 18359;
              }
              return v14;
            }
            break;
          case 0xFFFFFFEE:
            if ( a1[1] == 28 )
            {
              v12 = DxDdGetDxgkWin32kInterface(v10, v11);
              v13 = (*(__int64 (__fastcall **)(_QWORD, int *))(v12 + 248))(0LL, a1);
              v14 = v13;
              if ( v13 < 0 )
              {
                WdLogSingleEntry2(3LL, a1, v13);
                WdLogGlobalForLineNumber = 18342;
              }
              return v14;
            }
            return 3221225485LL;
          default:
            goto LABEL_68;
        }
        return 3221225485LL;
    }
    return 3221225507LL;
  }
  if ( (_DWORD)v11 == -6 )
  {
    if ( a1[1] == 28 )
    {
      v67 = DxDdGetDxgkWin32kInterface(v10, v11);
      v68 = (*(__int64 (__fastcall **)(_QWORD, int *))(v67 + 248))(0LL, a1);
      v14 = v68;
      if ( v68 >= 0 )
      {
        if ( a1[6] )
        {
          v69 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 4u, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          v14 = v69;
          if ( v69 < 0 )
          {
            WdLogSingleEntry1(3LL, v69);
            WdLogGlobalForLineNumber = 18211;
          }
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a1, v68);
        WdLogGlobalForLineNumber = 18191;
      }
      return v14;
    }
    return 3221225485LL;
  }
  if ( (_DWORD)v11 == -4 )
  {
    if ( a1[1] == 24 )
      return (unsigned int)DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
    return 3221225485LL;
  }
  if ( (_DWORD)v11 != 5 )
  {
    if ( (_DWORD)v11 != 8 )
    {
      if ( (_DWORD)v11 != 10 )
      {
        if ( (_DWORD)v11 == 13 )
        {
          if ( a1[1] == 312 )
          {
            v38 = DxDdGetDxgkWin32kInterface(v10, v11);
            v39 = (*(__int64 (__fastcall **)(_QWORD, int *))(v38 + 248))(0LL, a1);
            v14 = v39;
            if ( v39 < 0 )
            {
              WdLogSingleEntry2(3LL, a1, v39);
              WdLogGlobalForLineNumber = 18425;
            }
            return v14;
          }
          return 3221225485LL;
        }
        if ( (_DWORD)v11 != 16 && (_DWORD)v11 != 17 )
        {
LABEL_68:
          v14 = -1073741811;
          WdLogSingleEntry5(2LL, -1073741811LL, *a1, a1[3], *v9, *v8);
          WdLogGlobalForLineNumber = 18561;
          return v14;
        }
      }
      v40 = DxDdGetDxgkWin32kInterface(v10, v11);
      v41 = (*(__int64 (__fastcall **)(_QWORD, int *))(v40 + 248))(0LL, a1);
      v14 = v41;
      if ( v41 >= 0 )
      {
        if ( v41 != 255 )
        {
          v42 = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
          v43 = xxxUserSetDisplayConfig(0, 0LL, v42 != 0 ? 2191 : 2447, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          v14 = v43;
          if ( v43 < 0 )
          {
            WdLogSingleEntry1(3LL, v43);
            WdLogGlobalForLineNumber = 18264;
          }
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a1, v41);
        WdLogGlobalForLineNumber = 18226;
      }
      return v14;
    }
    if ( a1[1] == 24 )
    {
      v44 = DxDdGetDxgkWin32kInterface(v10, v11);
      v45 = (*(__int64 (__fastcall **)(_QWORD, int *))(v44 + 248))(0LL, a1);
      v14 = v45;
      if ( v45 >= 0 )
      {
        v46 = xxxUserSetDisplayConfig(0, 0LL, 0x98Fu, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
        v14 = v46;
        if ( v46 < 0 )
        {
          WdLogSingleEntry1(3LL, v46);
          WdLogGlobalForLineNumber = 18169;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a1, v45);
        WdLogGlobalForLineNumber = 18150;
      }
      return v14;
    }
    return 3221225485LL;
  }
  if ( a1[1] != 24 )
    return 3221225485LL;
  WdLogSingleEntry5(4LL, 5LL, a1[3], *v9, *v8, a1[5] & 1);
  WdLogGlobalForLineNumber = 18029;
  v49 = DxDdGetDxgkWin32kInterface(v48, v47);
  v50 = (*(__int64 (**)(void))(v49 + 272))();
  v53 = a1[5];
  v14 = v50;
  if ( v50 < 0 )
  {
    WdLogSingleEntry5(2LL, v50, a1[3], *v9, *v8, v53 & 1);
    WdLogGlobalForLineNumber = 18039;
    return v14;
  }
  v70 = 0LL;
  v54 = 0LL;
  if ( (v53 & 1) == 0 )
  {
LABEL_93:
    v58 = DxDdGetDxgkWin32kInterface(v52, v51);
    v59 = (a1[5] & 1) == 0;
    LODWORD(v59) = v59 | 0x80000000;
    v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v58 + 224))(*(_QWORD *)v9, *v8, v59, 0LL);
    v14 = v60;
    if ( v60 >= 0 )
    {
      if ( v54 )
      {
        v63 = DxDdGetDxgkWin32kInterface(v62, v61);
        v64 = (*(__int64 (__fastcall **)(__int64, PVOID))(v63 + 176))(0x40000000LL, v54);
        if ( v64 < 0 )
        {
          WdLogSingleEntry5(2LL, v64, a1[3], *v9, *v8, a1[5] & 1);
          WdLogGlobalForLineNumber = 18112;
        }
      }
    }
    else
    {
      WdLogSingleEntry5(2LL, v60, a1[3], *v9, *v8, a1[5] & 1);
      WdLogGlobalForLineNumber = 18093;
    }
    v65 = DxDdGetDxgkWin32kInterface(v62, v61);
    if ( (*(int (**)(void))(v65 + 280))() < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 18118;
    }
    FreePathsModality(v54, v66);
    return v14;
  }
  PathsModality = GetPathsModality(v52, &v70, 0x40u, 0);
  v56 = PathsModality;
  if ( PathsModality >= 0
    || (WdLogSingleEntry5(2LL, PathsModality, a1[3], *v9, *v8, a1[5] & 1),
        WdLogGlobalForLineNumber = 18057,
        v56 != -1073741801) )
  {
    v54 = v70;
    goto LABEL_93;
  }
  v57 = DxDdGetDxgkWin32kInterface(v52, v51);
  if ( (*(int (**)(void))(v57 + 280))() < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 18062;
  }
  return 3221225495LL;
}
