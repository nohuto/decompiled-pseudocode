/*
 * XREFs of ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@QEAA@$$QEAV01@@Z @ 0x18054CAB8
 * Callers:
 *     ??$Make@V?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@Z @ 0x18054BE88 (--$Make@V-$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Window.c)
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@Z0II@Z @ 0x18054C104 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II@CVi.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@@Z @ 0x18054C438 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV-$ComPtr@UIVirtu.c)
 * Callees:
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
    (_QWORD *)(a1 + 8),
    (_QWORD *)(a2 + 8));
  return v2;
}
