/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___lambda_5f0db137ae2a6c5fc040ef9fe2a6d287___::Invoke @ 0x1806A6760
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18021B1B0 (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___lambda_5f0db137ae2a6c5fc040ef9fe2a6d287___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v11 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v11);
  v12 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v12);
  v9 = 0;
  v7 = 0;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 48LL))(v11, &v9);
  try
  {
    winrt::check_hresult(&v10, v5, (__int64)&v7);
    if ( v9 == 2 )
      winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(a1 + 16));
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
