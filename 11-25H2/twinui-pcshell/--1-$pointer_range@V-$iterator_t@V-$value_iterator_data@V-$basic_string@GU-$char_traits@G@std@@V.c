/*
 * XREFs of ??1?$pointer_range@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@wil@@QEAA@XZ @ 0x1803A4F9C
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803A6C80 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 *     _UndockedSearchAppExperienceManager::AuditWebSearchExtensions_::_1_::dtor$13 @ 0x1806BFF9F (_UndockedSearchAppExperienceManager--AuditWebSearchExtensions_--_1_--dtor$13.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall wil::details::pointer_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>::~pointer_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>(
        void **a1)
{
  std::wstring::_Tidy_deallocate(a1 + 8);
  std::wstring::_Tidy_deallocate(a1);
}
