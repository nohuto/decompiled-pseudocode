/*
 * XREFs of ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800DFBDC
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@3@XZ @ 0x1800DDD18 (-Current@iterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 *     ?GetMany@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@3@@Z @ 0x1800DE2D8 (-GetMany@iterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 *     ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800DEA50 (-MoveNext@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@.c)
 *     ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800DFD50 (-get_HasCurrent@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800D3F50 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_changed_state@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DD7FC (--0hresult_changed_state@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800EB100 (_CxxThrowException_0.c)
 */

void __fastcall winrt::impl::collection_version::iterator_type::check_version(
        winrt::impl::collection_version::iterator_type *this,
        const struct winrt::impl::collection_version *a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r8
  const struct winrt::impl::slim_source_location *v4; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[32]; // [rsp+38h] [rbp-20h] BYREF

  v2 = (_DWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
  if ( *v2 != *v3 )
  {
    v4 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v6);
    winrt::hresult_changed_state::hresult_changed_state((winrt::hresult_changed_state *)pExceptionObject, v4);
    throw (winrt::hresult_changed_state *)pExceptionObject;
  }
}
