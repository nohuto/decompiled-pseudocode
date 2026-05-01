/*
 * XREFs of ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805769D0
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575C9C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802193A4 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV-$basic_string@GU-$char_traits@G@st.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1805775C8 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x180577B40 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577B80 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180577DA0 (-TryGetProcessCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAppIdForSpecialCategoryApp(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  _QWORD v7[4]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v8[4]; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v9[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v7[0] = a1;
  if ( IsJavawExe(a2) )
  {
    TryGetProcessCommandLine(v7, a3);
    if ( v7[2] )
    {
      Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v7);
      TryExtractJavaMainClassNameFromCommandLine(v8, v7);
    }
    else
    {
      std::wstring::wstring((__int64)v8);
    }
    std::wstring::_Tidy_deallocate(v7);
    if ( v8[2] )
    {
      std::wstring::operator std::basic_string_view<unsigned short>(v8, v7);
      ComposeWin32AppIdForJavaApp(v9, a2, v7);
      std::wstring::wstring(a1, (__int64)v9);
      std::wstring::_Tidy_deallocate(v9);
    }
    else
    {
      std::wstring::wstring(a1);
    }
    std::wstring::_Tidy_deallocate(v8);
  }
  else
  {
    std::wstring::wstring(a1);
  }
  return a1;
}
