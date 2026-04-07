/*
 * XREFs of ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DFF5C
 * Callers:
 *     ?Append@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1800DDB50 (-Append@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResize.c)
 *     ?Clear@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1800DDBC0 (-Clear@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXU?$array_view@$$CBUUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x1800DEDBC (-ReplaceAll@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUs.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::impl::collection_version::increment_version(__int64 this)
{
  std::_Atomic_integral<unsigned int,4>::operator++(this);
}
