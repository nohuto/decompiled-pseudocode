/*
 * XREFs of TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x1805962D0
 * Callers:
 *     ?HideGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180596428 (-HideGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801DAB0C (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$HideGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18059547C (--$HideGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ?DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18059613C (-DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180596C78 (-StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGripperHost::HideGripperAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // r8
  __int64 v3; // rsi

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_8;
      case 2:
        TouchEdgeGestureTelemetry::HideGripper<bool &>((unsigned __int8 *)(a1 + 80));
        winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::get_strong(
          *(_QWORD *)(a1 + 72),
          (__int64 *)(a1 + 16));
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v1, (void (*)(void *, void *))a1, v2);
        return;
      case 4:
        v3 = *(_QWORD *)(a1 + 72);
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 32), (RTL_SRWLOCK *)(v3 + 232));
        TouchEdgeGripperHost::StopDismissTimer(v3);
        *(_DWORD *)(v3 + 28) = 0;
        *(_QWORD *)(a1 + 40) = 0LL;
        winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)(v3 + 48), (__int64 *)(a1 + 40));
        if ( *(_QWORD *)(a1 + 40) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 40));
        TouchEdgeGripperHost::DismissGripperWindowAsync(
          (void (__fastcall *)(__int64))v3,
          (_BYTE *)(a1 + 48),
          *(_BYTE *)(a1 + 80));
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 32));
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 16));
        goto LABEL_8;
      case 5:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 16));
LABEL_8:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x60);
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
