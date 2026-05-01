/*
 * XREFs of ??1StartExperiencePackageHelper@@QEAA@XZ @ 0x1805A82F4
 * Callers:
 *     _WidgetPlatformPackageHelper::AllowPackageInstall_::_1_::dtor$0 @ 0x1806D2DDB (_WidgetPlatformPackageHelper--AllowPackageInstall_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806D4024 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806D4024.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806D407C (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806D407C.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$16 @ 0x1806D4106 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvas_ea_1806D4106.c)
 * Callees:
 *     <none>
 */

void __fastcall StartExperiencePackageHelper::~StartExperiencePackageHelper(void **this)
{
  std::wstring::_Tidy_deallocate(this + 6);
}
