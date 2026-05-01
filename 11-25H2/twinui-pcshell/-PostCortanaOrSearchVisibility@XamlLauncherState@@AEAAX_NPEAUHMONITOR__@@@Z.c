/*
 * XREFs of ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801F0AD0
 * Callers:
 *     ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801F09E0 (-OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal.c)
 *     ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x180251EC0 (-HideCortana@XamlLauncherState@@UEAAXXZ.c)
 *     ?HideSearchWithArgs@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180251F80 (-HideSearchWithArgs@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180253F30 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180254A30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180254C9C (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254F48 (-ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x180454E60 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     ?OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1804557D0 (-OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180455870 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x180220B30 (-PostTaskbarMessage@@YAXI_K_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncherState::PostCortanaOrSearchVisibility(
        XamlLauncherState *this,
        unsigned __int8 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+38h] [rbp+10h] BYREF

  PostTaskbarMessage((unsigned int)this, a2, a3);
  v5 = *((_QWORD *)this + 11);
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 480LL))(v5, &v11);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = a2;
    v8 = (__int64 *)*((_QWORD *)this + 16);
    v9 = *v8;
    if ( v11 )
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 80))(v8, v7);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 72))(v8, v7);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCFB,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6);
  }
}
