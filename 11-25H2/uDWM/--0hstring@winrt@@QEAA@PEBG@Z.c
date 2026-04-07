/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180095648
 * Callers:
 *     ?GetRuntimeClassName@?$AnimatedTransitionVisualWrapper_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@implementation@Transitions@Udwm@winrt@@UEBA?AUhstring@5@XZ @ 0x1800D3AE0 (-GetRuntimeClassName@-$AnimatedTransitionVisualWrapper_base@UAnimatedTransitionVisualWrapper@imp.c)
 *     ?GetRuntimeClassName@?$ScreenRotationTransition_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@implementation@Private@Transitions@Udwm@winrt@@UEBA?AUhstring@6@XZ @ 0x1800D5F70 (-GetRuntimeClassName@-$ScreenRotationTransition_base@UScreenRotationTransition@implementation@Pr.c)
 *     ?GetRuntimeClassName@?$WindowMoveResizeCrossfadeTransition_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@implementation@Private@Transitions@Udwm@winrt@@UEBA?AUhstring@6@XZ @ 0x1800D8F60 (-GetRuntimeClassName@-$WindowMoveResizeCrossfadeTransition_base@UWindowMoveResizeCrossfadeTransi.c)
 *     ?GetRuntimeClassName@?$WindowJointResizeTransition_base@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UIBitmapManager@@@implementation@Private@Transitions@Udwm@winrt@@UEBA?AUhstring@6@XZ @ 0x1800DA170 (-GetRuntimeClassName@-$WindowJointResizeTransition_base@UWindowJointResizeTransition@implementat.c)
 *     ?GetRuntimeClassName@?$TopLevelWindow3DWrapper_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@implementation@Transitions@Udwm@winrt@@UEBA?AUhstring@5@XZ @ 0x1800DB600 (-GetRuntimeClassName@-$TopLevelWindow3DWrapper_base@UTopLevelWindow3DWrapper@implementation@Tran.c)
 *     ?GetRuntimeClassName@?$TransitionState_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@implementation@Transitions@Udwm@winrt@@UEBA?AUhstring@5@XZ @ 0x1800DBF90 (-GetRuntimeClassName@-$TransitionState_base@UTransitionState@implementation@Transitions@Udwm@win.c)
 *     ?GetRuntimeClassName@?$UserResizeVisual_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@implementation@Transitions@Udwm@winrt@@UEBA?AUhstring@5@XZ @ 0x1800DE4C0 (-GetRuntimeClassName@-$UserResizeVisual_base@UUserResizeVisual@implementation@Transitions@Udwm@w.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x180095678 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2)
{
  __int64 v3; // r8

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  winrt::hstring::hstring(this, a2, v3);
  return this;
}
