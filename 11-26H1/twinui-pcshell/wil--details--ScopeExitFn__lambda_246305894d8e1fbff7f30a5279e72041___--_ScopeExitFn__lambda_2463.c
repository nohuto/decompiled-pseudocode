/*
 * XREFs of wil::details::ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___::_ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___ @ 0x1804C439C
 * Callers:
 *     _CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement_::_1_::dtor$4 @ 0x1806F15F5 (_CMultitaskingViewControllerBase--_StartTabletModeWindowArrangement_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___::_ScopeExitFn__lambda_246305894d8e1fbff7f30a5279e72041___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 32LL))(**(_QWORD **)a1);
  }
  return result;
}
