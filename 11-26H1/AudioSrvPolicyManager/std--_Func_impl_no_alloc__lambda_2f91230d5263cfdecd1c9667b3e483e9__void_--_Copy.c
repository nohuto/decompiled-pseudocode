/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Copy @ 0x180024380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_180053000;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 36);
  return a2;
}
