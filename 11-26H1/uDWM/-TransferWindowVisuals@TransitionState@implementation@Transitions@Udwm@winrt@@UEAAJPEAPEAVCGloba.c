/*
 * XREFs of ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DC890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040100 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ??4?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800D976C (--4-$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9BC0 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     ?GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DB214 (-GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$.c)
 *     ?IsVisibleWindow@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEAVCWindowData@@@Z @ 0x1800DB76C (-IsVisibleWindow@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEAVCWindowData@@@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals(
        CBaseObject **this,
        CContainerVisual **a2,
        __int64 a3)
{
  CContainerVisual **v4; // rsi
  int RootGlobalTimeTrackVisual; // eax
  unsigned int v7; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  winrt::Udwm::Transitions::implementation::TransitionState *v10; // rcx
  struct _LIST_ENTRY *v11; // r12
  CContainerVisual *v12; // r13
  struct _LIST_ENTRY *i; // r14
  CBaseObject *Blink; // rdi
  int v15; // eax
  unsigned int v16; // esi
  struct CVisual *v17; // rdx
  CAnimatedTransitionVisual *v18; // rdi
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  CAnimatedTransitionVisual **v22; // rdx
  CBaseObject *v23; // rdi
  CBaseObject **v24; // rdx
  CContainerVisual *v25; // [rsp+30h] [rbp-39h] BYREF
  CAnimatedTransitionVisual *v26; // [rsp+38h] [rbp-31h] BYREF
  CBaseObject *v27; // [rsp+40h] [rbp-29h] BYREF
  CBaseObject *v28; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-19h] BYREF
  CContainerVisual **v30; // [rsp+58h] [rbp-11h]
  CBaseObject **v31; // [rsp+60h] [rbp-9h]
  char v32; // [rsp+68h] [rbp-1h]
  struct tagRECT v33; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a2;
  v30 = a2;
  v31 = this;
  v32 = 1;
  v25 = 0LL;
  RootGlobalTimeTrackVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootGlobalTimeTrackVisual(
                                (__int64)this,
                                &v25);
  v7 = RootGlobalTimeTrackVisual;
  if ( RootGlobalTimeTrackVisual >= 0 )
  {
    v29 = 0LL;
    GetDesktopID(1LL, &v29);
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v29);
    v11 = WindowListForDesktop;
    v12 = v25;
    if ( WindowListForDesktop )
    {
      for ( i = WindowListForDesktop->Flink; i != v11; i = i->Flink )
      {
        if ( winrt::Udwm::Transitions::implementation::TransitionState::IsVisibleWindow(v10, (struct CWindowData *)i) )
        {
          Blink = (CBaseObject *)i[27].Blink;
          v28 = Blink;
          if ( Blink )
            CBaseObject::AddRef(Blink);
          CTopLevelWindow::GetActualWindowRect(Blink, &v33, 0, 0, 0);
          v26 = 0LL;
          v15 = CAnimatedTransitionVisual::Create(&v26);
          v16 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x79,
              (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
              (const char *)(unsigned int)v15);
            wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
            winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
            return v16;
          }
          v17 = Blink;
          v18 = v26;
          v19 = CAnimatedTransitionVisual::SetVisual(v26, v17, 1, 0LL);
          v16 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7B,
              (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
              (const char *)(unsigned int)v19);
            wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
            winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
            return v16;
          }
          CAnimatedTransitionVisual::SetBeginRect(v18, &v33);
          CAnimatedTransitionVisual::SetEndRect(v18, &v33);
          CVisual::SetInterpolationMode((__int64)v18 + 8, 1LL, v20);
          v21 = CContainerVisual::AddChild(
                  v12,
                  (struct CVisual *)(((unsigned __int64)v18 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v18 >> 64)));
          v16 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x81,
              (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
              (const char *)(unsigned int)v21);
            wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
            winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
            return v16;
          }
          v27 = v18;
          v22 = *(CAnimatedTransitionVisual ***)(a3 + 8);
          if ( v22 == *(CAnimatedTransitionVisual ***)(a3 + 16) )
          {
            std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(a3, (__int64)v22, (__int64 *)&v27);
          }
          else
          {
            *v22 = v18;
            *(_QWORD *)(a3 + 8) += 8LL;
          }
          v26 = 0LL;
          if ( v18 )
          {
            v23 = (CAnimatedTransitionVisual *)((char *)v18 + 8);
            v27 = v23;
          }
          else
          {
            v27 = 0LL;
            v23 = 0LL;
          }
          v24 = (CBaseObject **)this[8];
          if ( v24 == (CBaseObject **)this[9] )
          {
            std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
              (__int64)(this + 7),
              v24,
              &v27);
          }
          else
          {
            v27 = 0LL;
            *v24 = v23;
            this[8] = (CBaseObject *)((char *)this[8] + 8);
          }
          wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
          wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
          wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
        }
      }
      v4 = v30;
    }
    wil::com_ptr_t<CGlobalTimeTrackVisual,wil::err_returncode_policy>::operator=(this + 6, &v25);
    v25 = 0LL;
    *v4 = v12;
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootGlobalTimeTrackVisual);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v25);
    winrt::Udwm::Transitions::implementation::TransitionState::Complete((winrt::Udwm::Transitions::implementation::TransitionState *)this);
    return v7;
  }
}
