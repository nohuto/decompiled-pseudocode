/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803BF020
 * Callers:
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C2490 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B34F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803C0130 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        SearchAppDesktopExperienceView *this,
        ExperienceManagerUtils *a2)
{
  int MonitorInformation; // eax
  HMONITOR v5; // r8
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ebx
  struct tagRECT v10; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v12; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  bool v14; // [rsp+A0h] [rbp+30h] BYREF
  int v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = 0;
  v14 = 0;
  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         (HMONITOR)a2,
                         &v10,
                         &v12,
                         &v11,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v15,
                         &v14);
  v6 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v8 = 344LL;
    v9 = v10.right - v10.left;
    if ( v10.right - v10.left < 1196 )
      v8 = 320LL;
    ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, a2, v5);
    if ( v15 != 2 )
      Mirror_IsThreadRTL();
    *(float *)&v11.left = (float)v10.left;
    *(float *)&v11.top = (float)v10.top;
    *(float *)&v11.right = (float)v9;
    result = 0LL;
    *(float *)&v11.bottom = (float)(v10.bottom - v10.top);
    *(struct tagRECT *)((char *)this + 180) = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return v6;
  }
  return result;
}
