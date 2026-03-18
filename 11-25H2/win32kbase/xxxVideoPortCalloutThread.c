/*
 * XREFs of xxxVideoPortCalloutThread @ 0x1401B2AE8
 * Callers:
 *     xxxCreateSystemThreads @ 0x140081E00 (xxxCreateSystemThreads.c)
 * Callees:
 *     UpdateExternalMonitorConnectedStatus @ 0x14002AAE4 (UpdateExternalMonitorConnectedStatus.c)
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14006BED0 (UserRemoteConnectedSessionUsingWddm.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     SafeDisableMDEV @ 0x140075040 (SafeDisableMDEV.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140082510 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1400AF0B0 (IsxxxDwmStopRedirectionSupported.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0DF0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1400E82F8 (DCompositionForceRender.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1400F76B4 (DrvProcessDxgkDisplayCallout.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400F7E48 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     zzzUpdateCursorImage @ 0x14012D0F4 (zzzUpdateCursorImage.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x14012EEE0 (IsxxxUserResetDisplayDeviceSupported.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x14013489C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     SetPointer @ 0x14014A2C0 (SetPointer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x14014C220 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     SafeEnableMDEV @ 0x14014C4A0 (SafeEnableMDEV.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14014F4F0 (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     IsSetPointerSupported @ 0x14014FCB8 (IsSetPointerSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x140155544 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x14015C5D0 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14015CF3C (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IszzzUpdateCursorImageSupported @ 0x14015FA5C (IszzzUpdateCursorImageSupported.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     xxxDwmControl @ 0x14017E230 (xxxDwmControl.c)
 *     xxxUserResetDisplayDevice @ 0x1401A13BC (xxxUserResetDisplayDevice.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     InitSystemThread @ 0x1401AA850 (InitSystemThread.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401AED90 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x1401B0D50 (Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DF8 (Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F8B7C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140226544 (DCompositionEnableHwProtectionTeardown.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxVideoPortCalloutThread(PRKEVENT *a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rdi
  struct _LIST_ENTRY *Blink; // rbx
  LONG inited; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  int CalloutType; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r14
  _QWORD *UserSessionState; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  int CurrentProcessSessionId; // eax
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  int (*v51)(void); // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  void (*v54)(void); // rax
  __int64 v55; // rcx
  int v56; // ecx
  int v57; // ecx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v59; // rbx
  unsigned int v60; // edx
  DirectComposition::CConnection *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // [rsp+20h] [rbp-58h]
  int v65; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v66[2]; // [rsp+48h] [rbp-30h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v67[4]; // [rsp+58h] [rbp-20h] BYREF
  char v68; // [rsp+C0h] [rbp+48h] BYREF
  unsigned __int8 v69; // [rsp+C8h] [rbp+50h] BYREF
  bool v70; // [rsp+D0h] [rbp+58h] BYREF
  bool v71; // [rsp+D8h] [rbp+60h] BYREF

  v1 = (struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  CalloutType = v1->CalloutType;
  v1->Status = inited;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(v64) = inited;
    McTemplateK0dq_EtwWriteTransfer(v5, &StartVideoPortCalloutThread, v6, CalloutType, v64);
  }
  CDisplayScenarioContextScope::CDisplayScenarioContextScope(
    (CDisplayScenarioContextScope *)v67,
    (const struct _GUID **)&Blink->Blink);
  v11 = v67[1];
  if ( v1->Status >= 0 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v9, v8);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
    v14 = v13;
    UserSessionState[3] = v13;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v14 )
        goto LABEL_13;
    }
    else
    {
      if ( !v14 )
        goto LABEL_13;
      *(_BYTE *)(v14 + 1708) = 1;
    }
    if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v14) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v15);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
LABEL_13:
    if ( v1->CalloutType == VideoPnpNotifyCallout )
      *(_BYTE *)(W32GetUserGdiSessionState(v16) + 20) = 1;
    v17 = (unsigned int)v1->CalloutType;
    LOBYTE(v15) = (_DWORD)v17 == 7;
    if ( (((_DWORD)v17 - 7) & 0xFFFFFFFC) != 0 || (v18 = (_DWORD)v17 == 9, LOBYTE(v17) = 1, v18) )
      LOBYTE(v17) = 0;
    xxxWaitForVideoPortCalloutReady(v17, v15, v11);
    if ( (unsigned int)IsRemoteConnection() )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm(v20, v19) )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_22;
        v20 = 33920LL;
        if ( !_bittest((const int *)&v20, v1->CalloutType) )
          goto LABEL_22;
      }
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v20) + 36) )
    {
      v23 = *(unsigned __int16 *)(W32GetUserSessionState(v22, v21) + 68752);
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107LL, v1->CalloutType, CurrentProcessSessionId, v23);
    }
    v25 = (unsigned int)v1->CalloutType;
    if ( (int)v25 > 12 )
    {
      v55 = (unsigned int)(v25 - 13);
      if ( !(_DWORD)v55 )
      {
        if ( (int)IsSetPointerSupported(v55, v21) >= 0 && (int)IszzzUpdateCursorImageSupported(v20, v21) >= 0 )
        {
          SetPointer(1LL, v21);
          zzzUpdateCursorImage(v63, v62);
        }
        goto LABEL_97;
      }
      v56 = v55 - 1;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( v57 )
        {
          v20 = (unsigned int)(v57 - 1);
          if ( (_DWORD)v20 )
          {
            if ( (_DWORD)v20 != 1 )
              goto LABEL_22;
            Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline();
            DCompositionForceRender();
          }
          else
          {
            xxxDisplayDiagBlackScreenDetected(8u, v1->Param & 1, (v1->Param & 2) != 0, 0LL, 0LL);
          }
          goto LABEL_97;
        }
        DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
        v59 = DefaultConnection;
        if ( !DefaultConnection )
          goto LABEL_98;
        DirectComposition::CConnection::ReevaluateDDA(DefaultConnection);
      }
      else
      {
        v61 = DirectComposition::CConnection::GetDefaultConnection();
        v59 = v61;
        if ( !v61 )
          goto LABEL_98;
        DirectComposition::CConnection::ReevaluateMPOCapabilities(v61);
      }
      DirectComposition::CConnection::Release(v59, v60);
      goto LABEL_98;
    }
    if ( (_DWORD)v25 == 12 )
    {
      if ( (int)IsxxxUserResetDisplayDeviceSupported(v25, v21) >= 0 )
        xxxUserResetDisplayDevice(v20, v21);
      goto LABEL_97;
    }
    v26 = v25 - 4;
    if ( v26 )
    {
      v27 = v26 - 3;
      if ( !v27 )
      {
        v1->Status = Win32kPnpNotify(v1, (struct _GUID *)v11);
        goto LABEL_98;
      }
      v28 = (unsigned int)(v27 - 1);
      if ( !(_DWORD)v28 )
      {
        v66[1] = 0LL;
        v66[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported(v28, v21) < 0
          || (v29 = *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40), PsGetCurrentProcess(v31, v30) != v29)
          || *(_QWORD *)(W32GetUserSessionState(v20, v21) + 19144)
          && (v32 = W32GetUserSessionState(v20, v21),
              (int)xxxSetCsrssThreadDesktop(*(_QWORD *)(v32 + 19144), (__int64)v66) >= 0) )
        {
          v68 = 1;
          do
          {
            v69 = 0;
            v70 = 0;
            v71 = 0;
            v33 = W32GetUserSessionState(v20, v21);
            if ( (int)DrvProcessDxgkDisplayCallout(*(struct tagDESKTOP **)(v33 + 19144), &v69, &v70, &v71, &v68) < 0 )
            {
              v68 = 0;
            }
            else
            {
              if ( v69 )
              {
                GreIncrementDisplaySettingsUniqueness(v20);
                v65 = 0;
                v36 = W32GetUserSessionState(v35, v34);
                xxxResetDisplayDevice(*(_QWORD *)(v36 + 19144), &v65, 0LL);
              }
              else if ( v70 )
              {
                v37 = W32GetUserSessionState(v20, v21);
                CInputConfig::zzzOnDisplayStateChange(*(CInputConfig **)(v37 + 18632));
              }
              if ( v71 )
                PostWinlogonMessage(1027LL, 0LL);
            }
          }
          while ( !v68 );
          v1->Status = 0;
          if ( (unsigned int)UserIsWddmConnectedSession(v20, v21) )
            UpdateExternalMonitorConnectedStatus(0);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v39, v38) >= 0 )
          {
            v40 = *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40);
            if ( PsGetCurrentProcess(v42, v41) == v40 )
              xxxRestoreCsrssThreadDesktop((__int64)v66, v21);
          }
        }
        goto LABEL_98;
      }
      v20 = (unsigned int)(v28 - 2);
      if ( (_DWORD)v20 )
      {
        if ( (_DWORD)v20 == 1 )
        {
          DCompositionEnableHwProtectionTeardown(LODWORD(v1->Param));
          goto LABEL_98;
        }
LABEL_22:
        v1->Status = -1073741823;
LABEL_98:
        if ( v1->CalloutType == VideoPnpNotifyCallout )
          *(_BYTE *)(W32GetUserGdiSessionState(v20) + 20) = 0;
        UserSessionSwitchLeaveCritWithNonPaged(0LL, v21);
        goto LABEL_101;
      }
    }
    if ( (unsigned int)Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v1->CalloutType == VideoDxgkFindAdapterTdrCallout )
      {
LABEL_60:
        if ( (unsigned int)UserIsWddmConnectedSession(v20, v21) )
          SafeDisableMDEV(1LL, v21);
LABEL_62:
        if ( v1->CalloutType == VideoDxgkFindAdapterTdrCallout || v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession(v20, v21) )
            SafeEnableMDEV(1LL, v43);
          if ( (unsigned int)Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (int)IsxxxDwmStopRedirectionSupported(v45, v44) >= 0 )
            {
              v48 = 1038LL;
              if ( v1->CalloutType == VideoDxgkFindAdapterTdrCallout )
              {
LABEL_72:
                xxxDwmControl(v48, 0LL);
                goto LABEL_73;
              }
LABEL_71:
              v48 = 1035LL;
              goto LABEL_72;
            }
          }
          else if ( (int)IsxxxDwmStopRedirectionSupported(v45, v44) >= 0 )
          {
            goto LABEL_71;
          }
LABEL_73:
          if ( (int)IsxxxUserResetDisplayDeviceSupported(v47, v46) >= 0 )
            xxxUserResetDisplayDevice(v50, v49);
          v51 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v50, v49) + 48) + 2504LL);
          if ( v51 )
          {
            if ( v51() >= 0 )
            {
              v54 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v53, v52) + 48) + 2512LL);
              if ( v54 )
                v54();
            }
          }
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL);
        }
LABEL_97:
        v1->Status = 0;
        goto LABEL_98;
      }
    }
    else if ( v1->CalloutType == VideoDxgkFindAdapterTdrCallout )
    {
LABEL_58:
      if ( (int)IsxxxDwmStopRedirectionSupported(v20, v21) >= 0 )
        xxxDwmControl(1034LL, 0LL);
      goto LABEL_60;
    }
    if ( v1->Param )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_101:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(v64) = v1->Status;
    McTemplateK0dq_EtwWriteTransfer((unsigned int)v64, &StopVideoPortCalloutThread, v10, v1->CalloutType, v64);
  }
  KeSetEvent(a1[1], 1, 0);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v67);
}
