/*
 * XREFs of std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Copy @ 0x1800ADB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_180171798;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
