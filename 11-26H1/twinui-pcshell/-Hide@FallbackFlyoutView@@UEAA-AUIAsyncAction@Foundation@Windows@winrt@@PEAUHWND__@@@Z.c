/*
 * XREFs of ?Hide@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x1805FAEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18028E650 (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVF.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1805FADE0 (FallbackFlyoutView--Hide$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall FallbackFlyoutView::Hide(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v6 = operator new(0xB0uLL);
  v7 = (__int64)(v6 + 14);
  v6[19] = a1;
  v6[20] = a3;
  v6[14] = FallbackFlyoutView::Hide__ResumeCoro_1;
  *((_DWORD *)v6 + 30) = 65538;
  v8 = v6;
  memset_0(v6, 0, 0x68uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v7 - 112);
  *v8 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *a2 = (__int64)(v8 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v10 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  *(_BYTE *)(v7 + 32) = 0;
  FallbackFlyoutView::Hide__ResumeCoro_1(v7);
  return a2;
}
