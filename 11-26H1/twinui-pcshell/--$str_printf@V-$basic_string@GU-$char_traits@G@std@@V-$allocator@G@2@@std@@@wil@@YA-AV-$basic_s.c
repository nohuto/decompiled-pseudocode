/*
 * XREFs of ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803D9688
 * Callers:
 *     ??$GetForWindowsEdition@$0?HPPPPPPO@@ShellProgramConfiguration@@SA?AU0@PEBG@Z @ 0x180455B90 (--$GetForWindowsEdition@$0-HPPPPPPO@@ShellProgramConfiguration@@SA-AU0@PEBG@Z.c)
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1805767F4 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1805775C8 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803D9708 (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 wil::str_printf<std::wstring>(__int64 a1, __int64 a2, ...)
{
  __int64 v3; // rcx
  int v4; // eax
  va_list v6; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  std::wstring::wstring(a1);
  va_copy(v6, va);
  v4 = wil::details::str_vprintf_nothrow<std::wstring>(v3, a2, &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7AF,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v4,
      1);
  return a1;
}
