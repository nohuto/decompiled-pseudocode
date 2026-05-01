/*
 * XREFs of TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180595910
 * Callers:
 *     ?CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595D1C (-CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800B6104 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800C89D8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801CCA48 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1802B48B0 (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x1803307EC (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x180330924 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180465FC0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     winrt::impl::create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_&_IImmersiveMonitor___bool_&__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___ @ 0x1805956D4 (winrt--impl--create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_-_IImmersive.c)
 *     ?CreateGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ @ 0x1805958DC (-CreateGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180596724 (-NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?StartDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180596B9C (-StartDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180596F00 (-await_suspend@awaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4.c)
 *     ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x180599F54 (-DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18059AE24 (-StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806851D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // r8
  __int64 *v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  PVOID Ptr; // rbx
  __int64 v6; // rbx
  void *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // di
  __int64 v14; // r8

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_32;
      case 2:
        TouchEdgeGestureTelemetry::CreateGripperWindow(a1);
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          *(_QWORD *)(a1 + 280),
          (_QWORD *)(a1 + 16));
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v1, (void (*)(void *, void *))a1, v2);
        return;
      case 4:
        v3 = (__int64 *)(a1 + 16);
        winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 32));
        if ( !*(_QWORD *)(a1 + 32) )
          goto LABEL_30;
        v4 = *(RTL_SRWLOCK **)(a1 + 280);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 40), v4 + 29);
        Ptr = v4[4].Ptr;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 40));
        *(_QWORD *)(a1 + 48) = 0LL;
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_QWORD *)(a1 + 72) = Ptr;
        *(_DWORD *)(a1 + 80) = 0;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_DWORD *)(a1 + 96) = 0;
        if ( !winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 48)) )
        {
          *(_WORD *)(a1 + 8) = 6;
          winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
            (winrt::impl::signal_awaiter *)(a1 + 48),
            a1);
          return;
        }
LABEL_13:
        winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 48));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 48));
        v6 = *(_QWORD *)(a1 + 280);
        if ( *(_BYTE *)(v6 + 24) )
        {
          *(_QWORD *)(a1 + 104) = v6 + 72;
          *(_DWORD *)(a1 + 112) = 0;
          *(_BYTE *)(a1 + 116) = 0;
          *(_WORD *)(a1 + 8) = 8;
          if ( (unsigned __int8)`winrt::resume_foreground'::`2'::awaitable::await_suspend(a1 + 104, a1) )
            return;
LABEL_22:
          TouchEdgeGestureTelemetry::WatchCurrentThread(
            a1 + 128,
            (__int64)"TouchEdgeGripperHost::CreateGripperWindowAsync");
          v11 = *(_QWORD *)(a1 + 280);
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 208), (RTL_SRWLOCK *)(v11 + 232));
          v12 = *(_QWORD *)(v11 + 56);
          if ( v12 )
          {
            v13 = *(_BYTE *)(v12 + 160);
            if ( *(_QWORD *)(v12 + 120) )
              TouchEdgeGripperWindow::StartDismissAnimation((TouchEdgeGripperWindow *)v12);
            else
              TouchEdgeGripperWindow::DestroyXamlWindow((TouchEdgeGripperWindow *)v12);
            LOBYTE(v14) = v13;
            TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v11, a1 + 216, v14);
          }
          *(_QWORD *)(a1 + 224) = v11;
          *(_QWORD *)(a1 + 232) = *(_QWORD *)(v11 + 48);
          v3 = (__int64 *)(a1 + 16);
          *(_QWORD *)(a1 + 240) = winrt::impl::create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___(
                                    (unsigned int *)(v11 + 28),
                                    (_QWORD *)(a1 + 232),
                                    (_BYTE *)(a1 + 288),
                                    (_QWORD *)(a1 + 224));
          winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
            (_QWORD **)(v11 + 56),
            (_QWORD *)(a1 + 240));
          if ( *(_QWORD *)(a1 + 240) )
            winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)(a1 + 240));
          *(_OWORD *)(v11 + 240) = *(_OWORD *)(*(_QWORD *)(v11 + 56) + 104LL);
          TouchEdgeGripperHost::StartDismissTimer(v11);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 208));
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 128));
        }
        else
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 248), (RTL_SRWLOCK *)(v6 + 232));
          *(_DWORD *)(v6 + 28) = 0;
          *(_QWORD *)(a1 + 256) = 0LL;
          winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(
            (__int64 *)(v6 + 48),
            (__int64 *)(a1 + 256));
          if ( *(_QWORD *)(a1 + 256) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 256));
          wil::details::ResetEvent(*(wil::details **)(v6 + 32), v7);
          v3 = (__int64 *)(a1 + 16);
          LOBYTE(v8) = *(_BYTE *)(a1 + 288);
          TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v6, a1 + 264, v8);
          MicrosoftTelemetryAssertTriggeredNoArgs(v10, v9);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 248));
        }
LABEL_30:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 32));
        if ( *v3 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3);
LABEL_32:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x130);
        break;
      case 5:
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_32;
      case 6:
        goto LABEL_13;
      case 7:
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 48));
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 32));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_32;
      case 8:
        goto LABEL_22;
      case 9:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 32));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_32;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
