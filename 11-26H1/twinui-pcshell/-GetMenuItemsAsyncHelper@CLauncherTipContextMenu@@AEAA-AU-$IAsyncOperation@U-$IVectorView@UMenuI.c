/*
 * XREFs of ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x180602718
 * Callers:
 *     ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x180601C60 (-GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18060070C (--0-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMenuItem@U.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper(__int64 a1, __int64 *a2, _OWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  volatile int *v9; // rdx
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v6 = operator new(0x3B0uLL);
  v7 = (__int64)(v6 + 14);
  v6[115] = a1;
  *((_OWORD *)v6 + 58) = *a3;
  v6[14] = CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1;
  *((_DWORD *)v6 + 30) = 65538;
  v8 = v6;
  memset_0(v6, 0, 0x70uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>(v7 - 112);
  *v8 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type::`vftable';
  v8[13] = 0LL;
  *a2 = (__int64)(v8 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v11 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  *(_BYTE *)(v7 + 800) = 0;
  CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1(v7, v9);
  return a2;
}
