/*
 * XREFs of ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x180042170
 * Callers:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180041D0C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180042130 (-UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2AE8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D339C (-PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D3404 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D41AC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 7);
  return v1 && *(_QWORD *)(v1 + 24);
}
