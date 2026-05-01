/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180330AE0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_4cff5cac03f7c41104750b1d0579036a_@@CA@PEAX@Z @ 0x1803250A0 (-_lambda_invoker_cdecl_@_lambda_4cff5cac03f7c41104750b1d0579036a_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180329D58 (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UValueSet@Collections@Foundat.c)
 */

void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  _WORD *v3; // rdi
  _WORD *v4; // rbx

  try
  {
    v3 = (_WORD *)a1;
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
        try
        {
          winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 24));
        }
        catch ( winrt::hresult_error )
        {
          v3 = (_WORD *)a1;
          v4 = (_WORD *)(a1 + 8);
        }
LABEL_4:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v4 + 8));
        if ( v3[5] )
          operator delete(v3, (const struct std::nothrow_t *)0x20);
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
