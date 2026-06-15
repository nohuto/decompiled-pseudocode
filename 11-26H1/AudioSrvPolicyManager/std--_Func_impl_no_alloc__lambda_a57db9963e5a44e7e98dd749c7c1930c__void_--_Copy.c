/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Copy @ 0x1800084C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  v2 = a2;
  *(_QWORD *)a2 = off_1800505F8;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 20), (volatile int *)a2);
  return v2;
}
