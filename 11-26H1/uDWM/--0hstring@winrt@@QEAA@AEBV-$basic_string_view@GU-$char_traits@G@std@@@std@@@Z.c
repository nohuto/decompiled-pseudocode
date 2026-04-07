/*
 * XREFs of ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087994
 * Callers:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180087958 (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?GetRuntimeClassName@?$implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800DB370 (-GetRuntimeClassName@-$implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 *     ?GetRuntimeClassName@?$implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800DB3B0 (-GetRuntimeClassName@-$implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Tra.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800879BC (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *a1, __int64 a2)
{
  winrt::hstring::hstring(a1, *(const unsigned __int16 **)a2, *(_DWORD *)(a2 + 8));
  return a1;
}
