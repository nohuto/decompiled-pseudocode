/*
 * XREFs of ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180079DBC
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008DB74 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800AED08 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B01BC (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B3E70 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040100 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AEA8C (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800DE334 (-SetCenter@CVisual@@QEAAXMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureAndAddVisual(
        CDisplayAnimatedVisual *this,
        unsigned __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct CAnimatedTransitionVisual **a5)
{
  struct CAnimatedTransitionVisual **v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  struct CVisual *RootVisualForDesktop; // rax
  struct CAnimatedTransitionVisual **v14; // rbx
  int v15; // eax
  unsigned int v16; // esi
  LONG v17; // r12d
  int v18; // ecx
  LONG v19; // r8d
  LONG v20; // edx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-38h]
  int v25[14]; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v10 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)&a5);
  v11 = v10;
  if ( v10 >= 0 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             a2);
    v14 = a5;
    v15 = CAnimatedTransitionVisual::SetVisual((CAnimatedTransitionVisual *)a5, RootVisualForDesktop, 1, a3);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x232,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v15,
        v24);
      if ( v14 )
        CBaseObject::Release((CBaseObject *)(v14 + 1));
      return v16;
    }
    v17 = 0;
    if ( a3->right - a3->left >= 0 )
      v17 = a3->right - a3->left;
    v25[0] = v17;
    v18 = 0;
    if ( a3->bottom - a3->top >= 0 )
      v18 = a3->bottom - a3->top;
    v25[1] = v18;
    CAnimatedTransitionVisual::SetBeginRect((CAnimatedTransitionVisual *)v14, a4);
    CAnimatedTransitionVisual::SetEndRect((CAnimatedTransitionVisual *)v14, a4);
    v19 = 0;
    if ( a4->bottom - a4->top >= 0 )
      v19 = a4->bottom - a4->top;
    v20 = 0;
    if ( a4->right - a4->left >= 0 )
      v20 = a4->right - a4->left;
    CVisual::SetSize((CVisual *)(v14 + 1), v20, v19);
    v14[111] = *(struct CAnimatedTransitionVisual **)v25;
    CVisual::SetInterpolationMode((__int64)(v14 + 1), 1LL, v21);
    v22 = CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(this, a2);
    v16 = v22;
    if ( v22 >= 0 )
    {
      v22 = CContainerVisual::AddChild(
              this,
              (struct CVisual *)((unsigned __int64)(v14 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64)));
      v16 = v22;
      if ( v22 >= 0 )
      {
        CVisual::SetSize(this, v17, v25[1]);
        CVisual::SetCenter(this, (float)*((int *)this + 16) * 0.5, (float)*((int *)this + 17) * 0.5);
        a5 = 0LL;
        *v9 = (struct CAnimatedTransitionVisual *)v14;
        v16 = 0;
        goto LABEL_22;
      }
      v23 = 576LL;
    }
    else
    {
      v23 = 574LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v22,
      v17);
LABEL_22:
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&a5);
    return v16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22A,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)v10,
    v24);
  if ( a5 )
    CBaseObject::Release((CBaseObject *)(a5 + 1));
  return v11;
}
