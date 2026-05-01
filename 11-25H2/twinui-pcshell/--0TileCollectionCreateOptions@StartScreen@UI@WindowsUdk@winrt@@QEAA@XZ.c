/*
 * XREFs of ??0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1801BB0DC
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A8DC4 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x1805159A0 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@P6A?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801BB154 (--$call@P6A-AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@AEBUIActivationFactor.c)
 *     ??$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@3@XZ @ 0x1802CCEAC (--$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFa.c)
 */

winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *__fastcall winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions::TileCollectionCreateOptions(
        winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *this)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089BB88);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_18089BB88);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BB88);
    v3 = _lambda_59762283627f7fdd9316b5187be5bad3_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      this,
      &v3);
  }
  return this;
}
