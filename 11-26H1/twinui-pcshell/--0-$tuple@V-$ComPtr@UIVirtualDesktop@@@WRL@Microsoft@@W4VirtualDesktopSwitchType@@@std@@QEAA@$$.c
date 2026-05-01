/*
 * XREFs of ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$QEAV01@@Z @ 0x18054CB18
 * Callers:
 *     ??$Make@V?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Z @ 0x18054BF34 (--$Make@V-$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Window.c)
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z01@Z @ 0x18054C238 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4Virt.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W43@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@Z @ 0x18054C6B8 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 * Callees:
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8

  *(_DWORD *)a1 = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
    (_QWORD *)(a1 + 8),
    (_QWORD *)(a2 + 8));
  return v2;
}
