/*
 * XREFs of ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805EEF78
 * Callers:
 *     _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1805EE330 (_lambda_2b4736168c23780831e980beacfbaf99_--operator().c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE804 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  _QWORD *result; // rax
  int v7; // [rsp+24h] [rbp-34h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  _QWORD *v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = a2;
  v3 = *a1;
  v10 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 72LL))(v3, *a3, &v10);
  winrt::check_hresult(&v7, v5, (__int64)&v8);
  result = a2;
  *a2 = v10;
  return result;
}
