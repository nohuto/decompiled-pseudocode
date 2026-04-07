/*
 * XREFs of ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800DF280
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001F854 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800283D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
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
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual(
        CBaseObject **this,
        struct CGlobalTimeTrackVisual **a2,
        struct CAnimatedTransitionVisual **a3,
        char a4)
{
  int RootRenderDataVisual; // eax
  unsigned int v9; // ebx
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // r14d
  int v15; // eax
  int v16; // r13d
  CWindowList *v17; // rcx
  HWND ShellWindowForDesktop; // rax
  CMILRefCountBase *RootVisualForDesktop; // rax
  int v20; // eax
  CAnimatedTransitionVisual *v21; // rbx
  int v22; // eax
  unsigned int v23; // edi
  CMILRefCountBase *v24; // rdi
  int v25; // eax
  unsigned int v26; // r14d
  CAnimatedTransitionVisual *v27; // [rsp+20h] [rbp-50h] BYREF
  CContainerVisual *v28; // [rsp+28h] [rbp-48h] BYREF
  struct CVisual *v29; // [rsp+30h] [rbp-40h] BYREF
  CMILRefCountBase *v30; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-30h]
  CBaseObject **v32; // [rsp+48h] [rbp-28h]
  char v33; // [rsp+50h] [rbp-20h]
  struct tagRECT v34; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v32 = this;
  v33 = 1;
  v28 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v28);
  v9 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v9;
  }
  v34.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v11 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v34.right = v11 + v34.left;
  v34.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v12 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v34.bottom = v12 + v34.top;
  v13 = v11;
  if ( v11 < 0 )
    v13 = 0;
  LODWORD(v30) = v13;
  v14 = 0;
  if ( v11 >= 0 )
    v14 = v11;
  v15 = v12;
  if ( v12 < 0 )
    v15 = 0;
  HIDWORD(v30) = v15;
  v16 = 0;
  if ( v12 >= 0 )
    v16 = v12;
  v31 = 0LL;
  GetDesktopID(1LL);
  v29 = 0LL;
  v17 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
  if ( a4 )
  {
    ShellWindowForDesktop = (HWND)CWindowList::GetShellWindowForDesktop(v17, v31);
    RootVisualForDesktop = (CMILRefCountBase *)*((_QWORD *)CWindowList::FindWindowDataByHwnd(
                                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 53),
                                                             ShellWindowForDesktop)
                                               + 55);
  }
  else
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v17, v31);
  }
  wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=(&v29, RootVisualForDesktop);
  v27 = 0LL;
  v20 = CAnimatedTransitionVisual::Create(&v27);
  v9 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v20);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v29);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v9;
  }
  v21 = v27;
  v22 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v27, v29, 1, &v34);
  v23 = v22;
  if ( v22 >= 0 )
  {
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v21, &v34);
    CAnimatedTransitionVisual::SetEndRect(v21, &v34);
    CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v21 + 8), v14, v16);
    *((_QWORD *)v21 + 113) = v30;
    CVisual::SetInterpolationMode((__int64 *)v21 + 1, 1);
    v24 = v28;
    v25 = CContainerVisual::AddChild(
            v28,
            (struct CVisual *)(((unsigned __int64)v21 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v21 >> 64)));
    v26 = v25;
    if ( v25 >= 0 )
    {
      wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=(this + 6, v24);
      v28 = 0LL;
      *a2 = v24;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(&v30, &v27);
      std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::push_back(this + 7, &v30);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v30);
      v27 = 0LL;
      *a3 = v21;
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v27);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v29);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
        (const char *)(unsigned int)v25);
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v27);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v29);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
      return v26;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v22);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v29);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v23;
  }
}
