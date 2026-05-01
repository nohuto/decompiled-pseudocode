/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803D7314
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D50C4 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D5B64 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x1803D2BA4 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1803D2EA4 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803D30A8 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowBorder(CortanaDesktopExperienceView *this, struct tagRECT *a2)
{
  unsigned int v2; // eax
  char v3; // bl
  int v6; // ecx
  __m128 v7; // xmm2
  float v8; // xmm1_4
  HMONITOR v9; // rax
  int MonitorInformation; // eax
  unsigned int v12; // esi
  LONG left; // ecx
  int x; // edx
  int y; // r8d
  HWND Hwnd; // rax
  __int64 v17; // r8
  __int64 BorderFlagFromStuckEdge; // rdx
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, __int64, __int64, __int64, struct tagRECT *); // rax
  bool v21; // [rsp+40h] [rbp-39h] BYREF
  int v22; // [rsp+44h] [rbp-35h]
  int v23; // [rsp+48h] [rbp-31h] BYREF
  struct tagPOINT Point; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT v25; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT v26; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v28; // [rsp+90h] [rbp+17h] BYREF
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 36);
  v3 = 0;
  if ( (v2 == 2 || v2 <= 9 && (v6 = 578, _bittest(&v6, v2))) && !*((_BYTE *)this + 249) )
  {
    Mirror_IsThreadRTL();
    v7 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 196));
    v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
    rc.left = (int)v7.m128_f32[0];
    rc.top = (int)v8;
    rc.right = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
    rc.bottom = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v8);
    v9 = MonitorFromRect(&rc, 0);
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA19,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    v23 = 0;
    v21 = 0;
    v27 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                           this,
                           v9,
                           &v26,
                           &v27,
                           &v25,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v23,
                           &v21);
    v12 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA20,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return v12;
    }
    v28 = v27;
    if ( v23 )
    {
      if ( v23 == 1 )
      {
        if ( v25.bottom > v27.top )
          v28.top = v25.bottom;
      }
      else if ( v23 == 2 )
      {
        if ( v25.left < _mm_srli_si128((__m128i)v27, 8).m128i_i32[0] )
          v28.right = v25.left;
      }
      else if ( v23 == 3 && v25.top < _mm_srli_si128(*(__m128i *)&v27, 8).m128i_i32[1] )
      {
        v28.bottom = v25.top;
      }
    }
    else
    {
      left = v28.left;
      if ( v25.right > v27.left )
        left = v25.right;
      v28.left = left;
    }
    Point.x = v28.left;
    Point.y = v28.top;
    if ( a2 )
    {
      x = v28.left - a2->left;
      y = v28.top - a2->top;
      Point.y = y;
      Point.x = x;
    }
    else
    {
      Hwnd = (HWND)CortanaDesktopExperienceView::GetHwnd(this);
      ScreenToClient(Hwnd, &Point);
      y = Point.y;
      x = Point.x;
    }
    OffsetRect(&v28, x - v28.left, y - v28.top);
    BorderFlagFromStuckEdge = (unsigned int)CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                              (__int64)this,
                                              v23,
                                              v17,
                                              *((_BYTE *)this + 240));
    v22 = 0x1000000;
    *(float *)&v25.left = (float)v28.left;
    v19 = *((_QWORD *)this + 21);
    *(float *)&v25.top = (float)v28.top;
    *(float *)&v25.right = (float)(v28.right - v28.left);
    v20 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v19 + 136LL);
    *(float *)&v25.bottom = (float)(v28.bottom - v28.top);
    v26 = v25;
    v20(v19, BorderFlagFromStuckEdge, 1LL, 0x1000000LL, &v26);
    v3 = 1;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 128LL))(
      *((_QWORD *)this + 21),
      0LL,
      0LL);
  }
  *((_BYTE *)this + 241) = v3;
  return 0LL;
}
