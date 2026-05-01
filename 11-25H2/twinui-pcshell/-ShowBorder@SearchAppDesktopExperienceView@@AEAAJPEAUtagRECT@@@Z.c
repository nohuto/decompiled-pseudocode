/*
 * XREFs of ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803C3754
 * Callers:
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C1B0C (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803C2500 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803BECB0 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetBorderFlagFromStuckEdge@SearchAppDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x1803BFC78 (-GetBorderFlagFromStuckEdge@SearchAppDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdg.c)
 *     ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1803BFF9C (-GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803C0130 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShowBorder(SearchAppDesktopExperienceView *this, struct tagRECT *a2)
{
  unsigned int v2; // eax
  int v5; // ecx
  int MonitorInformation; // edi
  __int64 v7; // rdx
  HMONITOR v9; // rax
  LONG left; // ecx
  int x; // edx
  int y; // r8d
  HWND Hwnd; // rax
  __int64 BorderFlagFromStuckEdge; // rdx
  char v15; // di
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64, __int64, __int64, __int64, struct tagRECT *); // rax
  bool v18; // [rsp+40h] [rbp-39h] BYREF
  int v19; // [rsp+44h] [rbp-35h]
  int v20; // [rsp+48h] [rbp-31h] BYREF
  struct tagPOINT Point; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT v22; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT v23; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v24; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v25; // [rsp+90h] [rbp+17h] BYREF
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 30);
  if ( v2 > 9 || (v5 = 582, !_bittest(&v5, v2)) || *((_BYTE *)this + 203) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 18) + 128LL))(
      *((_QWORD *)this + 18),
      0LL,
      0LL);
    v15 = 0;
  }
  else
  {
    rc = 0LL;
    MonitorInformation = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
    if ( MonitorInformation < 0 )
    {
      v7 = 2000LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return (unsigned int)MonitorInformation;
    }
    v9 = MonitorFromRect(&rc, 0);
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    v20 = 0;
    v18 = 0;
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                           this,
                           v9,
                           &v23,
                           &v24,
                           &v22,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v20,
                           &v18);
    if ( MonitorInformation < 0 )
    {
      v7 = 2010LL;
      goto LABEL_6;
    }
    v25 = v24;
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        if ( v22.bottom > v24.top )
          v25.top = v22.bottom;
      }
      else if ( v20 == 2 )
      {
        if ( v22.left < _mm_srli_si128((__m128i)v24, 8).m128i_i32[0] )
          v25.right = v22.left;
      }
      else if ( v20 == 3 && v22.top < _mm_srli_si128(*(__m128i *)&v24, 8).m128i_i32[1] )
      {
        v25.bottom = v22.top;
      }
    }
    else
    {
      left = v25.left;
      if ( v22.right > v24.left )
        left = v22.right;
      v25.left = left;
    }
    Point.x = v25.left;
    Point.y = v25.top;
    if ( a2 )
    {
      x = v25.left - a2->left;
      y = v25.top - a2->top;
      Point.y = y;
      Point.x = x;
    }
    else
    {
      Hwnd = (HWND)SearchAppDesktopExperienceView::GetHwnd(this);
      ScreenToClient(Hwnd, &Point);
      y = Point.y;
      x = Point.x;
    }
    OffsetRect(&v25, x - v25.left, y - v25.top);
    BorderFlagFromStuckEdge = (unsigned int)SearchAppDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                              (__int64)this,
                                              v20,
                                              *((_BYTE *)this + 198));
    v15 = 1;
    v19 = 0x1000000;
    *(float *)&v22.left = (float)v25.left;
    v16 = *((_QWORD *)this + 18);
    *(float *)&v22.top = (float)v25.top;
    *(float *)&v22.right = (float)(v25.right - v25.left);
    v17 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v16 + 136LL);
    *(float *)&v22.bottom = (float)(v25.bottom - v25.top);
    v23 = v22;
    v17(v16, BorderFlagFromStuckEdge, 1LL, 0x1000000LL, &v23);
  }
  *((_BYTE *)this + 199) = v15;
  return 0LL;
}
