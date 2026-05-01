/*
 * XREFs of ??0LogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@XZ @ 0x1805BEFE0
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805C74DC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ??$ActivateInstance@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x1805BA8B0 (--$ActivateInstance@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivati.c)
 *     ??$call@P6A?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1805BDD14 (--$call@P6A-AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIActivationFa.c)
 */

struct IUnknown *__fastcall winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions::LogoOptions(
        struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089D1B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_18089D1B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089D1B8);
    v3 = _lambda_2c5e623d648e9cd1534cf2538beff36d_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (__int64)this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
