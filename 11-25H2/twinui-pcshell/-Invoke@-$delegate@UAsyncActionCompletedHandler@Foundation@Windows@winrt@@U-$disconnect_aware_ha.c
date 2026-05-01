/*
 * XREFs of ?Invoke@?$delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x18032E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Complete@?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x18032CDD0 (-Complete@-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UTileCollection@Star.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>>>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 + 16;
  v4 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v4 + 16) = a3;
  try
  {
    winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>::Complete(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
