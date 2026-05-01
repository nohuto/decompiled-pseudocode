/*
 * XREFs of ??$get_activation_factory@UIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x180329C0C
 * Callers:
 *     ??$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@Z @ 0x180329824 (--$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@-$factory_cache_entry@UApplicationActiva.c)
 *     ??$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@Z @ 0x180329A54 (--$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@-$factory_cache_entry@UApplicationActiva.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>(
        _QWORD *a1,
        __int64 *a2)
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
    (__int64)&winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>,
    (__int64)&v7);
  winrt::check_hresult((int *)&v6, (int)v6, (__int64)&v4);
  *a1 = v7;
  return a1;
}
