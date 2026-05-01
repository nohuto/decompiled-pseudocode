/*
 * XREFs of ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x18022036C
 * Callers:
 *     ?InputHostHiding@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180220330 (-InputHostHiding@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18037C690 (-InputHostShowing@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MOD.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@ToastCenterTelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x18037B108 (--$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@ToastCenterTelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnInputHostChanging(CToastCenterExperienceManager *a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_DWORD *)a1 + 36) != 2 )
    return 0LL;
  ToastCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(&v7);
  v3 = CToastCenterExperienceManager::PositionView(a1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x756,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
