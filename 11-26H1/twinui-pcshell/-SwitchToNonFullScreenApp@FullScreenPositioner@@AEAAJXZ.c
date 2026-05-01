/*
 * XREFs of ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1801D6C40
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180048370 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?HideFullScreenView@FullScreenPositioner@@UEAAJXZ @ 0x180320880 (-HideFullScreenView@FullScreenPositioner@@UEAAJXZ.c)
 * Callees:
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803209CC (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180321648 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::SwitchToNonFullScreenApp(FullScreenPositioner *this)
{
  struct IApplicationView *v1; // rdx

  v1 = (struct IApplicationView *)*((_QWORD *)this + 28);
  if ( v1 )
  {
    if ( !FullScreenPositioner::IsLightweightFullScreen(this, v1) )
      FullScreenPositioner::PositionView(this, *((_QWORD *)this + 28), 2LL);
    FullScreenPositioner::SetVisibleView(this, 0LL);
  }
  return 0LL;
}
