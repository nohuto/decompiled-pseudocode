/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Delete_this @ 0x180503DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_ @ 0x1804F74B8 (_lambda_e4fdde13f8dc81d77ad1ee21baa5b818_--__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Delete_this(
        void *a1,
        __int64 a2)
{
  char v3; // bl

  v3 = a2;
  lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_((__int64)a1 + 8, a2);
  if ( v3 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
}
