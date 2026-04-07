/*
 * XREFs of ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18006D22C
 * Callers:
 *     ?get_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18006D140 (-get_BeginRect@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 *     ?GetAbsoluteWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18006D190 (-GetAbsoluteWindowRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 *     ?GetMaximizeSnapStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18006D1E0 (-GetMaximizeSnapStartRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@win.c)
 *     ?get_EndClip@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800D1460 (-get_EndClip@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U.c)
 *     ?get_EndRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800D14B0 (-get_EndRect@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U.c)
 *     ?AdjustSnapUIArrangementStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAU4563@@Z @ 0x1800D8340 (-AdjustSnapUIArrangementStartRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@.c)
 *     ?get_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800DDE00 (-get_Rect@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@.c)
 * Callees:
 *     ??$detach_abi@URect@Foundation@Windows@winrt@@$0A@@winrt@@YA?A_P$$QEAURect@Foundation@Windows@0@@Z @ 0x18006D304 (--$detach_abi@URect@Foundation@Windows@winrt@@$0A@@winrt@@YA-A_P$$QEAURect@Foundation@Windows@0@.c)
 */

__int64 winrt::impl::detach_from<winrt::Windows::Foundation::Rect>()
{
  __int64 v0; // rcx

  winrt::detach_abi<winrt::Windows::Foundation::Rect,0>();
  return v0;
}
