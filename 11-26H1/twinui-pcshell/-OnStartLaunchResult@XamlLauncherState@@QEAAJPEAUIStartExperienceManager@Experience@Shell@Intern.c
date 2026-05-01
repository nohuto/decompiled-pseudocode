/*
 * XREFs of ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180248E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180076A7C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180076FE0 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180077628 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x1800991D4 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x1802104E0 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180281E90 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180459588 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x18045965C (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180460AB0 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        unsigned int a3)
{
  unsigned int v5; // r14d
  char *v6; // rdi
  int v7; // eax
  _BYTE v9[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v10; // [rsp+28h] [rbp-D8h]
  __int64 v11; // [rsp+38h] [rbp-C8h]
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 *v15[42]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  LODWORD(v10) = *((_DWORD *)this + 16);
  *((_QWORD *)&v10 + 1) = this;
  LODWORD(v11) = a3;
  v12 = v10;
  v13 = v11;
  v14 = 1;
  v5 = a3 >> 31;
  v6 = (char *)this + 968;
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 968) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                            v6,
                            v9)
             + 282LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(v9);
  }
  if ( (_BYTE)v5 )
  {
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v6) )
    {
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                               v6,
                               v9)
                + 288LL) = a3;
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(v9);
    }
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 976) )
    {
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                               (char *)this + 976,
                               v9)
                + 296LL) = a3;
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(v9);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((char *)this + 976);
    }
    SetExistingEvent(L"ShellStartReadyEvent");
    if ( *((_DWORD *)this + 16) == 1 || *((_DWORD *)this + 16) == 3 || *((_DWORD *)this + 16) == 4 )
      goto LABEL_14;
    if ( *((_DWORD *)this + 16) == 15 )
    {
      *((_DWORD *)this + 16) = 0;
LABEL_16:
      CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
        (__int64)this + 312,
        (struct wil::details::IFailureCallback *)v15);
      XamlLauncherState::CompleteStartShowTelemetry(
        (FocusHoldingTank **)this,
        a3,
        (struct CommonStartTelemetry::LauncherInvokeActivity *)v15);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v15);
      goto LABEL_20;
    }
    if ( *((_DWORD *)this + 16) == 18 || (unsigned int)(*((_DWORD *)this + 16) - 20) <= 1 )
    {
LABEL_14:
      *((_DWORD *)this + 16) = 0;
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 96LL))(*((_QWORD *)this + 11));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8B6,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v7);
      goto LABEL_16;
    }
  }
  else if ( *((_BYTE *)this + 1063) )
  {
    XamlLauncherState::ShowStartView((char *)this + 24, 1LL, 4LL);
  }
LABEL_20:
  v14 = 0;
  StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
    &v12,
    (int *)this + 16,
    (int *)&v13);
  return 0LL;
}
