/*
 * XREFs of ?store@?$_Atomic_storage@H$03@std@@QEAAXH@Z @ 0x18009FCC0
 * Callers:
 *     ??4?$atomic@H@std@@QEAAHH@Z @ 0x18009D35C (--4-$atomic@H@std@@QEAAHH@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$detach_abi@I$0A@@winrt@@YA?A_P$$QEAI@Z @ 0x180094EA0 (--$detach_abi@I$0A@@winrt@@YA-A_P$$QEAI@Z.c)
 */

volatile __int32 *std::_Atomic_storage<int,4>::store()
{
  __int64 v0; // r8
  volatile __int32 *result; // rax
  __int32 v2; // edx
  unsigned int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 1;
  winrt::detach_abi<unsigned int,0>(v3);
  result = (volatile __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v0);
  _InterlockedExchange(result, v2);
  return result;
}
