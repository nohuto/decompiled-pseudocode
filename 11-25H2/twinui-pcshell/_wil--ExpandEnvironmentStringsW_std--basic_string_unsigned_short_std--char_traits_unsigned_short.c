/*
 * XREFs of _wil::ExpandEnvironmentStringsW_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____256__::_1_::dtor$0 @ 0x1806A6B3B
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall wil::ExpandEnvironmentStringsW_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____256__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::wstring::_Tidy_deallocate(*(void ***)(a2 + 176));
  }
}
