/*
 * XREFs of ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x18022F43C
 * Callers:
 *     ?InputHostHiding@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18022F400 (-InputHostHiding@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180374A30 (-InputHostShowing@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MOD.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801EA8C8 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@ToastCenterTelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x18037360C (--$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@ToastCenterTelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnInputHostChanging(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *(_DWORD *)(a1 + 144) != 2 )
    return 0LL;
  ToastCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(&v7);
  v3 = CToastCenterExperienceManager::PositionView((__int64 **)a1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x750,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
