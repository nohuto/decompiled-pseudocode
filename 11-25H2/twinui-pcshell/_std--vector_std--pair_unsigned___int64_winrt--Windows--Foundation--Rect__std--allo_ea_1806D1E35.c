/*
 * XREFs of _std::vector_std::pair_unsigned___int64_winrt::Windows::Foundation::Rect__std::allocator_std::pair_unsigned___int64_winrt::Windows::Foundation::Rect_____::_Reallocate_0__::_1_::catch$0 @ 0x1806D1E35
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned___int64_winrt::Windows::Foundation::Rect__std::allocator_std::pair_unsigned___int64_winrt::Windows::Foundation::Rect_____::_Reallocate_0__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)(24LL * **(_QWORD **)(a2 + 72)));
  throw;
}
