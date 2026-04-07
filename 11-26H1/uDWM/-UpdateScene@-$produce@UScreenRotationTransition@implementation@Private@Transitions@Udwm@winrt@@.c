/*
 * XREFs of ?UpdateScene@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x180042100
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180042130 (-UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::ITransition>::UpdateScene(
        __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v1; // rax
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)(a1 - 16);
  if ( !a1 )
    v1 = 0LL;
  try
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateScene(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v3);
  }
  return result;
}
