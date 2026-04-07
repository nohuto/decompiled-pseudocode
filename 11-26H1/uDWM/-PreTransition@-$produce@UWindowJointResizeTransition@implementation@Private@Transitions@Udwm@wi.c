/*
 * XREFs of ?PreTransition@?$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800D72E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D7318 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::ITransition>::PreTransition(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = a3;
  v4 = a2;
  try
  {
    winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PreTransition();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
