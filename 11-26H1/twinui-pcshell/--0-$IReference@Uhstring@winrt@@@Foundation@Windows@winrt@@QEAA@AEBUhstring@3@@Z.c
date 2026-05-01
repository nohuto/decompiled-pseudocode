/*
 * XREFs of ??0?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z @ 0x180598274
 * Callers:
 *     ?box_value@winrt@@YA?AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z @ 0x18059B3D4 (-box_value@winrt@@YA-AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$as@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@Uhstring@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1805974AC (--$as@U-$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@.c)
 *     ??$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_dc044eb08ded96795f7764053d914671_@@@Z @ 0x1805979EC (--$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??R_lambda_dc044eb08ded96795f7764053d914671_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1805989B0 (--R_lambda_dc044eb08ded96795f7764053d914671_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 (__fastcall ***__fastcall winrt::Windows::Foundation::IReference<winrt::hstring>::IReference<winrt::hstring>(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        __int64 *a2))(_QWORD, void *, __int64 *)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h]

  v5 = a1;
  v4 = *a2;
  v6 = &v4;
  v7 = &qword_1808D9F88;
  _InterlockedIncrement64(&qword_1808D9F88);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    _lambda_dc044eb08ded96795f7764053d914671_::operator()(
      &v6,
      &v5,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>);
    _InterlockedDecrement64(&qword_1808D9F88);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808D9F88);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_dc044eb08ded96795f7764053d914671_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)&v5,
      (__int64)&v6);
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a1,
    v5);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
  return a1;
}
