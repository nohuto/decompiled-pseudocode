/*
 * XREFs of ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B282C
 * Callers:
 *     ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B2DF0 (-StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180023514 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x180068368 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18006837C (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800683E4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800796D0 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095D90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AF0BC (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800AF8A8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?push_back@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800B0040 (-push_back@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800B24AC (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::CaptureAndScheduleExitAnimation(
        CDisplayMixedModeAnimatedVisual *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // esi
  int updated; // ebx
  __int64 v7; // rdx
  struct CVisual *RootVisualForDesktop; // r13
  CDWMDisplaySet *v10; // r12
  unsigned int i; // r15d
  const struct CDWMDisplay *v12; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD *v17; // r8
  _OWORD *v18; // rdx
  int v19; // eax
  CAnimatedTransitionVisual *v20; // rbx
  int v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // r8d
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  CAnimatedTransitionVisual *v29; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-38h]
  __int64 v31; // [rsp+40h] [rbp-30h]
  struct tagRECT v32; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v33; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v5 = 0;
  if ( !*((_QWORD *)this + 34) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAB,
      (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      a4);
  v30 = 0LL;
  GetDesktopID(1LL);
  updated = CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(this);
  if ( updated < 0 )
  {
    v7 = 176LL;
    goto LABEL_5;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v30);
  v10 = (CDWMDisplaySet *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  for ( i = 0; i < *((_DWORD *)v10 + 16); ++i )
  {
    v12 = CDWMDisplaySet::DisplayNoRef(v10, i);
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(*((CDWMDisplaySet **)this + 34), v12);
    if ( MatchedPhysicalDisplayNoRef )
    {
      v33 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
      v32 = *(struct tagRECT *)((char *)v12 + 56);
      v29 = 0LL;
      v19 = CAnimatedTransitionVisual::Create(&v29);
      updated = v19;
      if ( v19 < 0 )
      {
        v27 = 210LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v19);
LABEL_36:
        wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v29);
        return (unsigned int)updated;
      }
      v20 = v29;
      v21 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v29, RootVisualForDesktop, 1, &v33);
      if ( v21 < 0 )
      {
        v28 = 214LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v21);
        updated = v21;
        goto LABEL_36;
      }
      v22 = v33.right - v33.left;
      if ( v33.right - v33.left < 0 )
        v22 = 0;
      LODWORD(v31) = v22;
      if ( v33.right - v33.left >= 0 )
        v5 = v33.right - v33.left;
      v23 = v33.bottom - v33.top;
      v24 = v33.bottom - v33.top;
      if ( v33.bottom - v33.top < 0 )
        v24 = 0;
      HIDWORD(v31) = v24;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v20, &v32);
      CAnimatedTransitionVisual::SetEndRect(v20, &v32);
      *(_QWORD *)&v32.left = (char *)v20 + 8;
      v25 = 0;
      if ( v23 >= 0 )
        v25 = v23;
      CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v20 + 8), v5, v25);
      *((_QWORD *)v20 + 113) = v31;
      v26 = *(_QWORD *)&v32.left;
      CVisual::SetInterpolationMode(*(__int64 **)&v32.left, 1);
      v21 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
              (CCachedVisualImageProxy **)v20,
              RootVisualForDesktop,
              &v33);
      if ( v21 < 0 )
      {
        v28 = 226LL;
        goto LABEL_33;
      }
      v19 = CContainerVisual::AddChild(this, (struct CVisual *)(v26 & -(__int64)(v20 != 0LL)));
      updated = v19;
      v5 = 0;
      if ( v19 < 0 )
      {
        v27 = 228LL;
        goto LABEL_35;
      }
      std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::push_back(
        (__int64)this + 392,
        (__int64 *)&v29);
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v29);
    }
    else
    {
      if ( (unsigned int)dword_180118130 > 5 && tlgKeywordOn((__int64)&dword_180118130, 2LL) )
      {
        v29 = (const struct CDWMDisplay *)((char *)v12 + 96);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v14,
          byte_180104496,
          v15,
          v16,
          (void **)&v29);
      }
      v17 = (_OWORD *)((char *)v12 + 56);
      v18 = (_OWORD *)*((_QWORD *)this + 56);
      if ( v18 == *((_OWORD **)this + 57) )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>((const char *)this + 440, (__int64)v18, v17);
      }
      else
      {
        *v18 = *v17;
        *((_QWORD *)this + 56) += 16LL;
      }
    }
  }
  if ( *((_QWORD *)this + 49) == *((_QWORD *)this + 50) )
  {
    CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
    return 0LL;
  }
  updated = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
  if ( updated >= 0 )
  {
    updated = CDisplayAnimatedVisual::ScheduleAnimation(
                (CDisplayMixedModeAnimatedVisual *)((char *)this + 472),
                (CAnimatedTransitionVisual ***)this + 49,
                (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
                *((_DWORD *)this + 76),
                *((_DWORD *)this + 78),
                (unsigned int *)this + 118);
    if ( updated >= 0 )
    {
      updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
      if ( updated >= 0 )
        return 0LL;
      v7 = 247LL;
    }
    else
    {
      v7 = 243LL;
    }
  }
  else
  {
    v7 = 236LL;
  }
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
