/*
 * XREFs of ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1803752F0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___::Invoke @ 0x180374AA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180374AA0.c)
 * Callees:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x180015CD4 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801EA8C8 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A7950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnControlCenterVisibilityChanged(
        CToastCenterExperienceManager *this,
        char a2,
        __int64 a3,
        __int64 a4)
{
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v6 = *((_DWORD *)this + 36) == 2;
  *((_BYTE *)this + 403) = a2;
  if ( v6 && a2 )
  {
    v7 = CToastCenterExperienceManager::Hide(this);
    if ( v7 < 0 )
    {
      v8 = 483LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  else
  {
    v7 = CToastCenterExperienceManager::PositionView((__int64 **)this);
    if ( v7 < 0 )
    {
      v8 = 487LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}
