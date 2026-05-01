/*
 * XREFs of _wil::ExpandEnvironmentStringsW_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____256__::_1_::dtor$0 @ 0x1806CE2E5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x180030E90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall wil::ExpandEnvironmentStringsW_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____256__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 176));
  }
}
