/*
 * XREFs of ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18057088C
 * Callers:
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18056D400 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 *     ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18056D5A0 (-GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING_.c)
 *     ?IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18056ED80 (-IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@.c)
 *     ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x180570770 (-TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHS.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802193A4 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV-$basic_string@GU-$char_traits@G@st.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::ToLowerCase(__int64 a1, __int64 a2)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF

  std::wstring::wstring((__int64)v4, a2);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v4);
  std::wstring::wstring(a1, (__int64)v4);
  std::wstring::_Tidy_deallocate(v4);
  return a1;
}
