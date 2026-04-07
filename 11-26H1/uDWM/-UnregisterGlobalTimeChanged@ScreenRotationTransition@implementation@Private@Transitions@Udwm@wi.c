/*
 * XREFs of ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18008BDA8
 * Callers:
 *     ?OnGlobalTimeUpdated@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18007696C (-OnGlobalTimeUpdated@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEA.c)
 *     ?StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18007E720 (-StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800D2C08 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ @ 0x1800DE09C (-ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UnregisterGlobalTimeChanged(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  CGlobalTimeTrackVisual *v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = (CGlobalTimeTrackVisual *)*((_QWORD *)this + 7);
  if ( v2 )
    CGlobalTimeTrackVisual::ReleaseTransitionHandler(v2);
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(*((struct CVisual **)this + 7));
  v3 = (CTimelineBase *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
    CTimelineBase::Release(v3);
  *((_DWORD *)this + 21) = 0;
}
