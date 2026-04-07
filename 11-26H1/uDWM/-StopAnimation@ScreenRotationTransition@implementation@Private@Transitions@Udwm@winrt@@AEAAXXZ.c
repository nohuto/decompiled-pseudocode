/*
 * XREFs of ?StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18007E720
 * Callers:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180041D0C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18008BDA8 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StopAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UnregisterGlobalTimeChanged(this);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::EndAnimationFrameStats(this);
}
