/*
 * XREFs of ?IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ @ 0x180253EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180455028 (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall XamlLauncherState::IsTaskbarSearchVisible(XamlLauncherState *this)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)((char *)this - 24)) )
    return 0;
  if ( *((_DWORD *)this + 10) == 6 || (unsigned int)(*((_DWORD *)this + 10) - 7) <= 1 )
  {
    v4 = *((_QWORD *)this + 8);
    v7 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 480LL))(v4, &v7);
    if ( v5 >= 0 )
      return v7 == 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x409,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5);
  }
  return v2;
}
