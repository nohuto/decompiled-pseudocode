/*
 * XREFs of ?Cancel@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D6FFC
 * Callers:
 *     ??1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D6DB4 (--1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Cancel@?$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x1800D6FD0 (-Cancel@-$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UI.c)
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D7318 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::Cancel(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this)
{
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::Cleanup(this);
}
