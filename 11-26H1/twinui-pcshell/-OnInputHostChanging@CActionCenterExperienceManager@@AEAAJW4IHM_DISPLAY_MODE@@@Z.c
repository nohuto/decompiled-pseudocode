/*
 * XREFs of ?OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180213D68
 * Callers:
 *     ?InputHostHiding@CActionCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1802A9F60 (-InputHostHiding@CActionCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CActionCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180365FE0 (-InputHostShowing@CActionCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180099D14 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x180363030 (--$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnInputHostChanging(CActionCenterExperienceManager *a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_DWORD *)a1 + 42) != 2 )
    return 0LL;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(&v7);
  v3 = CActionCenterExperienceManager::PositionView(a1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D3,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
