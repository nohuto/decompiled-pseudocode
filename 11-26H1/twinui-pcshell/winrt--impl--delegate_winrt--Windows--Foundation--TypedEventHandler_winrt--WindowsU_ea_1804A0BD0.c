/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::Invoke @ 0x1804A0BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x180253BA0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (__fastcall *v4)(char *); // rbx
  void (__fastcall **v5)(char *); // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(void (__fastcall **)(char *))(a1 + 16);
  v7 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  try
  {
    v5 = (void (__fastcall **)(char *))operator new(0xC0uLL);
    v5[21] = v4;
    v7 = 0LL;
    v5[22] = (void (__fastcall *)(char *))a3;
    *v5 = CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1;
    *((_DWORD *)v5 + 2) = 65538;
    *((_BYTE *)v5 + 160) = 0;
    CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1((char *)v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
