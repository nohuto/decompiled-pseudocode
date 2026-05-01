/*
 * XREFs of ??$make_range@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@wil@@YA?AV?$pointer_range@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@0@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@0@0@Z @ 0x1803A914C
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803B0070 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x1803ADBC8 (--0-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

__int64 __fastcall wil::make_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD v7[8]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v8[11]; // [rsp+60h] [rbp-58h] BYREF

  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(v8, a3);
  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(v7, a2);
  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(a1, v7);
  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(a1 + 64, v8);
  std::wstring::_Tidy_deallocate(v7);
  std::wstring::_Tidy_deallocate(v8);
  std::wstring::_Tidy_deallocate(a2);
  std::wstring::_Tidy_deallocate(a3);
  return a1;
}
