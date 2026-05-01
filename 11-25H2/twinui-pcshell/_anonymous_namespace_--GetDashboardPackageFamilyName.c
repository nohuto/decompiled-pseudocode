/*
 * XREFs of _anonymous_namespace_::GetDashboardPackageFamilyName @ 0x1805AE4A4
 * Callers:
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805AB9E8 (_anonymous_namespace_--FindDashboardAppExtension.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetRegistrySettingString @ 0x1805AEA38 (_anonymous_namespace_--GetRegistrySettingString.c)
 *     _anonymous_namespace_::IsInternalDevUnlocked @ 0x1805B0560 (_anonymous_namespace_--IsInternalDevUnlocked.c)
 */

// Hidden C++ exception states: #wind=4
winrt::hstring *__fastcall anonymous_namespace_::GetDashboardPackageFamilyName(winrt::hstring *this)
{
  __int64 RegistrySettingString; // rax
  _OWORD v4[2]; // [rsp+40h] [rbp-39h] BYREF
  void *v5[4]; // [rsp+60h] [rbp-19h] BYREF
  void *v6[4]; // [rsp+80h] [rbp+7h] BYREF
  void *v7[4]; // [rsp+A0h] [rbp+27h] BYREF

  if ( (unsigned __int8)anonymous_namespace_::IsInternalDevUnlocked(this) )
  {
    v4[0] = 0LL;
    v4[1] = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v4[0]) = 0;
    std::wstring::wstring((char **)v6, L"Package");
    std::wstring::wstring((char **)v5, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh");
    RegistrySettingString = anonymous_namespace_::GetRegistrySettingString(v7, v5, v6, v4);
    if ( *(_QWORD *)(RegistrySettingString + 24) > 7uLL )
      RegistrySettingString = *(_QWORD *)RegistrySettingString;
    winrt::hstring::hstring(this, (const unsigned __int16 *)RegistrySettingString);
    std::wstring::_Tidy_deallocate(v7);
    std::wstring::_Tidy_deallocate(v5);
    std::wstring::_Tidy_deallocate(v6);
    std::wstring::_Tidy_deallocate((void **)v4);
  }
  else
  {
    winrt::hstring::hstring(this, &LocaleName);
  }
  return this;
}
