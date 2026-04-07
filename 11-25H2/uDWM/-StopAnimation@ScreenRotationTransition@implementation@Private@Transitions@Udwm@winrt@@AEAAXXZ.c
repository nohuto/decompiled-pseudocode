/*
 * XREFs of ?StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D7020
 * Callers:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004E45C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D7044 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StopAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UnregisterGlobalTimeChanged(this);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::EndAnimationFrameStats(this);
}
