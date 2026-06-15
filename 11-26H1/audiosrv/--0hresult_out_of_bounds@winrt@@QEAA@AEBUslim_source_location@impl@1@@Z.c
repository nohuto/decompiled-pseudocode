/*
 * XREFs of ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9D1C
 * Callers:
 *     ?GetAt@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUguid@3@@Z @ 0x1800EB8E0 (-GetAt@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector_v.c)
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x1800EDF90 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Ve.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E99C4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_out_of_bounds *__fastcall winrt::hresult_out_of_bounds::hresult_out_of_bounds(
        winrt::hresult_out_of_bounds *this,
        const struct winrt::impl::slim_source_location *a2)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_out_of_bounds);
  return this;
}
