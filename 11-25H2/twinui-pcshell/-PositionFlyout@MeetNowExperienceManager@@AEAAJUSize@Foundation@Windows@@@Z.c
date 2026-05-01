/*
 * XREFs of ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x1803BB5F4
 * Callers:
 *     ?OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BB4C0 (-OnViewUncloaking@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801E24E0 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU5@@Z @ 0x1803B8478 (-CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU.c)
 *     ?GetTaskBarPositionForMonitor@MeetNowExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@@Z @ 0x1803B9810 (-GetTaskBarPositionForMonitor@MeetNowExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::PositionFlyout(__int64 a1, __int64 a2)
{
  __m128 v3; // xmm7
  __m128 v4; // xmm6
  HMONITOR v5; // rax
  int TaskBarPositionForMonitor; // edi
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11[4]; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v13; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_QWORD *)&v12.left = a2;
  v3 = (__m128)(unsigned int)a2;
  v4 = (__m128)HIDWORD(a2);
  if ( *(float *)&a2 <= 0.0 || *((float *)&a2 + 1) <= 0.0 )
    return 0LL;
  v12 = 0LL;
  v5 = MonitorFromRect((LPCRECT)(a1 + 408), 1u);
  TaskBarPositionForMonitor = MeetNowExperienceManager::GetTaskBarPositionForMonitor(
                                (MeetNowExperienceManager *)a1,
                                v5,
                                &v12);
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
  v13 = 0LL;
  *(struct tagRECT *)v11 = v12;
  TaskBarPositionForMonitor = MeetNowExperienceManager::CalculateFlyoutPosition(
                                (MeetNowExperienceManager *)a1,
                                (SIZE)*(_OWORD *)&_mm_unpacklo_ps(v3, v4),
                                (RECT *)v11,
                                &v13);
  if ( TaskBarPositionForMonitor < 0 )
  {
    v7 = 475LL;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(a1 + 208) )
    return 0LL;
  v9 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(a1 + 184), &v13);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E0,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
