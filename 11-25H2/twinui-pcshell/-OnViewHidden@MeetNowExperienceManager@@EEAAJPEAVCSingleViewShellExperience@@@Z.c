/*
 * XREFs of ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BAF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EEEDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1802067D4 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180219B64 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ??$query_to@UIMeetAndChatManager@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMeetAndChatManager@Shell@Internal@Windows@@@Z @ 0x1803B7534 (--$query_to@UIMeetAndChatManager@Shell@Internal@Windows@@@-$com_ptr_t@UIWeakReference@@Uerr_retu.c)
 *     ?FlyoutHidden@MeetNowTelemetry@@SAXXZ @ 0x1803B8894 (-FlyoutHidden@MeetNowTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MeetNowExperienceManager::OnViewHidden(
        MeetNowExperienceManager *this,
        ExperienceManagerUtils **a2,
        __int64 a3,
        __int64 a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  HWND v7; // rax
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v6);
    if ( !RemovePropW(v7, L"MeetAndChatFallback") )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x12E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        v8);
    SingleViewLightDismissHelper::UnregisterWithLightDismiss((MeetNowExperienceManager *)((char *)this + 112));
    v9 = CExperienceManagerAnimationHelper::End((MeetNowExperienceManager *)((char *)this + 80));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x131,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    v14 = 0LL;
    v10 = wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<Windows::Internal::Shell::IMeetAndChatManager>(
            (_QWORD *)this + 92,
            &v14);
    if ( v10 >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 56LL))(v14, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    MeetNowTelemetry::FlyoutHidden();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13B,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
                           v11);
  }
  return result;
}
