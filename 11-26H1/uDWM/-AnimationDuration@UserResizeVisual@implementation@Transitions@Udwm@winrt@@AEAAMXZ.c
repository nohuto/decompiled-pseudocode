/*
 * XREFs of ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800DD6C0
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800DD8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800DDA1C (-StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 */

float __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration(
        CTopLevelWindow3D **this)
{
  if ( CTopLevelWindow3D::ShouldShowTransition(this[8]) )
    return FLOAT_0_30000001;
  else
    return 0.0;
}
