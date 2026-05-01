/*
 * XREFs of ?GameBarSettingsWidgetAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA?AUhstring@7@XZ @ 0x180336064
 * Callers:
 *     ?get_GameBarSettingsWidgetAppAumid@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180337560 (-get_GameBarSettingsWidgetAppAumid@-$produce@UGamingPostureConfiguration@factory_implementation@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BD538 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x1803343C0 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 */

// Hidden C++ exception states: #wind=1
struct winrt::impl::shared_hstring_header **__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GameBarSettingsWidgetAppAumid(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v4; // [rsp+48h] [rbp-50h] BYREF
  __int64 v5; // [rsp+58h] [rbp-40h]
  __int64 v6; // [rsp+60h] [rbp-38h]
  void *v7[4]; // [rsp+68h] [rbp-30h] BYREF

  v3[0] = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 7LL;
  LOWORD(v4) = 0;
  anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____(
    (__int64)v7,
    (__int64)L"DeviceSettingGameBarWidgetApp",
    (void **)&v4,
    0);
  std::wstring::operator std::basic_string_view<unsigned short>(v7, v3);
  winrt::hstring::hstring(a1, (__int64)v3);
  std::wstring::_Tidy_deallocate(v7);
  return a1;
}
