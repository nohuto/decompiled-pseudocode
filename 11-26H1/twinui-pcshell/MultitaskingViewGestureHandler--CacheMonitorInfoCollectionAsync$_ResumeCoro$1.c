/*
 * XREFs of MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1802536A0
 * Callers:
 *     ?CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802537F8 (-CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@X.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801E2CC0 (-GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180339EFC (-await_resume@-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsU.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@@experimental@std@@@Z @ 0x1803637DC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceMa.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__ResumeCoro_1(__int64 a1)
{
  _QWORD *CurrentAsync; // rax
  __int64 *v2; // rax

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_8;
      case 2:
        *(_QWORD *)(a1 + 16) = 0LL;
        if ( !winrt::Windows::Foundation::operator==(
                (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(*(_QWORD *)(a1 + 88) + 256LL),
                (_QWORD *)(a1 + 16)) )
          goto LABEL_8;
        CurrentAsync = winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection::GetCurrentAsync((_QWORD *)(a1 + 24));
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = CurrentAsync;
        *(_QWORD *)(a1 + 48) = 0LL;
        *(_BYTE *)(a1 + 56) = 1;
        *(_WORD *)(a1 + 8) = 4;
        if ( !(unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CStartExperienceManager *>::promise_type>(
                                 a1 + 32,
                                 a1) )
        {
LABEL_7:
          v2 = (__int64 *)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_resume(
                            a1 + 32,
                            a1 + 64);
          winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(*(_QWORD *)(a1 + 88) + 256LL), v2);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
          winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 32);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
LABEL_8:
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x60);
        }
        break;
      case 4:
        goto LABEL_7;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 32);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
        goto LABEL_8;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
