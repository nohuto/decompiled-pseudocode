/*
 * XREFs of ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800400A8
 * Callers:
 *     ??1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180040048 (--1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?StopAnimation@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800D13B0 (-StopAnimation@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x1800537E8 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18006EEC0 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::StopAnimation(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rax

  if ( *((_DWORD *)this + 14) != -1 )
  {
    v2 = CDesktopManager::AcquireAnimationEngine();
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v2,
      (struct IAnimationListener *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)));
    v3 = CDesktopManager::AcquireAnimationEngine();
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 14));
    *((_DWORD *)this + 14) = -1;
  }
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::RemoveFromTree(this);
}
