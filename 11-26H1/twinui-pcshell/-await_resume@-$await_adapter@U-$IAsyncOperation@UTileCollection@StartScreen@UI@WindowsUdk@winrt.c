/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18053B130
 * Callers:
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x180538470 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053A1A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1805388C8 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Star.c)
 */

winrt *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_resume(
        __int64 a1,
        winrt *a2)
{
  int v3; // edx
  __int64 v5; // rdx
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  winrt *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v7 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  v8 = 0LL;
  winrt::check_hresult((int *)&v9, v3, (__int64)&v7);
  winrt::impl::check_status_canceled((winrt::impl *)*(unsigned int *)(a1 + 16), v5);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::GetResults(
    *(__int64 **)(a1 + 8),
    a2);
  return a2;
}
