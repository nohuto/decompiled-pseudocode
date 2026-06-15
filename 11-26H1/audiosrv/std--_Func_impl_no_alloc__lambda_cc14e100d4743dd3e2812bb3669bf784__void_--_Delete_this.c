/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Delete_this @ 0x180114530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004665C (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Delete_this(
        void *a1,
        char a2)
{
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
