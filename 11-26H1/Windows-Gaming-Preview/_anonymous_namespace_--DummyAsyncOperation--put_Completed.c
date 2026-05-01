/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::put_Completed @ 0x180013D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::put_Completed(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( _Mtx_lock((_Mtx_t)(a1 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 164) == 0x7FFFFFFF )
  {
    *(_DWORD *)(a1 + 164) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
  }
  if ( *(_QWORD *)(a1 + 168) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 168) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  _Mtx_unlock((_Mtx_t)(a1 + 88));
  return 0LL;
}
