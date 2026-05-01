/*
 * XREFs of ?IsCortanaExplicitDismissEnabled@XamlLauncherState@@UEAA_NXZ @ 0x180217C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall XamlLauncherState::IsCortanaExplicitDismissEnabled(XamlLauncherState *this)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 8);
  v5 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 176LL))(v1, &v5);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41D,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v2);
  return v5 != 0;
}
