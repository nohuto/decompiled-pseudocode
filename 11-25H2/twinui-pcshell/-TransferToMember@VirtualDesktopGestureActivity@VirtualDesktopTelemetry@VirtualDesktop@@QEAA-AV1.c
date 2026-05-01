/*
 * XREFs of ?TransferToMember@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA?AV123@XZ @ 0x18053F7A8
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x18053F100 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18053F1F0 (-StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18052DF24 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef_ea_18052DF24.c)
 */

struct wil::details::IFailureCallback *__fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::TransferToMember(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    0);
  *(_QWORD *)a2 = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::`vftable';
  return a2;
}
