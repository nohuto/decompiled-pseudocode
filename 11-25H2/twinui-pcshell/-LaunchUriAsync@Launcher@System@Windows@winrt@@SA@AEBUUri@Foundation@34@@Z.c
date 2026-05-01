/*
 * XREFs of ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z @ 0x1802993A8
 * Callers:
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x1802991BC (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x18060DB50 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x1806287F4 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 * Callees:
 *     ?CreateFromStream@?$consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIRandomAccessStream@Streams@Storage@Windows@3@@Z @ 0x180244D5C (-CreateFromStream@-$consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics@UIRandom.c)
 *     ??$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@Z @ 0x18033F034 (--$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@-$factory_cache_entry@ULauncher@System@W.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::System::Launcher::LaunchUriAsync(
        const struct winrt::Windows::Foundation::Uri *a1,
        __int64 *a2)
{
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18089AEB8;
  _InterlockedIncrement64(&qword_18089AEB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics> )
  {
    winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::CreateFromStream(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>,
      a1,
      a2);
    _InterlockedDecrement64(&qword_18089AEB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AEB8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_25f685323ecfdadefb1917e024cec3b1_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
