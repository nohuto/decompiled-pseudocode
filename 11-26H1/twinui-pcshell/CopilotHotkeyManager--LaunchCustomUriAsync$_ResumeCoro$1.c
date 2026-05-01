/*
 * XREFs of CopilotHotkeyManager::LaunchCustomUriAsync$_ResumeCoro$1 @ 0x180632670
 * Callers:
 *     ?LaunchCustomUriAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBULauncherOptions@System@Windows@3@@Z @ 0x1806327F4 (-LaunchCustomUriAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@winrt@@V-$basic_string@GU-$ch.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801BCD78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802B5A0C (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180330894 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@experimental@std@@@Z @ 0x1804991F0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindo.c)
 *     ??$InvokedCopilotKeyCustomUri@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18061E1A4 (--$InvokedCopilotKeyCustomUri@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x180633014 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CopilotHotkeyManager::LaunchCustomUriAsync__ResumeCoro_1(__int64 a1)
{
  winrt::Windows::Foundation::Uri *v1; // rax
  __int64 v2; // rax
  _QWORD *v3; // rbx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_9;
      case 2:
        winrt::param::hstring::hstring(a1 + 24, (_QWORD *)(a1 + 128));
        v1 = winrt::Windows::Foundation::Uri::Uri(
               (winrt::Windows::Foundation::Uri *)(a1 + 16),
               (const struct winrt::param::hstring *)(a1 + 24));
        v2 = winrt::Windows::System::Launcher::LaunchUriAsync(
               (const struct winrt::Windows::Foundation::Uri *)(a1 + 56),
               v1);
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_QWORD *)(a1 + 72) = v2;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_BYTE *)(a1 + 88) = 1;
        *(_WORD *)(a1 + 8) = 4;
        if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
               a1 + 64,
               a1) )
        {
          return;
        }
        goto LABEL_6;
      case 4:
LABEL_6:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 64);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 64));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
        v3 = (_QWORD *)(a1 + 128);
        if ( *(_QWORD *)(a1 + 152) > 7uLL )
          v3 = (_QWORD *)*v3;
        *(_QWORD *)(a1 + 96) = v3;
        CopilotHotkeyManagerTelemetry::InvokedCopilotKeyCustomUri<unsigned short const *>((const WCHAR **)(a1 + 96));
        goto LABEL_9;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 64));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_9:
        std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 128));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0xB0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
