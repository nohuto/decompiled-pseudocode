/*
 * XREFs of std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Move @ 0x180041870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = off_1800530C0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 36);
  return a2;
}
