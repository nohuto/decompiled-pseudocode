/*
 * XREFs of ?set_strong@?$weak_ref@$00$00@impl@winrt@@QEAAXI@Z @ 0x180086C64
 * Callers:
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180030AC4 (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?make_weak_ref@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008DC0C (-make_weak_ref@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::set_strong(__int64 a1)
{
  return std::atomic<unsigned int>::operator=(a1 + 24);
}
