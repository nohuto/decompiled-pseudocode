/*
 * XREFs of ?Release@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAKXZ @ 0x1800863F0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAIXZ @ 0x18002EC00 (-subtract_final_reference@-$root_implements@UTransitionState@implementation@Transitions@Udwm@win.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x18002F698 (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::Release(
        __int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = a1 + 16;
  v2 = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::subtract_final_reference(a1 + 16);
  if ( !v2 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store();
    if ( v1 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 8LL))(v1, v2 + 1);
  }
  return v2;
}
