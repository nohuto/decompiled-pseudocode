/*
 * XREFs of ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180044FEC
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180022B18 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180029A54 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18007967C (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180096950 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A0ABC (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AFA5C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800CF500 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x1800469C8 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180046C20 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStopAnimation(CAnimationEngine *this, unsigned int a2)
{
  unsigned int v4; // edi
  int TransitionVisualSetIndex; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex(this, a2);
  if ( TransitionVisualSetIndex < 0 )
    v4 = -2147467259;
  else
    CAnimationEngine::CTransitionVisualSet::StopStoryboard(*(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8LL * (unsigned int)TransitionVisualSetIndex));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
