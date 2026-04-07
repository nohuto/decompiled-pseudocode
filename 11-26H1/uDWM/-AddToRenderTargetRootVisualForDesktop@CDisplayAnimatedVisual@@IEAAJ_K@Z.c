/*
 * XREFs of ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AEA8C
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180079DBC (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B222C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800B35D0 (-StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3900 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180035ECC (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(CDisplayAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  if ( this )
    CBaseObject::AddRef(this);
  v2 = CVisual::RemoveSelfFromParent((CContainerVisual **)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                        + 53));
    v2 = CContainerVisual::AddChild(RenderTargetRootVisualForDesktop, this);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v2 = CVisual::MoveToFront(this, 0);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v4 = 897LL;
    }
    else
    {
      v4 = 896LL;
    }
  }
  else
  {
    v4 = 891LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)v2);
LABEL_11:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v8);
  return v3;
}
