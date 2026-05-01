/*
 * XREFs of ?GetPolicyFromPath@NamedPolicy@Policies@Management@Windows@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x18056DEF0
 * Callers:
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E3CC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@?$factory_cache_entry@UNamedPolicy@Policies@Management@Windows@winrt@@UINamedPolicyStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@Z @ 0x18056B500 (--$call@AEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@-$factory_cache_entry@UNamedPolicy@Polic.c)
 *     ??R_lambda_7153a6af23e55c6dd3df525319faf7bd_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@Windows@winrt@@@Z @ 0x18056CB20 (--R_lambda_7153a6af23e55c6dd3df525319faf7bd_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@W.c)
 */

const struct winrt::param::hstring *__fastcall winrt::Windows::Management::Policies::NamedPolicy::GetPolicyFromPath(
        const struct winrt::param::hstring *a1,
        const struct winrt::param::hstring *a2,
        __int64 *a3)
{
  __int64 *v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = (__int64 *)a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_18089CE08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics> )
  {
    _lambda_7153a6af23e55c6dd3df525319faf7bd_::operator()(
      v5,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>);
    _InterlockedDecrement64(&qword_18089CE08);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089CE08);
    winrt::impl::factory_cache_entry<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>::call<_lambda_7153a6af23e55c6dd3df525319faf7bd_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)v5);
  }
  return a1;
}
