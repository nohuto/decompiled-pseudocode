/*
 * XREFs of wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___ @ 0x1806ABEA0
 * Callers:
 *     _VirtualDesktopSwitcherHost::Show_::_1_::dtor$1 @ 0x180707672 (_VirtualDesktopSwitcherHost--Show_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 40LL))(*(_QWORD *)a1 + 8LL);
  }
  return result;
}
