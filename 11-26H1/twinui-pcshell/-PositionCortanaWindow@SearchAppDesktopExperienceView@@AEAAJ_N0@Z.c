/*
 * XREFs of ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4
 * Callers:
 *     ?InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803C9B10 (-InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1803C9B70 (-InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MO.c)
 *     ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803CA7E0 (-OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB00C (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB0BC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB464 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803CB5C0 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180388E50 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x1803897A0 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ??$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA?AV01@AEAH0@Z @ 0x1803C6C5C (--$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA-A.c)
 *     ??1CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1803C7094 (--1CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803C7490 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803C7DB0 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x1803C8224 (-ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLAC.c)
 *     ?EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C89F4 (-EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803C9248 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1803C960C (-GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1803C9878 (-GetViewWrapper@SearchAppDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803C9D08 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CC1D8 (-ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803CC928 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x1803CD1DC (-Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1806832E0 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::PositionCortanaWindow(
        SearchAppDesktopExperienceView *this,
        bool a2,
        bool a3)
{
  bool v3; // r13
  bool v5; // r15
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  HMONITOR v10; // rbx
  int MonitorInformation; // esi
  HMONITOR v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  char v15; // r14
  struct tagRECT v16; // xmm6
  char v17; // r12
  struct tagRECT v18; // xmm7
  int v19; // r14d
  HMONITOR v20; // r8
  int v21; // ecx
  int v22; // ecx
  int v23; // r13d
  unsigned int DefaultCortanaWidthWithoutGutter; // eax
  HMONITOR v25; // r8
  int v26; // eax
  unsigned int v27; // eax
  HMONITOR v28; // r8
  HMONITOR v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  HMONITOR v32; // r8
  int v33; // r11d
  int v34; // ebx
  int v35; // eax
  unsigned int v36; // eax
  int v37; // ecx
  __int64 v38; // rbx
  int v39; // eax
  bool v41[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  int v43; // [rsp+50h] [rbp-B8h] BYREF
  int v44; // [rsp+54h] [rbp-B4h] BYREF
  struct tagRECT v45; // [rsp+58h] [rbp-B0h] BYREF
  int v46; // [rsp+68h] [rbp-A0h] BYREF
  int v47; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v48[3]; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v49; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v50; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v51; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C8h] [rbp-40h]
  __int128 v54; // [rsp+D8h] [rbp-30h]
  __int128 v55; // [rsp+E8h] [rbp-20h]
  _OWORD v56[4]; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT rcDst; // [rsp+138h] [rbp+30h] BYREF
  __int128 v58; // [rsp+148h] [rbp+40h] BYREF
  RECT rcSrc2; // [rsp+158h] [rbp+50h] BYREF
  RECT rc; // [rsp+168h] [rbp+60h] BYREF
  RECT rcSrc1; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v62[336]; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v41[3] = a3;
  v3 = a2;
  v41[2] = a2;
  v44 = (int)*((float *)this + 43);
  v42 = (int)*((float *)this + 44);
  CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Start<int &,int &>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)v62,
    &v44,
    &v42);
  v5 = 0;
  *((_BYTE *)this + 198) = 0;
  rc = 0LL;
  v6 = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = MonitorFromRect(&rc, 0);
    if ( !v10 )
    {
      v7 = -2147418113;
      v8 = 2147549183LL;
      v9 = 1799LL;
      goto LABEL_5;
    }
    v49 = 0LL;
    v45 = 0LL;
    *(_OWORD *)&v48[1] = 0LL;
    v43 = 0;
    v41[0] = 0;
    MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                           this,
                           v10,
                           &v45,
                           &v49,
                           (struct tagRECT *)&v48[1],
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v43,
                           v41);
    if ( MonitorInformation < 0 )
    {
      v13 = 1805LL;
      goto LABEL_8;
    }
    v14 = ExperienceManagerUtils::UnscaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(v45.right - v45.left),
            (int)v10,
            v12);
    *((_BYTE *)this + 204) = IsWideAtStartupEnabled(v14) != 0;
    v41[0] = 0;
    v15 = 0;
    v16 = v49;
    rcSrc2 = v49;
    v17 = 1;
    v18 = *(struct tagRECT *)&v48[1];
    if ( v43 == -1 )
    {
LABEL_34:
      v58 = 0LL;
      v47 = 0;
      MonitorInformation = SearchAppDesktopExperienceView::EnsureInputHostManager(this);
      if ( MonitorInformation >= 0 )
      {
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, int *))(**((_QWORD **)this + 13) + 40LL))(
                *((_QWORD *)this + 13),
                &v58,
                &v47);
        MonitorInformation = 0;
        if ( v31 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x75C,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v31);
        ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (ExperienceManagerUtils *)v10, v32);
        if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v58)
          && Geometry::CRect::Intersects((Geometry::CRect *)&v58, &rcSrc2)
          && v45.bottom - HIDWORD(v58) <= v33 )
        {
          v34 = DWORD1(v58) - rcSrc2.bottom;
          OffsetRect(&rcSrc2, 0, DWORD1(v58) - rcSrc2.bottom);
          OffsetRect(&rc, 0, v34);
        }
        if ( v5 )
          v16 = v45;
        rcSrc1 = v16;
        rcDst = 0LL;
        IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
        if ( rcDst.top != rcSrc1.top || rcDst.bottom != rcSrc1.bottom )
          v17 = 0;
        *((_BYTE *)this + 198) = v17;
        if ( v3 )
        {
          if ( v15 )
          {
            v50 = rc;
            *(struct tagRECT *)&v48[1] = v18;
            v45 = *(struct tagRECT *)((char *)this + 124);
            v51 = rcDst;
            v35 = SearchAppDesktopExperienceView::ApplyCortanaWindowRegion(
                    this,
                    &v51,
                    &v45,
                    (struct tagRECT *)&v48[1],
                    &v50,
                    v5,
                    *((_BYTE *)this + 112) == 0);
            v7 = v35;
            if ( v35 < 0 )
            {
              v8 = (unsigned int)v35;
              v9 = 1929LL;
              goto LABEL_5;
            }
          }
          else
          {
            SearchAppDesktopExperienceView::ResetCortanaWindowRegion(this);
          }
        }
        v36 = *((_DWORD *)this + 30);
        if ( v36 != 2 && (v36 > 9 || (v37 = 578, !_bittest(&v37, v36))) || *((_BYTE *)this + 203) )
          SearchAppDesktopExperienceView::ShowBorder(this, 0LL);
        if ( *((_BYTE *)this + 199) || v41[3] )
          SearchAppDesktopExperienceView::ShowBorder(this, &rcDst);
        SearchAppDesktopExperienceView::GetViewWrapper((__int64)this, v48);
        v38 = v48[0];
        if ( v48[0] )
        {
          memset_0(&v52, 0, 0x40uLL);
          LODWORD(v52) = rcDst.right - rcDst.left;
          DWORD1(v52) = rcDst.bottom - rcDst.top;
          *(_QWORD *)&v53 = *(_QWORD *)&rcDst.left;
          LODWORD(v54) = 0;
          v56[0] = v52;
          v56[1] = v53;
          v56[2] = v54;
          v56[3] = v55;
          v39 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v38 + 448LL))(v38, v56);
          v7 = v39;
          if ( v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7AB,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
              (const char *)(unsigned int)v39);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v48);
            goto LABEL_65;
          }
        }
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
          (CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)v62,
          rcDst.left,
          rcDst.top,
          rcDst.right,
          rcDst.bottom);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v48);
LABEL_64:
        v7 = MonitorInformation;
        goto LABEL_65;
      }
      v13 = 1883LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      goto LABEL_64;
    }
    *(_QWORD *)&v49.left = 0LL;
    MonitorInformation = SearchAppDesktopExperienceView::GetStartSize(this, (struct Windows::Foundation::Size *)&v49);
    if ( MonitorInformation < 0 )
    {
      v13 = 1820LL;
      goto LABEL_8;
    }
    v19 = (int)*(float *)&v49.top;
    v42 = 0;
    v46 = 0;
    MonitorInformation = GetDpiForMonitor(v10, 0LL, &v42, &v46);
    if ( MonitorInformation < 0 )
    {
      v13 = 1825LL;
      goto LABEL_8;
    }
    v21 = *((_DWORD *)this + 29);
    if ( !v21 )
      goto LABEL_20;
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 != 1 )
      {
        v7 = -2147467259;
        goto LABEL_65;
      }
      v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 8)) - _mm_cvtsi128_si32((__m128i)v16);
      v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 4));
      goto LABEL_21;
    }
    DefaultCortanaWidthWithoutGutter = GetDefaultCortanaWidthWithoutGutter(&v45, v42);
    v26 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)DefaultCortanaWidthWithoutGutter,
            (ExperienceManagerUtils *)v10,
            v25);
    v23 = v44;
    if ( v44 <= v26 )
    {
LABEL_20:
      v27 = GetDefaultCortanaWidthWithoutGutter(&v45, v42);
      v23 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
              (ExperienceManagerUtils *)v27,
              (ExperienceManagerUtils *)v10,
              v28);
    }
LABEL_21:
    if ( v19 <= ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)0x1E0,
                  (ExperienceManagerUtils *)v10,
                  v20) )
      v19 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
              (ExperienceManagerUtils *)0x1E0,
              (ExperienceManagerUtils *)v10,
              v29);
    v5 = *((_DWORD *)this + 29) == 1 && *((_DWORD *)this + 30) == 6 && v43 == 3;
    MonitorInformation = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v10, v41);
    if ( MonitorInformation < 0 )
    {
      v13 = 1859LL;
      goto LABEL_8;
    }
    if ( v41[0] || v5 )
    {
      v5 = 1;
      v30 = (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 12))
                         - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 4)));
      v19 += v30;
    }
    *(RECT *)&v48[1] = rc;
    v50 = v18;
    rcSrc2 = *(RECT *)SearchAppDesktopExperienceView::ComputeCortanaWindowRect(
                        v30,
                        (__int64)&v51,
                        v43,
                        v23,
                        v19,
                        &v50,
                        (int *)&v48[1],
                        v5);
    v15 = 1;
    v3 = v41[2];
    goto LABEL_34;
  }
  v8 = (unsigned int)v6;
  v9 = 1796LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)v8);
LABEL_65:
  CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::~CortanaExperienceManager_PositionCortanaWindow((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)v62);
  return v7;
}
