/*
 * XREFs of ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18037CFD0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___::Invoke @ 0x18037C770 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18037C770.c)
 * Callees:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001A1A8 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0188 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnControlCenterVisibilityChanged(
        CToastCenterExperienceManager *this,
        char a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
    1u,
    a3);
  *((_BYTE *)this + 403) = a2;
  if ( *((_DWORD *)this + 36) == 2 && a2 )
  {
    v5 = CToastCenterExperienceManager::Hide(this);
    if ( v5 < 0 )
    {
      v6 = 489LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  else
  {
    v5 = CToastCenterExperienceManager::PositionView((__int64 **)this);
    if ( v5 < 0 )
    {
      v6 = 493LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}
