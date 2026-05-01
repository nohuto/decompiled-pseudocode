/*
 * XREFs of ?OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803C16EC
 * Callers:
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803C1470 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800EC120 (IsUserAssignedAccessSingleApp.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C0F8C (-NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnTargetedMessage(
        SearchAppDesktopExperienceView *a1,
        int a2,
        __int16 a3)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 != 1 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3FC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    v4 = IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL);
    v5 = SHRegSetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"IsAssignedAccess",
           v4 != 0);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x92,
        (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
        (const char *)(unsigned int)v5);
  }
  else
  {
    *((_BYTE *)a1 + 202) = a3 != 0;
    SearchAppDesktopExperienceView::NotifyShellModeChanged(a1);
  }
  return 0LL;
}
