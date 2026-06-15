/*
 * XREFs of std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Delete_this @ 0x180040A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_642215a69899d380996b25cb8587b28c_::__lambda_642215a69899d380996b25cb8587b28c_ @ 0x18003EF14 (_lambda_642215a69899d380996b25cb8587b28c_--__lambda_642215a69899d380996b25cb8587b28c_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  lambda_642215a69899d380996b25cb8587b28c_::__lambda_642215a69899d380996b25cb8587b28c_(a1 + 1);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
