/*
 * XREFs of ?RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ @ 0x180273EF8
 * Callers:
 *     ?ResetNotificationBoundary@WindowDragInputProvider@@QEAAXXZ @ 0x1801D54AC (-ResetNotificationBoundary@WindowDragInputProvider@@QEAAXXZ.c)
 *     ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x1805904A0 (-OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?HasThreadAccess@?$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802719B4 (-HasThreadAccess@-$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winr.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RegisterForCustomDockTargetMessages@WindowDragInputProviderTelemetry@@SAXXZ @ 0x1802CF1CC (-RegisterForCustomDockTargetMessages@WindowDragInputProviderTelemetry@@SAXXZ.c)
 */

void __fastcall WindowDragInputProvider::RegisterForCustomDockTargetMessages(WindowDragInputProvider *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !winrt::impl::consume_Windows_System_IDispatcherQueue2<winrt::Windows::System::DispatcherQueue>::HasThreadAccess((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 6) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x94,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      v2);
  if ( !*((_QWORD *)this + 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x98,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      v2);
  WindowDragInputProviderTelemetry::RegisterForCustomDockTargetMessages();
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 56LL))(
    *((_QWORD *)this + 4),
    *((_QWORD *)this + 3));
}
