/*
 * XREFs of ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x18002F698
 * Callers:
 *     ?Release@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18002EE60 (-Release@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transition.c)
 *     ?Release@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@QEAAIXZ @ 0x18002EF2C (-Release@-$root_implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UU.c)
 *     ?Release@?$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18002F090 (-Release@-$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?Release@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x18002F170 (-Release@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitio.c)
 *     ?Release@?$root_implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationTransition@3456@@impl@winrt@@QEAAIXZ @ 0x18002F380 (-Release@-$root_implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@win.c)
 *     ?Release@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18002F4F0 (-Release@-$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAKXZ @ 0x18002FEC0 (-Release@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransition.c)
 *     ?Release@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAKXZ @ 0x1800863F0 (-Release@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18002F670 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 */

_QWORD *std::_Atomic_storage<unsigned __int64,8>::store()
{
  __int64 v0; // r8
  _QWORD *result; // rax
  __int64 v2; // rdx
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 1LL;
  std::_Atomic_reinterpret_as<__int64,unsigned __int64>((__int64)v3);
  result = (_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v0);
  *result = v2;
  return result;
}
