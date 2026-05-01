/*
 * XREFs of ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x180622B6C
 * Callers:
 *     ?HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@@Z @ 0x18062673C (-HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x18064E29C (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 * Callees:
 *     ??$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULauncherOptions@System@23@XZ @ 0x18061D588 (--$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Window.c)
 *     ??$call@P6A?AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@34@@Z@?$factory_cache_entry@ULauncherOptions@System@Windows@winrt@@UIActivationFactory@Foundation@34@@impl@winrt@@QEAA?A_P$$QEAP6A?AULauncherOptions@System@Windows@2@AEBUIActivationFactory@Foundation@52@@Z@Z @ 0x18061ED64 (--$call@P6A-AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@34@@Z@-$fa.c)
 */

struct IUnknown *__fastcall winrt::Windows::System::LauncherOptions::LauncherOptions(struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+30h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))&qword_1808DB638;
  _InterlockedIncrement64(&qword_1808DB638);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::System::LauncherOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808DB638);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB638);
    v3 = _lambda_e196766f83e1d66489056b7e2848d983_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::System::LauncherOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
