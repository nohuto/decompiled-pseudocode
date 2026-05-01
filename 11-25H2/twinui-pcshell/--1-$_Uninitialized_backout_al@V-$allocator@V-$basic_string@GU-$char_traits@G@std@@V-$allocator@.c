/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAA@XZ @ 0x180235C8C
 * Callers:
 *     _std::_Uninitialized_copy_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________::_1_::dtor$0 @ 0x1806AF6D4 (_std--_Uninitialized_copy_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<std::wstring>>::~_Uninitialized_backout_al<std::allocator<std::wstring>>(
        void ***a1)
{
  std::_Destroy_range<std::allocator<std::wstring>>(*a1, a1[1]);
}
