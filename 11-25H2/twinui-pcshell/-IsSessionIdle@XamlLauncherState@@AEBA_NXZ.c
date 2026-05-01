/*
 * XREFs of ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180455084
 * Callers:
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180254C9C (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804550E0 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall XamlLauncherState::IsSessionIdle(XamlLauncherState *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 14);
  v2 = 0;
  v6 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 24LL))(v1, &v6);
    if ( v3 >= 0 )
      return v6 != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD0C,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
  }
  return v2;
}
