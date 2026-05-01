/*
 * XREFs of ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180248BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180076A7C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180076FE0 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180077628 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801B00E0 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180211160 (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180281E90 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x1802B4AC4 (-StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180459588 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x18045965C (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180460AB0 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::OnStartDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rsi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  _DWORD v16[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  XamlLauncherState *v18; // [rsp+40h] [rbp-C8h]
  char v19; // [rsp+48h] [rbp-C0h]
  volatile signed __int32 *v20[42]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v17[0] = v5;
  v17[1] = v16[1];
  v18 = this;
  v19 = 1;
  if ( XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    StartWindowTelemetry::StartViewDestroyedWhileVisible();
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12), 3LL);
    if ( !XamlLauncherState::IsSearchDisabledByPolicy(this) && !*((_BYTE *)this + 1059) && !*((_BYTE *)this + 1060) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 96LL))(*((_QWORD *)this + 11));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x80C,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v6);
    }
    *v4 = 0;
    v16[0] = 0;
    v7 = *((_QWORD *)this + 13);
    if ( v7 && (*(int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 24LL))(v7, v16) >= 0 && v16[0] )
      *((_BYTE *)this + 1063) = 1;
  }
  else
  {
    v8 = v5 - 1;
    if ( !v8
      || (v9 = v8 - 1) == 0
      || (v10 = v9 - 1) == 0
      || (v11 = v10 - 1) == 0
      || (v12 = v11 - 11) == 0
      || (v13 = v12 - 3) == 0
      || (v14 = v13 - 1) == 0
      || (unsigned int)(v14 - 1) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                              (char *)this + 968,
                              v16)
               + 277LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(v16);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 976) )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                                (char *)this + 976,
                                v16)
                 + 292LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(v16);
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((char *)this + 976);
      }
      CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
        (__int64)this + 312,
        (struct wil::details::IFailureCallback *)v20);
      XamlLauncherState::CompleteStartShowTelemetry(
        (FocusHoldingTank **)this,
        -2147467260,
        (struct CommonStartTelemetry::LauncherInvokeActivity *)v20);
      if ( *v4 != 15 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 96LL))(*((_QWORD *)this + 11));
      *v4 = 0;
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v20);
    }
  }
  v19 = 0;
  StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v17,
    v4);
  return 0LL;
}
