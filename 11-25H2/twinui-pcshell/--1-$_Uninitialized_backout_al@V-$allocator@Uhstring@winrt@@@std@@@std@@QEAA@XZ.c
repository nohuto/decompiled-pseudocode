/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x18049A1C4
 * Callers:
 *     _std::_Uninitialized_copy_n_winrt::hstring_const___std::allocator_winrt::hstring____::_1_::dtor$0 @ 0x1806D99E1 (_std--_Uninitialized_copy_n_winrt--hstring_const___std--allocator_winrt--hstring____--_1_--dtor$.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<winrt::hstring>>::~_Uninitialized_backout_al<std::allocator<winrt::hstring>>(
        volatile signed __int32 ***a1)
{
  std::_Destroy_range<std::allocator<winrt::hstring>>(*a1, a1[1]);
}
