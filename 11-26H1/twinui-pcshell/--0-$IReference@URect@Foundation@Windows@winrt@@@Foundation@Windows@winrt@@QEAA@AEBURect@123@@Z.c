/*
 * XREFs of ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800E5C4C
 * Callers:
 *     ??$create_and_initialize@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEAW4SearchAppActivationMode@3456@AEAURect@Foundation@Windows@6@AEAUDeferralCompletedHandler@Foundation@Windows@6@AEA_NAEAU76@AEAUSearchAppHost@3456@@impl@winrt@@YAPEAUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@AEAW4SearchAppActivationMode@4561@AEAURect@Foundation@Windows@1@AEAUDeferralCompletedHandler@Foundation@Windows@1@AEA_NAEAU71@AEAUSearchAppHost@4561@@Z @ 0x1800E5E3C (--$create_and_initialize@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CreateRect@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800E5B10 (-CreateRect@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation.c)
 *     ??$as@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800E5B80 (--$as@U-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnk.c)
 *     ??$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@Z @ 0x180214F58 (--$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 */

// Hidden C++ exception states: #wind=2
__int64 (__fastcall ***__fastcall winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        __int128 *a2))(_QWORD, void *, __int64 *)
{
  __int64 (__fastcall ***v4)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int128 *v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+18h]

  v4 = a1;
  v5 = a2;
  v6 = &qword_1808D9F88;
  _InterlockedIncrement64(&qword_1808D9F88);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateRect(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
      &v4,
      a2);
    _InterlockedDecrement64(&qword_1808D9F88);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808D9F88);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_d2d745a365ed96454831d77c0426b2fd_ &>(
      a1,
      &v4,
      &v5);
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a1,
    v4);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v4);
  return a1;
}
