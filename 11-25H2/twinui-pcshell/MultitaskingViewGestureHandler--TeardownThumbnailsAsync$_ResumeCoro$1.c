/*
 * XREFs of MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18048CB40
 * Callers:
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_InitCoro$2 @ 0x18048CAEC (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_InitCoro$2.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x180489BE4 (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A79C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@AEAAXXZ @ 0x18048D4E4 (-unconditional_release_ref@-$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewGestureHandler::TeardownThumbnailsAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // r14
  MinimizeAnimationSystemStateOverride *v4; // rdx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_17;
      case 2:
        *(_QWORD *)(a1 + 16) = 0LL;
        v1 = *(_QWORD *)(a1 + 65);
        if ( v1 )
        {
          *(_QWORD *)(a1 + 16) = v1;
          Microsoft::WRL::Details::SafeUnknownIncrementReference(
            (Microsoft::WRL::Details *)(v1 + 28),
            &_ImageBase.unused);
        }
        *(_QWORD *)(a1 + 24) = v1 + 280;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 24), (void (*)(void *, void *))a1) )
          return;
        goto LABEL_10;
      case 4:
LABEL_10:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 24));
        v3 = *(_QWORD *)(a1 + 65);
        v4 = *(MinimizeAnimationSystemStateOverride **)(v3 + 264);
        *(_QWORD *)(v3 + 264) = 0LL;
        if ( v4 )
          std::default_delete<MinimizeAnimationSystemStateOverride>::operator()(v2, v4);
        *(_QWORD *)(a1 + 40) = 0LL;
        if ( winrt::Windows::Foundation::operator!=(
               (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(v3 + 272),
               (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 40)) )
        {
          *(_QWORD *)(a1 + 48) = 0LL;
          winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v3 + 272), (__int64 *)(a1 + 48));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
          if ( *(_BYTE *)(v3 + 248) )
            MultitaskingViewGestureHandler::FinishTouchSwipeInternal((MultitaskingViewGestureHandler *)v3);
        }
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<MultitaskingViewGestureHandler>::unconditional_release_ref();
        goto LABEL_17;
      case 5:
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<MultitaskingViewGestureHandler>::unconditional_release_ref();
LABEL_17:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
