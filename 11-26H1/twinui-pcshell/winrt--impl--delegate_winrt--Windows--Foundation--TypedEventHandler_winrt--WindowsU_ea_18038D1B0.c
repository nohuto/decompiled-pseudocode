/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_8ce5553f322d0698bc47a5a547d85e4a___::Invoke @ 0x18038D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18018F20C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?DismissRequested@CJumpViewExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18038C5C0 (-DismissRequested@CJumpViewExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewReq.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_8ce5553f322d0698bc47a5a547d85e4a___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (__fastcall *v5)(__int64); // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
              (Microsoft::WRL::WeakRef *)(a1 + 24),
              &GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0,
              &v9) >= 0
    && v9 )
  {
    v5 = *(void (__fastcall **)(__int64))(a1 + 16);
    v7[0] = a3;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v7);
    CJumpViewExperienceManager::DismissRequested(
      v5,
      &v8,
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
