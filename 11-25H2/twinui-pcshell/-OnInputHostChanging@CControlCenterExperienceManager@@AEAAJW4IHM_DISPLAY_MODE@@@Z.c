/*
 * XREFs of ?OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180366300
 * Callers:
 *     ?InputHostHiding@CControlCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803659D0 (-InputHostHiding@CControlCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CControlCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180365A10 (-InputHostShowing@CControlCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180044914 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x180362F88 (--$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXAEAW.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnInputHostChanging(CControlCenterExperienceManager *a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_DWORD *)a1 + 40) != 2 )
    return 0LL;
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(&v7);
  v3 = CControlCenterExperienceManager::PositionView(a1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x79F,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
