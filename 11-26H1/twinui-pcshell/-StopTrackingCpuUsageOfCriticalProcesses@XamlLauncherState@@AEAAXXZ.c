/*
 * XREFs of ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180462FE4
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801D4810 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801F2DD8 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801F2E54 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801F2EB0 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z @ 0x18045F56C (--$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18045F5C8 (--$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0P@$$CBG@StartWindowTelemetry@@SAXAEAY0P@$$CBG@Z @ 0x18045F624 (--$CriticalProcessDidntUseAnyCpu@AEAY0P@$$CBG@StartWindowTelemetry@@SAXAEAY0P@$$CBG@Z.c)
 */

void __fastcall XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  bool v1; // zf
  int started; // eax
  const WCHAR *v4; // rcx
  int v5; // eax
  const WCHAR *v6; // rcx
  int v7; // eax
  const WCHAR *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 140) == 0LL;
  v10 = 0LL;
  if ( !v1 )
  {
    started = XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, &v10);
    if ( started >= 0 )
    {
      if ( v10 == *((_QWORD *)this + 140) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[28]>(v4);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD11,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    }
  }
  v1 = *((_QWORD *)this + 141) == 0LL;
  v11 = 0LL;
  if ( !v1 )
  {
    v5 = XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, &v11);
    if ( v5 >= 0 )
    {
      if ( v11 == *((_QWORD *)this + 141) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[15]>(v6);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD19,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  v1 = *((_QWORD *)this + 142) == 0LL;
  v12 = 0LL;
  if ( !v1 )
  {
    v7 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, &v12);
    if ( v7 >= 0 )
    {
      if ( v12 == *((_QWORD *)this + 142) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>(v8);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD2A,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v7);
    }
  }
}
