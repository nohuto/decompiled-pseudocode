/*
 * XREFs of ??0?$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x180030724
 * Callers:
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180030AC4 (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?make_weak_ref@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008DC0C (-make_weak_ref@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??0?$atomic@I@std@@QEAA@I@Z @ 0x18008C47C (--0-$atomic@I@std@@QEAA@I@Z.c)
 */

__int64 winrt::impl::weak_ref<1,1>::weak_ref<1,1>()
{
  _QWORD *v0; // r9
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r9

  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  v0[1] = &winrt::impl::weak_source<1,1>::`vftable';
  v0[2] = v1;
  *v0 = &winrt::impl::weak_ref<1,1>::`vftable';
  std::atomic<unsigned int>::atomic<unsigned int>(v0 + 3, v2);
  std::atomic<unsigned int>::atomic<unsigned int>(v3 + 28, 1LL);
  return v4;
}
