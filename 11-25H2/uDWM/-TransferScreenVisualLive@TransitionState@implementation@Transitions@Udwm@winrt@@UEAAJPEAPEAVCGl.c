/*
 * XREFs of ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800DF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x180064B14 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800796D0 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180086E2C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ??$?0VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1800DCAD4 (--$-0VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VCVisual@@Uerr_return.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE394 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 *     ?push_back@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DFF68 (-push_back@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive(
        CBaseObject **this,
        struct CGlobalTimeTrackVisual **a2,
        struct CAnimatedTransitionVisual **a3)
{
  int RootRenderDataVisual; // eax
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  int v14; // r13d
  CBaseObject *RootVisualForDesktop; // rax
  CBaseObject *v16; // rbx
  int v17; // eax
  unsigned int v18; // edi
  struct CVisual *v19; // rdx
  CAnimatedTransitionVisual *v20; // rbx
  int v21; // eax
  CMILRefCountBase *v22; // rdi
  int v23; // eax
  unsigned int v24; // r14d
  CAnimatedTransitionVisual *v25; // [rsp+20h] [rbp-50h] BYREF
  CContainerVisual *v26; // [rsp+28h] [rbp-48h] BYREF
  CMILRefCountBase *v27; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v28; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-30h]
  CBaseObject **v30; // [rsp+48h] [rbp-28h]
  char v31; // [rsp+50h] [rbp-20h]
  struct tagRECT v32; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v30 = this;
  v31 = 1;
  v26 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v26);
  v7 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v7;
  }
  v32.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v32.right = v9 + v32.left;
  v32.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v32.bottom = v10 + v32.top;
  v11 = v9;
  if ( v9 < 0 )
    v11 = 0;
  LODWORD(v27) = v11;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v13 = v10;
  if ( v10 < 0 )
    v13 = 0;
  HIDWORD(v27) = v13;
  v14 = 0;
  if ( v10 >= 0 )
    v14 = v10;
  v29 = 0LL;
  GetDesktopID(1LL);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v29);
  v16 = RootVisualForDesktop;
  v28 = RootVisualForDesktop;
  if ( RootVisualForDesktop )
    CMILRefCountBase::AddRef(RootVisualForDesktop);
  v25 = 0LL;
  v17 = CAnimatedTransitionVisual::Create(&v25);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v18;
  }
  v19 = v16;
  v20 = v25;
  v21 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v25, v19, 0, &v32);
  v18 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v21);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v18;
  }
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v20, &v32);
  CAnimatedTransitionVisual::SetEndRect(v20, &v32);
  CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v20 + 8), v12, v14);
  *((_QWORD *)v20 + 113) = v27;
  CVisual::SetInterpolationMode((__int64 *)v20 + 1, 1);
  v22 = v26;
  v23 = CContainerVisual::AddChild(
          v26,
          (struct CVisual *)(((unsigned __int64)v20 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v20 >> 64)));
  v24 = v23;
  if ( v23 >= 0 )
  {
    wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=(this + 6, v22);
    v26 = 0LL;
    *a2 = v22;
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(&v27, &v25);
    std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::push_back(this + 7, &v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
    v25 = 0LL;
    *a3 = v20;
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v23);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v26);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v24;
  }
}
