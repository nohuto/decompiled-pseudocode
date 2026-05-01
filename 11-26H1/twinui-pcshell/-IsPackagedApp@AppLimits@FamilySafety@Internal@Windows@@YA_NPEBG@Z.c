/*
 * XREFs of ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x180571770
 * Callers:
 *     ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805715F0 (-GetDisplayName@AppUsageTracker@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z @ 0x1805716F0 (-IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z.c)
 *     ?TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180571A60 (-TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Window.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180033B70 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180201B54 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(
        Windows::Internal::FamilySafety::AppLimits *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rbx
  size_t v3; // rax
  const wchar_t *v4; // rcx
  size_t v5; // rdx
  int v6; // eax
  bool v7; // bl
  _QWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = std::wstring::wstring((__int64)v9, (__int64)this);
  std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(v2, 0LL);
  v3 = std::_WChar_traits<wchar_t>::length((__int64)L"appx:");
  v5 = 5LL;
  if ( *(_QWORD *)(v2 + 16) < 5uLL )
    v5 = *(_QWORD *)(v2 + 16);
  if ( *(_QWORD *)(v2 + 24) > 7uLL )
    v2 = *(_QWORD *)v2;
  LOBYTE(v6) = std::_Traits_compare<std::char_traits<unsigned short>>((const wchar_t *)v2, v5, v4, v3);
  v7 = v6 == 0;
  std::wstring::_Tidy_deallocate(v9);
  return v7;
}
