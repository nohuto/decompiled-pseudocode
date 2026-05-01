/*
 * XREFs of ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1805FBE40
 * Callers:
 *     ?Hide@ApplicationFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x1805FBFB0 (-Hide@ApplicationFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180288A6C (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B190 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18053B190.c)
 *     ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1805F95AC (-FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z.c)
 *     ?MissingRegistrationRecovery@MeetAndChatTelemetry@@SAXXZ @ 0x1805FC10C (-MissingRegistrationRecovery@MeetAndChatTelemetry@@SAXXZ.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805FD0D8 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 */

void __fastcall ApplicationFlyoutView::Hide__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  void *v3; // r8
  __int64 v4; // rcx
  const struct winrt::impl::slim_source_location *v5; // rax
  HWND v6; // rdx
  _BYTE pExceptionObject[48]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h]

  v1 = a1;
  v2 = a1 + 8;
  v9 = a1 + 8;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
    case 5:
      goto LABEL_10;
    case 2:
      try
      {
        *(_QWORD *)(a1 + 48) = Utils::FindWindowByPropertyName(
                                 (Utils *)L"MeetAndChatFlyout",
                                 (const unsigned __int16 *)&_ImageBase);
        *(_QWORD *)(v1 + 64) = v1 - 112;
        v4 = *(unsigned int *)(v1 - 112 + 96);
        if ( (_DWORD)v4 == 2 )
        {
          v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v1 + 24);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v5);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_WORD *)v2 = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v4, (void (*)(void *, void *))v1, v3);
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        *(_QWORD *)(a1 + 64) = a1 - 112;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::unhandled_exception(a1 - 112);
        v1 = a1;
        *(_QWORD *)(a1 + 64) = a1 - 112;
        v2 = v9;
        goto LABEL_9;
      }
      return;
    case 4:
      v6 = *(HWND *)(a1 + 48);
      if ( v6 )
        goto LABEL_8;
      if ( *(_QWORD *)(a1 + 96) )
      {
        MeetAndChatTelemetry::MissingRegistrationRecovery();
        v6 = *(HWND *)(v1 + 96);
LABEL_8:
        ApplicationFlyoutView::TryShowHideWindow(*(ApplicationFlyoutView **)(v2 + 80), v6, 0);
      }
LABEL_9:
      *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 64);
      *(_WORD *)v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(v1 + 16),
              (__int64)v6) )
      {
LABEL_10:
        *(_QWORD *)(v1 + 64) = v1 - 112;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(v1 - 112));
        if ( *(_WORD *)(v1 + 10) )
          operator delete((void *)(v1 - 112), (const struct std::nothrow_t *)0xE0);
      }
      return;
    default:
      __debugbreak();
      return;
  }
}
