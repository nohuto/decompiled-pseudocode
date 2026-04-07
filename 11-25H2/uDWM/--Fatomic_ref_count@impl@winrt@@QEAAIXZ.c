/*
 * XREFs of ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180062DA0
 * Callers:
 *     ??1?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@MEAA@XZ @ 0x180033DA4 (--1-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udw.c)
 *     ??1?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@MEAA@XZ @ 0x180033DC4 (--1-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x180033EF0 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009974C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::_implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___ @ 0x180099E44 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandle_ea_180099E44.c)
 *     ??1?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEAA@XZ @ 0x18009A3E0 (--1-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITra.c)
 *     ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800D3E30 (-Release@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800D91C4 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::_implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___ @ 0x1800D9DB4 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_8_ea_1800D9DB4.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall winrt::impl::atomic_ref_count::operator--(__int64 a1)
{
  signed __int32 v1; // ecx
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd(
         (volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1),
         0xFFFFFFFF);
  result = (unsigned int)(v1 - 1);
  if ( v1 != 1 && (int)result < 0 )
    abort();
  return result;
}
