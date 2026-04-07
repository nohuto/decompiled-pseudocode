/*
 * XREFs of ??$is_guid_of@UITransitionAnimationVisualNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800623E4
 * Callers:
 *     ??$find_iid@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180062360 (--$find_iid@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PP.c)
 *     ??$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180086804 (--$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<ITransitionAnimationVisualNative>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<ITransitionAnimationVisualNative>;
  if ( *a1 == winrt::impl::guid_v<ITransitionAnimationVisualNative> )
    v1 = a1[1] - 0x73F63BA0C2CDDDB6LL;
  return v1 == 0;
}
