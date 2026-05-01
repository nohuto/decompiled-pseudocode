/*
 * XREFs of wil::details::ScopeExitFn__lambda_0825c138a51226e09dd7868269f93131___::_ScopeExitFn__lambda_0825c138a51226e09dd7868269f93131___ @ 0x18047B188
 * Callers:
 *     _AccessibilityExperienceManager::_OnViewCreated_::_1_::dtor$4 @ 0x1806C76E3 (_AccessibilityExperienceManager--_OnViewCreated_--_1_--dtor$4.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_0825c138a51226e09dd7868269f93131___::_ScopeExitFn__lambda_0825c138a51226e09dd7868269f93131___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 344LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x364,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
