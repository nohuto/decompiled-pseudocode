/*
 * XREFs of ??$box_value@I$0A@@winrt@@YA?AUIInspectable@Foundation@Windows@0@AEBI@Z @ 0x18039FB80
 * Callers:
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18004272C (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@Z @ 0x18039FC00 (--$call@AEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??R_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1803A5858 (--R_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::box_value<unsigned int,0>(__int64 a1, _DWORD *a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+50h] [rbp+18h]

  v4 = a1;
  LODWORD(v4) = *a2;
  v5 = &v4;
  v6 = &qword_180899928;
  _InterlockedIncrement64(&qword_180899928);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    _lambda_32c8b3fea86403d9f21a612c35bffd2c_::operator()(
      &v5,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>);
    _InterlockedDecrement64(&qword_180899928);
  }
  else
  {
    _InterlockedDecrement64(&qword_180899928);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_32c8b3fea86403d9f21a612c35bffd2c_ &>(
      a1,
      a1,
      &v5);
  }
  return a1;
}
