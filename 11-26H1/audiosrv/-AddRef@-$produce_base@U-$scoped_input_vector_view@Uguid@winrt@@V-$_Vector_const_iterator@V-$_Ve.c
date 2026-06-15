/*
 * XREFs of ?AddRef@?$produce_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IIterable@Uguid@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x1800EB4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // rdx

  v1 = a1 - 16;
  if ( !a1 )
    v1 = 8LL;
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v1);
}
