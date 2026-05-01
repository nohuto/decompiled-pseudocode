/*
 * XREFs of ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x18060DEEC
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180601124 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_ResumeCoro$1 @ 0x18060D8A0 (CopilotHotkeyManager--LaunchCustomUriAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180610010 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x1806287F4 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 * Callees:
 *     ??$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@Z @ 0x1805FA0C4 (--$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??R_lambda_f90fd89f5c660ec91b58f654b0e35989_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z @ 0x1805FE47C (--R_lambda_f90fd89f5c660ec91b58f654b0e35989_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z.c)
 */

const struct winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::System::Launcher::LaunchUriAsync(
        const struct winrt::Windows::Foundation::Uri *a1,
        const struct winrt::Windows::System::LauncherOptions *a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_18089AEB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics> )
  {
    _lambda_f90fd89f5c660ec91b58f654b0e35989_::operator()(
      v5,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>);
    _InterlockedDecrement64(&qword_18089AEB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AEB8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_f90fd89f5c660ec91b58f654b0e35989_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)v5);
  }
  return a1;
}
