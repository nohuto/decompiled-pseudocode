/*
 * XREFs of ??$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800309BC
 * Callers:
 *     ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18008D878 (--0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18003077C (--$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>(
        __int64 *a1)
{
  char *v2; // rax

  v2 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>();
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((unsigned __int64)(v2 + 16) & -(__int64)(v2 != 0LL));
  return a1;
}
