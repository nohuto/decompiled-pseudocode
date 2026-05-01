/*
 * XREFs of ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801AFE94
 * Callers:
 *     ?PearlRectMayHaveChanged@CortanaStoreAppExperienceManager@@UEAAJPEAUHMONITOR__@@@Z @ 0x1801AFE50 (-PearlRectMayHaveChanged@CortanaStoreAppExperienceManager@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z @ 0x1803991F4 (-HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z @ 0x180399300 (-HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z.c)
 *     ?WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z @ 0x180399CB0 (-WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1801B0208 (-GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYST.c)
 *     ?SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x1801B049C (-SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180210544 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B34F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1802C685C (-SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  RECT v14; // xmm0
  __int32 v15; // r14d
  bool v16; // zf
  struct tagRECT v17; // xmm1
  LONG left; // esi
  struct tagRECT v19; // xmm0
  int v20; // eax
  int v21; // eax
  __int64 v23; // rdx
  int right; // edx
  LONG v25; // ecx
  LONG bottom; // rax^4
  int v27; // r11d
  unsigned int v28; // [rsp+38h] [rbp-59h] BYREF
  int v29; // [rsp+3Ch] [rbp-55h] BYREF
  struct tagRECT v30; // [rsp+40h] [rbp-51h] BYREF
  struct tagRECT v31; // [rsp+50h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+68h] [rbp-29h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+88h] [rbp-9h] BYREF
  RECT rc; // [rsp+98h] [rbp+7h] BYREF
  __m128i v36; // [rsp+A8h] [rbp+17h] BYREF
  struct tagRECT v37; // [rsp+B8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 30) )
    return 0LL;
  rc = (RECT)*((_OWORD *)this + 19);
  v28 = 0;
  v2 = MonitorFromRect(&rc, 1u);
  v31 = 0LL;
  rcSrc2 = 0LL;
  v30 = 0LL;
  MonitorInformation = CortanaStoreAppExperienceManager::GetMonitorInformation(
                         this,
                         v2,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v28,
                         &v31,
                         &rcSrc2,
                         &v30);
  if ( MonitorInformation < 0 )
  {
    v23 = 887LL;
    goto LABEL_16;
  }
  v5 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)*((unsigned int *)this + 56), (int)v2, v4);
  v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)*((unsigned int *)this + 57), (int)v2, v6);
  v8 = *((_QWORD *)this + 37);
  v29 = 0;
  v9 = v7;
  v36 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __m128i *, int *))(*(_QWORD *)v8 + 40LL))(v8, &v36, &v29);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (int)v2, v11);
  v14 = rcSrc2;
  v15 = v12;
  *(_QWORD *)&rcSrc2.left = 0LL;
  v16 = *((_BYTE *)this + 260) == 0;
  v17 = (struct tagRECT)_mm_load_si128(&v36);
  left = v31.left;
  rcDst = v17;
  rcSrc1 = v14;
  if ( !v16 )
  {
    rcSrc2 = v31;
    v19 = v31;
    goto LABEL_7;
  }
  if ( v28 )
  {
    if ( v28 == 1 )
    {
      right = v30.left;
      bottom = v30.bottom;
    }
    else
    {
      if ( v28 != 2 )
      {
        right = (rc.right - rc.left) / 2 - v5 / 2 + rc.left;
        if ( right < v30.left )
          right = v30.left;
        v25 = v30.top - v9;
        rcSrc2.top = v30.top - v9;
        goto LABEL_27;
      }
      bottom = v30.top;
      right = v30.left - v5;
    }
  }
  else
  {
    right = v30.right;
    bottom = v30.top;
  }
  v25 = bottom;
  rcSrc2.top = bottom;
LABEL_27:
  rcSrc2.left = right;
  rcSrc2.right = right + v5;
  rcSrc2.bottom = v25 + v9;
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&rcDst)
    && Geometry::CRect::Intersects((Geometry::CRect *)&rcDst, &rcSrc2)
    && v31.bottom - _mm_srli_si128(*(__m128i *)&v17, 8).m128i_i32[1] <= v15 )
  {
    OffsetRect(&rcSrc2, 0, v36.m128i_i32[1] - v27);
  }
  rcDst = 0LL;
  IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
  v19 = rcDst;
LABEL_7:
  v37 = v19;
  LOBYTE(v13) = v19.left > left;
  v20 = CortanaStoreAppExperienceManager::SetBorder(this, v28, v13);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x386,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  MonitorInformation = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 30) + 64LL))(
                         *((_QWORD *)this + 30),
                         &v37);
  if ( MonitorInformation < 0 )
  {
    v23 = 904LL;
  }
  else
  {
    MonitorInformation = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 96LL))(*((_QWORD *)this + 30));
    if ( MonitorInformation >= 0 )
    {
      v21 = CortanaStoreAppExperienceManager::SetZBand(this);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x38D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v21);
      return 0LL;
    }
    v23 = 905LL;
  }
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)MonitorInformation);
  return (unsigned int)MonitorInformation;
}
