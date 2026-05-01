/*
 * XREFs of _anonymous_namespace_::TruncateDisplayName @ 0x1805F0E6C
 * Callers:
 *     _anonymous_namespace_::GetPromptText @ 0x1805EFA6C (_anonymous_namespace_--GetPromptText.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1800336D8 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::TruncateDisplayName(__int64 a1, _QWORD *a2)
{
  const void **v3; // rbx
  _QWORD v5[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v6[6]; // [rsp+38h] [rbp-30h] BYREF

  v5[0] = a1;
  if ( a2[1] <= 0x19uLL )
  {
    std::wstring::wstring(a1, (__int64)a2);
  }
  else
  {
    v5[0] = *a2;
    v5[1] = ((unsigned __int16)(*(_WORD *)(v5[0] + 44LL) + 9216) > 0x3FFu) + 21LL;
    v3 = (const void **)std::wstring::wstring((__int64)v6, (__int64)v5);
    std::wstring::push_back(v3, 8230);
    std::wstring::wstring(a1, (__int64)v3);
    std::wstring::_Tidy_deallocate(v6);
  }
  return a1;
}
