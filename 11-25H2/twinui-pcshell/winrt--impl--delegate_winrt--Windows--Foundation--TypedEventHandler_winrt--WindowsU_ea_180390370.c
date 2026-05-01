/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_341c9eb6bde2f5519c2c695a2218853a___::Invoke @ 0x180390370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18038E5BC (--$As@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microso.c)
 *     ?ShowRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180391A9C (-ShowRequested@CVirtualTouchpadExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRe.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_341c9eb6bde2f5519c2c695a2218853a___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager>(
              (Microsoft::WRL::WeakRef *)(a1 + 24),
              &v9) >= 0
    && v9 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v7[0] = a3;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v7);
    CVirtualTouchpadExperienceManager::ShowRequested(v5, &v8, v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
