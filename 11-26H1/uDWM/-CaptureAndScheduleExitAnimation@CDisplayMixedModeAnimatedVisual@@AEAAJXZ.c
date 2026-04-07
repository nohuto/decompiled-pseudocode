/*
 * XREFs of ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B222C
 * Callers:
 *     ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B27D0 (-StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040100 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800582A8 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800582BC (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180058478 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800AE69C (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AEA8C (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ??$emplace_back@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1F48 (--$emplace_back@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::CaptureAndScheduleExitAnimation(
        CDisplayMixedModeAnimatedVisual *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int updated; // ebx
  __int64 v6; // rdx
  struct CVisual *RootVisualForDesktop; // rsi
  CDWMDisplaySet *v9; // r12
  unsigned int i; // r15d
  const struct CDWMDisplay *v11; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // edi
  CAnimatedTransitionVisual *v18; // rbx
  LONG v19; // esi
  LONG v20; // edi
  __int64 v21; // r8
  CAnimatedTransitionVisual **v22; // rdx
  __int64 v23; // rdx
  CAnimatedTransitionVisual *v24; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h]
  struct CVisual *v27; // [rsp+48h] [rbp-38h]
  struct tagRECT v28; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( !*((_QWORD *)this + 30) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAB,
      (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      a4);
  v25 = 0LL;
  GetDesktopID(1LL, &v25);
  updated = CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(this);
  if ( updated < 0 )
  {
    v6 = 176LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v25);
  v27 = RootVisualForDesktop;
  v9 = (CDWMDisplaySet *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  for ( i = 0; i < *((_DWORD *)v9 + 16); ++i )
  {
    v11 = CDWMDisplaySet::DisplayNoRef(v9, i);
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(*((CDWMDisplaySet **)this + 30), v11);
    if ( MatchedPhysicalDisplayNoRef )
    {
      v29 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
      v28 = *(struct tagRECT *)((char *)v11 + 56);
      v24 = 0LL;
      v16 = CAnimatedTransitionVisual::Create(&v24);
      v17 = v16;
      if ( v16 < 0 )
      {
        v23 = 210LL;
        goto LABEL_30;
      }
      v18 = v24;
      v16 = CAnimatedTransitionVisual::SetVisual(v24, RootVisualForDesktop, 1, &v29);
      v17 = v16;
      if ( v16 < 0 )
      {
        v23 = 214LL;
        goto LABEL_30;
      }
      v19 = 0;
      if ( v29.right - v29.left >= 0 )
        v19 = v29.right - v29.left;
      LODWORD(v26) = v19;
      v20 = 0;
      if ( v29.bottom - v29.top >= 0 )
        v20 = v29.bottom - v29.top;
      HIDWORD(v26) = v20;
      CAnimatedTransitionVisual::SetBeginRect(v18, &v28);
      CAnimatedTransitionVisual::SetEndRect(v18, &v28);
      CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v18 + 8), v19, v20);
      *((_QWORD *)v18 + 111) = v26;
      CVisual::SetInterpolationMode((__int64)v18 + 8, 1LL, v21);
      RootVisualForDesktop = v27;
      v16 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v18, v27);
      v17 = v16;
      if ( v16 < 0 )
      {
        v23 = 226LL;
        goto LABEL_30;
      }
      v16 = CContainerVisual::AddChild(
              this,
              (struct CVisual *)(((unsigned __int64)v18 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v18 >> 64)));
      v17 = v16;
      if ( v16 < 0 )
      {
        v23 = 228LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v16);
        wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v24);
        return v17;
      }
      v22 = (CAnimatedTransitionVisual **)*((_QWORD *)this + 46);
      if ( v22 == *((CAnimatedTransitionVisual ***)this + 47) )
      {
        std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
          (const char *)this + 360,
          (__int64)v22,
          (__int64 *)&v24);
      }
      else
      {
        v24 = 0LL;
        *v22 = v18;
        *((_QWORD *)this + 46) += 8LL;
      }
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      if ( (unsigned int)dword_1801140F8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1801140F8, 2LL) )
        {
          v24 = (const struct CDWMDisplay *)((char *)v11 + 96);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            v13,
            byte_180100636,
            v14,
            v15,
            (void **)&v24);
        }
      }
      std::vector<tagRECT>::emplace_back<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMILSurfaceRect_> const &>(
        (_QWORD *)this + 51,
        (__int128 *)((char *)v11 + 56));
    }
  }
  if ( *((_QWORD *)this + 45) == *((_QWORD *)this + 46) )
  {
    CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    updated = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    if ( updated < 0 )
    {
      v6 = 236LL;
      goto LABEL_5;
    }
    updated = CDisplayAnimatedVisual::ScheduleAnimation(
                (unsigned __int64)this + 208,
                (CAnimatedTransitionVisual ***)this + 45,
                (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
                *((_DWORD *)this + 68),
                *((_DWORD *)this + 70),
                (unsigned int *)this + 110);
    if ( updated < 0 )
    {
      v6 = 243LL;
      goto LABEL_5;
    }
    updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
    if ( updated < 0 )
    {
      v6 = 247LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
