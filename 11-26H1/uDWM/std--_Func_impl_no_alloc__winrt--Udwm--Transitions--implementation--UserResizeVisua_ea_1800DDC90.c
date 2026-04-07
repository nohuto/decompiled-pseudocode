/*
 * XREFs of std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1__void_::_Copy @ 0x1800DDC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = off_1800F1B78;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
