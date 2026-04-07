/*
 * XREFs of ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180028C78
 * Callers:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180015914 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002246C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180022B18 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800285D8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800288E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180028B10 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800354D0 (-InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180076ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AF0BC (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE394 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18004BA30 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
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
