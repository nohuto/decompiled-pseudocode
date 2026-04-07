/*
 * XREFs of ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAKXZ @ 0x18002FEC0
 * Callers:
 *     ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@W7EAAKXZ @ 0x1800D90A0 (-Release@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345_ea_1800D90A0.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAIXZ @ 0x18002EC00 (-subtract_final_reference@-$root_implements@UTransitionState@implementation@Transitions@Udwm@win.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x18002F698 (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::Release(
        __int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = a1 + 24;
  v2 = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::subtract_final_reference(a1 + 24);
  if ( !v2 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store();
    if ( v1 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 8LL))(v1, v2 + 1);
  }
  return v2;
}
