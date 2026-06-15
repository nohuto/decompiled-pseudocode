/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800E9DE0
 * Callers:
 *     ?GetRuntimeClassName@?$implements@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@U?$IIterable@Uguid@winrt@@@7893@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800EBD80 (-GetRuntimeClassName@-$implements@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iter.c)
 *     ?GetRuntimeClassName@?$implements@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800EBDB0 (-GetRuntimeClassName@-$implements@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@wi.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1800EEC98 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 * Callees:
 *     memcpy_s_1 @ 0x1800AB1B0 (memcpy_s_1.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800EE650 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2, unsigned int a3)
{
  struct winrt::impl::shared_hstring_header *v3; // rdi
  winrt::hstring *result; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v3 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)a3, (unsigned int)a2);
    memcpy_s_1((char *)v3 + 28, 2LL * a3, a2, 2LL * a3);
  }
  result = this;
  *(_QWORD *)this = v3;
  return result;
}
