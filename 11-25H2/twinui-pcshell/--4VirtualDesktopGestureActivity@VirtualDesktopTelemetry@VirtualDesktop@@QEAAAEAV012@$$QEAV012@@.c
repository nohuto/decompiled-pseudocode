/*
 * XREFs of ??4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x180538DD0
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x18053F100 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18053F1F0 (-StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1801587C8 (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180514F1C (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18052DEF0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 */

_QWORD *__fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::operator=(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD v5[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v5);
  return a1;
}
