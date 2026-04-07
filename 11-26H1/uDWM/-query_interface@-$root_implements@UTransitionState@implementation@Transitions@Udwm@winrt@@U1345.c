/*
 * XREFs of ?query_interface@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E7A8
 * Callers:
 *     ?QueryInterface@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B0B0 (-QueryInterface@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITra.c)
 * Callees:
 *     ?query_interface_common@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E978 (-query_interface_common@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Ud.c)
 *     ?AddRef@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@QEAAIXZ @ 0x18002EA98 (-AddRef@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax

  v3 = a1;
  if ( !a1 )
    a1 = 24LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::query_interface_common(
             v3,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::AddRef(v3);
  return 0LL;
}
