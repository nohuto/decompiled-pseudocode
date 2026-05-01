/*
 * XREFs of ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x1803C4894
 * Callers:
 *     ?OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4760 (-OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D6274 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU5@@Z @ 0x1803C1DA8 (-CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU.c)
 *     ?GetTaskBarPositionForMonitor@MeetNowExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@@Z @ 0x1803C2AA0 (-GetTaskBarPositionForMonitor@MeetNowExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::PositionFlyout(__int64 a1, __int64 a2)
{
  __m128 v3; // xmm7
  __m128 v4; // xmm6
  HMONITOR v5; // rax
  int TaskBarPositionForMonitor; // ebx
  __int64 v7; // rdx
  RECT v9; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v11; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_QWORD *)&v10.left = a2;
  v3 = (__m128)(unsigned int)a2;
  v4 = (__m128)HIDWORD(a2);
  if ( *(float *)&a2 > 0.0 && *((float *)&a2 + 1) > 0.0 )
  {
    v10 = 0LL;
    v5 = MonitorFromRect((LPCRECT)(a1 + 408), 1u);
    TaskBarPositionForMonitor = MeetNowExperienceManager::GetTaskBarPositionForMonitor(
                                  (MeetNowExperienceManager *)a1,
                                  v5,
                                  &v10);
    if ( TaskBarPositionForMonitor < 0 )
    {
      v7 = 472LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)TaskBarPositionForMonitor);
      return (unsigned int)TaskBarPositionForMonitor;
    }
    v11 = 0LL;
    v9 = v10;
    TaskBarPositionForMonitor = MeetNowExperienceManager::CalculateFlyoutPosition(
                                  (MeetNowExperienceManager *)a1,
                                  (SIZE)*(_OWORD *)&_mm_unpacklo_ps(v3, v4),
                                  &v9,
                                  &v11);
    if ( TaskBarPositionForMonitor < 0 )
    {
      v7 = 475LL;
      goto LABEL_5;
    }
    if ( *(_QWORD *)(a1 + 208) )
    {
      TaskBarPositionForMonitor = CSingleViewShellExperience::SetPosition(
                                    (CSingleViewShellExperience *)(a1 + 184),
                                    &v11);
      if ( TaskBarPositionForMonitor < 0 )
      {
        v7 = 480LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
