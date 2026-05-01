/*
 * XREFs of TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180572F60
 * Callers:
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_InitCoro$2 @ 0x180572EF4 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_InitCoro$2.c)
 * Callees:
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801ED2D4 (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801FB3CC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1802923F0 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?NotifyGripperDismissed@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180572EC8 (-NotifyGripperDismissed@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_9;
      case 2:
        TouchEdgeGestureTelemetry::NotifyGripperDismissed(a1);
        v1 = *(_QWORD *)(a1 + 49);
        winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::get_strong(
          v1,
          (__int64 *)(a1 + 16));
        *(_QWORD *)(a1 + 24) = v1 + 88;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 24), (void (*)(void *, void *))a1) )
          return;
        goto LABEL_6;
      case 4:
LABEL_6:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 24));
        if ( !*(_BYTE *)(a1 + 57) )
          std::_Func_class<void,>::operator()(*(_QWORD *)(a1 + 49) + 168LL);
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 16));
        goto LABEL_9;
      case 5:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 16));
LABEL_9:
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
