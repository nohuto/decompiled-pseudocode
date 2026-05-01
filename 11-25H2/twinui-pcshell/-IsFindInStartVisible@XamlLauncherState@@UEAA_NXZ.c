/*
 * XREFs of ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180253DA0
 * Callers:
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180252010 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1804543E0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180455028 (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall XamlLauncherState::IsFindInStartVisible(XamlLauncherState *this)
{
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v21; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)((char *)this - 24)) )
    return 0;
  v4 = *((_DWORD *)this + 10);
  if ( v4 > 10 )
  {
    v14 = v4 - 12;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 4;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( (unsigned int)(v19 - 1) > 1 )
                  return v2;
              }
            }
          }
        }
      }
    }
    return 1;
  }
  if ( v4 == 10 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  v7 = v6 - 1;
  if ( !v7 )
    return 1;
  v8 = v7 - 1;
  if ( !v8 )
    return 1;
  v9 = v8 - 1;
  if ( !v9 )
    return 1;
  v10 = v9 - 1;
  if ( !v10 || (v11 = v10 - 1) == 0 )
  {
    v12 = *((_QWORD *)this + 8);
    v21 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 480LL))(v12, &v21);
    if ( v13 >= 0 )
      return v21 != 0;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F1,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v13);
    return v2;
  }
  if ( v11 == 2 )
    return 1;
  return v2;
}
