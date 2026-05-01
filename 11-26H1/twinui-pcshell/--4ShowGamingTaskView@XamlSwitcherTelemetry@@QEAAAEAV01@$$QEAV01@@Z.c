/*
 * XREFs of ??4ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806A0B38
 * Callers:
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A2870 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18069FCD8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_18069FCD8.c)
 *     ??1ShowGamingTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1806A08A8 (--1ShowGamingTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806A0A38 (--4-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 */

__int64 __fastcall XamlSwitcherTelemetry::ShowGamingTaskView::operator=(__int64 a1, __int64 a2)
{
  _QWORD v5[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    a1,
    *(_DWORD *)(a1 + 312) != 0);
  v5[0] = &XamlSwitcherTelemetry::ShowGamingTaskView::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=((_QWORD *)a1, a2);
  XamlSwitcherTelemetry::ShowGamingTaskView::~ShowGamingTaskView((XamlSwitcherTelemetry::ShowGamingTaskView *)v5);
  return a1;
}
