/*
 * XREFs of ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x1805B0A94
 * Callers:
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x1805AA0B0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1805AA1F0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805AF730 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805B2880 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805B2880.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805B0854 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall LockScreenWidgetPackageHelperBase::IsPackageInstalled(LockScreenWidgetPackageHelperBase *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rbx
  struct winrt::impl::shared_hstring_header **v2; // rax
  LockScreenWidgetPackageHelperBase *v3; // rcx
  struct winrt::impl::shared_hstring_header *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  v2 = winrt::hstring::hstring(&v5, (__int64)this + 32);
  LOBYTE(v1) = LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                 v3,
                 (const struct winrt::hstring *)v2,
                 (LockScreenWidgetPackageHelperBase *)((char *)v1 + 80));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v5);
  return (char)v1;
}
