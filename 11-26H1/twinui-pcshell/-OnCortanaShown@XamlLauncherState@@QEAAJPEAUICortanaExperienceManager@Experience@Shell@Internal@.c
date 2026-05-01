/*
 * XREFs of ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1804621F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x1800518C0 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180076A7C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180076FE0 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180077628 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801E273C (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801F0A54 (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 *     ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x180210C48 (-PostTaskbarMessage@@YAXI_K_J@Z.c)
 *     ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180249038 (-ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shel.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180249378 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1802A2424 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x1802A8A30 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x1802B89B8 (-watch_errors@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowTelemetry@@J@Z @ 0x1802BBBB8 (-CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowT.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802BD360 (--1-$test_watcher@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncherState::OnCortanaShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a3)
{
  int *v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  int v14; // esi
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // r14d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+20h] [rbp-E0h] BYREF
  int v29; // [rsp+28h] [rbp-D8h] BYREF
  XamlLauncherState *v30; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+38h] [rbp-C8h]
  _BYTE v32[56]; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-88h] BYREF
  HSTRING v34; // [rsp+90h] [rbp-70h]
  volatile signed __int32 *v35[42]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v5 = (int *)((char *)this + 64);
  v29 = *((_DWORD *)this + 16);
  v30 = this;
  v31 = 1;
  XamlLauncherState::CancelCortanaReadinessCutoff(this);
  switch ( *v5 )
  {
    case 1:
      goto LABEL_44;
    case 2:
      goto LABEL_34;
    case 4:
      LOBYTE(v28) = 0;
      v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
              a3,
              &v28);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x953,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v18);
      if ( (_BYTE)v28 )
      {
        v19 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x956,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v19);
        XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 134));
      }
      goto LABEL_48;
    case 5:
      goto LABEL_22;
    case 6:
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread(
        (__int64)this + 640,
        (struct wil::details::IFailureCallback *)v35);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
      v11 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x912,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v11);
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 160LL))(*((_QWORD *)this + 11));
      v14 = v13;
      v15 = retaddr;
      if ( v13 >= 0 )
        v14 = v12;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x913,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v13);
      *v5 = 7;
      PostTaskbarMessage((__int64)v15, 1uLL, *((_QWORD *)this + 134));
      XamlLauncherState::CompleteCortanaTelemetry(
        this,
        (struct StartWindowTelemetry::CortanaLauncherInvokeActivity *)v35,
        v14);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v35);
      goto LABEL_48;
    case 7:
LABEL_22:
      v16 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      v17 = retaddr;
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x92A,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v16);
      if ( *v5 == 5 )
        XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 134));
      if ( *v5 == 7 )
        PostTaskbarMessage((__int64)v17, 1uLL, *((_QWORD *)this + 134));
      goto LABEL_48;
    case 18:
LABEL_44:
      v26 = 3;
      if ( *v5 != 1 )
        v26 = 20;
      *v5 = v26;
      v27 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8F1,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v27);
      goto LABEL_48;
  }
  if ( *v5 != 19 )
  {
    if ( *v5 == 22 )
    {
      *v5 = 14;
      v6 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x944,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v6);
      XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 134));
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 160LL))(*((_QWORD *)this + 11));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x946,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v7);
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 8LL);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x947,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v8);
        v31 = 0;
        StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
          &v29,
          v5);
        return v9;
      }
    }
    goto LABEL_48;
  }
LABEL_34:
  tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::watch_errors(
    (void **)this + 121,
    (__int64)v32);
  CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
    (__int64)this + 312,
    (struct wil::details::IFailureCallback *)v35);
  v20 = *v5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
  v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 184LL))(*((_QWORD *)this + 10));
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8FB,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v21);
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 160LL))(*((_QWORD *)this + 11));
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8FC,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v22);
  *v5 = 5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  v23 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8FF,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v23);
  XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 134));
  XamlLauncherState::CompleteStartShowTelemetry(
    (FocusHoldingTank **)this,
    0,
    (struct CommonStartTelemetry::LauncherInvokeActivity *)v35);
  if ( v20 != 19
    || (v34 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"StartMode=AppTransition",
          0x18u,
          0x17u),
        v24 = XamlLauncherState::ShowSearchFromOpenStart((__int64)this, v34, 1),
        v25 = v24,
        v24 >= 0) )
  {
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v35);
    tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>((__int64)v32);
LABEL_48:
    v25 = 0;
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x904,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v24);
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v35);
  tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>((__int64)v32);
LABEL_49:
  v31 = 0;
  StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v29,
    (int *)this + 16);
  return v25;
}
