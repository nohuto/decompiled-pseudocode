/*
 * XREFs of ?OnGlobalTimeUpdated@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180086CFC
 * Callers:
 *     ?OnGlobalTimeUpdated@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@3456@@impl@winrt@@UEAAHXZ @ 0x180086CD0 (-OnGlobalTimeUpdated@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm.c)
 * Callees:
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D66EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D7044 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::OnGlobalTimeUpdated(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  __int64 v1; // rax
  int v3; // edi

  v1 = *((_QWORD *)this + 11);
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    v3 = *((_DWORD *)this + 21);
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UnregisterGlobalTimeChanged(this);
    if ( v3 == 1 )
    {
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartFirstAnimation(this);
    }
    else if ( v3 == 2 )
    {
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartSecondAnimation(this);
    }
  }
}
