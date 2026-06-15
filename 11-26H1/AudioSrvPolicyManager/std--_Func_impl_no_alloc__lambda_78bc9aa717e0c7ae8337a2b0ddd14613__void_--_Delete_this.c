/*
 * XREFs of std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Delete_this @ 0x180023440
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_ @ 0x180008570 (_lambda_78bc9aa717e0c7ae8337a2b0ddd14613_--__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
