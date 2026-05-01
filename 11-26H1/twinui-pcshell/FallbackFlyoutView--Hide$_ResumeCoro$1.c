/*
 * XREFs of FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1805FADE0
 * Callers:
 *     ?Hide@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x1805FAEF0 (-Hide@FallbackFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180288A6C (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B190 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18053B190.c)
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805FAC2C (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall FallbackFlyoutView::Hide__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rdi
  _WORD *v2; // rsi
  RTL_SRWLOCK *v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _WORD *v10; // [rsp+58h] [rbp+10h]

  v1 = a1;
  v2 = (_WORD *)(a1 + 8);
  v10 = (_WORD *)(a1 + 8);
  LOWORD(v6) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v6 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_6;
    case 2:
      try
      {
        v3 = FallbackFlyoutView::EnsureExperienceManager(*(_QWORD *)(a1 + 40), (RTL_SRWLOCK *)(a1 + 16));
        v4 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)v3->Ptr + 56LL))(v3->Ptr);
        if ( v4 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x41,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
            (const char *)(unsigned int)v4,
            v6);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(v1 + 16));
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::unhandled_exception(a1 - 112);
        v1 = a1;
        v2 = v10;
      }
      *(_QWORD *)(v1 + 24) = v1 - 112;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(v1 + 24),
              v5) )
      {
LABEL_6:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(v1 - 112));
        if ( *(_WORD *)(v1 + 10) )
          operator delete((void *)(v1 - 112), (const struct std::nothrow_t *)0xB0);
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
