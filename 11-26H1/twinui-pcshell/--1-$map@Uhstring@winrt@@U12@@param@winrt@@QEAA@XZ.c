/*
 * XREFs of ??1?$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ @ 0x1802BE33C
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806E33A6 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E33A6.c)
 *     __lambda_9d63f5b83c4626ea321dd6f3d651c13d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::dtor$2 @ 0x1806F75DA (__lambda_9d63f5b83c4626ea321dd6f3d651c13d_--operator()_winrt--Windows--UI--Internal--Input--Shel.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x1806FB968 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--dtor$12.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$21 @ 0x18070078B (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$21.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::param::map<winrt::hstring,winrt::hstring>::~map<winrt::hstring,winrt::hstring>(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a1)
{
  if ( !*((_BYTE *)a1 + 8) )
    *(_QWORD *)a1 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a1);
}
