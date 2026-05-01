/*
 * XREFs of ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@QEAA@$$QEAV01@@Z @ 0x180529A20
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1800A2D44 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$C.c)
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x18029804C (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHS.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_2e2fc3472f23404d9698fd55902d938b_@@@Z @ 0x180528EF8 (--$Make@V-$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Window.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdx

  *a1 = *a2;
  *a2 = 0LL;
  v2 = a2 + 1;
  a1[1] = 0LL;
  if ( a1 + 1 != v2 )
  {
    a1[1] = *v2;
    *v2 = 0LL;
  }
  return a1;
}
