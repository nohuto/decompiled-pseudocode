/*
 * XREFs of ??1?$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ @ 0x1802C745C
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806BC0DD (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BC0DD.c)
 *     __lambda_21db7767322f1ff1c886f131a6440c5a_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::dtor$2 @ 0x1806CEEA5 (__lambda_21db7767322f1ff1c886f131a6440c5a_--operator()_winrt--Windows--UI--Internal--Input--Shel.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x1806D39D2 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--dtor$12.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$21 @ 0x1806D8143 (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$21.c)
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
