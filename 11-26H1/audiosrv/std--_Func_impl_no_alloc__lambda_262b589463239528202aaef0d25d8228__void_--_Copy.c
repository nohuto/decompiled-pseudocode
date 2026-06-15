/*
 * XREFs of std::_Func_impl_no_alloc__lambda_262b589463239528202aaef0d25d8228__void_::_Copy @ 0x180114410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_262b589463239528202aaef0d25d8228__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)a2 = off_180177990;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  result = a2;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
