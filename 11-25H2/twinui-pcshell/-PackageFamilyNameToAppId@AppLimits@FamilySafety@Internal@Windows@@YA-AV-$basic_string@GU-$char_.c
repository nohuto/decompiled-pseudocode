/*
 * XREFs of ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054EB44
 * Callers:
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054E784 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801BF49C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BF49C.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180228494 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV-$basic_string@GU-$char_traits@G@st.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::PackageFamilyNameToAppId(_OWORD *a1, _WORD *a2)
{
  char **v4; // rax
  __int128 v6; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+40h] [rbp-48h]
  void *v8[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = std::wstring::wstring((char **)v8, L"appx:");
  std::operator+<unsigned short>((__int64)&v6, v4, a2);
  std::wstring::_Tidy_deallocate(v8);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(&v6);
  *a1 = v6;
  a1[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v6) = 0;
  std::wstring::_Tidy_deallocate((void **)&v6);
  return a1;
}
