/*
 * XREFs of std::_Func_impl_no_alloc__lambda_96ecd2df1703701600c983d4c680e5f8__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x1805B6BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_96ecd2df1703701600c983d4c680e5f8__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this(
        void **a1,
        char a2)
{
  std::wstring::_Tidy_deallocate(a1 + 3);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
}
