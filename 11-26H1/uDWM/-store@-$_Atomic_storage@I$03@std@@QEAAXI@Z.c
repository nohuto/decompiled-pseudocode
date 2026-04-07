/*
 * XREFs of ?store@?$_Atomic_storage@I$03@std@@QEAAXI@Z @ 0x180086C90
 * Callers:
 *     ??4?$atomic@I@std@@QEAAII@Z @ 0x180086C74 (--4-$atomic@I@std@@QEAAII@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$detach_abi@I$0A@@winrt@@YA?A_P$$QEAI@Z @ 0x18002EBF4 (--$detach_abi@I$0A@@winrt@@YA-A_P$$QEAI@Z.c)
 */

volatile __int32 *__fastcall std::_Atomic_storage<unsigned int,4>::store(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  volatile __int32 *result; // rax
  __int32 v4; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  winrt::detach_abi<unsigned int,0>(&v5);
  result = (volatile __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v2);
  _InterlockedExchange(result, v4);
  return result;
}
