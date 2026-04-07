/*
 * XREFs of ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800AD3B4
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003053C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?replace@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x180030954 (-replace@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPE.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008D8A4 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::delete_wnf_subscription_state(
        wil::details *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  if ( this )
    (**(void (__fastcall ***)(wil::details *, __int64))this)(this, 1LL);
}
