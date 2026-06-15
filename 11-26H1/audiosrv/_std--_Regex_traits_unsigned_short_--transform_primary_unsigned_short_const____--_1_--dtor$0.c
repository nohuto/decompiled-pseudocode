/*
 * XREFs of _std::_Regex_traits_unsigned_short_::transform_primary_unsigned_short_const____::_1_::dtor$0 @ 0x18016BD73
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::_Regex_traits_unsigned_short_::transform_primary_unsigned_short_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::wstring::~wstring(*(void ***)(a2 + 80));
  }
}
