/*
 * XREFs of ?get_IsWallpaperViewExisted@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800DFE00
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@_N@impl@winrt@@YA?A_P$$QEA_N@Z @ 0x18009532C (--$detach_from@_N@impl@winrt@@YA-A_P$$QEA_N@Z.c)
 *     ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800DE998 (-IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::get_IsWallpaperViewExisted(
        winrt::Udwm::Transitions::implementation::TransitionState *a1,
        char *a2)
{
  winrt::Udwm::Transitions::implementation::TransitionState *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  LOBYTE(v4) = winrt::Udwm::Transitions::implementation::TransitionState::IsWallpaperViewExisted(a1);
  *a2 = winrt::impl::detach_from<bool>((__int64)&v4);
  return 0LL;
}
