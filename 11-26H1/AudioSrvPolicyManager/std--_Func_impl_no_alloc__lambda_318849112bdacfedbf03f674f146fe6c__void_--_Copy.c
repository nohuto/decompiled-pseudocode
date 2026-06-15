/*
 * XREFs of std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Copy @ 0x180025090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  *a2 = off_180053050;
  v4 = a1[1];
  a2[1] = v4;
  if ( v4 )
  {
    do
      v5 = *(_DWORD *)(v4 + 20);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 20), v5 + 1, v5) );
  }
  v6 = a1[2];
  a2[2] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = a1[3];
  a2[3] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return a2;
}
