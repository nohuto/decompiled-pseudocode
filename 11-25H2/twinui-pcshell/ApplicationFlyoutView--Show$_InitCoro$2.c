/*
 * XREFs of ApplicationFlyoutView::Show$_InitCoro$2 @ 0x1805D7CF4
 * Callers:
 *     ?Show@ApplicationFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@_JAEBVCorrelationVector@@@Z @ 0x1805D8070 (-Show@ApplicationFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4Tas.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805D7E50 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 */

__int64 __fastcall ApplicationFlyoutView::Show__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rdi

  *(_QWORD *)(a2 + 97) = a8;
  *(_QWORD *)(a2 + 105) = a4;
  *(_QWORD *)(a2 + 113) = a5;
  *(_QWORD *)(a2 + 121) = a6;
  *(_QWORD *)(a2 + 129) = a7;
  *(_QWORD *)a2 = ApplicationFlyoutView::Show__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v10 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v10 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v10 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v10 + 8) = 1LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_BYTE *)(v10 + 48) = 0;
  *(_QWORD *)v10 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *(_QWORD *)(v10 + 56) = 0LL;
  *(_QWORD *)(v10 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v10 + 56));
  *(_QWORD *)(v10 + 72) = 0LL;
  *(_QWORD *)(v10 + 80) = 0LL;
  *(_QWORD *)(v10 + 88) = 0LL;
  *(_DWORD *)(v10 + 96) = 0;
  *(_BYTE *)(v10 + 100) = 0;
  *(_QWORD *)v10 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *a3 = v10 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a8 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a8);
  *(_BYTE *)(a2 + 96) = 0;
  return ApplicationFlyoutView::Show__ResumeCoro_1(a2);
}
