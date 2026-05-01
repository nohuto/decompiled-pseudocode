/*
 * XREFs of ?Show@ApplicationFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@_JAEBVCorrelationVector@@@Z @ 0x1805FCAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18028E650 (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVF.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FC8B0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall ApplicationFlyoutView::Show(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rbx

  v10 = operator new(0x100uLL);
  v11 = (__int64)(v10 + 14);
  v10[27] = a1;
  v10[28] = a3;
  v10[29] = a4;
  v10[30] = a5;
  v10[31] = a6;
  v10[14] = ApplicationFlyoutView::Show__ResumeCoro_1;
  *((_DWORD *)v10 + 30) = 65538;
  v12 = v10;
  memset_0(v10, 0, 0x68uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v11 - 112);
  *v12 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *a2 = (__int64)(v12 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  a5 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a5);
  *(_BYTE *)(v11 + 96) = 0;
  ApplicationFlyoutView::Show__ResumeCoro_1(v11);
  return a2;
}
