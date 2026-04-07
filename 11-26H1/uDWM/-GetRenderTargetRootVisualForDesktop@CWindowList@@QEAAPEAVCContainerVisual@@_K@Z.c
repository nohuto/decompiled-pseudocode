/*
 * XREFs of ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180035ECC
 * Callers:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800357E0 (-InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180037EF8 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180074130 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AEA8C (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ?GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DB214 (-GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800DFC1C (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x180036090 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 */

struct CContainerVisual *__fastcall CWindowList::GetRenderTargetRootVisualForDesktop(CWindowList *this)
{
  __int64 Element; // rcx
  struct CContainerVisual *result; // rax

  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement((char *)this + 8);
  result = 0LL;
  if ( Element )
    return *(struct CContainerVisual **)(Element + 8);
  return result;
}
