/*
 * XREFs of ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803C7DB0
 * Callers:
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB398 (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803CC928 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803C9248 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803C9D08 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  float v8; // xmm8_4
  HMONITOR v9; // rdi
  int MonitorInformation; // ebx
  __int64 v11; // rdx
  HMONITOR v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  LONG right; // edi
  int v17; // r15d
  LONG left; // r14d
  int v19; // ebx
  __m128i v20; // xmm6
  float v21; // xmm6_4
  float v22; // xmm7_4
  __m128i v23; // xmm1
  float v24; // xmm1_4
  float v25; // xmm2_4
  bool v26[4]; // [rsp+48h] [rbp-49h] BYREF
  int v27; // [rsp+4Ch] [rbp-45h] BYREF
  struct tagRECT v28; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-31h] BYREF
  struct tagRECT v30; // [rsp+70h] [rbp-21h] BYREF
  RECT rc; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = *((float *)this + 45);
  v4 = *((float *)this + 46);
  v6 = (int)v2;
  v7 = v2 + *((float *)this + 47);
  rc.left = v6;
  v8 = v4 + *((float *)this + 48);
  rc.top = (int)v4;
  rc.right = (int)v7;
  rc.bottom = (int)v8;
  v27 = 0;
  v9 = MonitorFromRect(&rc, 0);
  v26[0] = 0;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         v9,
                         &v29,
                         &v30,
                         &v28,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v27,
                         v26);
  if ( MonitorInformation < 0 )
  {
    v11 = 1501LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v26[0] = 0;
  MonitorInformation = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v9, v26);
  if ( MonitorInformation < 0 )
  {
    v11 = 1504LL;
    goto LABEL_3;
  }
  v14 = 344LL;
  if ( v29.right - v29.left < 1196 )
    v14 = 320LL;
  v15 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v14, (ExperienceManagerUtils *)v9, v13);
  right = v28.right;
  v17 = v15;
  left = v28.left;
  v19 = v28.right - v28.left;
  if ( ((v27 - 1) & 0xFFFFFFFD) != 0 )
  {
    v20 = _mm_cvtsi32_si128(v28.left);
  }
  else
  {
    if ( (unsigned int)Mirror_IsThreadRTL() )
      right = left;
    v20 = _mm_cvtsi32_si128(right);
  }
  LODWORD(v21) = _mm_cvtepi32_ps(v20).m128_u32[0];
  if ( v26[0] )
    v19 = v17;
  v22 = (float)v19;
  if ( (unsigned int)Mirror_IsThreadRTL() && ((v27 - 1) & 0xFFFFFFFD) == 0 )
    v21 = v21 - v22;
  if ( ((v27 - 1) & 0xFFFFFFFD) != 0 )
    v23 = _mm_cvtsi32_si128(v28.bottom);
  else
    v23 = _mm_cvtsi32_si128(v28.top);
  v24 = _mm_cvtepi32_ps(v23).m128_f32[0];
  v25 = (float)(v28.bottom - v28.top);
  if ( (float)(v25 + v24) > v8 )
    v24 = v8 - v25;
  a2->left = (int)v21;
  a2->top = (int)v24;
  a2->right = (int)(float)(v22 + v21);
  a2->bottom = (int)(float)(v25 + v24);
  return 0LL;
}
