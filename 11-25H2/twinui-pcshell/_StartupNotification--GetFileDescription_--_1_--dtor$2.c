/*
 * XREFs of _StartupNotification::GetFileDescription_::_1_::dtor$2 @ 0x1806A6B8F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x180297810 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall StartupNotification::GetFileDescription_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void **)(a2 + 136));
  }
}
