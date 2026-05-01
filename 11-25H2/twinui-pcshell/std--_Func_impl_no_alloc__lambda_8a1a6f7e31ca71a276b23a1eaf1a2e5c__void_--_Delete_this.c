/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_::_Delete_this @ 0x1806499B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ @ 0x180646BF4 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
}
