/*
 * XREFs of wil::details::ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___::_ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___ @ 0x1802BD0DC
 * Callers:
 *     _TaskViewHost::Show_::_1_::dtor$9 @ 0x1806D0043 (_TaskViewHost--Show_--_1_--dtor$9.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___::_ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)a1 + 232LL));
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1);
  }
  return result;
}
