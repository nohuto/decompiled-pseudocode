/*
 * XREFs of ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800B8E00
 * Callers:
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18004ED70 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18007F3D4 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B8AF4 (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BA420 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BFBEC (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801529A0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B16C0 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180373360 (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18037C440 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18037DEC0 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18038BE54 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1803B5E90 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x1803BBEF0 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1W4LIGHT_DISMISS_FLAGS@@@Z @ 0x1803BBF90 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1W4LIGH.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z @ 0x1803BC030 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803BC128 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18001DA64 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ @ 0x1800B8ED0 (-IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BCFF0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::AddTestAumid(CSingleViewShellExperience *this, HSTRING a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !ExperienceManagerUtils::IsPreReleaseExperience(this) )
    return 0LL;
  if ( *((_QWORD *)this + 22) )
  {
    v4 = -2147023654;
    v5 = 208LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 21, &v9);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v4 = CSingleViewShellExperience::RegisterAumid(
           this,
           *((HSTRING *)this + 21),
           (struct EventRegistrationToken *)this + 22);
    if ( v4 >= 0 )
      return 0LL;
    v5 = 210LL;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
