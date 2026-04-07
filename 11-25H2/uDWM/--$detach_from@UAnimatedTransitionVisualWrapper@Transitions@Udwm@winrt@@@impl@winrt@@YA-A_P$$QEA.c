/*
 * XREFs of ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x18002A4A8
 * Callers:
 *     ?CreateSnapshotVisual@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x18002A420 (-CreateSnapshotVisual@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransi.c)
 *     ?TransferTransitionVisualAndAnimationEngine@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18002B3B0 (-TransferTransitionVisualAndAnimationEngine@-$produce@UTransitionState@implementation@Transition.c)
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18009061C (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?get_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DB750 (-get_AnimationComplete@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 *     ?First@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DDDA0 (-First@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 *     ?GetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1800DDE10 (-GetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 *     ?GetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1800DDE70 (-GetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector_ea_1800DDE70.c)
 *     ?GetView@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DE5F0 (-GetView@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResiz.c)
 *     ?TransferJointResizeVisuals@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DEF70 (-TransferJointResizeVisuals@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UI.c)
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DFCE0 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Ud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  return result;
}
