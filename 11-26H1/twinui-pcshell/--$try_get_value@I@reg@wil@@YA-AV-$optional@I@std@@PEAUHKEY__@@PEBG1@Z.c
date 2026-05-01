/*
 * XREFs of ??$try_get_value@I@reg@wil@@YA?AV?$optional@I@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803AD034
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x180243430 (--0XamlLauncher@@QEAA@XZ.c)
 *     _lambda_db605a5d8bd7eecf6dbd275f52e09d94_::operator() @ 0x1803AF53C (_lambda_db605a5d8bd7eecf6dbd275f52e09d94_--operator().c)
 *     ?IsC2DDisabledByUserSetting@AIXPolicyHelper@@YA_NXZ @ 0x180592190 (-IsC2DDisabledByUserSetting@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??$try_get_value@K@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@K@std@@PEBG0K@Z @ 0x180334F64 (--$try_get_value@K@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA-AV-$o.c)
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1803370AC (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 */

__int64 __fastcall wil::reg::try_get_value<unsigned int>(__int64 a1)
{
  const WCHAR *v2; // r8
  __int64 v3; // r9
  wil::reg::reg_view_details *v5; // [rsp+20h] [rbp-18h]
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = -2147483647LL;
  LODWORD(v5) = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)4);
  wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<unsigned long>(
    (__int64)&v6,
    a1,
    v2,
    v3,
    v5);
  return a1;
}
