/*
 * XREFs of ?Release@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@QEAAIXZ @ 0x180033D40
 * Callers:
 *     ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAKXZ @ 0x18008F190 (-Release@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransition.c)
 *     ?Release@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAKXZ @ 0x180097DC0 (-Release@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?subtract_final_reference@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAIXZ @ 0x180033E70 (-subtract_final_reference@-$root_implements@UTransitionState@implementation@Transitions@Udwm@win.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x180034850 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::Release(
        __int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::subtract_final_reference();
  if ( !v2 )
  {
    v6 = 1LL;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v6);
    v3 = (_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 8);
    *v3 = v4;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  return v2;
}
