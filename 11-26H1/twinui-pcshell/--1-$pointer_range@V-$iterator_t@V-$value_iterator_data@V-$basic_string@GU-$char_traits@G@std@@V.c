/*
 * XREFs of ??1?$pointer_range@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@wil@@QEAA@XZ @ 0x1803AE2A0
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803B0070 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 *     _UndockedSearchAppExperienceManager::AuditWebSearchExtensions_::_1_::dtor$13 @ 0x1806E7E9E (_UndockedSearchAppExperienceManager--AuditWebSearchExtensions_--_1_--dtor$13.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall wil::details::pointer_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>::~pointer_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>(
        _QWORD *a1)
{
  std::wstring::_Tidy_deallocate(a1 + 8);
  return std::wstring::_Tidy_deallocate(a1);
}
