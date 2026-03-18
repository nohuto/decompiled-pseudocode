/*
 * XREFs of xxxVideoPortCalloutThread @ 0x1401AA0D4
 * Callers:
 *     xxxCreateSystemThreads @ 0x1401C2200 (xxxCreateSystemThreads.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1400293F0 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x14008055C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400EA060 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x14012B4B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     DCompositionForceRender @ 0x140135368 (DCompositionForceRender.c)
 *     SafeEnableMDEV @ 0x14013AF00 (SafeEnableMDEV.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvProcessDxgkDisplayCallout @ 0x14013D67C (DrvProcessDxgkDisplayCallout.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x14013DABC (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     zzzUpdateCursorImage @ 0x140167748 (zzzUpdateCursorImage.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x14016923C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x14016B1F4 (IsxxxUserResetDisplayDeviceSupported.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     SetPointer @ 0x1401853CC (SetPointer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1401891CC (IsxxxSetCsrssThreadDesktopSupported.c)
 *     IsSetPointerSupported @ 0x14018D104 (IsSetPointerSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x14018DC48 (xxxSetCsrssThreadDesktop.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14018DF0C (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x140191BB8 (IsxxxDwmStopRedirectionSupported.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x140196570 (UpdateExternalMonitorConnectedStatus.c)
 *     SafeDisableMDEV @ 0x14019B620 (SafeDisableMDEV.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x14019CA14 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14019D9D8 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IszzzUpdateCursorImageSupported @ 0x1401A3D7C (IszzzUpdateCursorImageSupported.c)
 *     InitSystemThread @ 0x1401B5410 (InitSystemThread.c)
 *     xxxUserResetDisplayDevice @ 0x1401C4F6C (xxxUserResetDisplayDevice.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x1401D6094 (Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401D60EC (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 *     xxxDwmControl @ 0x1401FBEF0 (xxxDwmControl.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140228790 (DCompositionEnableHwProtectionTeardown.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall xxxVideoPortCalloutThread(PRKEVENT *a1)
{
  unsigned int *v1; // rdi
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int inited; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // rsi
  _QWORD *UserSessionState; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  int v27; // ecx
  int v28; // ebx
  int CurrentProcessSessionId; // eax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // edx
  int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rcx
  int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int (*v53)(void); // rax
  __int64 v54; // rcx
  void (*v55)(void); // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v61; // rbx
  DirectComposition::CConnection *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // [rsp+20h] [rbp-50h]
  int v65; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v66[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v67[3]; // [rsp+58h] [rbp-18h] BYREF
  char v68; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int8 v69; // [rsp+B8h] [rbp+48h] BYREF
  bool v70; // [rsp+C0h] [rbp+50h] BYREF
  bool v71; // [rsp+C8h] [rbp+58h] BYREF

  v1 = (unsigned int *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  v7 = *v1;
  v1[6] = inited;
  v68 = Microsoft_Windows_Win32kEnableBits & 8;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(v64) = inited;
    LOBYTE(v5) = Microsoft_Windows_Win32kEnableBits & 8;
    McTemplateK0dq_EtwWriteTransfer(v5, &StartVideoPortCalloutThread, v6, v7, v64);
  }
  CDisplayScenarioContextScope::CDisplayScenarioContextScope(
    (CDisplayScenarioContextScope *)v67,
    (struct CDisplayScenarioContextCarrier *)&Blink->Blink);
  v11 = v67[1];
  if ( (v1[6] & 0x80000000) == 0 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v9, v8, v10);
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v13;
    if ( v13 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v13) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v14, v16);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
    if ( *v1 == 7 )
      *(_BYTE *)(W32GetUserGdiSessionState(v15) + 20) = 1;
    v17 = *v1;
    if ( *v1 == 8 || v17 == 10 || (LOBYTE(v15) = 0, v17 == 7) )
      LOBYTE(v15) = 1;
    LOBYTE(v14) = *v1 == 7;
    xxxWaitForVideoPortCalloutReady(v15, v14, v11);
    if ( (unsigned int)IsRemoteConnection(v18) )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm(v20, v19, v21, v22) )
      {
        v26 = *v1;
        if ( *v1 != 7 && v26 != 10 && v26 != 15 )
          goto LABEL_18;
      }
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v20) + 36) )
    {
      v28 = *(unsigned __int16 *)(W32GetUserSessionState(v27, v23, v24) + 68744);
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107LL, *v1, CurrentProcessSessionId, v28);
    }
    v20 = *v1;
    if ( (int)v20 > 12 )
    {
      v56 = (unsigned int)(v20 - 13);
      if ( !(_DWORD)v56 )
      {
        if ( (int)IsSetPointerSupported(v56) >= 0 && (int)IszzzUpdateCursorImageSupported(v20) >= 0 )
        {
          SetPointer(1LL);
          zzzUpdateCursorImage(v63);
        }
        goto LABEL_88;
      }
      v57 = (unsigned int)(v56 - 1);
      if ( (_DWORD)v57 )
      {
        v58 = (unsigned int)(v57 - 1);
        if ( (_DWORD)v58 )
        {
          v20 = (unsigned int)(v58 - 1);
          if ( (_DWORD)v20 )
          {
            if ( (_DWORD)v20 != 1 )
              goto LABEL_18;
            Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline();
            DCompositionForceRender(v59);
          }
          else
          {
            xxxDisplayDiagBlackScreenDetected(8u, 0LL);
          }
LABEL_88:
          v1[6] = 0;
          goto LABEL_89;
        }
        DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v58);
        v61 = DefaultConnection;
        if ( !DefaultConnection )
          goto LABEL_89;
        DirectComposition::CConnection::ReevaluateDDA(DefaultConnection);
      }
      else
      {
        v62 = DirectComposition::CConnection::GetDefaultConnection(v57);
        v61 = v62;
        if ( !v62 )
          goto LABEL_89;
        DirectComposition::CConnection::ReevaluateMPOCapabilities(v62);
      }
      DirectComposition::CConnection::Release(v61);
      goto LABEL_89;
    }
    if ( (_DWORD)v20 == 12 )
    {
      if ( (int)IsxxxUserResetDisplayDeviceSupported(v20) >= 0 )
        xxxUserResetDisplayDevice();
      goto LABEL_88;
    }
    v23 = (unsigned int)(v20 - 4);
    if ( (_DWORD)v20 != 4 )
    {
      if ( (_DWORD)v20 == 7 )
      {
        v1[6] = Win32kPnpNotify((struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)v1, v11);
        goto LABEL_89;
      }
      if ( (_DWORD)v20 == 8 )
      {
        v66[1] = 0LL;
        v66[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported(v20) < 0
          || (v30 = *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40), PsGetCurrentProcess(v31) != v30)
          || *(_QWORD *)(W32GetUserSessionState(v20, v23, v24) + 19176)
          && (v32 = W32GetUserSessionState(v20, v23, v24),
              (int)xxxSetCsrssThreadDesktop(*(_QWORD *)(v32 + 19176), (__int64)v66) >= 0) )
        {
          v68 = 1;
          do
          {
            v69 = 0;
            v70 = 0;
            v71 = 0;
            v33 = W32GetUserSessionState(v20, v23, v24);
            if ( (int)DrvProcessDxgkDisplayCallout(*(struct tagDESKTOP **)(v33 + 19176), &v69, &v70, &v71, &v68) < 0 )
            {
              v68 = 0;
            }
            else
            {
              if ( v69 )
              {
                LOBYTE(v20) = 1;
                GreIncrementDisplaySettingsUniqueness(v20);
                v65 = 0;
                v37 = W32GetUserSessionState(v35, v34, v36);
                xxxResetDisplayDevice(*(_QWORD *)(v37 + 19176), &v65, 0LL);
              }
              else if ( v70 )
              {
                v38 = W32GetUserSessionState(v20, v23, v24);
                CInputConfig::zzzOnDisplayStateChange(*(CInputConfig **)(v38 + 18680), v39, v40);
              }
              if ( v71 )
                PostWinlogonMessage(1027LL, 0LL);
            }
          }
          while ( !v68 );
          v1[6] = 0;
          if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
            && (unsigned int)UserIsWddmConnectedSession(v42, v41, v43, v44) )
          {
            UpdateExternalMonitorConnectedStatus(0);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v42) >= 0 )
          {
            v45 = *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40);
            if ( PsGetCurrentProcess(v46) == v45 )
              xxxRestoreCsrssThreadDesktop((__int64)v66);
          }
        }
        goto LABEL_89;
      }
      v23 = (unsigned int)(v20 - 10);
      if ( (_DWORD)v20 != 10 )
      {
        if ( (_DWORD)v20 == 11 )
        {
          DCompositionEnableHwProtectionTeardown(v1[4]);
          goto LABEL_89;
        }
LABEL_18:
        v1[6] = -1073741823;
LABEL_89:
        if ( *v1 == 7 )
          *(_BYTE *)(W32GetUserGdiSessionState(v20) + 20) = 0;
        UserSessionSwitchLeaveCritWithNonPaged(v20, v23, v24, v25);
        goto LABEL_92;
      }
    }
    if ( (_DWORD)v20 != 10 )
    {
      if ( *((_QWORD *)v1 + 2) )
      {
LABEL_53:
        if ( *v1 == 10 || *((_QWORD *)v1 + 2) )
        {
          if ( (unsigned int)UserIsWddmConnectedSession(v20, v23, v24, v25) )
            SafeEnableMDEV(1u, v47, v49);
          if ( (int)IsxxxDwmStopRedirectionSupported(v48) >= 0 )
          {
            v51 = 1038LL;
            if ( *v1 != 10 )
              v51 = 1035LL;
            xxxDwmControl(v51, 0LL);
          }
          if ( (int)IsxxxUserResetDisplayDeviceSupported(v50) >= 0 )
            xxxUserResetDisplayDevice();
          v53 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v52) + 48) + 2160LL);
          if ( v53 )
          {
            if ( v53() >= 0 )
            {
              v55 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v54) + 48) + 2168LL);
              if ( v55 )
                v55();
            }
          }
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
        }
        goto LABEL_88;
      }
      if ( (int)IsxxxDwmStopRedirectionSupported(v20) >= 0 )
        xxxDwmControl(1034LL, 0LL);
    }
    if ( (unsigned int)UserIsWddmConnectedSession(v20, v23, v24, v25) )
      SafeDisableMDEV(1u, v23, v24);
    goto LABEL_53;
  }
LABEL_92:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(v64) = v1[6];
    McTemplateK0dq_EtwWriteTransfer((unsigned int)v64, &StopVideoPortCalloutThread, v10, *v1, v64);
  }
  KeSetEvent(a1[1], 1, 0);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v67);
}
