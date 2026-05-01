/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_fbca4f682b4592a86644e763e0581c87___::Invoke @ 0x180348590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18033B5D4 (--$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@Q.c)
 *     ?HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180347DD0 (-HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEve.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_fbca4f682b4592a86644e763e0581c87___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  struct IInspectable *v6; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v6 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
              (Microsoft::WRL::WeakRef *)(a1 + 24),
              &v6) >= 0
    && v6 )
  {
    GamingOverlayExperienceManager::HandleShellViewShowRequested(
      *(GamingOverlayExperienceManager **)(a1 + 16),
      (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  return 0LL;
}
