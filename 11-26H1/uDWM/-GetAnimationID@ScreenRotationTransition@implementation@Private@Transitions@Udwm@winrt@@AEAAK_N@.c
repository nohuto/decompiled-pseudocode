/*
 * XREFs of ?GetAnimationID@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAK_N@Z @ 0x1800D2FE8
 * Callers:
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::GetAnimationID(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        char a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 11);
  if ( v2 == -180 )
    return 5LL;
  if ( v2 == -90 )
    return a2 != 0 ? 4 : 7;
  result = 0LL;
  if ( v2 )
  {
    if ( v2 == 90 )
    {
      return a2 != 0 ? 2 : 6;
    }
    else if ( v2 == 180 )
    {
      return 3LL;
    }
  }
  return result;
}
