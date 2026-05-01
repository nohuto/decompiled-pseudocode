/*
 * XREFs of ?TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18051DDD8
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18051AB50 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18051E2F8 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180519334 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

void __fastcall TabletModePositioner::TryClearOldFullScreenView(TabletModePositioner *this, struct IUnknown *a2)
{
  if ( TabletModePositioner::IsOldFullScreenView(this, a2) )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 34);
}
