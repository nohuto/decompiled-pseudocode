/*
 * XREFs of CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180396DC0
 * Callers:
 *     ?DismissRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180396F4C (-DismissRequested@CVirtualTouchpadExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShell.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18021B1B0 (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x18021BA60 (-Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x180399A10 (-unconditional_release_ref@-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall CVirtualTouchpadExperienceManager::DismissRequested__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // r8
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  int v4; // eax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    LOWORD(v5) = *(_WORD *)(a1 + 8);
    switch ( (__int16)v5 )
    {
      case -1:
      case 3:
        goto LABEL_19;
      case 2:
        *(_QWORD *)(a1 + 16) = 0LL;
        v1 = *(_QWORD *)(a1 + 56);
        if ( !v1 )
          goto LABEL_10;
        *(_QWORD *)(a1 + 16) = v1;
        v2 = *(_QWORD *)(v1 + 48);
        break;
      case 4:
        goto LABEL_15;
      case 5:
        if ( *(_QWORD *)(a1 + 16) )
          ((void (*)(void))winrt::com_ptr<CVirtualTouchpadExperienceManager>::unconditional_release_ref)();
        goto LABEL_19;
      default:
        __debugbreak();
        return;
    }
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 48), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), &_ImageBase.unused);
LABEL_10:
    *(_QWORD *)(a1 + 24) = v1 + 864;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_WORD *)(a1 + 8) = 4;
    if ( !winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 24), (void (*)(void *, void *))a1) )
    {
LABEL_15:
      winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 24));
      v4 = CVirtualTouchpadExperienceManager::Hide(*(CVirtualTouchpadExperienceManager **)(a1 + 56));
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x24F,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v4,
          v5);
      winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(a1 + 64));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<CVirtualTouchpadExperienceManager>::unconditional_release_ref(a1 + 16);
LABEL_19:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
