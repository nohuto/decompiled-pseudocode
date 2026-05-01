/*
 * XREFs of SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x18026AB30
 * Callers:
 *     ?ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@@Z @ 0x18026AD14 (-ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@UtagPOINT@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801CCA48 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801CF588 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x180269830 (-GetVisibleSnapBar@SnapFlyoutHost@@AEAA-AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Window.c)
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18026A968 (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18026B630 (-HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B575C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 *v3; // rcx
  float v4; // xmm7_4
  float v5; // xmm6_4
  __int64 v6; // r15
  __int64 v7; // rbx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_14;
      case 2:
        v1 = *(_QWORD *)(a1 + 104);
        v2 = v1 + 96;
        if ( !*(_QWORD *)(v1 + 96) )
          goto LABEL_14;
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          v1,
          (_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 24) = v2;
        *(_DWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_BYTE *)(a1 + 48) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_suspend(a1 + 24, a1);
        break;
      case 4:
        `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_resume(a1 + 24);
        winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 56));
        if ( *(_QWORD *)(a1 + 56) )
        {
          v4 = (float)*(int *)(a1 + 116);
          v5 = (float)*(int *)(a1 + 112);
          *(float *)(a1 + 64) = v5;
          *(float *)(a1 + 68) = v4;
          v6 = *(_QWORD *)(a1 + 104);
          v7 = *SnapFlyoutHost::GetVisibleSnapBar(v6, (__int64 *)(a1 + 72));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
          if ( v7 )
          {
            SnapFlyoutHost::ShowSnapBarOnMonitor(v6, *(_QWORD *)(a1 + 64));
            *(float *)(a1 + 80) = v5;
            *(float *)(a1 + 84) = v4;
            WindowDragInputProvider::HitTestControl(*(_QWORD *)(v6 + 112), *(_QWORD *)(a1 + 80));
          }
          else
          {
            *(float *)(v6 + 136) = v5;
            *(float *)(v6 + 140) = v4;
          }
        }
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 56));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_14;
      case 5:
        v3 = (__int64 *)(a1 + 16);
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3);
LABEL_14:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x80);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
