/*
 * XREFs of TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180596610
 * Callers:
 *     ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180596724 (-NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801DAB0C (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801F09FC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?NotifyGripperDismissed@TouchEdgeGestureTelemetry@@SAXXZ @ 0x1805965D8 (-NotifyGripperDismissed@TouchEdgeGestureTelemetry@@SAXXZ.c)
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
        v1 = *(_QWORD *)(a1 + 56);
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
        if ( !*(_BYTE *)(a1 + 64) )
          std::_Func_class<void,>::operator()(*(_QWORD *)(a1 + 56) + 168LL);
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 16));
        goto LABEL_9;
      case 5:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 16));
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
