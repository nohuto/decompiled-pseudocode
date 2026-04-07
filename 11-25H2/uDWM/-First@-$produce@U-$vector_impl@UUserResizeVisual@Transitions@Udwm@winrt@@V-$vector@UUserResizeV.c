/*
 * XREFs of ?First@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DDDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x18002A4A8 (--$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_P$$QEA.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z @ 0x18002AA50 (--$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z.c)
 *     ??$make@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@PEAU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@3@@winrt@@YA?A_P$$QEAPEAU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@0@@Z @ 0x1800DD598 (--$make@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::First(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  winrt::impl::clear_abi<void>(a2);
  v4 = v3 + 8;
  v5 = 0LL;
  if ( !v3 )
    v4 = 40LL;
  if ( v4 )
    v5 = v4 - 40;
  v8 = v5;
  winrt::make<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base> *>(
    &v7,
    (const struct std::nothrow_t *)&v8);
  *a2 = winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>(&v7);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v7);
  return 0LL;
}
