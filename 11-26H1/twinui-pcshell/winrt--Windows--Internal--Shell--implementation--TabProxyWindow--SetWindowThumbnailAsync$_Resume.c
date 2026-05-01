/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1802668B0
 * Callers:
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180266C1C (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ??$WindowTabHostThumbnailQueued@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z @ 0x18007A6EC (--$WindowTabHostThumbnailQueued@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?ShouldKeepSettingThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1801EEE04 (-ShouldKeepSettingThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?ShouldTrySetThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18020508C (-ShouldTrySetThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ @ 0x18026724C (-TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180330894 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033EF14 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@experimental@std@@@Z @ 0x1804991F0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindo.c)
 *     ??$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z @ 0x180581084 (--$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v3; // rcx
  void *v4; // r8
  __int64 *v5; // rcx
  char v6; // r12
  int v7; // r14d
  unsigned int v8; // r14d
  __int64 v9; // r13
  RTL_SRWLOCK *v10; // rcx
  RTL_SRWLOCK *v11; // rbx
  __int64 v12; // rax
  char *v13; // r12
  unsigned int v14; // eax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_34;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *((_QWORD *)a1 + 17),
          (_QWORD *)a1 + 2);
        a1[24] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v3, (void (*)(void *, void *))a1, v4);
        return;
      case 4:
        *(_QWORD *)(a1 + 28) = 0LL;
        if ( winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ShouldTrySetThumbnail(*((RTL_SRWLOCK **)a1 + 17)) )
        {
          *((_DWORD *)a1 + 9) = 0;
          while ( 1 )
          {
            v11 = (RTL_SRWLOCK *)*((_QWORD *)a1 + 17);
            if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ShouldKeepSettingThumbnail(v11) )
              break;
            v12 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync(
                    v11,
                    a1 + 40);
            *((_QWORD *)a1 + 6) = 0LL;
            *((_QWORD *)a1 + 7) = v12;
            *((_QWORD *)a1 + 8) = 0LL;
            a1[72] = 1;
            *((_WORD *)a1 + 4) = 6;
            if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
                                    a1 + 48,
                                    a1) )
              return;
LABEL_19:
            v6 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 48);
            winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 48);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
            v7 = *((_DWORD *)a1 + 9);
            if ( v6 )
            {
              *((_QWORD *)a1 + 4) = (unsigned int)(v7 + *((_DWORD *)a1 + 8));
            }
            else
            {
              v8 = v7 + 1;
              *((_DWORD *)a1 + 9) = v8;
              v9 = *((_QWORD *)a1 + 17);
              v10 = (RTL_SRWLOCK *)(v9 + 168);
              if ( v8 >= 3 )
              {
                v13 = a1 + 32;
                *((_DWORD *)a1 + 8) += v8;
                _Platform_AcquireSRWLockExclusive(v10);
                *(_DWORD *)(v9 + 136) = 0;
                ReleaseSRWLockExclusive_0((PSRWLOCK)(v9 + 168));
                goto LABEL_30;
              }
              _Platform_AcquireSRWLockExclusive(v10);
              *(_DWORD *)(v9 + 136) = 2;
              ReleaseSRWLockExclusive_0((PSRWLOCK)(v9 + 168));
              if ( v8 > 1 )
              {
                *((_QWORD *)a1 + 10) = 0LL;
                *((_QWORD *)a1 + 11) = 0LL;
                *((_QWORD *)a1 + 12) = 10000000LL;
                *((_QWORD *)a1 + 13) = 0LL;
                *((_DWORD *)a1 + 28) = 0;
                *((_WORD *)a1 + 4) = 8;
                winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
                  a1 + 80,
                  a1);
                return;
              }
            }
LABEL_23:
            ++*((_DWORD *)a1 + 7);
          }
          v13 = a1 + 32;
LABEL_30:
          a1[121] = 1;
          WindowTabHostTelemetry::WindowTabHostThumbnailQueued<bool>(a1 + 121);
          v14 = *((_DWORD *)a1 + 7);
          if ( v14 > 1 )
          {
            *((_DWORD *)a1 + 31) = v14 - 1;
            WindowTabHostTelemetry::WindowTabHostThumbnailQueueChurn<unsigned int,unsigned int &>(a1 + 124, v13);
          }
          if ( *((_QWORD *)a1 + 2) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
          goto LABEL_34;
        }
        a1[120] = 0;
        WindowTabHostTelemetry::WindowTabHostThumbnailQueued<bool>(a1 + 120);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
LABEL_34:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x90);
        break;
      case 5:
        v5 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v5);
        goto LABEL_34;
      case 6:
        goto LABEL_19;
      case 7:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 48);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_34;
      case 8:
        winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 80));
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 80));
        goto LABEL_23;
      case 9:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 80));
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_34;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
