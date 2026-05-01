/*
 * XREFs of ??1StartExperiencePackageHelper@@QEAA@XZ @ 0x1805CC43C
 * Callers:
 *     _WidgetPlatformPackageHelper::AllowPackageInstall_::_1_::dtor$0 @ 0x1806FAC6C (_WidgetPlatformPackageHelper--AllowPackageInstall_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806FC11D (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806FC11D.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806FC175 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806FC175.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$16 @ 0x1806FC1FF (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806FC1FF.c)
 * Callees:
 *     <none>
 */

void __fastcall StartExperiencePackageHelper::~StartExperiencePackageHelper(StartExperiencePackageHelper *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 6);
}
