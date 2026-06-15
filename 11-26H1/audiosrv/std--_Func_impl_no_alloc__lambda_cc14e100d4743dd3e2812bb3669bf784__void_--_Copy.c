/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Copy @ 0x1801144A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Construct_n@AEBQEAVWeakRef@WRL@Microsoft@@AEBQEAV123@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAX_KAEBQEAVWeakRef@WRL@Microsoft@@1@Z @ 0x1801108A0 (--$_Construct_n@AEBQEAVWeakRef@WRL@Microsoft@@AEBQEAV123@@-$vector@VWeakRef@WRL@Microsoft@@V-$al.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = off_180177960;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  std::vector<Microsoft::WRL::WeakRef>::_Construct_n<Microsoft::WRL::WeakRef * const &,Microsoft::WRL::WeakRef * const &>(
    (__int64 **)(a2 + 8),
    (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 3,
    (__int64 **)(a1 + 8),
    (__int64 **)(a1 + 16));
  return a2;
}
