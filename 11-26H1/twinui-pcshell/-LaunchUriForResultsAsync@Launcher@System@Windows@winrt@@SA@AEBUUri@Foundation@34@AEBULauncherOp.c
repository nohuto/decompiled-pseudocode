/*
 * XREFs of ?LaunchUriForResultsAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x18063308C
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??R_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x180590910 (--R_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@.c)
 *     ??$call@AEAV_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics2@234@@impl@winrt@@QEAA?A_PAEAV_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@@Z @ 0x18061E99C (--$call@AEAV_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@@-$factory_cache_entry@ULauncher@System@W.c)
 */

const struct winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::System::Launcher::LaunchUriForResultsAsync(
        const struct winrt::Windows::Foundation::Uri *a1,
        const struct winrt::Windows::System::LauncherOptions *a2,
        __int64 *a3)
{
  __int64 *v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = (__int64 *)a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808DB658);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2> )
  {
    _lambda_9b3fea7e440c61a5e303878d4bfaf406_::operator()(
      v5,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2>);
    _InterlockedDecrement64(&qword_1808DB658);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB658);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2>::call<_lambda_9b3fea7e440c61a5e303878d4bfaf406_ &>(
      (__int64 *)a1,
      a1,
      v5);
  }
  return a1;
}
