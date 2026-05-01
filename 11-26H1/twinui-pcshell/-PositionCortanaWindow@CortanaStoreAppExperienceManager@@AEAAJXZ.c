/*
 * XREFs of ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801A8474
 * Callers:
 *     ?PearlRectMayHaveChanged@CortanaStoreAppExperienceManager@@UEAAJPEAUHMONITOR__@@@Z @ 0x1801A8430 (-PearlRectMayHaveChanged@CortanaStoreAppExperienceManager@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z @ 0x1803A1840 (-HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z @ 0x1803A1950 (-HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z.c)
 *     ?WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z @ 0x1803A2330 (-WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1801A87F0 (-GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYST.c)
 *     ?SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x1801A8A8C (-SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1802BD3B4 (-SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::PositionCortanaWindow(CortanaStoreAppExperienceManager *this)
{
  HMONITOR v2; // r14
  int MonitorInformation; // esi
  HMONITOR v4; // r8
  int v5; // r15d
  HMONITOR v6; // r8
  int v7; // eax
  __int64 v8; // r9
  int v9; // r12d
  int v10; // eax
  HMONITOR v11; // r8
  int v12; // eax
  __int64 v13; // r8
  bool v14; // zf
  __int32 v15; // r14d
  struct tagRECT v16; // xmm1
  LONG left; // esi
  struct tagRECT v18; // xmm0
  int v19; // eax
  int v20; // eax
  __int64 v22; // rdx
  int right; // edx
  LONG v24; // ecx
  LONG bottom; // rax^4
  int v26; // r11d
  unsigned int v27; // [rsp+38h] [rbp-59h] BYREF
  int v28; // [rsp+3Ch] [rbp-55h] BYREF
  struct tagRECT v29; // [rsp+40h] [rbp-51h] BYREF
  struct tagRECT v30; // [rsp+50h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+68h] [rbp-29h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+88h] [rbp-9h] BYREF
  RECT rc; // [rsp+98h] [rbp+7h] BYREF
  __m128i v35; // [rsp+A8h] [rbp+17h] BYREF
  struct tagRECT v36; // [rsp+B8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 30) )
    return 0LL;
  rc = (RECT)*((_OWORD *)this + 19);
  v27 = 0;
  v2 = MonitorFromRect(&rc, 1u);
  v30 = 0LL;
  rcSrc2 = 0LL;
  v29 = 0LL;
  MonitorInformation = CortanaStoreAppExperienceManager::GetMonitorInformation(
                         this,
                         v2,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v27,
                         &v30,
                         &rcSrc2,
                         &v29);
  if ( MonitorInformation < 0 )
  {
    v22 = 887LL;
    goto LABEL_16;
  }
  v5 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)*((unsigned int *)this + 56), (int)v2, v4);
  v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)*((unsigned int *)this + 57), (int)v2, v6);
  v8 = *((_QWORD *)this + 37);
  v28 = 0;
  v35 = 0LL;
  v9 = v7;
  v10 = (*(__int64 (__fastcall **)(__int64, __m128i *, int *))(*(_QWORD *)v8 + 40LL))(v8, &v35, &v28);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (int)v2, v11);
  v14 = *((_BYTE *)this + 260) == 0;
  v15 = v12;
  v16 = (struct tagRECT)_mm_load_si128(&v35);
  left = v30.left;
  rcDst = v16;
  rcSrc1 = rcSrc2;
  *(_QWORD *)&rcSrc2.left = 0LL;
  if ( !v14 )
  {
    rcSrc2 = v30;
    v18 = v30;
    goto LABEL_7;
  }
  if ( v27 )
  {
    if ( v27 == 1 )
    {
      right = v29.left;
      bottom = v29.bottom;
    }
    else
    {
      if ( v27 != 2 )
      {
        right = (rc.right - rc.left) / 2 - v5 / 2 + rc.left;
        if ( right < v29.left )
          right = v29.left;
        v24 = v29.top - v9;
        rcSrc2.top = v29.top - v9;
        goto LABEL_27;
      }
      bottom = v29.top;
      right = v29.left - v5;
    }
  }
  else
  {
    right = v29.right;
    bottom = v29.top;
  }
  v24 = bottom;
  rcSrc2.top = bottom;
LABEL_27:
  rcSrc2.left = right;
  rcSrc2.right = right + v5;
  rcSrc2.bottom = v24 + v9;
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&rcDst)
    && Geometry::CRect::Intersects((Geometry::CRect *)&rcDst, &rcSrc2)
    && v30.bottom - _mm_srli_si128(*(__m128i *)&v16, 8).m128i_i32[1] <= v15 )
  {
    OffsetRect(&rcSrc2, 0, v35.m128i_i32[1] - v26);
  }
  rcDst = 0LL;
  IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
  v18 = rcDst;
LABEL_7:
  v36 = v18;
  LOBYTE(v13) = v18.left > left;
  v19 = CortanaStoreAppExperienceManager::SetBorder(this, v27, v13);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x386,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  MonitorInformation = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 30) + 64LL))(
                         *((_QWORD *)this + 30),
                         &v36);
  if ( MonitorInformation < 0 )
  {
    v22 = 904LL;
  }
  else
  {
    MonitorInformation = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 96LL))(*((_QWORD *)this + 30));
    if ( MonitorInformation >= 0 )
    {
      v20 = CortanaStoreAppExperienceManager::SetZBand(this);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x38D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
      return 0LL;
    }
    v22 = 905LL;
  }
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)MonitorInformation);
  return (unsigned int)MonitorInformation;
}
