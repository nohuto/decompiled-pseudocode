/*
 * XREFs of _std::vector_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000________std::allocator_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000___________::_Emplace_reallocate_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000__________::_1_::catch$1 @ 0x1806D5C4B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@0@QEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@0@@Z @ 0x1805BD134 (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Ust.c)
 */

void __fastcall __noreturn std::vector_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000________std::allocator_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000___________::_Emplace_reallocate_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000__________::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 120)));
  throw;
}
