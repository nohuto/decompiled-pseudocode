/*
 * XREFs of ?subtract_final_reference@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAIXZ @ 0x180033E70
 * Callers:
 *     ?Release@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@QEAAIXZ @ 0x180033D40 (-Release@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@.c)
 *     ??1?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEAA@XZ @ 0x18009A3E0 (--1-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITra.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x180034850 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::subtract_final_reference(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r10
  volatile signed __int64 *v5; // rax
  unsigned int v6; // r9d
  signed __int64 v7; // rdx
  signed __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 8);
  v2 = v1;
  v3 = v1;
  while ( 1 )
  {
    v10 = v1;
    if ( v1 < 0 )
      break;
    v11 = v2 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v10);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v11);
    v5 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v4);
    v1 = _InterlockedCompareExchange64(v5, v7, v8);
    v3 = v1;
    v2 = v1;
    if ( v8 == v1 )
      return v6;
  }
  return winrt::impl::weak_ref<1,1>::decrement_strong(2 * v3, v2);
}
