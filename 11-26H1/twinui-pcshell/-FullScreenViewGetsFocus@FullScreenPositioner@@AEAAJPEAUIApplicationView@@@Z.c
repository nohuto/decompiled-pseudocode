/*
 * XREFs of ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180320148
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180048370 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18031FB50 (-ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?HandleSwitchToView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180320800 (-HandleSwitchToView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ShowFullScreenView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180321800 (-ShowFullScreenView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180048DA8 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803209CC (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180321648 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::FullScreenViewGetsFocus(FullScreenPositioner *this, struct IUnknown *a2)
{
  struct IImmersiveMonitor *v4; // r8
  struct IUnknown *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  FullScreenPositioner::PositionView(this, a2, 1LL);
  if ( ApplicationViewHelpers::IsViewOnMonitor(
         (ApplicationViewHelpers *)a2,
         *((struct IApplicationView **)this + 27),
         v4) )
  {
    v5 = (struct IUnknown *)*((_QWORD *)this + 28);
    if ( v5 )
    {
      if ( !SHIsSameObject(v5, a2)
        && !FullScreenPositioner::IsLightweightFullScreen(this, *((struct IApplicationView **)this + 28)) )
      {
        FullScreenPositioner::PositionView(this, *((_QWORD *)this + 28), 2LL);
      }
    }
  }
  v6 = FullScreenPositioner::SetVisibleView(this, (struct IApplicationView *)a2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41B,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v6);
  return 0LL;
}
