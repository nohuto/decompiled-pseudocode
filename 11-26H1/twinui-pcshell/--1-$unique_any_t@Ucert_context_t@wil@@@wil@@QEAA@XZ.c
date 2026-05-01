/*
 * XREFs of ??1?$unique_any_t@Ucert_context_t@wil@@@wil@@QEAA@XZ @ 0x180571B20
 * Callers:
 *     _TryGetCertSubjectName_::_1_::dtor$3 @ 0x1806F4EA9 (_TryGetCertSubjectName_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_t<wil::cert_context_t>::~unique_any_t<wil::cert_context_t>()
{
  return wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>();
}
