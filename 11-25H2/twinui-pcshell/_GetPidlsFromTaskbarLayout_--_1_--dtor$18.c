/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::dtor$18 @ 0x1806DD306
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall GetPidlsFromTaskbarLayout_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>((HSTRING *)(a2 + 280));
}
