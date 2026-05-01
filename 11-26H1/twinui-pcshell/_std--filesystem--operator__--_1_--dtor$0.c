/*
 * XREFs of _std::filesystem::operator__::_1_::dtor$0 @ 0x1806D26ED
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x180030E90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall std::filesystem::operator__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 160));
  }
}
