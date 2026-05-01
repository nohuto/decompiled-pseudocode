/*
 * XREFs of ?CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU5@@Z @ 0x1803C1DA8
 * Callers:
 *     ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x1803C4894 (-PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?UpdateClipRect@MeetNowExperienceManager@@AEAAJXZ @ 0x1803C5EDC (-UpdateClipRect@MeetNowExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::CalculateFlyoutPosition(
        MeetNowExperienceManager *a1,
        SIZE a2,
        RECT *a3,
        struct tagRECT *popupWindowPosition)
{
  int v5; // eax
  const char *v7; // r9
  int updated; // eax
  unsigned int v10; // esi
  LONG v11; // r8d
  LONG v12; // eax
  LONG v13; // r8d
  LONG v14; // eax
  SIZE windowSize; // [rsp+30h] [rbp-28h] BYREF
  POINT anchorPoint; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = *((_DWORD *)a1 + 102) + *((_DWORD *)a1 + 104);
  windowSize = a2;
  anchorPoint.x = v5 / 2;
  anchorPoint.y = (*((_DWORD *)a1 + 103) + *((_DWORD *)a1 + 105)) / 2;
  windowSize.cx = (int)*(float *)&a2.cx;
  windowSize.cy = (int)*(float *)&a2.cy;
  if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, a3, popupWindowPosition) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1A2,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
             v7);
  updated = MeetNowExperienceManager::UpdateClipRect(a1);
  v10 = updated;
  if ( updated >= 0 )
  {
    v11 = *((_DWORD *)a1 + 99);
    if ( popupWindowPosition->top >= v11 )
    {
      v13 = *((_DWORD *)a1 + 101);
      if ( popupWindowPosition->bottom > v13 )
      {
        OffsetRect(popupWindowPosition, 0, v13 - popupWindowPosition->bottom);
        v14 = *((_DWORD *)a1 + 99);
        if ( popupWindowPosition->top < v14 )
          popupWindowPosition->top = v14;
      }
    }
    else
    {
      OffsetRect(popupWindowPosition, 0, v11 - popupWindowPosition->top);
      v12 = *((_DWORD *)a1 + 101);
      if ( popupWindowPosition->bottom > v12 )
        popupWindowPosition->bottom = v12;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
    return v10;
  }
}
