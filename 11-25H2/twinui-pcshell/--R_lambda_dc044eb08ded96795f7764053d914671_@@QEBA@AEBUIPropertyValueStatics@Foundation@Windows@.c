/*
 * XREFs of ??R_lambda_dc044eb08ded96795f7764053d914671_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x180575280
 * Callers:
 *     ??$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_dc044eb08ded96795f7764053d914671_@@@Z @ 0x18057434C (--$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??0?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z @ 0x180574B60 (--0-$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z.c)
 * Callees:
 *     ?CreateString@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18057586C (-CreateString@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundati.c)
 */

__int64 __fastcall _lambda_dc044eb08ded96795f7764053d914671_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateString(
    a3,
    a2,
    *a1);
  return a2;
}
