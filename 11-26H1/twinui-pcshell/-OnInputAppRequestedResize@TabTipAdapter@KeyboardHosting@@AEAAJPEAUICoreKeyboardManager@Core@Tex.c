/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18047AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180014F5C (-GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@T.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180016154 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?InitializeViewInfosIfNeeded@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180027748 (-InitializeViewInfosIfNeeded@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064C74 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z @ 0x18022C668 (-InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_d01d769641b0a3ac426af1e1f82876ea_::_lambda_d01d769641b0a3ac426af1e1f82876ea_ @ 0x180411DCC (_lambda_d01d769641b0a3ac426af1e1f82876ea_--_lambda_d01d769641b0a3ac426af1e1f82876ea_.c)
 *     wil::ScopeExit__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___ @ 0x18047728C (wil--ScopeExit__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___.c)
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x180477664 (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 *     wil::details::ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___::_ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___ @ 0x180478788 (wil--details--ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___--_ScopeExitFn__lambda_2e93.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180478810 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z @ 0x180479330 (-FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z.c)
 *     ?GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z @ 0x18047A10C (-GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x18047E308 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 *v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int ViewRect; // eax
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v19; // [rsp+20h] [rbp-E0h]
  char v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v22[2]; // [rsp+42h] [rbp-BEh] BYREF
  RTL_SRWLOCK v23; // [rsp+44h] [rbp-BCh] BYREF
  struct tagRECT v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-9Ch]
  struct tagRECT v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-88h] BYREF
  int v29[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v32[42]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v20 = 0;
  v5 = lambda_d01d769641b0a3ac426af1e1f82876ea_::_lambda_d01d769641b0a3ac426af1e1f82876ea_(
         (__int64 *)&v24.left,
         (__int64 *)this + 4,
         (__int64)&v20);
  wil::ScopeExit__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___((__int64)v30, v5);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>((__int64 *)&v24.left);
  LODWORD(v23.Ptr) = 0;
  v25 = 11;
  v6 = KeyboardHosting::TabTipAdapter::InitializeViewInfosIfNeeded(this);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x656,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6,
      v19);
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, RTL_SRWLOCK *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v23);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x657,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7,
      v19);
  KeyboardHosting::TabTipAdapter::GetFirstViewTypeIfExists(
    this,
    LODWORD(v23.Ptr),
    (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)&v25);
  *(_QWORD *)v29 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v29);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v22[0] = 0;
    v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, _BYTE *))(*(_QWORD *)a3 + 64LL))(
           a3,
           v22);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1629LL;
      goto LABEL_9;
    }
    v11 = v25;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v32,
      (__int64)"OnInputAppRequestedResizeActivity");
    v32[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v32,
      (unsigned int)v23.Ptr,
      v11);
    v27 = 0LL;
    ViewRect = KeyboardHosting::TabTipAdapter::GetViewRect(this, LODWORD(v23.Ptr), &v27);
    v9 = ViewRect;
    if ( ViewRect >= 0 )
    {
      v21 = 0;
      v31 = 0LL;
      v14 = *((_QWORD *)this + 15);
      *(float *)&v24.left = (float)v27.left;
      *(float *)&v24.top = (float)v27.top;
      *(float *)&v24.right = (float)(v27.right - v27.left);
      *(float *)&v24.bottom = (float)(v27.bottom - v27.top);
      ViewRect = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct tagRECT *, _BYTE, __int128 *, char *))(*(_QWORD *)v14 + 184LL))(
                   v14,
                   LODWORD(v23.Ptr),
                   *(_QWORD *)v29,
                   &v24,
                   v22[0],
                   &v31,
                   &v21);
      v9 = ViewRect;
      if ( ViewRect >= 0 )
      {
        v27 = 0LL;
        v24.left = (int)*(float *)&v31;
        v24.top = (int)*((float *)&v31 + 1);
        v24.right = (int)(float)(*((float *)&v31 + 2) + *(float *)&v31);
        v24.bottom = (int)(float)(*((float *)&v31 + 3) + *((float *)&v31 + 1));
        ViewRect = KeyboardHosting::TabTipAdapter::FireInputPaneShowingEvent(this, LODWORD(v23.Ptr), &v24, &v27);
        v9 = ViewRect;
        if ( ViewRect >= 0 )
        {
          v16 = 0;
          v26 = 0;
          v9 = 0;
          if ( v21 )
          {
            v24.left = (int)*(float *)&v31;
            v24.top = (int)*((float *)&v31 + 1);
            v24.right = (int)(float)(*((float *)&v31 + 2) + *(float *)&v31);
            v24.bottom = (int)(float)(*((float *)&v31 + 3) + *((float *)&v31 + 1));
            v17 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedResize(this, LODWORD(v23.Ptr), &v24);
            v16 = v17;
            v26 = v17;
            if ( v17 )
            {
              v20 = 0;
              v9 = v17;
            }
            else
            {
              v20 = 1;
            }
          }
          v28 = v25;
          TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StopWithResult<unsigned int &,unsigned int,Windows::Foundation::Size &,unsigned char &,unsigned char &,long &>(
            (__int64)v32,
            v16,
            &v23,
            &v28,
            (__int64 *)v29,
            v22,
            &v21);
          if ( v9 >= 0 )
            goto LABEL_24;
          v15 = (unsigned int)v9;
          v13 = 1658LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)v15);
LABEL_24:
          TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v32);
          goto LABEL_25;
        }
        v13 = 1648LL;
      }
      else
      {
        v13 = 1644LL;
      }
    }
    else
    {
      v13 = 1634LL;
    }
    v15 = (unsigned int)ViewRect;
    goto LABEL_23;
  }
  v10 = 1627LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
LABEL_25:
  wil::details::ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___::_ScopeExitFn__lambda_2e938e3d03ec1969b2a79e00ef44dc7a___(v30);
  return (unsigned int)v9;
}
