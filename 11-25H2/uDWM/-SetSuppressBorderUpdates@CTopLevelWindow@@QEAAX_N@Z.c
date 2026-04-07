/*
 * XREFs of ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x18002B510
 * Callers:
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x18002B410 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180079590 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z @ 0x180081CC4 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::SetSuppressBorderUpdates(CTopLevelWindow *this, char a2)
{
  if ( *((_BYTE *)this + 832) != a2 )
  {
    *((_BYTE *)this + 832) = a2;
    if ( !a2 )
      CVisual::SetDirtyFlags(this, 0x100000);
  }
}
