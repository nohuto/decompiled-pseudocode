/*
 * XREFs of ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x18051B184
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___::Run @ 0x18051A6F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___--Run.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x18051E820 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x18051AE84 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x18051AEC8 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x18051AF0C (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?ShowSnapAssist@TabletModePositioner@@AEAAJXZ @ 0x18051B208 (-ShowSnapAssist@TabletModePositioner@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModePositioner::ShowLauncherOrSnapAssistInHole(IUnknown **a1, char a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( TabletModePositioner::ShouldShowLauncher((TabletModePositioner *)a1) )
  {
    v4 = TabletModePositioner::ShowLauncher(a1, (a2 & 0x40) != 0);
    if ( v4 < 0 )
    {
      v5 = 2905LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  else if ( TabletModePositioner::ShouldShowSnapAssist((TabletModePositioner *)a1, (a2 & 2) != 0) )
  {
    v4 = TabletModePositioner::ShowSnapAssist((TabletModePositioner *)a1);
    if ( v4 < 0 )
    {
      v5 = 2909LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
