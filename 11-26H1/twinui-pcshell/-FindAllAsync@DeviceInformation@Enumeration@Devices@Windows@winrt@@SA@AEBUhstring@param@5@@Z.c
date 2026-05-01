/*
 * XREFs of ?FindAllAsync@DeviceInformation@Enumeration@Devices@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x18061AAFC
 * Callers:
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061B85C (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ??R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x18013982C (--R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt.c)
 *     ??$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@Z @ 0x1806189D4 (--$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@-$factory_cache_entry@UDeviceInformation.c)
 */

const struct winrt::param::hstring *__fastcall winrt::Windows::Devices::Enumeration::DeviceInformation::FindAllAsync(
        const struct winrt::param::hstring *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  int *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DB828;
  _InterlockedIncrement64((volatile signed __int64 *)&qword_1808DB828);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Devices::Enumeration::DeviceInformation,winrt::Windows::Devices::Enumeration::IDeviceInformationStatics> )
  {
    _lambda_ca425077811c26dd994b3d0531fe1de0_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Devices::Enumeration::DeviceInformation,winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>);
    _InterlockedDecrement64((volatile signed __int64 *)&qword_1808DB828);
  }
  else
  {
    _InterlockedDecrement64((volatile signed __int64 *)&qword_1808DB828);
    winrt::impl::factory_cache_entry<winrt::Windows::Devices::Enumeration::DeviceInformation,winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>::call<_lambda_2bdf1dccac8f31331c29d81ee6552535_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, int **))a1,
      (__int64)a1,
      &v4);
  }
  return a1;
}
