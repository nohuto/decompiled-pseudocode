/*
 * XREFs of TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x1805967D0
 * Callers:
 *     ?NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@IUPoint@Foundation@Windows@3@@Z @ 0x1805968E4 (-NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@IUPoint@Foundatio.c)
 * Callees:
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801DAB0C (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802BF7A8 (--R-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?NotifyGripperPressed@TouchEdgeGestureTelemetry@@SAXXZ @ 0x1805967A0 (-NotifyGripperPressed@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGripperHost::NotifyGripperPressedAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_7;
      case 2:
        TouchEdgeGestureTelemetry::NotifyGripperPressed(a1);
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
        std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(
          *(_QWORD *)(a1 + 56) + 104LL,
          *(_DWORD *)(a1 + 64));
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 16));
        goto LABEL_7;
      case 5:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD *)(a1 + 16));
LABEL_7:
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
