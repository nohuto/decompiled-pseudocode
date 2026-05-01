/*
 * XREFs of ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D6274
 * Callers:
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180238DB4 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z @ 0x1802946B8 (-SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z.c)
 *     ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379D20 (-OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@.c)
 *     ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x18037AAF4 (-PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037DB1C (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x180382C2C (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18038420C (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x180385338 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038C648 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395120 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180397E30 (-OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience.c)
 *     ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x18039FDA0 (-SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z.c)
 *     ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x1803C4894 (-PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z.c)
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x1803C49CC (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSingleViewShellExperience::SetPosition(CSingleViewShellExperience *this, const struct tagRECT *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(**((_QWORD **)this + 10) + 96LL))(
         *((_QWORD *)this + 10),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
