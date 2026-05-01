/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEBU_CERT_CONTEXT@@P6AHPEBU1@@Z$1?CertFreeCertificateContext@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEBU1@PEBU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18054D9B4
 * Callers:
 *     ??1?$unique_any_t@Ucert_context_t@wil@@@wil@@QEAA@XZ @ 0x18054D92C (--1-$unique_any_t@Ucert_context_t@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG_N@Z @ 0x18054DCF4 (-TryGetCertSubjectName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG_N.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>(
        const CERT_CONTEXT **a1)
{
  const CERT_CONTEXT *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CertFreeCertificateContext(v1);
  return result;
}
