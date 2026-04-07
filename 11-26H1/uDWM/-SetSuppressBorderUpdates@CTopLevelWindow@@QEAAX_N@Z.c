/*
 * XREFs of ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800416AC
 * Callers:
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z @ 0x18003FE24 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180040124 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x180041750 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E64 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CTopLevelWindow::SetSuppressBorderUpdates(CTopLevelWindow *this, char a2)
{
  int *v2; // rax
  CVisual *v3; // r8
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 792) != a2 )
  {
    *((_BYTE *)this + 792) = a2;
    if ( !a2 )
    {
      v2 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BB__00__YA_AVDirtyFlags__XZ(&v4);
      CVisual::SetDirtyFlags(v3, *v2);
    }
  }
}
