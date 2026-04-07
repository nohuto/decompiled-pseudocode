/*
 * XREFs of ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800DC570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040100 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$?0VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1800D973C (--$-0VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VCVisual@@Uerr_return.c)
 *     ??4?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800D976C (--4-$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9BC0 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     ?GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DB214 (-GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive(
        CBaseObject **this,
        struct CGlobalTimeTrackVisual **a2,
        struct CAnimatedTransitionVisual **a3)
{
  int RootGlobalTimeTrackVisual; // eax
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // r8d
  LONG v11; // r13d
  int v12; // eax
  CBaseObject *RootVisualForDesktop; // rax
  struct CVisual *v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  CAnimatedTransitionVisual *v17; // r14
  int v18; // eax
  __int64 v19; // r8
  CContainerVisual *v20; // rbx
  int v21; // eax
  CBaseObject **v22; // rdx
  CBaseObject *v23; // rax
  CContainerVisual *v24; // [rsp+20h] [rbp-50h] BYREF
  int v25[2]; // [rsp+28h] [rbp-48h] BYREF
  CAnimatedTransitionVisual *v26; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v27; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v28[2]; // [rsp+40h] [rbp-30h] BYREF
  char v29; // [rsp+50h] [rbp-20h]
  struct tagRECT v30; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v28[1] = (unsigned __int64)this;
  v29 = 1;
  v24 = 0LL;
  RootGlobalTimeTrackVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootGlobalTimeTrackVisual(
                                (__int64)this,
                                &v24);
  v7 = RootGlobalTimeTrackVisual;
  if ( RootGlobalTimeTrackVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB,
      (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootGlobalTimeTrackVisual);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v24);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v7;
  }
  v30.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v30.right = v9 + v30.left;
  v30.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v30.bottom = v10 + v30.top;
  *(_QWORD *)v25 = 0LL;
  v11 = 0;
  if ( v9 >= 0 )
    v11 = v9;
  v25[0] = v11;
  v12 = 0;
  if ( v10 >= 0 )
    v12 = v10;
  v25[1] = v12;
  v28[0] = 0LL;
  GetDesktopID(1LL, v28);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v28[0]);
  v14 = RootVisualForDesktop;
  v27 = RootVisualForDesktop;
  if ( RootVisualForDesktop )
    CBaseObject::AddRef(RootVisualForDesktop);
  v26 = 0LL;
  v15 = CAnimatedTransitionVisual::Create(&v26);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v24);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v16;
  }
  v17 = v26;
  v18 = CAnimatedTransitionVisual::SetVisual(v26, v14, 0, &v30);
  v7 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v24);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v7;
  }
  CAnimatedTransitionVisual::SetBeginRect(v17, &v30);
  CAnimatedTransitionVisual::SetEndRect(v17, &v30);
  CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v17 + 8), v11, v25[1]);
  *((_QWORD *)v17 + 111) = *(_QWORD *)v25;
  CVisual::SetInterpolationMode((__int64)v17 + 8, 1LL, v19);
  v20 = v24;
  v21 = CContainerVisual::AddChild(
          v24,
          (struct CVisual *)(((unsigned __int64)v17 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v17 >> 64)));
  v16 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v21);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v24);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v16;
  }
  wil::com_ptr_t<CGlobalTimeTrackVisual,wil::err_returncode_policy>::operator=(this + 6, &v24);
  v24 = 0LL;
  *a2 = v20;
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
    (CBaseObject **)v25,
    &v26);
  v22 = (CBaseObject **)this[8];
  if ( v22 == (CBaseObject **)this[9] )
  {
    std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
      (__int64)(this + 7),
      v22,
      (CBaseObject **)v25);
  }
  else
  {
    v23 = *(CBaseObject **)v25;
    *(_QWORD *)v25 = 0LL;
    *v22 = v23;
    this[8] = (CBaseObject *)((char *)this[8] + 8);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)v25);
  v26 = 0LL;
  *a3 = v17;
  wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v24);
  return 0LL;
}
