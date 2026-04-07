/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800D8DE4
 * Callers:
 *     ?GetTrustLevel@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800D8D70 (-GetTrustLevel@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITran.c)
 *     ?GetTrustLevel@?$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800DB450 (-GetTrustLevel@-$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransiti.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 24LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
