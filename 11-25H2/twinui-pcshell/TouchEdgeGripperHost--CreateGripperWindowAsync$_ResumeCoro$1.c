/*
 * XREFs of TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_InitCoro$2 @ 0x180571F98 (TouchEdgeGripperHost--CreateGripperWindowAsync$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180099708 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FB0A0 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800FC2CC (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C872C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1802923F0 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1802BD8B0 (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180331794 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803318B8 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180459DA4 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     winrt::impl::create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_&_IImmersiveMonitor___bool_&__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___ @ 0x180571D60 (winrt--impl--create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_-_IImmersive.c)
 *     ?CreateGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180571F6C (-CreateGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180573068 (-NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?StartDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180573584 (-StartDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805738F0 (-await_suspend@awaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4.c)
 *     ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x180576808 (-DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x180577628 (-StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1(__int64 a1)
{
  __int64 weak_ref; // rax
  int v2; // eax
  __int64 v3; // rcx
  void *v4; // r8
  RTL_SRWLOCK *v5; // rdi
  PVOID Ptr; // rdi
  __int64 v7; // rbx
  void *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  char v16; // di
  __int64 v17; // r8
  _BYTE pExceptionObject[128]; // [rsp+48h] [rbp-B0h] BYREF

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_34;
      case 2:
        *(_DWORD *)(a1 + 268) = 0;
        TouchEdgeGestureTelemetry::CreateGripperWindow(a1);
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(*(volatile signed __int64 **)(a1 + 321));
        if ( !weak_ref )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
          throw (std::bad_alloc *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 272) = weak_ref;
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_DWORD *)(a1 + 268) = 2;
        *(_DWORD *)(a1 + 280) = 0;
        *(_QWORD *)(a1 + 288) = 0LL;
        *(_QWORD *)(a1 + 296) = 0LL;
        v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)weak_ref + 24LL))(weak_ref);
        winrt::check_hresult((int *)(a1 + 304), v2, a1 + 280);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 272));
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v3, (void (*)(void *, void *))a1, v4);
        return;
      case 4:
        winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 32));
        if ( !*(_QWORD *)(a1 + 32) )
          goto LABEL_32;
        v5 = *(RTL_SRWLOCK **)(a1 + 321);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 40), v5 + 29);
        Ptr = v5[4].Ptr;
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
LABEL_15:
        winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 48));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 48));
        v7 = *(_QWORD *)(a1 + 321);
        if ( *(_BYTE *)(v7 + 24) )
        {
          *(_QWORD *)(a1 + 104) = v7 + 72;
          *(_DWORD *)(a1 + 112) = 0;
          *(_BYTE *)(a1 + 116) = 0;
          *(_WORD *)(a1 + 8) = 8;
          if ( (unsigned __int8)`winrt::resume_foreground'::`2'::awaitable::await_suspend(a1 + 104, a1) )
            return;
LABEL_24:
          TouchEdgeGestureTelemetry::WatchCurrentThread(
            a1 + 128,
            (__int64)"TouchEdgeGripperHost::CreateGripperWindowAsync");
          v14 = *(_QWORD *)(a1 + 321);
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 208), (RTL_SRWLOCK *)(v14 + 232));
          v15 = *(_QWORD *)(v14 + 56);
          if ( v15 )
          {
            v16 = *(_BYTE *)(v15 + 160);
            if ( *(_QWORD *)(v15 + 120) )
              TouchEdgeGripperWindow::StartDismissAnimation((TouchEdgeGripperWindow *)v15);
            else
              TouchEdgeGripperWindow::DestroyXamlWindow((TouchEdgeGripperWindow *)v15);
            LOBYTE(v17) = v16;
            TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v14, a1 + 216, v17);
          }
          *(_QWORD *)(a1 + 224) = v14;
          *(_QWORD *)(a1 + 232) = *(_QWORD *)(v14 + 48);
          *(_QWORD *)(a1 + 240) = winrt::impl::create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___(
                                    (unsigned int *)(v14 + 28),
                                    (_QWORD *)(a1 + 232),
                                    (_BYTE *)(a1 + 329),
                                    (_QWORD *)(a1 + 224));
          winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
            (_QWORD **)(v14 + 56),
            (_QWORD *)(a1 + 240));
          if ( *(_QWORD *)(a1 + 240) )
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)(a1 + 240));
          *(_OWORD *)(v14 + 240) = *(_OWORD *)(*(_QWORD *)(v14 + 56) + 104LL);
          TouchEdgeGripperHost::StartDismissTimer(v14);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 208));
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 128));
        }
        else
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 248), (RTL_SRWLOCK *)(v7 + 232));
          *(_DWORD *)(v7 + 28) = 0;
          *(_QWORD *)(a1 + 256) = 0LL;
          winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(
            (__int64 *)(v7 + 48),
            (__int64 *)(a1 + 256));
          if ( *(_QWORD *)(a1 + 256) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 256));
          wil::details::ResetEvent(*(wil::details **)(v7 + 32), v8);
          LOBYTE(v9) = *(_BYTE *)(a1 + 329);
          TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v7, a1 + 264, v9);
          MicrosoftTelemetryAssertTriggeredNoArgs(v11, v10, v12, v13);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 248));
        }
LABEL_32:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 32));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_34:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x160);
        break;
      case 5:
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_34;
      case 6:
        goto LABEL_15;
      case 7:
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 48));
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 32));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_34;
      case 8:
        goto LABEL_24;
      case 9:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 32));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_34;
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
