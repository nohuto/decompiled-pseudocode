/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_694cec6c9198d8f39470d0c04c207483___::Invoke @ 0x180225E30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ShowRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1802BE4C0 (-ShowRequested@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEv.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_694cec6c9198d8f39470d0c04c207483___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v6);
  CMultitaskingViewManager::ShowRequested(v3, &v5, &v6);
  return 0LL;
}
