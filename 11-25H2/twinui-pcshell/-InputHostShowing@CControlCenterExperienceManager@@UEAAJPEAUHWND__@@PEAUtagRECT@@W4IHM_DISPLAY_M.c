/*
 * XREFs of ?InputHostShowing@CControlCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180365A10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180366300 (-OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::InputHostShowing(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CControlCenterExperienceManager::OnInputHostChanging(a1 - 80, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x790,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
