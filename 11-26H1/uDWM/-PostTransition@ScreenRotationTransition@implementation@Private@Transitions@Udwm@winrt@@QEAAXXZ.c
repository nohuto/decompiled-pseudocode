/*
 * XREFs of ?PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D339C
 * Callers:
 *     ?PostTransition@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x1800D3370 (-PostTransition@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x180042170 (-Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800D2C08 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::PostTransition(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v1; // rcx
  __int64 v2; // r8
  const char *v3; // r9
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured(this)
    && !*((_BYTE *)v1 + 82) )
  {
    v4 = 1;
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DelayNextAnimation(
      v1,
      (const enum winrt::Udwm::Transitions::Private::implementation::RotationTimelineReason *)&v4,
      v2,
      v3);
  }
}
