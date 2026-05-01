/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180330BB0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_6df262792ed19d9f37b8132f1161a915_@@CA@PEAX@Z @ 0x180325150 (-_lambda_invoker_cdecl_@_lambda_6df262792ed19d9f37b8132f1161a915_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180234444 (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@II@Foundation@Win.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  _WORD *v4; // rbx

  v4 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_4;
    case 2:
      *v4 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
      break;
    case 4:
      winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 24));
LABEL_4:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v4 + 8));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
      break;
    default:
      __debugbreak();
      break;
  }
}
