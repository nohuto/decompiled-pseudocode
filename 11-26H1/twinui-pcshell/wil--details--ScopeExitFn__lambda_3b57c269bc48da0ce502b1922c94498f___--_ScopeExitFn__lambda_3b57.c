/*
 * XREFs of wil::details::ScopeExitFn__lambda_3b57c269bc48da0ce502b1922c94498f___::_ScopeExitFn__lambda_3b57c269bc48da0ce502b1922c94498f___ @ 0x1804688E8
 * Callers:
 *     __lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator()_::_1_::dtor$2 @ 0x1806EEF37 (__lambda_a469c2389bb8dc71f832d95fbc03d5e0_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180474084 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_3b57c269bc48da0ce502b1922c94498f___::_ScopeExitFn__lambda_3b57c269bc48da0ce502b1922c94498f___(
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
        (void *)0x1521,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
