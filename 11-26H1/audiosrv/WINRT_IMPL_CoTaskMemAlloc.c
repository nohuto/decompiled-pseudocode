/*
 * XREFs of WINRT_IMPL_CoTaskMemAlloc @ 0x1800B37C4
 * Callers:
 *     ?NonDelegatingGetIids@?$root_implements@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@U?$IIterable@Uguid@winrt@@@7893@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800EC13C (-NonDelegatingGetIids@-$root_implements@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_cons.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall WINRT_IMPL_CoTaskMemAlloc(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
