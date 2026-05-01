/*
 * XREFs of ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18044FDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x1800131F8 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x1801D64B0 (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801EDC24 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 *     ?StartPrelaunched@StartWindowTelemetry@@SAXXZ @ 0x180238D00 (-StartPrelaunched@StartWindowTelemetry@@SAXXZ.c)
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18044EBB0 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::Prelaunch(XamlLauncher *this)
{
  XamlLauncher *v2; // rcx
  bool IsStartMenuEnabled; // di
  __int64 *v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  DisableSearchPolicy *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  StartWindowTelemetry::StartPrelaunched((__int64)this);
  if ( !XamlLauncher::IsStartMenuPrelaunchEnabled(v2) )
  {
    SetExistingEvent(L"ShellStartReadyEvent");
LABEL_12:
    SetExistingEvent(L"ShellSearchReadyEvent");
    return 0LL;
  }
  IsStartMenuEnabled = XamlLauncher::IsStartMenuEnabled((XamlLauncher *)((char *)this - 24), 0LL);
  if ( IsStartMenuEnabled )
  {
    v4 = (__int64 *)*((_QWORD *)this + 18);
    if ( v4 )
    {
      v5 = *v4;
      LOBYTE(v5) = 1;
      v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v4 + 48))(v4, v5);
      if ( v6 >= 0 )
        goto LABEL_8;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1FF,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  SetExistingEvent(L"ShellStartReadyEvent");
  if ( !IsStartMenuEnabled )
    goto LABEL_12;
LABEL_8:
  if ( DisableSearchPolicy::IsSearchDisabled(v7) )
    goto LABEL_12;
  v9 = *((_QWORD *)this + 19);
  if ( !v9 )
    goto LABEL_12;
  LOBYTE(v8) = 1;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, v8);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x208,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_12;
  }
  return 0LL;
}
