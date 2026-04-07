/*
 * XREFs of ??$found@UIUserResizeVisualNative@@@?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@QEBAPEAXXZ @ 0x18008B09C
 * Callers:
 *     ??$find_iid@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180062360 (--$find_iid@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PP.c)
 *     ??$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180086804 (--$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@.c)
 *     ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x18008C0E0 (--$find@U-$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@.c)
 *     ??$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800D68F4 (--$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@wi.c)
 *     ??$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUUserResizeVisual@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800DA0F4 (--$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PPEBUUser.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::UserResizeVisual>::found<IUserResizeVisualNative>(
        __int64 *a1)
{
  return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(*a1);
}
