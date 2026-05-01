/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Move @ 0x180503C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1807502F8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
