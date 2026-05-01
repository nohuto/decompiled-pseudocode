/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c58ff99a55602bd66418327c438cfc37__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x1804153C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_c58ff99a55602bd66418327c438cfc37__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  *a2 = off_1807139B0;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
