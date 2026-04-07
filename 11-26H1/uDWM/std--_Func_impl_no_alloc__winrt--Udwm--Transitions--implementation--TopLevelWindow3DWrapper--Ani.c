/*
 * XREFs of std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1__long_::_Copy @ 0x1800D85D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1__long_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = off_1800F1688;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
