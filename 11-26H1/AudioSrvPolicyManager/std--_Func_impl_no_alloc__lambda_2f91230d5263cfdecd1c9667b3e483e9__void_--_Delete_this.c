/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Delete_this @ 0x180018950
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
