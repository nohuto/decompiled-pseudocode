/*
 * XREFs of std::_Func_impl_no_alloc__lambda_df88ed69ec619d4baf0e159409266ddd__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Copy @ 0x18041A2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_df88ed69ec619d4baf0e159409266ddd__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  *a2 = off_180715300;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
