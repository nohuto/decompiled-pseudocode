/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803C8150
 * Callers:
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803CC060 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803CD474 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B34F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803C9660 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1803CAFB0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        CortanaDesktopExperienceView *this,
        ExperienceManagerUtils *a2)
{
  int MonitorInformation; // ebx
  HMONITOR v5; // r8
  __int64 v6; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  float v10; // xmm6_4
  float right; // xmm0_4
  struct tagRECT v12; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v14; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  bool v16; // [rsp+B0h] [rbp+30h] BYREF
  int v17; // [rsp+B8h] [rbp+38h] BYREF

  v17 = 0;
  v16 = 0;
  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         (HMONITOR)a2,
                         &v12,
                         &v14,
                         &v13,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v17,
                         &v16);
  if ( MonitorInformation < 0 )
  {
    v6 = 1616LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v8 = 344LL;
  v9 = v12.right - v12.left;
  if ( v12.right - v12.left < 1196 )
    v8 = 320LL;
  v10 = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, a2, v5);
  if ( v17 == 2 || (unsigned int)Mirror_IsThreadRTL() && v17 )
    right = (float)v13.left - v10;
  else
    right = (float)v13.right;
  *(float *)&v14.left = right;
  *(float *)&v14.top = (float)v13.top;
  *(float *)&v13.left = (float)v12.left;
  *(float *)&v14.right = v10;
  *(float *)&v14.bottom = (float)(v13.bottom - v13.top);
  *(float *)&v13.top = (float)v12.top;
  *(float *)&v13.right = (float)v9;
  *(float *)&v13.bottom = (float)(v12.bottom - v12.top);
  MonitorInformation = CortanaDesktopExperienceView::OnTraySearchItemChanged((char *)this + 16, &v13, &v14);
  if ( MonitorInformation < 0 )
  {
    v6 = 1639LL;
    goto LABEL_3;
  }
  return 0LL;
}
