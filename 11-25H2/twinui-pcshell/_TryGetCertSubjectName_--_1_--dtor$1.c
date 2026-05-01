/*
 * XREFs of _TryGetCertSubjectName_::_1_::dtor$1 @ 0x1806CC91E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 TryGetCertSubjectName_::_1_::dtor_1()
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>();
}
