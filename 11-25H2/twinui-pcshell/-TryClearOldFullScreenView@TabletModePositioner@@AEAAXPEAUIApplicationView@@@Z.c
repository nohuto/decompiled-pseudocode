/*
 * XREFs of ?TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FBE88
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1804F8DC0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FC390 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F7B54 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

void __fastcall TabletModePositioner::TryClearOldFullScreenView(TabletModePositioner *this, struct IUnknown *a2)
{
  if ( TabletModePositioner::IsOldFullScreenView(this, a2) )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 34);
}
