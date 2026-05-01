/*
 * XREFs of ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C2490
 * Callers:
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803C2410 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x1803C3B10 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803BF020 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x1803C0000 (-GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::PositionAlongsideStart(SearchAppDesktopExperienceView *this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1339LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveLauncherMonitor);
    return (unsigned int)ImmersiveLauncherMonitor;
  }
  ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
                               this,
                               (ExperienceManagerUtils *)v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1340LL;
    goto LABEL_3;
  }
  return 0LL;
}
