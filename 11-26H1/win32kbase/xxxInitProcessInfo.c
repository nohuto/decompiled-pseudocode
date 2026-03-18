/*
 * XREFs of xxxInitProcessInfo @ 0x1401CB0D4
 * Callers:
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401D885C (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 *     GetProcessLuid @ 0x1400E2240 (GetProcessLuid.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400F8224 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ @ 0x14012D450 (-GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140132544 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     zzzCalcStartCursorHide @ 0x14015746C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x14015CCE4 (IszzzCalcStartCursorHideSupported.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x140164A9C (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140179FF8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14019B32C (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1401A6560 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x1401C4B80 (--1CWinEventNoopDeferral@@QEAA@XZ.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401C56C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401C9F34 (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z @ 0x1401CA0C8 (-SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z.c)
 *     Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401CAB94 (Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDDD @ 0x1401CAFA0 (WPP_RECORDER_AND_TRACE_SF_DDDDD.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, _DWORD *a5)
{
  char v5; // r15
  PACCESS_TOKEN v7; // rsi
  char v8; // al
  char v9; // r13
  __int64 result; // rax
  int v12; // edx
  int v13; // r8d
  NTSTATUS v14; // r14d
  int v15; // edx
  int v16; // r8d
  char v17; // di
  __int64 v18; // r9
  int v19; // ecx
  bool v20; // di
  int v21; // ebx
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  unsigned __int8 ProcessProtection; // al
  int v26; // edx
  int v27; // r8d
  int v28; // ecx
  char v29; // al
  __int64 v30; // rax
  int v31; // ecx
  unsigned __int8 v32; // al
  int v33; // ebx
  int v34; // edi
  __int64 v35; // rsi
  __int64 v36; // rax
  char v37; // si
  char v38; // r15
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // r8d
  int SpriteFillColorOverrideForCurrentProcess; // eax
  __int64 v44; // rcx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // edx
  int v52; // r8d
  __int64 v53; // rcx
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rcx
  void (__fastcall *v57)(struct _W32PROCESS *); // rax
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 v61; // rax
  int v62; // edx
  int v63; // r8d
  unsigned __int64 v64; // rcx
  int Win32KFilterSet; // eax
  int v66; // r8d
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  int v69; // edx
  __int64 v70; // rcx
  int v71; // r8d
  int v72; // edx
  __int64 v73; // rcx
  int v74; // r8d
  int (*v75)(void); // rax
  void (__fastcall *v76)(struct _W32PROCESS *); // rax
  int v77; // edx
  int v78; // r8d
  char v79; // di
  __int64 v80; // r9
  int v81; // ecx
  int v82; // ebx
  __int64 v83; // [rsp+20h] [rbp-91h]
  int v84; // [rsp+28h] [rbp-89h]
  int v85; // [rsp+30h] [rbp-81h]
  int v86; // [rsp+38h] [rbp-79h]
  __int64 v87; // [rsp+40h] [rbp-71h]
  __int64 v88; // [rsp+48h] [rbp-69h]
  int v89; // [rsp+48h] [rbp-69h]
  char v90; // [rsp+70h] [rbp-41h] BYREF
  char v91; // [rsp+71h] [rbp-40h]
  PVOID v92; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int64 v93; // [rsp+80h] [rbp-31h]
  PVOID v94; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v95[8]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v96; // [rsp+98h] [rbp-19h]
  PVOID P; // [rsp+A0h] [rbp-11h] BYREF
  int v98; // [rsp+A8h] [rbp-9h]
  PVOID TokenInformation; // [rsp+B0h] [rbp-1h] BYREF
  int v100; // [rsp+B8h] [rbp+7h]

  v5 = 0;
  v98 = a3;
  v93 = (unsigned __int64)Token;
  TokenInformation = 0LL;
  v100 = 0;
  v7 = Token;
  v8 = *((_BYTE *)a1 + 1200);
  v9 = 1;
  v94 = 0LL;
  P = 0LL;
  if ( v8 == 1 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = xxxCheckProcessAndSessionState((PEPROCESS *)a1);
  if ( (int)result >= 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v95, v12, v13);
    *((_BYTE *)a1 + 1200) = 1;
    *((_QWORD *)a1 + 38) = 0LL;
    *((_QWORD *)a1 + 39) = 0LL;
    *((_DWORD *)a1 + 80) = 0;
    HIDWORD(TokenInformation) = a4;
    v14 = SeQueryInformationToken(v7, TokenIntegrityLevel, &TokenInformation);
    if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v14 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v9 = 0;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v89 = *((_DWORD *)a1 + 14);
          v18 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16) + 69136);
          WPP_RECORDER_AND_TRACE_SF_dD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v9,
            v17,
            v18,
            3u,
            8u,
            0x18u,
            (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
            v14,
            v89);
        }
        goto LABEL_110;
      }
      v19 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) && (_DWORD)TokenInformation != 4096 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v9 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = *((_DWORD *)a1 + 14);
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
          LOBYTE(v23) = v20;
          LOBYTE(v24) = v9;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(UserSessionState + 69136),
            3,
            8,
            25,
            (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
            v21);
        }
        goto LABEL_25;
      }
      *((_DWORD *)a1 + 216) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 217) = v19;
      v92 = (PVOID)(unsigned int)Feature_ID51538523__private_featureState;
      if ( (Feature_ID51538523__private_featureState & 0x10) == 0 )
      {
        LODWORD(v92) = Feature_ID51538523__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_ID51538523__private_descriptor,
          Feature_ID51538523__private_featureState | 1,
          3u,
          1LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          (unsigned __int8)v92,
          3,
          (__int64)&Feature_ID51538523__private_descriptor);
      }
      if ( (unsigned int)PsIsProtectedProcess(*(_QWORD *)a1) )
      {
        ProcessProtection = PsGetProcessProtection(*(_QWORD *)a1);
        *((_DWORD *)a1 + 218) = ((ProcessProtection >> 4) | ((((ProcessProtection & 7) << 8) | (ProcessProtection >> 3) & 1) << 8)) << 8;
      }
      if ( (unsigned int)Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline() )
      {
        LODWORD(v92) = 0;
        if ( SeQueryInformationToken(v7, TokenDeviceClaimAttributes|TokenAuditPolicy, &v92) >= 0 )
        {
          if ( (_DWORD)v92 )
            *((_QWORD *)a1 + 101) |= 0x4000000000uLL;
        }
      }
      v28 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v91 = v29;
      v90 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v30 = W32GetUserSessionState(v28, v26, v27);
        WPP_RECORDER_AND_TRACE_SF_DDDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v91,
          v90,
          *(_QWORD *)(v30 + 69136),
          v83,
          v84,
          v85,
          v86);
        v7 = (PACCESS_TOKEN)v93;
      }
    }
    else
    {
      if ( UIPrivilegeIsolation::fEnforceUIPI )
      {
        if ( v14 < 0 || (v31 = HIDWORD(TokenInformation)) != 0 && (_DWORD)TokenInformation != 4096 )
        {
LABEL_25:
          if ( v95[0] )
            --*(_DWORD *)(v96 + 28);
          return 3221225473LL;
        }
        *((_DWORD *)a1 + 216) = (_DWORD)TokenInformation;
        *((_DWORD *)a1 + 217) = v31;
        v92 = (PVOID)(unsigned int)Feature_ID51538523__private_featureState;
        if ( (Feature_ID51538523__private_featureState & 0x10) == 0 )
        {
          LODWORD(v92) = Feature_ID51538523__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_ID51538523__private_descriptor,
            Feature_ID51538523__private_featureState | 1,
            3u,
            1LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            (unsigned __int8)v92,
            3,
            (__int64)&Feature_ID51538523__private_descriptor);
        }
        if ( (unsigned int)PsIsProtectedProcess(*(_QWORD *)a1) )
        {
          v32 = PsGetProcessProtection(*(_QWORD *)a1);
          v15 = ((v32 >> 4) | ((((v32 & 7) << 8) | (v32 >> 3) & 1) << 8)) << 8;
          *((_DWORD *)a1 + 218) = v15;
        }
      }
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      {
        v5 = 1;
      }
      v90 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = *((_DWORD *)a1 + 217);
        v34 = *((_DWORD *)a1 + 216);
        v35 = *(_QWORD *)a1;
        v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v5,
          v90,
          *(_QWORD *)(v36 + 69136),
          4u,
          0xEu,
          0x1Bu,
          (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
          v35,
          v34,
          v33);
        v7 = (PACCESS_TOKEN)v93;
      }
      if ( v14 < 0 )
      {
LABEL_60:
        if ( (_DWORD)v94 )
        {
          *((_DWORD *)a1 + 3) |= 0x80080000;
          *((_QWORD *)a1 + 101) |= 2uLL;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
            || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v37 = 0;
          }
          v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v39 = *(_QWORD *)a1;
            v40 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
            HIDWORD(v87) = HIDWORD(v39);
            WPP_RECORDER_AND_TRACE_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v37,
              v38,
              *(_QWORD *)(v40 + 69136),
              v83,
              8u,
              0x1Cu,
              (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids);
          }
          v7 = (PACCESS_TOKEN)v93;
        }
        SetProcessType((__int64)a1, (__int64)v7, v98, a5);
        if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
          SetProcessInitialCapabilities(a1, v41, v42);
        if ( v14 < 0 || (v14 = SeQueryInformationToken(v7, TokenAppContainerSid, &P), v14 < 0) )
        {
          if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
            {
              v9 = 0;
            }
            v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v88) = *((_DWORD *)a1 + 14);
              LODWORD(v87) = v14;
              v80 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v77, v78) + 69136);
              WPP_RECORDER_AND_TRACE_SF_dD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v9,
                v79,
                v80,
                3u,
                8u,
                0x1Du,
                (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
                v87,
                v88);
            }
            goto LABEL_110;
          }
        }
        else
        {
          if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, (char *)&v94 + 4) >= 0 )
            *((_DWORD *)a1 + 219) = HIDWORD(v94);
          else
            *((_DWORD *)a1 + 219) = 0;
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
        SpriteFillColorOverrideForCurrentProcess = GetSpriteFillColorOverrideForCurrentProcess();
        v44 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 269) = SpriteFillColorOverrideForCurrentProcess;
        if ( PsGetProcessWow64Process(v44) )
          *((_DWORD *)a1 + 3) |= 0x80u;
        *((_QWORD *)a1 + 111) = -1LL;
        *((_QWORD *)a1 + 112) = -1LL;
        v48 = *((_DWORD *)a1 + 3);
        if ( (v48 & 0x20) == 0 )
        {
          *((_DWORD *)a1 + 3) = v48 | 0x22;
          v49 = W32GetUserSessionState(v46, v45, v47);
          *(_DWORD *)(v49 + 66792) |= 0x8000000u;
          if ( (int)IszzzCalcStartCursorHideSupported(v50) >= 0 )
          {
            CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)&v90, v45, v47);
            zzzCalcStartCursorHide(0LL, 0);
            CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&v90, v51, v52);
          }
        }
        v53 = *(_QWORD *)(W32GetUserSessionState(v46, v45, v47) + 36400);
        *((_QWORD *)a1 + 46) = v53;
        *(_QWORD *)(W32GetUserSessionState(v53, v54, v55) + 36400) = a1;
        v57 = *(void (__fastcall **)(struct _W32PROCESS *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v56) + 48) + 4776LL);
        if ( v57 )
          v57(a1);
        GetProcessLuid(0LL, (PLUID)((char *)a1 + 764));
        v61 = W32GetUserSessionState(v59, v58, v60);
        LOBYTE(v62) = 1;
        *((_DWORD *)a1 + 98) = *(_DWORD *)(v61 + 41356);
        *((_DWORD *)a1 + 186) = 0;
        CitProcessCallout((__int64)a1, v62, v63);
        v64 = *((_QWORD *)a1 + 101) & 0xFFFFFFFFFFBE7FFFuLL;
        *((_DWORD *)a1 + 67) = 24592;
        *((_QWORD *)a1 + 101) = v64;
        *((_WORD *)a1 + 136) = 96;
        if ( (v64 & 0x30) == 0x20 )
          *((_QWORD *)a1 + 101) = v64 | 0x100000;
        Win32KFilterSet = PsGetWin32KFilterSet();
        v67 = 0LL;
        if ( Win32KFilterSet == 5 )
          v67 = 0x1000000LL;
        v68 = *((_QWORD *)a1 + 101) & 0xFFFFFFFFF6FFFFFFuLL | v67 & 0xFFFFFFFFF7FFFFFFuLL;
        *((_QWORD *)a1 + 101) = v68;
        v70 = *(_QWORD *)(W32GetUserSessionState(v68, 0x1000000, v66) + 19904);
        if ( *(_WORD *)(v70 + 6998) )
        {
          v73 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v70) + 48);
          v75 = *(int (**)(void))(v73 + 832);
          if ( v75 && v75() >= 0 )
          {
            v76 = *(void (__fastcall **)(struct _W32PROCESS *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v73) + 48)
                                                              + 840LL);
            if ( v76 )
              v76(a1);
          }
          else
          {
            *((_WORD *)a1 + 136) = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v73, v72, v74) + 19904) + 6998LL);
          }
        }
        v81 = Feature_WebThreatDefenseToggle__private_featureState;
        v93 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
        if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
        {
          LODWORD(v93) = Feature_WebThreatDefenseToggle__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_WebThreatDefenseToggle__private_descriptor,
            Feature_WebThreatDefenseToggle__private_featureState | 1,
            3u,
            1LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v93,
            3,
            (__int64)&Feature_WebThreatDefenseToggle__private_descriptor);
        }
        v82 = 0;
        if ( *(_DWORD *)(W32GetUserSessionState(v81, v69, v71) + 42600) )
        {
          if ( !W32GetInputMonitorSessionState() )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v82 = 1;
        }
        *((_DWORD *)a1 + 69) = (4 * v82) | *((_DWORD *)a1 + 69) & 0xFFFFFFFB;
        *((_QWORD *)a1 + 136) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
LABEL_110:
        if ( v95[0] )
          --*(_DWORD *)(v96 + 28);
        return (unsigned int)v14;
      }
    }
    v14 = SeQueryInformationToken(v7, TokenUIAccess, &v94);
    goto LABEL_60;
  }
  return result;
}
