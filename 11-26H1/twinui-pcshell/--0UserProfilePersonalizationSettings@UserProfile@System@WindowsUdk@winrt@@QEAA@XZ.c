/*
 * XREFs of ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x1805518B4
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1801FF9D0 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180264620 (-GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$ActivateInstance@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@3@XZ @ 0x18054F6E4 (--$ActivateInstance@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@IA.c)
 *     ??$call@P6A?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x180550348 (--$call@P6A-AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@AEBUIActiv.c)
 */

struct IUnknown *__fastcall winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings::UserProfilePersonalizationSettings(
        struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+30h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))&qword_1808DC0D8;
  _InterlockedIncrement64(&qword_1808DC0D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808DC0D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC0D8);
    v3 = _lambda_7fe111c4dc7982516f208967a081df07_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
