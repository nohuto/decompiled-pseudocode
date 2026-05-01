/*
 * XREFs of ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA?AUhstring@7@XZ @ 0x180335A50
 * Callers:
 *     ?GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180335A30 (-GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA-.c)
 *     ?get_GamingAppAumid@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180337040 (-get_GamingAppAumid@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingE.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x180333C28 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 */

// Hidden C++ exception states: #wind=3
struct winrt::impl::shared_hstring_header **__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GamingAppAumid(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v4; // [rsp+48h] [rbp-50h] BYREF
  __int64 v5; // [rsp+58h] [rbp-40h]
  __int64 v6; // [rsp+60h] [rbp-38h]
  _QWORD v7[4]; // [rsp+68h] [rbp-30h] BYREF

  v3[0] = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 7LL;
  LOWORD(v4) = 0;
  anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____(
    (__int64)v7,
    (__int64)c_gamingAppAumidValueName,
    &v4,
    1,
    0);
  std::wstring::operator std::basic_string_view<unsigned short>(v7, v3);
  winrt::hstring::hstring(a1, (__int64)v3);
  std::wstring::_Tidy_deallocate(v7);
  return a1;
}
