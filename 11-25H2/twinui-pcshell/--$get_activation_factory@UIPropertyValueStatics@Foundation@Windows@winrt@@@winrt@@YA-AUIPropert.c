/*
 * XREFs of ??$get_activation_factory@UIPropertyValueStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIPropertyValueStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1801BE738
 * Callers:
 *     ??$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@Z @ 0x1801BE610 (--$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??$call@AEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@Z @ 0x18039FC00 (--$call@AEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@Z @ 0x180499FA0 (--$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_dc044eb08ded96795f7764053d914671_@@@Z @ 0x18057434C (--$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IPropertyValueStatics>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // [rsp+28h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]
  _QWORD *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  v4 = 0;
  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v6,
    a2,
    &winrt::impl::guid_v<winrt::Windows::Foundation::IPropertyValueStatics>,
    &v7);
  winrt::check_hresult(&v6, (unsigned int)v6, &v4);
  *a1 = v7;
  return a1;
}
