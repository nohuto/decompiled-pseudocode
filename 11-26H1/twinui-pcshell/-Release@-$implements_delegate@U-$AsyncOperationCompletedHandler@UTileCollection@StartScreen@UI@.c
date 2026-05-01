/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@UEAAIXZ @ 0x18032D680
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@QEAA@XZ @ 0x180328E80 (--1-$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U-$disconnect_aw.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>>>::~implements_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>>>((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}
