/*
 * XREFs of ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FF790
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800585E4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180059D50 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AC00 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AE68 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AF04 (-IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     WPP_SF_Sdq @ 0x18005C5EC (WPP_SF_Sdq.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CD2C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800AE7DC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801A6AA0 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     WPP_SF_Sd @ 0x1802090C8 (WPP_SF_Sd.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1802FC2AC (--1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FFF3C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1803003A4 (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180300CB4 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180300F30 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::SetApplicationWindow(__int64 a1, HWND a2, int a3, unsigned int a4)
{
  __int64 v7; // r8
  int v8; // edi
  HWND ApplicationWindow; // r12
  char v10; // bp
  __int64 v11; // r8
  const struct APPLICATION_VIEW_DATA *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-1B8h]
  volatile signed __int32 *v18[42]; // [rsp+40h] [rbp-198h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v18,
    (__int64)"SetApplicationWindow");
  v18[0] = (volatile signed __int32 *)&CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetApplicationWindow *)v18,
    *(const unsigned __int16 **)(a1 + 464));
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Sdq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xAu,
      v7,
      *(const wchar_t **)(a1 + 464),
      *(_DWORD *)(a1 + 472),
      a2);
  }
  if ( *(_BYTE *)(a1 - 112 + 720) )
  {
    v8 = -2147019873;
    goto LABEL_33;
  }
  v8 = 0;
  ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
  if ( a2 != ApplicationWindow
    || CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      LODWORD(v16) = *(_DWORD *)(a1 + 472);
      WPP_SF_Sd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xBu,
        &WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
        *(const wchar_t **)(a1 + 464),
        v16);
    }
    v10 = 1;
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
    {
      if ( a2 == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
        || (CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((RECT *)(a1 + 176))
         || !ImmersiveApplicationLayout::AreAppViewDataEqual(
               (ImmersiveApplicationLayout *)(a1 + 208),
               (const struct APPLICATION_VIEW_DATA *)(a1 + 248),
               v12))
        && CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)(a1 + 176))
        && (*(_BYTE *)(a1 + 380) & 2) != 0 )
      {
        v10 = 0;
      }
      else if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
      {
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v13);
      }
    }
    if ( !a3 && a2 == ApplicationWindow && (*(_BYTE *)(a1 + 380) & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        v14 = *(_QWORD *)(a1 + 328);
        LODWORD(v16) = *(_DWORD *)(v14 + 584);
        WPP_SF_Sd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x1Bu,
          &WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
          *(const wchar_t **)(v14 + 576),
          v16);
      }
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(a1 + 176, 32);
      goto LABEL_30;
    }
    if ( !v10 )
      goto LABEL_33;
    if ( a3 == 2 )
    {
      v8 = CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(a1 + 176, a2, a4);
      if ( v8 < 0 )
        goto LABEL_33;
LABEL_30:
      CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 112));
      goto LABEL_33;
    }
    v8 = CImmersiveApp::_SetApplicationWindowSynch(a1 - 112, a2, v11, 0LL);
    if ( v8 >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
  }
LABEL_33:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, v8);
  CImmersiveAppTelemetry::SetApplicationWindow::~SetApplicationWindow(v18);
  return (unsigned int)v8;
}
