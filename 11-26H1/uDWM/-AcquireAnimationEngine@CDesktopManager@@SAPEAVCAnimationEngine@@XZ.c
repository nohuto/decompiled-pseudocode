/*
 * XREFs of ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64
 * Callers:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180013DA4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001E430 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180037EF8 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800400A8 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x18006EE50 (-OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180071C90 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ @ 0x180071D64 (-_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180084960 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180088F4C (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800950EC (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AF2A8 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800C92B8 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800C9470 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800CFB20 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?AcquireAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAPEAVCAnimationEngine@@@Z @ 0x1800DA900 (-AcquireAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAPEAVCAnim.c)
 * Callees:
 *     ?AddRef@CAnimationEngine@@UEAAKXZ @ 0x180013BA0 (-AddRef@CAnimationEngine@@UEAAKXZ.c)
 */

struct CAnimationEngine *CDesktopManager::AcquireAnimationEngine(void)
{
  CDesktopManager *v0; // rax
  CAnimationEngine *v1; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = (CAnimationEngine *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  if ( v1 )
  {
    CAnimationEngine::AddRef(v1);
    v0 = CDesktopManager::s_pDesktopManagerInstance;
  }
  return (struct CAnimationEngine *)*((_QWORD *)v0 + 22);
}
