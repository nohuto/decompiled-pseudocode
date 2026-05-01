/*
 * XREFs of ?Open@AppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x18035AE6C
 * Callers:
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x18035A718 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@Z @ 0x180359EB8 (--$call@AEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 *     ??R_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@QEBA@AEBUIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@Windows@winrt@@@Z @ 0x18035A494 (--R_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@QEBA@AEBUIAppExtensionCatalogStatics@AppExtensions.c)
 */

const struct winrt::param::hstring *__fastcall winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog::Open(
        const struct winrt::param::hstring *a1,
        __int64 *a2)
{
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18089B0B8;
  _InterlockedIncrement64(&qword_18089B0B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics> )
  {
    _lambda_554c977fbb23067c34d9c2bcea5eb7d5_::operator()(
      &v4,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>);
    _InterlockedDecrement64(&qword_18089B0B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B0B8);
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_554c977fbb23067c34d9c2bcea5eb7d5_ &>(
      (__int64)a1,
      (__int64)a1,
      (__int64)&v4);
  }
  return a1;
}
