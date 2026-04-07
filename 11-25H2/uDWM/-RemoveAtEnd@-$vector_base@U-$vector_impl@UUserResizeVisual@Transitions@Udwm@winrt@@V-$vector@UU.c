/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXXZ @ 0x1800DECB0
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1800DEC80 (-RemoveAtEnd@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserR.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800D3F50 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$assign@AEAUUserResizeVisual@Transitions@Udwm@winrt@@@?$removed_value@UUserResizeVisual@Transitions@Udwm@winrt@@X@impl@winrt@@QEAAXAEAUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DCFE4 (--$assign@AEAUUserResizeVisual@Transitions@Udwm@winrt@@@-$removed_value@UUserResizeVisual@Transi.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DD85C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ @ 0x1800DD884 (--1-$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1800EB100 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::RemoveAtEnd(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  const struct winrt::impl::slim_source_location *v6; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-20h] BYREF

  v7[8] = 0;
  v2 = a1 + 8;
  if ( !a1 )
    v2 = 48LL;
  if ( *(_QWORD *)v2 == *(_QWORD *)(v2 + 8) )
  {
    v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v6);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1));
  v4 = v3 + 16;
  if ( !v3 )
    v4 = 56LL;
  winrt::impl::removed_value<winrt::Udwm::Transitions::UserResizeVisual,void>::assign<winrt::Udwm::Transitions::UserResizeVisual &>(
    (winrt::Udwm::Transitions::AnimationCompletedHandler *)v7,
    (__int64 *)(*(_QWORD *)v4 - 8LL));
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 56LL;
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)(*(_QWORD *)v5 - 8LL));
  *(_QWORD *)v5 -= 8LL;
  std::_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>::~_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>((winrt::Udwm::Transitions::AnimationCompletedHandler *)v7);
}
