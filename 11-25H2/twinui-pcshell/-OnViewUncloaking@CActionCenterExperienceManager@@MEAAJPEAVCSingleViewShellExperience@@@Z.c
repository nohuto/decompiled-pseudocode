/*
 * XREFs of ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FE80
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180045860 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002E99C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180046368 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801FA4FC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x1802C94D4 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18035D39C (--1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z @ 0x1803601F0 (-RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1803615A0 (-StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewUncloaking(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  __int64 v4; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rdi
  HSTRING v7; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r9d
  int v14; // eax
  int started; // eax
  _QWORD v17[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  if ( std::_Atomic_storage<bool,1>::load((__int64)this + 616) )
  {
    *((_QWORD *)this + 76) = v4;
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v17,
      (__int64)"EM_ViewUncloakingActivity");
    v17[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v17);
    v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
    v7 = (HSTRING)*((_QWORD *)this + 34);
    if ( v7 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(v7, 0LL);
      if ( !SetWindowTextW(v6, StringRawBuffer) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x64F,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          v9);
    }
    if ( *((_BYTE *)this + 281) )
      Mirror_IsThreadRTL();
    v10 = CSingleViewShellExperience::ShowBorder((__int64)this + 16, 0);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x659,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v14 = CActionCenterExperienceManager::RegisterWithLightDismiss(
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)this - 14,
            v11,
            v12,
            v13);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x65B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    started = CActionCenterExperienceManager::RaiseStartAnimationEvent(
                (CActionCenterExperienceManager *)((char *)this - 112),
                *((_QWORD *)this + 78),
                *((_QWORD *)this + 80),
                *((_QWORD *)this + 79));
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x65D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)started);
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, 0);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v17);
  }
  return 0LL;
}
