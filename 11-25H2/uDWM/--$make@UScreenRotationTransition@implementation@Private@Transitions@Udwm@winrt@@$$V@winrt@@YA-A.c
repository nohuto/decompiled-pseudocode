/*
 * XREFs of ??$make@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800945AC
 * Callers:
 *     ??0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18009458C (--0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x180094618 (--$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>(
        __int64 *a1)
{
  __int64 v2; // rax

  v2 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>();
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v2 + 16) & -(__int64)(v2 != 0));
  return a1;
}
