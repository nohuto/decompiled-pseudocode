/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ @ 0x1805AA9E4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke @ 0x18020C8C0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_ee45b684567.c)
 *     ??1?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@QEAA@XZ @ 0x1802C6AA4 (--1-$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@IEAAIXZ @ 0x1800E6BA8 (-subtract_final_reference@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::com_ptr<SnapInteraction::InteractionTracker>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  v2 = (_QWORD *)(v1 + 24);
  if ( !(unsigned int)winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::subtract_final_reference((__int64)v2) )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v2 + 1);
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1LL);
  }
}
