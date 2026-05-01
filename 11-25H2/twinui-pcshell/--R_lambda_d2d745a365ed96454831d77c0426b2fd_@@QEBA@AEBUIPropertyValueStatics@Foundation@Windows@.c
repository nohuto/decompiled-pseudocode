/*
 * XREFs of ??R_lambda_d2d745a365ed96454831d77c0426b2fd_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1801BEC0C
 * Callers:
 *     ??$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@Z @ 0x1801BE610 (--$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 * Callees:
 *     ?CreateRect@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801BEC34 (-CreateRect@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation.c)
 */

__int64 __fastcall _lambda_d2d745a365ed96454831d77c0426b2fd_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateRect(
    a3,
    a2,
    *a1);
  return a2;
}
