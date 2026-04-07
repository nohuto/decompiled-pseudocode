/*
 * XREFs of ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18002EC80
 * Callers:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18002EE28 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?Release@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18002EE60 (-Release@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transition.c)
 *     ?Release@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@QEAAIXZ @ 0x18002EF2C (-Release@-$root_implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UU.c)
 *     ?subtract_final_reference@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAIXZ @ 0x18002EFF8 (-subtract_final_reference@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResize.c)
 *     ?Release@?$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18002F090 (-Release@-$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?Release@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x18002F170 (-Release@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitio.c)
 *     ?subtract_final_reference@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x18002F240 (-subtract_final_reference@-$root_implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@wi.c)
 *     ?Release@?$root_implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationTransition@3456@@impl@winrt@@QEAAIXZ @ 0x18002F380 (-Release@-$root_implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@win.c)
 *     ?Release@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18002F4F0 (-Release@-$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180086C4C (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18002FBE8 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Release(void *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a1 + 28));
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete(a1, 0x20uLL);
  }
  return v2;
}
