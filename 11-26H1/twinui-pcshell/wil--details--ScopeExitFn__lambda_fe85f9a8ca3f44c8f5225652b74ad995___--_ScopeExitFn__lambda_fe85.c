/*
 * XREFs of wil::details::ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___::_ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___ @ 0x1802C236C
 * Callers:
 *     _TaskViewHost::ViewLoaded_::_1_::dtor$1 @ 0x1806D6E0D (_TaskViewHost--ViewLoaded_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___::_ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1);
  }
  return result;
}
