/*
 * XREFs of wil::details::ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___::_ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___ @ 0x1803C13D4
 * Callers:
 *     _CBaseTrayFlyoutExperienceManager::OnPriorityBoostRequested_::_1_::dtor$0 @ 0x1806E87FE (_CBaseTrayFlyoutExperienceManager--OnPriorityBoostRequested_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___::_ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  }
  return result;
}
